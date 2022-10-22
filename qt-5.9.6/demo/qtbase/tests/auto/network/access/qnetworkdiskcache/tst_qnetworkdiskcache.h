#pragma once


#include <QtTest/QtTest>
#include <QtNetwork/QtNetwork>
#include <qnetworkdiskcache.h>

#include <algorithm>

#define EXAMPLE_URL "http://user:pass@localhost:4/#foo"
//cached objects are organized into these many subdirs
#define NUM_SUBDIRECTORIES 16

class tst_QNetworkDiskCache : public QObject
{
    Q_OBJECT

public:
    tst_QNetworkDiskCache();

public slots:
    void accessAfterRemoveReadyReadSlot();
    void setCookieHeaderMetaDataChangedSlot();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void qnetworkdiskcache_data();
    void qnetworkdiskcache();

    void prepare();
    void cacheSize();
    void clear();
    void data_data();
    void data();
    void metaData();
    void remove();
    void accessAfterRemove(); // QTBUG-17400
    void setCookieHeader(); // QTBUG-41514
    void setCacheDirectory_data();
    void setCacheDirectory();
    void updateMetaData();
    void fileMetaData();
    void expire();

    void oldCacheVersionFile_data();
    void oldCacheVersionFile();

    void streamVersion_data();
    void streamVersion();

    void sync();

    void crashWhenParentingCache();

private:
    QTemporaryDir tempDir;
    QUrl url; // used by accessAfterRemove(), setCookieHeader()
    QNetworkDiskCache *diskCache; // used by accessAfterRemove()
    QNetworkAccessManager *manager; // used by setCookieHeader()
};

// FIXME same as in tst_qnetworkreply.cpp .. could be unified
// Does not work for POST/PUT!
class MiniHttpServer: public QTcpServer
{
    Q_OBJECT
public:
    QTcpSocket *client; // always the last one that was received
    QByteArray dataToTransmit;
    QByteArray receivedData;
    bool doClose;
    bool multiple;
    int totalConnections;

    MiniHttpServer(const QByteArray &data) : client(0), dataToTransmit(data), doClose(true), multiple(false), totalConnections(0)
    {
        listen();
        connect(this, SIGNAL(newConnection()), this, SLOT(doAccept()));
    }

public slots:
    void doAccept()
    {
        client = nextPendingConnection();
        client->setParent(this);
        ++totalConnections;
        connect(client, SIGNAL(readyRead()), this, SLOT(readyReadSlot()));
    }

    void readyReadSlot()
    {
        receivedData += client->readAll();
        int doubleEndlPos = receivedData.indexOf("\r\n\r\n");

        if (doubleEndlPos != -1) {
            // multiple requests incoming. remove the bytes of the current one
            if (multiple)
                receivedData.remove(0, doubleEndlPos+4);

            client->write(dataToTransmit);
            if (doClose) {
                client->disconnectFromHost();
                disconnect(client, 0, this, 0);
                client = 0;
            }
        }
    }
};

// Subclass that exposes the protected functions.
class SubQNetworkDiskCache : public QNetworkDiskCache
{
public:
    ~SubQNetworkDiskCache()
    {
        if (!cacheDirectory().isEmpty())
            clear();
    }

    QNetworkCacheMetaData call_fileMetaData(QString const &fileName)
        { return SubQNetworkDiskCache::fileMetaData(fileName); }

    qint64 call_expire()
        { return SubQNetworkDiskCache::expire(); }

    void setupWithOne(const QString &path, const QUrl &url, const QNetworkCacheMetaData &metaData = QNetworkCacheMetaData())
    {
        setCacheDirectory(path);

        QIODevice *d = 0;
        if (metaData.isValid()) {
            d = prepare(metaData);
        } else {
            QNetworkCacheMetaData m;
            m.setUrl(url);
            QNetworkCacheMetaData::RawHeader header("content-type", "text/html");
            QNetworkCacheMetaData::RawHeaderList list;
            list.append(header);
            m.setRawHeaders(list);
            d = prepare(m);
        }
        d->write("Hello World!");
        insert(d);
    }
};

