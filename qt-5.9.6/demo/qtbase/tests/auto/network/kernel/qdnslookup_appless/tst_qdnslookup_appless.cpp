#include "tst_qdnslookup_appless.h"



void tst_QDnsLookup_Appless::noApplication()
{
    QTest::ignoreMessage(QtWarningMsg, "QDnsLookup requires a QCoreApplication");
    QDnsLookup dns(QDnsLookup::A, "a-single.test.qt-project.org");
    dns.lookup();
}

void tst_QDnsLookup_Appless::recreateApplication()
{
    int argc = 0;
    char **argv = 0;
    for (int i = 0; i < 10; ++i) {
        QCoreApplication app(argc, argv);
        QDnsLookup dns(QDnsLookup::A, "a-single.test.qt-project.org");
        dns.lookup();
        if (!dns.isFinished()) {
            QObject::connect(&dns, SIGNAL(finished()),
                             &QTestEventLoop::instance(), SLOT(exitLoop()));
            QTestEventLoop::instance().enterLoop(10);
        }
        QVERIFY(dns.isFinished());
    }
}

void tst_QDnsLookup_Appless::destroyApplicationDuringLookup()
{
    int argc = 0;
    char **argv = 0;
    for (int i = 0; i < 10; ++i) {
        QCoreApplication app(argc, argv);
        QDnsLookup dns(QDnsLookup::A, "a-single.test.macieira.info");
        dns.lookup();
    }
}

QTEST_APPLESS_MAIN(tst_QDnsLookup_Appless)

