#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

//#define QT_TST_QAPP_DEBUG
#include <qdebug.h>

#include <QtTest/QtTest>

#include <QtCore/QAbstractEventDispatcher>
#include <QtCore/QFileInfo>
#include <QtCore/QDir>
#if QT_CONFIG(process)
# include <QtCore/QProcess>
#endif
#include <QtCore/private/qeventloop_p.h>

#include <QtGui/QFontDatabase>
#include <QtGui/QClipboard>

#include <QtWidgets/QApplication>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QStyleFactory>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/private/qapplication_p.h>
#include <QtWidgets/QStyle>

#include <qpa/qwindowsysteminterface.h>
#include <private/qhighdpiscaling_p.h>





class tst_QApplication : public QObject
{
Q_OBJECT

public:
    tst_QApplication();

private slots:
    void initTestCase();
    void cleanup();
    void sendEventsOnProcessEvents(); // this must be the first test
    void staticSetup();

    void alert();

    void multiple_data();
    void multiple();

    void nonGui();

    void setFont_data();
    void setFont();

    void args_data();
    void args();
    void appName();

    void lastWindowClosed();
    void quitOnLastWindowClosed();
    void closeAllWindows();
    void testDeleteLater();
    void testDeleteLaterProcessEvents();

#if QT_CONFIG(library)
    void libraryPaths();
    void libraryPaths_qt_plugin_path();
    void libraryPaths_qt_plugin_path_2();
#endif

    void sendPostedEvents();

    void thread();
    void desktopSettingsAware();

    void setActiveWindow();

    void focusChanged();
    void focusOut();
    void focusMouseClick();

    void execAfterExit();

#if QT_CONFIG(wheelevent)
    void wheelScrollLines();
#endif

    void task109149();

    void style();

    void allWidgets();
    void topLevelWidgets();

    void setAttribute();

    void touchEventPropagation();

    void qtbug_12673();
    void noQuitOnHide();

    void globalStaticObjectDestruction(); // run this last

    void abortQuitOnShow();

    void staticFunctions();

    void settableStyleHints_data();
    void settableStyleHints();  // Needs to run last as it changes style hints.

protected slots:
    void quitApplication();

private:
    bool quitApplicationTriggered;
};

class EventSpy : public QObject
{
   Q_OBJECT

public:
    QList<int> recordedEvents;
    bool eventFilter(QObject *, QEvent *event)
    {
        recordedEvents.append(event->type());
        return false;
    }
};



class CloseWidget : public QWidget
{
	Q_OBJECT
public:
	CloseWidget()
	{
		startTimer(500);
	}

protected:
	void timerEvent(QTimerEvent *)
	{
		close();
	}

};



class QuitOnLastWindowClosedDialog : public QDialog
{
	Q_OBJECT
public:
	QPushButton *okButton;

	QuitOnLastWindowClosedDialog()
	{
		QHBoxLayout *hbox = new QHBoxLayout(this);
		okButton = new QPushButton("&ok", this);

		hbox->addWidget(okButton);
		connect(okButton, SIGNAL(clicked()), this, SLOT(accept()));
		connect(okButton, SIGNAL(clicked()), this, SLOT(ok_clicked()));
	}

public slots:
	void ok_clicked()
	{
		QDialog other;

		QTimer timer;
		connect(&timer, SIGNAL(timeout()), &other, SLOT(accept()));
		QSignalSpy spy(&timer, SIGNAL(timeout()));
		QSignalSpy appSpy(qApp, SIGNAL(lastWindowClosed()));

		timer.start(1000);
		other.exec();

		// verify that the eventloop ran and let the timer fire
		QCOMPARE(spy.count(), 1);
		QCOMPARE(appSpy.count(), 1);
	}
};

class QuitOnLastWindowClosedWindow : public QWidget
{
	Q_OBJECT

public:
	QuitOnLastWindowClosedWindow()
	{ }

public slots:
	void execDialogThenShow()
	{
		QDialog dialog;
		QTimer timer1;
		connect(&timer1, SIGNAL(timeout()), &dialog, SLOT(accept()));
		QSignalSpy spy1(&timer1, SIGNAL(timeout()));
		timer1.setSingleShot(true);
		timer1.start(1000);
		dialog.exec();
		QCOMPARE(spy1.count(), 1);

		show();
	}
};



class SendPostedEventsTester : public QObject
{
	Q_OBJECT
public:
	QList<int> eventSpy;
	bool event(QEvent *e);
private slots:
	void doTest();
};


class DeleteLaterWidget : public QWidget
{
	Q_OBJECT
public:
	DeleteLaterWidget(QApplication *_app, QWidget *parent = 0)
		: QWidget(parent) {
		app = _app; child_deleted = false;
	}

	bool child_deleted;
	QApplication *app;

public slots:
	void runTest();
	void checkDeleteLater();
	void childDeleted() { child_deleted = true; }
};


