#pragma once


#include <QtCore>
#include <QtTest/QtTest>


enum { OneMinute = 60 * 1000,
       TwoMinutes = OneMinute * 2 };


struct Functor
{
    void operator()() const {};
};

class tst_QObjectRace: public QObject
{
    Q_OBJECT
private slots:
    void moveToThreadRace();
    void destroyRace();
    void disconnectRace();
};

class RaceObject : public QObject
{
    Q_OBJECT
    QList<QThread *> threads;
    int count;

public:
    RaceObject()
        : count(0)
    { }

    void addThread(QThread *thread)
    { threads.append(thread); }

public slots:
    void theSlot()
    {
        enum { step = 35 };
        if ((++count % step) == 0) {
            QThread *nextThread = threads.at((count / step) % threads.size());
            moveToThread(nextThread);
        }
    }

    void destroSlot() {
        emit theSignal();
    }
signals:
    void theSignal();
};

class RaceThread : public QThread
{
    Q_OBJECT
    RaceObject *object;
    QTime stopWatch;

public:
    RaceThread()
        : object(0)
    { }

    void setObject(RaceObject *o)
    {
        object = o;
        object->addThread(this);
    }

    void start() {
        stopWatch.start();
        QThread::start();
    }

    void run() {
        QTimer zeroTimer;
        connect(&zeroTimer, SIGNAL(timeout()), object, SLOT(theSlot()));
        connect(&zeroTimer, SIGNAL(timeout()), this, SLOT(checkStopWatch()), Qt::DirectConnection);
        zeroTimer.start(0);
        (void) exec();
    }

signals:
    void theSignal();

private slots:
    void checkStopWatch()
    {
        if (stopWatch.elapsed() >= 5000)
            quit();

        QObject o;
        connect(&o, SIGNAL(destroyed()) , object, SLOT(destroSlot()));
        connect(object, SIGNAL(destroyed()) , &o, SLOT(deleteLater()));
    }
};




class MyObject : public QObject
{
	Q_OBJECT
		bool ok;
public:
	MyObject() : ok(true) {}
	~MyObject() { Q_ASSERT(ok); ok = false; }
public slots:
	void slot1() { Q_ASSERT(ok); }
	void slot2() { Q_ASSERT(ok); }
	void slot3() { Q_ASSERT(ok); }
	void slot4() { Q_ASSERT(ok); }
	void slot5() { Q_ASSERT(ok); }
	void slot6() { Q_ASSERT(ok); }
	void slot7() { Q_ASSERT(ok); }
signals:
	void signal1();
	void signal2();
	void signal3();
	void signal4();
	void signal5();
	void signal6();
	void signal7();
};


class DestroyThread : public QThread
{
	Q_OBJECT
		MyObject **objects;
	int number;

public:
	void setObjects(MyObject **o, int n)
	{
		objects = o;
		number = n;
		for (int i = 0; i < number; i++)
			objects[i]->moveToThread(this);
	}

	void run();
};

static QAtomicInteger<unsigned> countedStructObjectsCount;

struct CountedFunctor
{
	CountedFunctor() : destroyed(false) { countedStructObjectsCount.fetchAndAddRelaxed(1); }
	CountedFunctor(const CountedFunctor &) : destroyed(false) { countedStructObjectsCount.fetchAndAddRelaxed(1); }
	CountedFunctor &operator=(const CountedFunctor &) { return *this; }
	~CountedFunctor() { destroyed = true; countedStructObjectsCount.fetchAndAddRelaxed(-1); }
	void operator()() const { QCOMPARE(destroyed, false); }

private:
	bool destroyed;
};


class DisconnectRaceSenderObject : public QObject
{
	Q_OBJECT
signals:
	void theSignal();
};

class DisconnectRaceThread : public QThread
{
	Q_OBJECT

		DisconnectRaceSenderObject *sender;
	bool emitSignal;
public:
	DisconnectRaceThread(DisconnectRaceSenderObject *s, bool emitIt)
		: QThread(), sender(s), emitSignal(emitIt)
	{
	}

	void run()
	{
		while (!isInterruptionRequested()) {
			QMetaObject::Connection conn = connect(sender, &DisconnectRaceSenderObject::theSignal,
				sender, CountedFunctor(), Qt::BlockingQueuedConnection);
			if (emitSignal)
				emit sender->theSignal();
			disconnect(conn);
			yieldCurrentThread();
		}
	}
};

class DeleteReceiverRaceSenderThread : public QThread
{
	Q_OBJECT

		DisconnectRaceSenderObject *sender;
public:
	DeleteReceiverRaceSenderThread(DisconnectRaceSenderObject *s)
		: QThread(), sender(s)
	{
	}

	void run()
	{
		while (!isInterruptionRequested()) {
			emit sender->theSignal();
			yieldCurrentThread();
		}
	}
};

class DeleteReceiverRaceReceiver : public QObject
{
	Q_OBJECT

		DisconnectRaceSenderObject *sender;
	QObject *receiver;
	QTimer *timer;
public:
	DeleteReceiverRaceReceiver(DisconnectRaceSenderObject *s)
		: QObject(), sender(s), receiver(0)
	{
		timer = new QTimer(this);
		connect(timer, &QTimer::timeout, this, &DeleteReceiverRaceReceiver::onTimeout);
		timer->start(1);
	}

	void onTimeout()
	{
		if (receiver)
			delete receiver;
		receiver = new QObject;
		connect(sender, &DisconnectRaceSenderObject::theSignal, receiver, CountedFunctor(), Qt::BlockingQueuedConnection);
	}
};

class DeleteReceiverRaceReceiverThread : public QThread
{
	Q_OBJECT

		DisconnectRaceSenderObject *sender;
public:
	DeleteReceiverRaceReceiverThread(DisconnectRaceSenderObject *s)
		: QThread(), sender(s)
	{
	}

	void run()
	{
		QScopedPointer<DeleteReceiverRaceReceiver> receiver(new DeleteReceiverRaceReceiver(sender));
		exec();
	}
};
