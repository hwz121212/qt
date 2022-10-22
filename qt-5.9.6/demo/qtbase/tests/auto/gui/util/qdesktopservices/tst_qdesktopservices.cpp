#include "tst_qdesktopservices.h"


#include <QtTest/QtTest>
#include <qdebug.h>
#include <qdesktopservices.h>
#include <qregularexpression.h>


void tst_qdesktopservices::openUrl()
{
    // At the bare minimum check that they return false for invalid url's
    QCOMPARE(QDesktopServices::openUrl(QUrl()), false);
#if defined(Q_OS_WIN) && !defined(Q_OS_WINRT)
    // this test is only valid on windows on other systems it might mean open a new document in the application handling .file
    const QRegularExpression messagePattern("ShellExecute 'file://invalid\\.file' failed \\(error \\d+\\)\\.");
    QVERIFY(messagePattern.isValid());
    QTest::ignoreMessage(QtWarningMsg, messagePattern);
    QCOMPARE(QDesktopServices::openUrl(QUrl("file://invalid.file")), false);
#endif
}


void tst_qdesktopservices::handlers()
{
    MyUrlHandler fooHandler;
    MyUrlHandler barHandler;

    QDesktopServices::setUrlHandler(QString("foo"), &fooHandler, "handle");
    QDesktopServices::setUrlHandler(QString("bar"), &barHandler, "handle");

    QUrl fooUrl("foo://blub/meh");
    QUrl barUrl("bar://hmm/hmmmm");

    QVERIFY(QDesktopServices::openUrl(fooUrl));
    QVERIFY(QDesktopServices::openUrl(barUrl));

    QCOMPARE(fooHandler.lastHandledUrl.toString(), fooUrl.toString());
    QCOMPARE(barHandler.lastHandledUrl.toString(), barUrl.toString());
}

#if defined(Q_OS_UNIX) && !defined(Q_OS_MAC)
#define Q_XDG_PLATFORM
#endif

void tst_qdesktopservices::testDataLocation()
{
    // This is the one point where QDesktopServices and QStandardPaths differ.
    // QDesktopServices on unix returns "data"/orgname/appname for DataLocation, for Qt4 compat.
    // And the appname in qt4 defaulted to empty, not to argv[0].
    {
        const QString base = QStandardPaths::writableLocation(QStandardPaths::GenericDataLocation);
        const QString app = QDesktopServices::storageLocation(QDesktopServices::DataLocation);
#ifdef Q_XDG_PLATFORM
        QCOMPARE(app, base + "/data//"); // as ugly as in Qt4
#else
        QCOMPARE(app, base);
#endif
    }
    QCoreApplication::instance()->setOrganizationName("Qt");
    QCoreApplication::instance()->setApplicationName("QtTest");
    {
        const QString base = QStandardPaths::writableLocation(QStandardPaths::GenericDataLocation);
        const QString app = QDesktopServices::storageLocation(QDesktopServices::DataLocation);
#ifdef Q_XDG_PLATFORM
        QCOMPARE(app, base + "/data/Qt/QtTest");
#else
        QCOMPARE(app, base + "/Qt/QtTest");
#endif
    }
}

QTEST_MAIN(tst_qdesktopservices)

//#include "tst_qdesktopservices.moc"
