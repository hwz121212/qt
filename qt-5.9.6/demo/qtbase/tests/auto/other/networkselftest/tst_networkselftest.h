#pragma once

#include <QtTest/QtTest>
#include <QtNetwork/QtNetwork>
#include <QtCore/QDateTime>
#include <QtCore/QTextStream>
#include <QtCore/QStandardPaths>
#include <QtCore/private/qiodevice_p.h>

#ifndef QT_NO_BEARERMANAGEMENT
#include <QtNetwork/qnetworkconfigmanager.h>
#include <QtNetwork/qnetworkconfiguration.h>
#include <QtNetwork/qnetworksession.h>
#endif

#include "../../network-settings.h"

class tst_NetworkSelfTest: public QObject
{
    Q_OBJECT
    QHostAddress cachedIpAddress;
public:
    tst_NetworkSelfTest();
    virtual ~tst_NetworkSelfTest();

    QHostAddress serverIpAddress();

private slots:
    void initTestCase();
    void hostTest();
    void dnsResolution_data();
    void dnsResolution();
    void serverReachability();
    void remotePortsOpen_data();
    void remotePortsOpen();

    // specific protocol tests
    void ftpServer();
    void ftpProxyServer();
    void imapServer();
    void httpServer();
    void httpServerFiles_data();
    void httpServerFiles();
    void httpServerCGI_data();
    void httpServerCGI();
#ifndef QT_NO_SSL
    void httpsServer();
#endif
    void httpProxy();
    void httpProxyBasicAuth();
    void httpProxyNtlmAuth();
    void socks5Proxy();
    void socks5ProxyAuth();
    void smbServer();

    // ssl supported test
    void supportsSsl();
private:
#ifndef QT_NO_BEARERMANAGEMENT
    QNetworkConfigurationManager *netConfMan;
    QNetworkConfiguration networkConfiguration;
    QScopedPointer<QNetworkSession> networkSession;
#endif
};

class Chat
{
public:
    enum Type {
        Reconnect,
        Send,
        Expect,
        SkipBytes,
        DiscardUntil,
        DiscardUntilDisconnect,
        Disconnect,
        RemoteDisconnect,
        StartEncryption
    };
    Chat(Type t, const QByteArray &d)
        : data(d), type(t)
    {
    }
    Chat(Type t, int val = 0)
        : value(val), type(t)
    {
    }

    static inline Chat send(const QByteArray &data)
    { return Chat(Send, data); }
    static inline Chat expect(const QByteArray &data)
    { return Chat(Expect, data); }
    static inline Chat discardUntil(const QByteArray &data)
    { return Chat(DiscardUntil, data); }
    static inline Chat skipBytes(int count)
    { return Chat(SkipBytes, count); }

    QByteArray data;
    int value;
    Type type;
};