class EventLoopNester : public QObject
{
	Q_OBJECT
public slots:
	void deleteLaterAndEnterLoop()
	{
		QEventLoop eventLoop;
		QPointer<QObject> p(this);
		deleteLater();
		/*
		  DeferredDelete events are compressed, meaning this second
		  deleteLater() will *not* delete the object in the nested
		  event loop
		*/
		QMetaObject::invokeMethod(this, "deleteLater", Qt::QueuedConnection);
		QTimer::singleShot(1000, &eventLoop, SLOT(quit()));
		eventLoop.exec();
		QVERIFY(p);
	}
	void deleteLaterAndExitLoop()
	{
		// Check that 'p' is not deleted before exec returns, since the call
		// to QEventLoop::quit() should stop 'eventLoop' from processing
		// any more events (that is, delete later) until we return to the
		// _current_ event loop:
		QEventLoop eventLoop;
		QPointer<QObject> p(this);
		QMetaObject::invokeMethod(this, "deleteLater", Qt::QueuedConnection);
		QMetaObject::invokeMethod(&eventLoop, "quit", Qt::QueuedConnection);
		eventLoop.exec();
		QVERIFY(p); // not dead yet
	}

	void processEventsOnly()
	{
		QApplication::processEvents();
	}
	void sendPostedEventsWithDeferredDelete()
	{
		QApplication::sendPostedEvents(0, QEvent::DeferredDelete);
	}

	void deleteLaterAndProcessEvents()
	{
		QEventLoop eventLoop;

		QPointer<QObject> p = this;
		deleteLater();

		// trying to delete this object in a deeper eventloop just won't work
		QMetaObject::invokeMethod(this,
			"processEventsOnly",
			Qt::QueuedConnection);
		QMetaObject::invokeMethod(&eventLoop, "quit", Qt::QueuedConnection);
		eventLoop.exec();
		QVERIFY(p);
		QMetaObject::invokeMethod(this,
			"sendPostedEventsWithDeferredDelete",
			Qt::QueuedConnection);
		QMetaObject::invokeMethod(&eventLoop, "quit", Qt::QueuedConnection);
		eventLoop.exec();
		QVERIFY(p);

		// trying to delete it from this eventloop still doesn't work
		QApplication::processEvents();
		QVERIFY(p);

		// however, it *will* work with this magic incantation
		QApplication::sendPostedEvents(0, QEvent::DeferredDelete);
		QVERIFY(!p);
	}
};



class TouchEventPropagationTestWidget : public QWidget
{
	Q_OBJECT

public:
	bool seenTouchEvent, acceptTouchEvent, seenMouseEvent, acceptMouseEvent;

	TouchEventPropagationTestWidget(QWidget *parent = 0)
		: QWidget(parent), seenTouchEvent(false), acceptTouchEvent(false), seenMouseEvent(false), acceptMouseEvent(false)
	{
		setAttribute(Qt::WA_TouchPadAcceptSingleTouchEvents);
	}

	void reset()
	{
		seenTouchEvent = acceptTouchEvent = seenMouseEvent = acceptMouseEvent = false;
	}

	bool event(QEvent *event)
	{
		switch (event->type()) {
		case QEvent::MouseButtonPress:
		case QEvent::MouseMove:
		case QEvent::MouseButtonRelease:
			// qDebug() << objectName() << "seenMouseEvent = true";
			seenMouseEvent = true;
			event->setAccepted(acceptMouseEvent);
			break;
		case QEvent::TouchBegin:
		case QEvent::TouchUpdate:
		case QEvent::TouchEnd:
			// qDebug() << objectName() << "seenTouchEvent = true";
			seenTouchEvent = true;
			event->setAccepted(acceptTouchEvent);
			break;
		default:
			return QWidget::event(event);
		}
		return true;
	}
};



class NoQuitOnHideWidget : public QWidget
{
	Q_OBJECT
public:
	explicit NoQuitOnHideWidget(QWidget *parent = 0)
		: QWidget(parent)
	{
		QTimer::singleShot(0, this, SLOT(hide()));
		QTimer::singleShot(500, this, SLOT(exitApp()));
	}

private slots:
	void exitApp() {
		qApp->exit(1);
	}
};


class ShowCloseShowWidget : public QWidget
{
	Q_OBJECT
public:
	ShowCloseShowWidget(bool showAgain, QWidget *parent = 0)
		: QWidget(parent), showAgain(showAgain)
	{
		QTimer::singleShot(0, this, SLOT(doClose()));
		QTimer::singleShot(500, this, SLOT(exitApp()));
	}

private slots:
	void doClose() {
		close();
		if (showAgain)
			show();
	}

	void exitApp() {
		qApp->exit(1);
	}

private:
	bool showAgain;
};
