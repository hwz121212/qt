#pragma once

#include <QTemporaryDir>
#include <QtTest/QtTest>
#include <QtNetwork/QtNetwork>
#include "../../../network-settings.h"

#ifndef QT_NO_BEARERMANAGEMENT
#include <QtNetwork/qnetworkconfigmanager.h>
#include <QtNetwork/qnetworkconfiguration.h>
#include <QtNetwork/qnetworksession.h>
#endif

#include <algorithm>

#define TESTFILE QLatin1String("http://") + QtNetworkSettings::serverName() + QLatin1String("/qtest/cgi-bin/")

class tst_QAbstractNetworkCache : public QObject
{
    Q_OBJECT

public:
    tst_QAbstractNetworkCache();
    virtual ~tst_QAbstractNetworkCache();

private slots:
    void initTestCase();
    void expires_data();
    void expires();
    void expiresSynchronous_data();
    void expiresSynchronous();

    void lastModified_data();
    void lastModified();
    void lastModifiedSynchronous_data();
    void lastModifiedSynchronous();

    void etag_data();
    void etag();
    void etagSynchronous_data();
    void etagSynchronous();

    void cacheControl_data();
    void cacheControl();
    void cacheControlSynchronous_data();
    void cacheControlSynchronous();

    void deleteCache();

private:
    void runTest();
    void checkSynchronous();

#ifndef QT_NO_BEARERMANAGEMENT
    QNetworkConfigurationManager *netConfMan;
    QNetworkConfiguration networkConfiguration;
    QScopedPointer<QNetworkSession> networkSession;
#endif
};

class NetworkDiskCache : public QNetworkDiskCache
{
    Q_OBJECT
public:
    NetworkDiskCache(QObject *parent = 0)
        : QNetworkDiskCache(parent)
        , tempDir(QDir::tempPath() + QLatin1String("/tst_qabstractnetworkcache.XXXXXX"))
        , gotData(false)
    {
        setCacheDirectory(tempDir.path());
        clear();
    }

    QIODevice *data(const QUrl &url)
    {
        gotData = true;
        return QNetworkDiskCache::data(url);
    }

    QTemporaryDir tempDir;
    bool gotData;
};


