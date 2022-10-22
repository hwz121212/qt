#pragma once



#include <QtTest/QtTest>

#include <qcoreapplication.h>
#include <qfileinfo.h>
#include <qdatastream.h>
#include <qdebug.h>
#include <qudpsocket.h>
#include <qhostaddress.h>
#include <qhostinfo.h>
#include <qtcpsocket.h>
#include <qmap.h>
#include <qnetworkdatagram.h>
#include <QNetworkProxy>
#include <QNetworkInterface>

#include <qstringlist.h>
#include "../../../network-settings.h"
#include "emulationdetector.h"

#ifndef QT_NO_BEARERMANAGEMENT
#include <QtNetwork/qnetworkconfigmanager.h>
#include <QtNetwork/qnetworkconfiguration.h>
#include <QtNetwork/qnetworksession.h>
#endif

#if defined(Q_OS_LINUX)
#define SHOULD_CHECK_SYSCALL_SUPPORT
#include <netinet/in.h>
#include <sys/socket.h>
#include <errno.h>
#endif

#ifdef Q_OS_UNIX
#  include <sys/socket.h>
#endif
#if defined(Q_OS_LINUX) || defined(Q_OS_WIN) || defined(SO_NREAD)
#  define RELIABLE_BYTES_AVAILABLE
#endif

Q_DECLARE_METATYPE(QHostAddress)

QT_FORWARD_DECLARE_CLASS(QUdpSocket)

class tst_QUdpSocket : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase_data();
    void initTestCase();
    void init();
    void cleanup();
    void constructing();
    void unconnectedServerAndClientTest();
    void broadcasting();
    void loop_data();
    void loop();
    void ipv6Loop_data();
    void ipv6Loop();
    void dualStack();
    void dualStackAutoBinding();
    void dualStackNoIPv4onV6only();
    void connectToHost();
    void bindAndConnectToHost();
    void pendingDatagramSize();
    void writeDatagram();
    void performance();
    void bindMode();
    void writeDatagramToNonExistingPeer_data();
    void writeDatagramToNonExistingPeer();
    void writeToNonExistingPeer_data();
    void writeToNonExistingPeer();
    void outOfProcessConnectedClientServerTest();
    void outOfProcessUnconnectedClientServerTest();
    void zeroLengthDatagram();
    void multicastTtlOption_data();
    void multicastTtlOption();
    void multicastLoopbackOption_data();
    void multicastLoopbackOption();
    void multicastJoinBeforeBind_data();
    void multicastJoinBeforeBind();
    void multicastLeaveAfterClose_data();
    void multicastLeaveAfterClose();
    void setMulticastInterface_data();
    void setMulticastInterface();
    void multicast_data();
    void multicast();
    void echo_data();
    void echo();
    void linkLocalIPv6();
    void linkLocalIPv4();
    void readyRead();
    void readyReadForEmptyDatagram();
    void asyncReadDatagram();
    void writeInHostLookupState();

protected slots:
    void empty_readyReadSlot();
    void empty_connectedSlot();
    void async_readDatagramSlot();

private:
    bool shouldSkipIpv6TestsForBrokenSetsockopt();
    bool shouldWorkaroundLinuxKernelBug();
#ifdef SHOULD_CHECK_SYSCALL_SUPPORT
    bool ipv6SetsockoptionMissing(int level, int optname);
#endif

    bool m_skipUnsupportedIPv6Tests;
    bool m_workaroundLinuxKernelBug;
    QList<QHostAddress> allAddresses;
#ifndef QT_NO_BEARERMANAGEMENT
    QNetworkConfigurationManager *netConfMan;
    QNetworkConfiguration networkConfiguration;
    QSharedPointer<QNetworkSession> networkSession;
#endif
    QUdpSocket *m_asyncSender;
    QUdpSocket *m_asyncReceiver;
};

