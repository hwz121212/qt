#include "tst_qnetworkaccessmanager.h"


tst_QNetworkAccessManager::tst_QNetworkAccessManager()
{
}

void tst_QNetworkAccessManager::networkAccessible()
{
#ifndef QT_NO_BEARERMANAGEMENT
    QNetworkAccessManager manager;

    qRegisterMetaType<QNetworkAccessManager::NetworkAccessibility>("QNetworkAccessManager::NetworkAccessibility");

    QSignalSpy spy(&manager,
                   SIGNAL(networkAccessibleChanged(QNetworkAccessManager::NetworkAccessibility)));

    // if there is no session, we cannot know in which state we are in
    QNetworkAccessManager::NetworkAccessibility initialAccessibility =
            manager.networkAccessible();

    if (initialAccessibility == QNetworkAccessManager::UnknownAccessibility)
          QSKIP("Unknown accessibility", SkipAll);

    QCOMPARE(manager.networkAccessible(), initialAccessibility);

    manager.setNetworkAccessible(QNetworkAccessManager::NotAccessible);

    int expectedCount = (initialAccessibility == QNetworkAccessManager::Accessible) ? 1 : 0;
    QCOMPARE(spy.count(), expectedCount);
    if (expectedCount > 0)
        QCOMPARE(spy.takeFirst().at(0).value<QNetworkAccessManager::NetworkAccessibility>(),
                 QNetworkAccessManager::NotAccessible);
    QCOMPARE(manager.networkAccessible(), QNetworkAccessManager::NotAccessible);

    manager.setNetworkAccessible(QNetworkAccessManager::Accessible);

    QCOMPARE(spy.count(), expectedCount);
    if (expectedCount > 0)
        QCOMPARE(spy.takeFirst().at(0).value<QNetworkAccessManager::NetworkAccessibility>(),
                 initialAccessibility);
    QCOMPARE(manager.networkAccessible(), initialAccessibility);

    QNetworkConfigurationManager configManager;
    QNetworkConfiguration defaultConfig = configManager.defaultConfiguration();
    if (defaultConfig.isValid()) {
        manager.setConfiguration(defaultConfig);

        QCOMPARE(spy.count(), 0);

        if (defaultConfig.state().testFlag(QNetworkConfiguration::Active))
            QCOMPARE(manager.networkAccessible(), QNetworkAccessManager::Accessible);
        else
            QCOMPARE(manager.networkAccessible(), QNetworkAccessManager::NotAccessible);

        manager.setNetworkAccessible(QNetworkAccessManager::NotAccessible);

        if (defaultConfig.state().testFlag(QNetworkConfiguration::Active)) {
            QCOMPARE(spy.count(), 1);
            QCOMPARE(QNetworkAccessManager::NetworkAccessibility(spy.takeFirst().at(0).toInt()),
                     QNetworkAccessManager::NotAccessible);
        } else {
            QCOMPARE(spy.count(), 0);
        }
    }
    QCOMPARE(manager.networkAccessible(), QNetworkAccessManager::NotAccessible);
#endif
}

void tst_QNetworkAccessManager::alwaysCacheRequest()
{
    QNetworkAccessManager manager;

    QNetworkRequest req;
    req.setAttribute(QNetworkRequest::CacheLoadControlAttribute, QNetworkRequest::AlwaysCache);
    QNetworkReply *reply = manager.get(req);
    reply->close();
    delete reply;
}

QTEST_MAIN(tst_QNetworkAccessManager)

