#pragma once

#include <qglobal.h>
// To prevent windows system header files from re-defining min/max
#define NOMINMAX 1
#if defined(_WIN32)
#include <winsock2.h>
#else
#include <sys/types.h>
#include <sys/socket.h>
#define SOCKET int
#define INVALID_SOCKET -1
#endif

#include <QtTest/QtTest>

#ifndef Q_OS_WIN
#include <unistd.h>
#include <sys/ioctl.h>
#endif

#include <qcoreapplication.h>
#include <qtcpsocket.h>
#include <qtcpserver.h>
#include <qhostaddress.h>
#if QT_CONFIG(process)
# include <qprocess.h>
#endif
#include <qstringlist.h>
#include <qplatformdefs.h>
#include <qhostinfo.h>

#include <QNetworkProxy>

#include <QNetworkSession>
#include <QNetworkConfiguration>
#include <QNetworkConfigurationManager>
#include "../../../network-settings.h"

#if defined(Q_OS_LINUX)
#define SHOULD_CHECK_SYSCALL_SUPPORT
#include <netinet/in.h>
#include <sys/socket.h>
#include <errno.h>
#endif

class tst_QTcpServer : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase_data();
    void initTestCase();
    void init();
    void cleanup();
    void getSetCheck();
    void constructing();
    void clientServerLoop();
    void ipv6Server();
    void dualStack_data();
    void dualStack();
    void ipv6ServerMapped();
    void crashTests();
    void maxPendingConnections();
    void listenError();
    void waitForConnectionTest();
#ifndef Q_OS_WINRT
    void setSocketDescriptor();
#endif
    void listenWhileListening();
    void addressReusable();
    void setNewSocketDescriptorBlocking();
#ifndef QT_NO_NETWORKPROXY
    void invalidProxy_data();
    void invalidProxy();
    void proxyFactory_data();
    void proxyFactory();
#endif // !QT_NO_NETWORKPROXY

    void qtbug14268_peek();

    void serverAddress_data();
    void serverAddress();

    void qtbug6305_data() { serverAddress_data(); }
    void qtbug6305();

    void linkLocal();

    void eagainBlockingAccept();

    void canAccessPendingConnectionsWhileNotListening();

private:
    bool shouldSkipIpv6TestsForBrokenGetsockopt();
#ifdef SHOULD_CHECK_SYSCALL_SUPPORT
    bool ipv6GetsockoptionMissing(int level, int optname);
#endif

#ifndef QT_NO_BEARERMANAGEMENT
    QNetworkSession *networkSession;
#endif
    QString crashingServerDir;
};



class Qtbug14268Helper : public QObject
{
	Q_OBJECT
public:
	QByteArray lastDataPeeked;
public slots:
	void newConnection() {
		QTcpServer* server = static_cast<QTcpServer*>(sender());
		QTcpSocket* s = server->nextPendingConnection();
		connect(s, SIGNAL(readyRead()), this, SLOT(onServerReadyRead()));
	}
	void onServerReadyRead() {
		QTcpSocket* clientSocket = static_cast<QTcpSocket*>(sender());
		lastDataPeeked = clientSocket->peek(128 * 1024).toHex();
		QTestEventLoop::instance().exitLoop();
	}
};
