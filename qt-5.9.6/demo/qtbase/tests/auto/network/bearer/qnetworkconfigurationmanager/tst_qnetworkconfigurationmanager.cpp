#include "tst_qnetworkconfigurationmanager.h"


#ifndef QT_NO_BEARERMANAGEMENT
void printConfigurationDetails(const QNetworkConfiguration& p)
{
    qDebug() << p.name() <<":  isvalid->" <<p.isValid() << " type->"<< p.type() <<
                " roaming->" << p.isRoamingAvailable() << "identifier->" << p.identifier() <<
                " purpose->" << p.purpose() << " state->" << p.state();
}

void tst_QNetworkConfigurationManager::allConfigurations()
{
    QNetworkConfigurationManager manager;
    QList<QNetworkConfiguration> preScanConfigs = manager.allConfigurations();

    foreach(QNetworkConfiguration c, preScanConfigs)
    {
        QVERIFY2(c.type()!=QNetworkConfiguration::UserChoice, "allConfiguration must not return UserChoice configs");
    }

    QSignalSpy spy(&manager, SIGNAL(updateCompleted()));
    manager.updateConfigurations(); //initiate scans
    QTRY_VERIFY_WITH_TIMEOUT(spy.count() >= 1, TestTimeOut); //wait for scan to complete

    QList<QNetworkConfiguration> configs = manager.allConfigurations();

    int all = configs.count();
    qDebug() << "All configurations:" << all;
    QVERIFY(all);
    foreach(QNetworkConfiguration p, configs) {
        QVERIFY(p.isValid());
        printConfigurationDetails(p);
        QVERIFY(p.type() != QNetworkConfiguration::Invalid);
        QVERIFY(p.type() != QNetworkConfiguration::UserChoice);
    }

    configs = manager.allConfigurations(QNetworkConfiguration::Undefined);
    int undefined = configs.count();
    QVERIFY(undefined <= all);
    qDebug() << "Undefined configurations:" << undefined;
    foreach( const QNetworkConfiguration p, configs) {
        printConfigurationDetails(p);
        QVERIFY(p.state() & QNetworkConfiguration::Undefined);
        QVERIFY(!(p.state() & QNetworkConfiguration::Defined));
    }

    //get defined configs only (same as all)
    configs = manager.allConfigurations(QNetworkConfiguration::Defined);
    int defined = configs.count();
    qDebug() << "Defined configurations:" << defined;
    QVERIFY(defined <= all);
    foreach( const QNetworkConfiguration p, configs) {
        printConfigurationDetails(p);
        QVERIFY(p.state() & QNetworkConfiguration::Defined);
        QVERIFY(!(p.state() & QNetworkConfiguration::Undefined));
    }

    //get discovered configurations only
    configs = manager.allConfigurations(QNetworkConfiguration::Discovered);
    int discovered = configs.count();
    //QVERIFY(discovered);
    qDebug() << "Discovered configurations:" << discovered;
    foreach(const QNetworkConfiguration p, configs) {
        printConfigurationDetails(p);
        QVERIFY(p.isValid());
        QVERIFY(!(p.state() & QNetworkConfiguration::Undefined));
        QVERIFY(p.state() & QNetworkConfiguration::Defined);
        QVERIFY(p.state() & QNetworkConfiguration::Discovered);
    }

    //getactive configurations only
    configs = manager.allConfigurations(QNetworkConfiguration::Active);
    int active = configs.count();
    if (active)
        QVERIFY(manager.isOnline());
    else
        QVERIFY(!manager.isOnline());

    //QVERIFY(active);
    qDebug() << "Active configurations:" << active;
    foreach(const QNetworkConfiguration p, configs) {
        printConfigurationDetails(p);
        QVERIFY(p.isValid());
        QVERIFY(!(p.state() & QNetworkConfiguration::Undefined));
        QVERIFY(p.state() & QNetworkConfiguration::Active);
        QVERIFY(p.state() & QNetworkConfiguration::Discovered);
        QVERIFY(p.state() & QNetworkConfiguration::Defined);
    }

    QVERIFY(all >= discovered);
    QVERIFY(discovered >= active);
}


