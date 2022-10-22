#include "tst_qprocess_and_guieventloop.h"



void tst_QProcess_and_GuiEventLoop::waitForAndEventLoop()
{
#if defined(Q_OS_ANDROID) && !defined(Q_OS_ANDROID_EMBEDDED)
    QSKIP("Not supported on Android");
#else

    // based on testcase provided in QTBUG-39488
    QByteArray msg = "Hello World";

    QProcess process;
    process.start("write-read-write/write-read-write", QStringList() << msg);
    QVERIFY(process.waitForStarted(5000));
    QVERIFY(process.waitForReadyRead(5000));
    QCOMPARE(process.readAll().trimmed(), msg);

    // run the GUI event dispatcher once
    QSignalSpy spy(&process, SIGNAL(readyRead()));
    qApp->processEvents(QEventLoop::AllEvents, 100);

    // we mustn't have read anything in the event loop
    QCOMPARE(spy.count(), 0);

    // ensure the process hasn't died
    QVERIFY(!process.waitForFinished(250));

    // we mustn't have read anything during waitForFinished either
    QCOMPARE(spy.count(), 0);

    // release the child for the second write
    process.write("\n");
    QVERIFY(process.waitForFinished(5000));
    QCOMPARE(int(process.exitStatus()), int(QProcess::NormalExit));
    QCOMPARE(process.exitCode(), 0);
    QCOMPARE(spy.count(), 1);
    QCOMPARE(process.readAll().trimmed(), msg);
#endif
}

QTEST_MAIN(tst_QProcess_and_GuiEventLoop)

