#include "tst_abstractoauth.h"


void tst_AbstractOAuth::authorizationUrlSignal()
{
    AbstractOAuth obj;
    QUrl expectedValue = QUrl("http://example.net/");
    const QUrl defaultValue = obj.authorizationUrl();
    QVERIFY(expectedValue != defaultValue);
    bool emitted = false;
    connect(&obj, &QAbstractOAuth::authorizationUrlChanged, [&](const QUrl &value) {
        QCOMPARE(expectedValue, value);
        emitted = true;
    });
    obj.setAuthorizationUrl(expectedValue);
    QVERIFY(emitted);
}

QTEST_MAIN(tst_AbstractOAuth)

