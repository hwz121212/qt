#include "tst_qnetworkconfigurationmanagerqappless.h"



void tst_QNetworkConfigurationManager::staticsInitialization()
{
    // This code should not crash. The test was introduced as
    // a fix for QTBUG-36897
    for (int i = 0; i < 2; i++)
    {
        int argc = 1;
        const char *testName = "tst_qnetworkconfigurationmanagerqappless";
        char **argv = const_cast<char **>(&testName);
        QCoreApplication app(argc, argv);
        QNetworkAccessManager qnam;
        Q_UNUSED(app);
        Q_UNUSED(qnam);
    }
    QVERIFY(true);
}

QTEST_APPLESS_MAIN(tst_QNetworkConfigurationManager)
