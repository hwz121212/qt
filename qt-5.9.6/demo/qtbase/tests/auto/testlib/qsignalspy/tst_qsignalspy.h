#pragma once


#include <QtTest/QtTest>


#include <qdatetime.h>

class tst_QSignalSpy : public QObject
{
    Q_OBJECT

Q_SIGNALS:
    void sigFoo();

private slots:
    void spyWithoutArgs();
    void spyWithBasicArgs();
    void spyWithPointers();
    void spyWithQtClasses();
    void spyWithBasicQtClasses();
    void spyWithQtTypedefs();

    void wait_signalEmitted();
    void wait_timeout();
    void wait_signalEmittedLater();
    void wait_signalEmittedTooLate();
    void wait_signalEmittedMultipleTimes();

    void spyFunctionPointerWithoutArgs();
    void spyFunctionPointerWithBasicArgs();
    void spyFunctionPointerWithPointers();
    void spyFunctionPointerWithQtClasses();
    void spyFunctionPointerWithBasicQtClasses();
    void spyFunctionPointerWithQtTypedefs();

    void waitFunctionPointer_signalEmitted();
    void waitFunctionPointer_timeout();
    void waitFunctionPointer_signalEmittedLater();
    void waitFunctionPointer_signalEmittedTooLate();
    void waitFunctionPointer_signalEmittedMultipleTimes();
};

class QtTestObject: public QObject
{
    Q_OBJECT

public:
    QtTestObject();

signals:
    void sig0();
    void sig1(int, int);
    void sigLong(long, long);
    void sig2(int *, int *);

public:
    QString slotResult;
    friend class tst_QSignalSpy;
};


class QtTestObject2 : public QObject
{
	Q_OBJECT
		friend class tst_QSignalSpy;

signals:
	void sig(QString);
	void sig2(const QDateTime &dt);
	void sig3(QObject *o);
	void sig4(QChar c);
	void sig5(const QVariant &v);
};


class QtTestObject3 : public QObject
{
	Q_OBJECT
		friend class tst_QSignalSpy;

signals:
	void sig1(quint16);
	void sig2(qlonglong, qulonglong);
	void sig3(qint64, quint64);
};
