#pragma once


#include <QtTest/QtTest>

#include <qtextstream.h>
#include <qdatastream.h>
#include <QtNetwork/qlocalsocket.h>
#include <QtNetwork/qlocalserver.h>

#ifdef Q_OS_UNIX
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h> // for unlink()
#endif

Q_DECLARE_METATYPE(QLocalSocket::LocalSocketError)
Q_DECLARE_METATYPE(QLocalSocket::LocalSocketState)
Q_DECLARE_METATYPE(QLocalServer::SocketOption)
Q_DECLARE_METATYPE(QFile::Permissions)

class tst_QLocalSocket : public QObject
{
    Q_OBJECT

public:
    tst_QLocalSocket();

private slots:
    // basics
    void server_basic();
    void server_connectionsCount();
    void socket_basic();

    void listen_data();
    void listen();

    void listenAndConnect_data();
    void listenAndConnect();

    void connectWithOpen();
    void connectWithOldOpen();

    void sendData_data();
    void sendData();

    void readBufferOverflow();

    void simpleCommandProtocol1();
    void simpleCommandProtocol2();

    void fullPath();

    void hitMaximumConnections_data();
    void hitMaximumConnections();

    void setSocketDescriptor();

    void threadedConnection_data();
    void threadedConnection();

    void processConnection_data();
    void processConnection();

    void longPath();
    void waitForDisconnect();
    void waitForDisconnectByServer();

    void removeServer();

    void recycleServer();
    void recycleClientSocket();

    void multiConnect();
    void writeOnlySocket();

    void writeToClientAndDisconnect_data();
    void writeToClientAndDisconnect();

    void debug();
    void bytesWrittenSignal();
    void syncDisconnectNotify();
    void asyncDisconnectNotify();

    void verifySocketOptions();
    void verifySocketOptions_data();

    void verifyListenWithDescriptor();
    void verifyListenWithDescriptor_data();

};


class LocalServer : public QLocalServer
{
	Q_OBJECT

public:
	LocalServer() : QLocalServer()
	{
		connect(this, SIGNAL(newConnection()), this, SLOT(slotNewConnection()));
	}

	bool listen(const QString &name)
	{
		removeServer(name);
		return QLocalServer::listen(name);
	}

	QList<int> hits;

protected:
	void incomingConnection(quintptr socketDescriptor)
	{
		hits.append(socketDescriptor);
		QLocalServer::incomingConnection(socketDescriptor);
	}

private slots:
	void slotNewConnection() {
		QVERIFY(!hits.isEmpty());
		QVERIFY(hasPendingConnections());
	}
};

class LocalSocket : public QLocalSocket
{
	Q_OBJECT

public:
	LocalSocket(QObject *parent = 0) : QLocalSocket(parent)
	{
		connect(this, SIGNAL(connected()),
			this, SLOT(slotConnected()));
		connect(this, SIGNAL(disconnected()),
			this, SLOT(slotDisconnected()));
		connect(this, SIGNAL(error(QLocalSocket::LocalSocketError)),
			this, SLOT(slotError(QLocalSocket::LocalSocketError)));
		connect(this, SIGNAL(stateChanged(QLocalSocket::LocalSocketState)),
			this, SLOT(slotStateChanged(QLocalSocket::LocalSocketState)));
		connect(this, SIGNAL(readyRead()),
			this, SLOT(slotReadyRead()));
	}

private slots:
	void slotConnected()
	{
		QCOMPARE(state(), QLocalSocket::ConnectedState);
		QVERIFY(isOpen());
	}
	void slotDisconnected()
	{
		QCOMPARE(state(), QLocalSocket::UnconnectedState);
	}
	void slotError(QLocalSocket::LocalSocketError newError)
	{
		QVERIFY(errorString() != QLatin1String("Unknown error"));
		QCOMPARE(error(), newError);
	}
	void slotStateChanged(QLocalSocket::LocalSocketState newState)
	{
		QCOMPARE(state(), newState);
	}
	void slotReadyRead()
	{
		QVERIFY(bytesAvailable() > 0);
	}
};



class WriteThread : public QThread
{
	Q_OBJECT
public:
	void run() {
		QLocalSocket socket;
		socket.connectToServer("qlocalsocket_readyread");

		if (!socket.waitForConnected(3000))
			exec();
		connect(&socket, SIGNAL(bytesWritten(qint64)),
			this, SLOT(bytesWritten(qint64)), Qt::QueuedConnection);
		socket.write("testing\n");
		exec();
	}
public slots:
	void bytesWritten(qint64) {
		exit();
	}

private:
};