void tst_QNetworkConfigurationManager::defaultConfiguration()
{
    QNetworkConfigurationManager manager;
    QSignalSpy spy(&manager, SIGNAL(updateCompleted()));
    manager.updateConfigurations(); //initiate scans
    QTRY_VERIFY_WITH_TIMEOUT(spy.count() >= 1, TestTimeOut); //wait for scan to complete

    QList<QNetworkConfiguration> configs = manager.allConfigurations();
    QNetworkConfiguration defaultConfig = manager.defaultConfiguration();

    bool confirm = configs.contains(defaultConfig);

    if (defaultConfig.type() != QNetworkConfiguration::UserChoice) {
        QVERIFY(confirm || !defaultConfig.isValid());
        QVERIFY(!(confirm && !defaultConfig.isValid()));
    } else {
        QVERIFY(!confirm);  // user choice config is not part of allConfigurations()
        QVERIFY(defaultConfig.isValid());
        QCOMPARE(defaultConfig.name(), QString("UserChoice"));
        QCOMPARE(defaultConfig.children().count(), 0);
        QVERIFY(!defaultConfig.isRoamingAvailable());
        QCOMPARE(defaultConfig.state(), QNetworkConfiguration::Discovered);
        QNetworkConfiguration copy = manager.configurationFromIdentifier(defaultConfig.identifier());
        QCOMPARE(copy, defaultConfig);
    }
}

void tst_QNetworkConfigurationManager::configurationFromIdentifier()
{
    QNetworkConfigurationManager manager;
    QSet<QString> allIdentifier;

    //force an update to get maximum number of configs
    QSignalSpy spy(&manager, SIGNAL(updateCompleted()));
    manager.updateConfigurations(); //initiate scans
    QTRY_VERIFY_WITH_TIMEOUT(spy.count() >= 1, TestTimeOut); //wait for scan to complete

    QList<QNetworkConfiguration> configs = manager.allConfigurations();

    foreach(QNetworkConfiguration c, configs) {
        QVERIFY(!allIdentifier.contains(c.identifier()));
        allIdentifier.insert(c.identifier());

        QNetworkConfiguration direct = manager.configurationFromIdentifier(c.identifier());
        QVERIFY(direct.isValid());
        QCOMPARE(direct, c);
    }

    //assume that there is no item with identifier 'FooBar'
    QVERIFY(!allIdentifier.contains("FooBar"));
    QNetworkConfiguration invalid = manager.configurationFromIdentifier("FooBar");
    QVERIFY(!invalid.isValid());
}

class QNCMTestThread : public QThread
{
protected:
    virtual void run()
    {
        QNetworkConfigurationManager manager;
        preScanConfigs = manager.allConfigurations();
        QSignalSpy spy(&manager, SIGNAL(updateCompleted()));
        manager.updateConfigurations(); //initiate scans
        QTRY_VERIFY_WITH_TIMEOUT(spy.count() >= 1, TestTimeOut); //wait for scan to complete
        configs = manager.allConfigurations();
    }
public:
    QList<QNetworkConfiguration> configs;
    QList<QNetworkConfiguration> preScanConfigs;
};

// regression test for QTBUG-18795
void tst_QNetworkConfigurationManager::usedInThread()
{
#if defined Q_OS_MAC && !defined (QT_NO_COREWLAN)
    QSKIP("QTBUG-19070 Mac CoreWlan plugin is broken");
#else
    QNCMTestThread thread;
    connect(&thread, SIGNAL(finished()), &QTestEventLoop::instance(), SLOT(exitLoop()));
    thread.start();
    QTestEventLoop::instance().enterLoop(100); //QTRY_VERIFY_WITH_TIMEOUT could take ~90 seconds to time out in the thread
    QVERIFY(!QTestEventLoop::instance().timeout());
    qDebug() << "prescan:" << thread.preScanConfigs.count();
    qDebug() << "postscan:" << thread.configs.count();

    QNetworkConfigurationManager manager;
    QList<QNetworkConfiguration> preScanConfigs = manager.allConfigurations();
    QSignalSpy spy(&manager, SIGNAL(updateCompleted()));
    manager.updateConfigurations(); //initiate scans
    QTRY_VERIFY_WITH_TIMEOUT(spy.count() >= 1, TestTimeOut); //wait for scan to complete
    QList<QNetworkConfiguration> configs = manager.allConfigurations();
    QCOMPARE(thread.configs, configs);
    //Don't compare pre scan configs, because these may be cached and therefore give different results
    //which makes the test unstable.  The post scan results should have all configurations every time
    //QCOMPARE(thread.preScanConfigs, preScanConfigs);
#endif
}
#endif

QTEST_MAIN(tst_QNetworkConfigurationManager)
