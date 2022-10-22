#pragma once


#include <QtTest/QtTest>
#include <QtCore/QCryptographicHash>
#include <QtCore/QDataStream>
#include <QtCore/QUrl>
#include <QtCore/QEventLoop>
#include <QtCore/QFile>
#include <QtCore/QSharedPointer>
#include <QtCore/QScopedPointer>
#include <QtCore/QTemporaryFile>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QLocalSocket>
#include <QtNetwork/QLocalServer>
#include <QtNetwork/QHostInfo>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QAbstractNetworkCache>
#include <QtNetwork/qauthenticator.h>
#include <QtNetwork/qnetworkaccessmanager.h>
#include <QtNetwork/qnetworkdiskcache.h>
#include <QtNetwork/qnetworkrequest.h>
#include <QtNetwork/qnetworkreply.h>
#include <QtNetwork/qnetworkcookie.h>
#include <QtNetwork/QNetworkCookieJar>
#include <QtNetwork/QHttpPart>
#include <QtNetwork/QHttpMultiPart>
#include <QtNetwork/QNetworkProxyQuery>
#ifndef QT_NO_SSL
#include <QtNetwork/qsslerror.h>
#include <QtNetwork/qsslconfiguration.h>
#ifdef QT_BUILD_INTERNAL
#include <QtNetwork/private/qsslconfiguration_p.h>
#endif
#endif
#ifndef QT_NO_BEARERMANAGEMENT
#include <QtNetwork/qnetworkconfigmanager.h>
#include <QtNetwork/qnetworkconfiguration.h>
#include <QtNetwork/qnetworksession.h>
#include <QtNetwork/private/qnetworksession_p.h>
#endif
#ifdef QT_BUILD_INTERNAL
#include <QtNetwork/private/qnetworkreplyimpl_p.h> // implicitly included by qnetworkaccessmanager_p.h currently, but don't rely on that being true forever
#include <QtNetwork/private/qnetworkaccessmanager_p.h>
#else
Q_DECLARE_METATYPE(QSharedPointer<char>)
#endif

#ifdef Q_OS_UNIX
# include <sys/types.h>
# include <unistd.h> // for getuid()
#endif
#include <time.h>

#include "../../../network-settings.h"

// Non-OpenSSL backends are not able to report a specific error code
// for self-signed certificates.
#ifndef QT_NO_OPENSSL
#define FLUKE_CERTIFICATE_ERROR QSslError::SelfSignedCertificate
#else
#define FLUKE_CERTIFICATE_ERROR QSslError::CertificateUntrusted
#endif

Q_DECLARE_METATYPE(QAuthenticator*)
#ifndef QT_NO_NETWORKPROXY
Q_DECLARE_METATYPE(QNetworkProxyQuery)
#endif

#include "emulationdetector.h"

typedef QSharedPointer<QNetworkReply> QNetworkReplyPtr;

class MyCookieJar;
class tst_QNetworkReply: public QObject
{
    Q_OBJECT

#ifndef QT_NO_NETWORKPROXY
    struct ProxyData
    {
        ProxyData(const QNetworkProxy &p, const QByteArray &t, bool auth)
            : tag(t), proxy(p), requiresAuthentication(auth) {}
        QByteArray tag;
        QNetworkProxy proxy;
        bool requiresAuthentication;
    };
#endif // !QT_NO_NETWORKPROXY

    static bool seedCreated;
    static QString createUniqueExtension()
    {
        if (!seedCreated) {
            qsrand(QTime(0,0,0).msecsTo(QTime::currentTime()) + QCoreApplication::applicationPid());
            seedCreated = true; // not thread-safe, but who cares
        }
        return QString::number(QTime(0, 0, 0).msecsTo(QTime::currentTime()))
            + QLatin1Char('-') + QString::number(QCoreApplication::applicationPid())
            + QLatin1Char('-') + QString::number(qrand());
    }

    static QString tempRedirectReplyStr() {
        QString s = "HTTP/1.1 307 Temporary Redirect\r\n"
                    "Content-Type: text/plain\r\n"
                    "location: %1\r\n"
                    "\r\n";
        return s;
    }

    static const QByteArray httpEmpty200Response;
    static const QString filePermissionFileName;

    QEventLoop *loop;
    enum RunSimpleRequestReturn { Timeout = 0, Success, Failure };
    int returnCode;
    QString testFileName;
    QString echoProcessDir;
#if !defined Q_OS_WIN
    QString wronlyFileName;
#endif
    QString uniqueExtension;
#ifndef QT_NO_NETWORKPROXY
    QList<ProxyData> proxies;
#endif
    QNetworkAccessManager manager;
    MyCookieJar *cookieJar;
#ifndef QT_NO_SSL
    QSslConfiguration storedSslConfiguration;
    QList<QSslError> storedExpectedSslErrors;
#endif
#ifndef QT_NO_BEARERMANAGEMENT
    QNetworkConfigurationManager *netConfMan;
    QNetworkConfiguration networkConfiguration;
    QScopedPointer<QNetworkSession> networkSession;
#endif

    using QObject::connect;
    static bool connect(const QNetworkReplyPtr &ptr, const char *signal, const QObject *receiver, const char *slot, Qt::ConnectionType ct = Qt::AutoConnection)
    { return connect(ptr.data(), signal, receiver, slot, ct); }
    bool connect(const QNetworkReplyPtr &ptr, const char *signal, const char *slot, Qt::ConnectionType ct = Qt::AutoConnection)
    { return connect(ptr.data(), signal, slot, ct); }

public:
    tst_QNetworkReply();
    ~tst_QNetworkReply();
    QString runSimpleRequest(QNetworkAccessManager::Operation op, const QNetworkRequest &request,
                             QNetworkReplyPtr &reply, const QByteArray &data = QByteArray());
    QString runMultipartRequest(const QNetworkRequest &request, QNetworkReplyPtr &reply,
                                    QHttpMultiPart *multiPart, const QByteArray &verb);

    QString runCustomRequest(const QNetworkRequest &request, QNetworkReplyPtr &reply,
                             const QByteArray &verb, QIODevice *data);
    int waitForFinish(QNetworkReplyPtr &reply);

public Q_SLOTS:
    void finished();
    void gotError();
    void authenticationRequired(QNetworkReply*,QAuthenticator*);
    void proxyAuthenticationRequired(const QNetworkProxy &,QAuthenticator*);
    void pipeliningHelperSlot();
    void emitErrorForAllRepliesSlot();

#ifndef QT_NO_SSL
    void sslErrors(QNetworkReply*,const QList<QSslError> &);
    void storeSslConfiguration();
    void ignoreSslErrorListSlot(QNetworkReply *reply, const QList<QSslError> &);
#ifdef QT_BUILD_INTERNAL
    void sslSessionSharingHelperSlot();
#endif
#endif

protected Q_SLOTS:
    void nestedEventLoops_slot();
    void notEnoughData();

private Q_SLOTS:
    void cleanup() { cleanupTestData(); }
    void initTestCase();
    void cleanupTestCase();

    void stateChecking();
    void invalidProtocol();
    void getFromData_data();
    void getFromData();
    void getFromFile_data();
    void getFromFile();
    void getFromFileSpecial_data();
    void getFromFileSpecial();
    void getFromFtp_data();
    void getFromFtp();
    void getFromFtpAfterError();    // QTBUG-40797
    void getFromHttp_data();
    void getFromHttp();
    void getErrors_data();
    void getErrors();
#ifndef QT_NO_NETWORKPROXY
    void headFromHttp_data();
    void headFromHttp();
#endif // !QT_NO_NETWORKPROXY
    void putToFile_data();
    void putToFile();
    void putToFtp_data();
    void putToFtp();
    void putToFtpWithInvalidCredentials();    // QTBUG-40622
    void putToHttp_data();
    void putToHttp();
    void putToHttpSynchronous_data();
    void putToHttpSynchronous();
    void putToHttpMultipart_data();
    void putToHttpMultipart();
    void postToHttp_data();
    void postToHttp();
    void postToHttpSynchronous_data();
    void postToHttpSynchronous();
    void postToHttpMultipart_data();
    void postToHttpMultipart();
    void multipartSkipIndices(); // QTBUG-32534
#ifndef QT_NO_SSL
    void putToHttps_data();
    void putToHttps();
    void putToHttpsSynchronous_data();
    void putToHttpsSynchronous();
    void postToHttps_data();
    void postToHttps();
    void postToHttpsSynchronous_data();
    void postToHttpsSynchronous();
    void postToHttpsMultipart_data();
    void postToHttpsMultipart();
#endif
    void deleteFromHttp_data();
    void deleteFromHttp();
    void putGetDeleteGetFromHttp_data();
    void putGetDeleteGetFromHttp();
    void sendCustomRequestToHttp_data();
    void sendCustomRequestToHttp();
    void connectToIPv6Address_data();
    void connectToIPv6Address();

    void ioGetFromData_data();
    void ioGetFromData();
    void ioGetFromFileSpecial_data();
    void ioGetFromFileSpecial();
    void ioGetFromFile_data();
    void ioGetFromFile();
    void ioGetFromFtp_data();
    void ioGetFromFtp();
    void ioGetFromFtpWithReuse();
    void ioGetFromHttp();

    void ioGetFromBuiltinHttp_data();
    void ioGetFromBuiltinHttp();
    void ioGetFromHttpWithReuseParallel();
    void ioGetFromHttpWithReuseSequential();
    void ioGetFromHttpWithAuth_data();
    void ioGetFromHttpWithAuth();
    void ioGetFromHttpWithAuthSynchronous();
#ifndef QT_NO_NETWORKPROXY
    void ioGetFromHttpWithProxyAuth();
    void ioGetFromHttpWithProxyAuthSynchronous();
    void ioGetFromHttpWithSocksProxy();
#endif // !QT_NO_NETWORKPROXY
#ifndef QT_NO_SSL
    void ioGetFromHttpsWithSslErrors();
    void ioGetFromHttpsWithIgnoreSslErrors();
    void ioGetFromHttpsWithSslHandshakeError();
#endif
    void ioGetFromHttpBrokenServer_data();
    void ioGetFromHttpBrokenServer();
    void ioGetFromHttpStatus100_data();
    void ioGetFromHttpStatus100();
    void ioGetFromHttpNoHeaders_data();
    void ioGetFromHttpNoHeaders();
    void ioGetFromHttpWithCache_data();
    void ioGetFromHttpWithCache();

#ifndef QT_NO_NETWORKPROXY
    void ioGetWithManyProxies_data();
    void ioGetWithManyProxies();
#endif // !QT_NO_NETWORKPROXY

    void ioPutToFileFromFile_data();
    void ioPutToFileFromFile();
    void ioPutToFileFromSocket_data();
    void ioPutToFileFromSocket();
    void ioPutToFileFromLocalSocket_data();
    void ioPutToFileFromLocalSocket();
    void ioPutToFileFromProcess_data();
    void ioPutToFileFromProcess();
    void ioPutToFtpFromFile_data();
    void ioPutToFtpFromFile();
    void ioPutToHttpFromFile_data();
    void ioPutToHttpFromFile();
    void ioPostToHttpFromFile_data();
    void ioPostToHttpFromFile();
#ifndef QT_NO_NETWORKPROXY
    void ioPostToHttpFromSocket_data();
    void ioPostToHttpFromSocket();
    void ioPostToHttpFromSocketSynchronous();
    void ioPostToHttpFromSocketSynchronous_data();
#endif // !QT_NO_NETWORKPROXY
    void ioPostToHttpFromMiddleOfFileToEnd();
    void ioPostToHttpFromMiddleOfFileFiveBytes();
    void ioPostToHttpFromMiddleOfQBufferFiveBytes();
    void ioPostToHttpNoBufferFlag();
    void ioPostToHttpUploadProgress();
    void emitAllUploadProgressSignals();
    void ioPostToHttpEmptyUploadProgress();

    void lastModifiedHeaderForFile();
    void lastModifiedHeaderForHttp();

    void httpCanReadLine();

#ifdef QT_BUILD_INTERNAL
    void rateControl_data();
    void rateControl();
#endif

    void downloadProgress_data();
    void downloadProgress();
#ifdef QT_BUILD_INTERNAL
    void uploadProgress_data();
    void uploadProgress();
#endif

    void chaining_data();
    void chaining();

    void receiveCookiesFromHttp_data();
    void receiveCookiesFromHttp();
    void receiveCookiesFromHttpSynchronous_data();
    void receiveCookiesFromHttpSynchronous();
    void sendCookies_data();
    void sendCookies();
    void sendCookiesSynchronous_data();
    void sendCookiesSynchronous();

    void nestedEventLoops();

#ifndef QT_NO_NETWORKPROXY
    void httpProxyCommands_data();
    void httpProxyCommands();
    void httpProxyCommandsSynchronous_data();
    void httpProxyCommandsSynchronous();
    void proxyChange();
#endif // !QT_NO_NETWORKPROXY
    void authorizationError_data();
    void authorizationError();

    void httpConnectionCount();

    void httpReUsingConnectionSequential_data();
    void httpReUsingConnectionSequential();
    void httpReUsingConnectionFromFinishedSlot_data();
    void httpReUsingConnectionFromFinishedSlot();

    void httpRecursiveCreation();

#ifndef QT_NO_SSL
    void ioPostToHttpsUploadProgress();
    void ignoreSslErrorsList_data();
    void ignoreSslErrorsList();
    void ignoreSslErrorsListWithSlot_data();
    void ignoreSslErrorsListWithSlot();
    void encrypted();
    void sslConfiguration_data();
    void sslConfiguration();
#ifdef QT_BUILD_INTERNAL
    void sslSessionSharing_data();
    void sslSessionSharing();
    void sslSessionSharingFromPersistentSession_data();
    void sslSessionSharingFromPersistentSession();
#endif
#endif

    void getAndThenDeleteObject_data();
    void getAndThenDeleteObject();

    void symbianOpenCDataUrlCrash();

    void getFromHttpIntoBuffer_data();
    void getFromHttpIntoBuffer();
    void getFromHttpIntoBuffer2_data();
    void getFromHttpIntoBuffer2();
    void getFromHttpIntoBufferCanReadLine();

    void ioGetFromHttpWithoutContentLength();

    void ioGetFromHttpBrokenChunkedEncoding();
    void qtbug12908compressedHttpReply();
    void compressedHttpReplyBrokenGzip();

    void getFromUnreachableIp();

    void qtbug4121unknownAuthentication();

    void qtbug13431replyThrottling();

    void httpWithNoCredentialUsage();

    void qtbug15311doubleContentLength();

    void qtbug18232gzipContentLengthZero();
    void qtbug22660gzipNoContentLengthEmptyContent();

    void qtbug27161httpHeaderMayBeDamaged_data();
    void qtbug27161httpHeaderMayBeDamaged();

    void qtbug28035browserDoesNotLoadQtProjectOrgCorrectly();

    void qtbug45581WrongReplyStatusCode();

    void synchronousRequest_data();
    void synchronousRequest();
#ifndef QT_NO_SSL
    void synchronousRequestSslFailure();
#endif

    void httpAbort();

    void dontInsertPartialContentIntoTheCache();

    void httpUserAgent();
#ifndef QT_NO_NETWORKPROXY
    void authenticationCacheAfterCancel_data();
    void authenticationCacheAfterCancel();
    void authenticationWithDifferentRealm();
#endif // !QT_NO_NETWORKPROXY
    void synchronousAuthenticationCache();
    void pipelining();

    void closeDuringDownload_data();
    void closeDuringDownload();

    void ftpAuthentication_data();
    void ftpAuthentication();

    void emitErrorForAllReplies(); // QTBUG-36890

#ifdef QT_BUILD_INTERNAL
    void backgroundRequest_data();
    void backgroundRequest();
    void backgroundRequestInterruption_data();
    void backgroundRequestInterruption();
    void backgroundRequestConnectInBackground_data();
    void backgroundRequestConnectInBackground();
#endif

    void putWithRateLimiting();

    void ioHttpSingleRedirect();
    void ioHttpChangeMaxRedirects();
    void ioHttpRedirectErrors_data();
    void ioHttpRedirectErrors();
    void ioHttpRedirectPolicy_data();
    void ioHttpRedirectPolicy();
    void ioHttpRedirectPolicyErrors_data();
    void ioHttpRedirectPolicyErrors();
    void ioHttpUserVerifiedRedirect_data();
    void ioHttpUserVerifiedRedirect();
    void ioHttpCookiesDuringRedirect();
    void ioHttpRedirect_data();
    void ioHttpRedirect();
    void ioHttpRedirectFromLocalToRemote();
    void ioHttpRedirectPostPut_data();
    void ioHttpRedirectPostPut();
    void ioHttpRedirectMultipartPost_data();
    void ioHttpRedirectMultipartPost();
    void ioHttpRedirectDelete();
    void ioHttpRedirectCustom();
#ifndef QT_NO_SSL
    void putWithServerClosingConnectionImmediately();
#endif

    // NOTE: This test must be last!
    void parentingRepliesToTheApp();
private:
    void cleanupTestData();

    QString testDataDir;
    bool notEnoughDataForFastSender;
};


// Limited support for POST and PUT.
class MiniHttpServer : public QTcpServer
{
	Q_OBJECT
public:
	QPointer<QTcpSocket> client; // always the last one that was received
	QByteArray dataToTransmit;
	QByteArray receivedData;
	QSemaphore ready;
	bool doClose;
	bool doSsl;
	bool ipv6;
	bool multiple;
	int totalConnections;

	bool hasContent = false;
	int contentRead = 0;
	int contentLength = 0;

	MiniHttpServer(const QByteArray &data, bool ssl = false, QThread *thread = 0, bool useipv6 = false)
		: dataToTransmit(data), doClose(true), doSsl(ssl), ipv6(useipv6),
		multiple(false), totalConnections(0)
	{
		if (useipv6) {
			if (!listen(QHostAddress::AnyIPv6))
				qWarning() << "listen() IPv6 failed" << errorString();
		}
		else {
			if (!listen(QHostAddress::AnyIPv4))
				qWarning() << "listen() IPv4 failed" << errorString();
		}
		if (thread) {
			connect(thread, SIGNAL(started()), this, SLOT(threadStartedSlot()));
			moveToThread(thread);
			thread->start();
			ready.acquire();
		}
	}

	void setDataToTransmit(const QByteArray &data)
	{
		dataToTransmit = data;
	}

protected:
	void incomingConnection(qintptr socketDescriptor)
	{
		//qDebug() << "incomingConnection" << socketDescriptor << "doSsl:" << doSsl << "ipv6:" << ipv6;
#ifndef QT_NO_SSL
		if (doSsl) {
			QSslSocket *serverSocket = new QSslSocket(this);
			if (!serverSocket->setSocketDescriptor(socketDescriptor)) {
				delete serverSocket;
				return;
			}
			connect(serverSocket, SIGNAL(sslErrors(QList<QSslError>)), this, SLOT(slotSslErrors(QList<QSslError>)));
			// connect(serverSocket, &QSslSocket::encrypted, this, &SslServer::ready); ?
			setupSslServer(serverSocket);
			client = serverSocket;
		}
		else
#endif
		{
			client = new QTcpSocket;
			client->setSocketDescriptor(socketDescriptor);
		}
		connectSocketSignals();
		client->setParent(this);
		++totalConnections;
	}

	virtual void reply()
	{
		Q_ASSERT(!client.isNull());
		// we need to emulate the bytesWrittenSlot call if the data is empty.
		if (dataToTransmit.size() == 0) {
			emit client->bytesWritten(0);
		}
		else {
			client->write(dataToTransmit);
			// FIXME: For SSL connections, if we don't flush the socket, the
			// client never receives the data and since we're doing a disconnect
			// immediately afterwards, it causes a RemoteHostClosedError for the
			// client
			client->flush();
		}
	}
private:
	void connectSocketSignals()
	{
		Q_ASSERT(!client.isNull());
		//qDebug() << "connectSocketSignals" << client;
		connect(client.data(), SIGNAL(readyRead()), this, SLOT(readyReadSlot()));
		connect(client.data(), SIGNAL(bytesWritten(qint64)), this, SLOT(bytesWrittenSlot()));
		connect(client.data(), SIGNAL(error(QAbstractSocket::SocketError)),
			this, SLOT(slotError(QAbstractSocket::SocketError)));
	}

	void parseContentLength()
	{
		int index = receivedData.indexOf("Content-Length:");
		index += sizeof("Content-Length:") - 1;
		const auto end = std::find(receivedData.cbegin() + index, receivedData.cend(), '\r');
		auto num = receivedData.mid(index, std::distance(receivedData.cbegin() + index, end));
		bool ok;
		contentLength = num.toInt(&ok);
		if (!ok)
			contentLength = -1;
	}

private slots:
#ifndef QT_NO_SSL
	void slotSslErrors(const QList<QSslError>& errors)
	{
		QTcpSocket *currentClient = qobject_cast<QTcpSocket *>(sender());
		Q_ASSERT(currentClient);
		qDebug() << "slotSslErrors" << currentClient->errorString() << errors;
	}
#endif
	void slotError(QAbstractSocket::SocketError err)
	{
		QTcpSocket *currentClient = qobject_cast<QTcpSocket *>(sender());
		Q_ASSERT(currentClient);
		qDebug() << "slotError" << err << currentClient->errorString();
	}

public slots:
	void readyReadSlot()
	{
		QTcpSocket *currentClient = qobject_cast<QTcpSocket *>(sender());
		Q_ASSERT(currentClient);
		if (currentClient != client)
			client = currentClient;

		receivedData += client->readAll();
		const int doubleEndlPos = receivedData.indexOf("\r\n\r\n");

		if (doubleEndlPos != -1) {
			const int endOfHeader = doubleEndlPos + 4;
			hasContent = receivedData.startsWith("POST") || receivedData.startsWith("PUT");
			if (hasContent && contentLength == 0)
				parseContentLength();
			contentRead = receivedData.length() - endOfHeader;
			if (hasContent && contentRead < contentLength)
				return;

			// multiple requests incoming. remove the bytes of the current one
			if (multiple)
				receivedData.remove(0, endOfHeader);

			reply();
		}
	}

	void bytesWrittenSlot()
	{
		Q_ASSERT(!client.isNull());
		// Disconnect and delete in next cycle (else Windows clients will fail with RemoteHostClosedError).
		if (doClose && client->bytesToWrite() == 0) {
			disconnect(client, 0, this, 0);
			client->deleteLater();
		}
	}

	void threadStartedSlot()
	{
		ready.release();
	}
};




class DataReader: public QObject
{
    Q_OBJECT
public:
    qint64 totalBytes;
    QByteArray data;
    QIODevice *device;
    bool accumulate;
    DataReader(const QNetworkReplyPtr &dev, bool acc = true) : totalBytes(0), device(dev.data()), accumulate(acc)
    { connect(device, SIGNAL(readyRead()), SLOT(doRead()) ); }
    DataReader(QIODevice *dev, bool acc = true) : totalBytes(0), device(dev), accumulate(acc)
    {
        connect(device, SIGNAL(readyRead()), SLOT(doRead()));
    }

public slots:
    void doRead()
    {
        QByteArray buffer;
        buffer.resize(device->bytesAvailable());
        qint64 bytesRead = device->read(buffer.data(), device->bytesAvailable());
        if (bytesRead == -1) {
            QTestEventLoop::instance().exitLoop();
            return;
        }
        buffer.truncate(bytesRead);
        totalBytes += bytesRead;

        if (accumulate)
            data += buffer;
    }
};


class SocketPair: public QObject
{
    Q_OBJECT
public:
    QIODevice *endPoints[2];

    SocketPair(QObject *parent = 0)
        : QObject(parent)
    {
        endPoints[0] = endPoints[1] = 0;
    }

    bool create()
    {
        QTcpServer server;
        server.listen();

        QTcpSocket *active = new QTcpSocket(this);
        active->connectToHost("127.0.0.1", server.serverPort());

        // need more time as working with embedded
        // device and testing from emualtor
        // things tend to get slower
        if (!active->waitForConnected(1000))
            return false;

        if (!server.waitForNewConnection(1000))
            return false;

        QTcpSocket *passive = server.nextPendingConnection();
        passive->setParent(this);

        endPoints[0] = active;
        endPoints[1] = passive;
        return true;
    }
};

// A blocking tcp server (must be used in a thread) which supports SSL.
class BlockingTcpServer : public QTcpServer
{
    Q_OBJECT
public:
    BlockingTcpServer(bool ssl) : doSsl(ssl), sslSocket(0) {}

    QTcpSocket* waitForNextConnectionSocket()
    {
        waitForNewConnection(-1);
        if (doSsl) {
            if (!sslSocket)
                qFatal("%s: sslSocket should not be null after calling waitForNewConnection()",
                       Q_FUNC_INFO);
            return sslSocket;
        } else {
            //qDebug() << "returning nextPendingConnection";
            return nextPendingConnection();
        }
    }
    virtual void incomingConnection(qintptr socketDescriptor)
    {
#ifndef QT_NO_SSL
        if (doSsl) {
            QSslSocket *serverSocket = new QSslSocket;
            serverSocket->setParent(this);
            serverSocket->setSocketDescriptor(socketDescriptor);
            connect(serverSocket, SIGNAL(sslErrors(QList<QSslError>)), this, SLOT(slotSslErrors(QList<QSslError>)));
            setupSslServer(serverSocket);
            sslSocket = serverSocket;
        } else
#endif
        {
            QTcpServer::incomingConnection(socketDescriptor);
        }
    }
private slots:

#ifndef QT_NO_SSL
    void slotSslErrors(const QList<QSslError>& errors)
    {
        qDebug() << "slotSslErrors" << sslSocket->errorString() << errors;
    }
#endif

private:
    const bool doSsl;
    QTcpSocket* sslSocket;
};

// This server tries to send data as fast as possible (like most servers)
// but it measures how fast it was able to send it, which shows at which
// rate the reader is processing the data.
class FastSender: public QThread
{
    Q_OBJECT
    QSemaphore ready;
    qint64 wantedSize;
    int port;
    enum Protocol { DebugPipe, ProvidedData };
    const Protocol protocol;
    const bool doSsl;
    const bool fillKernelBuffer;
public:
    int transferRate;
    QWaitCondition cond;

    QByteArray dataToTransmit;
    int dataIndex;

    // a server that sends debugpipe data
    FastSender(qint64 size)
        : wantedSize(size), port(-1), protocol(DebugPipe),
          doSsl(false), fillKernelBuffer(true), transferRate(-1),
          dataIndex(0)
    {
        start();
        ready.acquire();
    }

    // a server that sends the data provided at construction time, useful for HTTP
    FastSender(const QByteArray& data, bool https, bool fillBuffer, tst_QNetworkReply *listener = 0)
        : wantedSize(data.size()), port(-1), protocol(ProvidedData),
          doSsl(https), fillKernelBuffer(fillBuffer), transferRate(-1),
          dataToTransmit(data), dataIndex(0)
    {
        if (listener)
            connect(this, SIGNAL(notEnoughData()), listener, SLOT(notEnoughData()));
        start();
        ready.acquire();
    }

    inline int serverPort() const { return port; }

    int writeNextData(QTcpSocket* socket, qint32 size)
    {
        if (protocol == DebugPipe) {
            QByteArray data;
            QDataStream stream(&data, QIODevice::WriteOnly);
            stream << QVariantMap() << QByteArray(size, 'a');
            socket->write((char*)&size, sizeof size);
            socket->write(data);
            dataIndex += size;
            return size;
        } else {
            const QByteArray data = dataToTransmit.mid(dataIndex, size);
            socket->write(data);
            dataIndex += data.size();
            //qDebug() << "wrote" << dataIndex << "/" << dataToTransmit.size();
            return data.size();
        }
    }
    void writeLastData(QTcpSocket* socket)
    {
        if (protocol == DebugPipe) {
            QByteArray data;
            QDataStream stream(&data, QIODevice::WriteOnly);
            stream << QVariantMap() << QByteArray();
            const qint32 size = data.size();
            socket->write((char*)&size, sizeof size);
            socket->write(data);
        }
    }

protected:
    void run()
    {
        BlockingTcpServer server(doSsl);
        server.listen();
        port = server.serverPort();
        ready.release();

        QTcpSocket *client = server.waitForNextConnectionSocket();

        // get the "request" packet
        if (!client->waitForReadyRead(2000)) {
            qDebug() << "FastSender:" << client->error() << "waiting for \"request\" packet";
            return;
        }
        client->readAll();      // we're not interested in the actual contents (e.g. HTTP request)

        enum { BlockSize = 1024 };

        if (fillKernelBuffer) {

            // write a bunch of bytes to fill up the buffers
            bool done = false;
            do {
                if (writeNextData(client, BlockSize) < BlockSize) {
                    qDebug() << "ERROR: FastSender: not enough data to write in order to fill buffers; or client is reading too fast";
                    emit notEnoughData();
                    return;
                }
                while (client->bytesToWrite() > 0) {
                    if (!client->waitForBytesWritten(0)) {
                        done = true;
                        break;
                    }
                }
                //qDebug() << "Filling kernel buffer: wrote" << dataIndex << "bytes";
            } while (!done);

            qDebug() << "FastSender: ok, kernel buffer is full after writing" << dataIndex << "bytes";
        }

        // Tell the client to start reading
        emit dataReady();

        // the kernel buffer is full
        // clean up QAbstractSocket's residue:
        while (client->bytesToWrite() > 0) {
            qDebug() << "Still having" << client->bytesToWrite() << "bytes to write, doing that now";
            if (!client->waitForBytesWritten(10000)) {
                qDebug() << "ERROR: FastSender:" << client->error() << "cleaning up residue";
                return;
            }
        }

        // now write in "blocking mode", this is where the rate measuring starts
        QTime timer;
        timer.start();
        //const qint64 writtenBefore = dataIndex;
        //qint64 measuredTotalBytes = wantedSize - writtenBefore;
        qint64 measuredSentBytes = 0;
        while (dataIndex < wantedSize) {
            const int remainingBytes = wantedSize - measuredSentBytes;
            const int bytesToWrite = qMin(remainingBytes, static_cast<int>(BlockSize));
            if (bytesToWrite <= 0)
                qFatal("%s: attempt to write %d bytes", Q_FUNC_INFO, bytesToWrite);
            measuredSentBytes += writeNextData(client, bytesToWrite);

            while (client->bytesToWrite() > 0) {
                if (!client->waitForBytesWritten(10000)) {
                    qDebug() << "ERROR: FastSender:" << client->error() << "during blocking write";
                    return;
                }
            }
            /*qDebug() << "FastSender:" << bytesToWrite << "bytes written now;"
                     << measuredSentBytes << "measured bytes" << measuredSentBytes + writtenBefore << "total ("
                     << measuredSentBytes*100/measuredTotalBytes << "% complete);"
                     << timer.elapsed() << "ms elapsed";*/
        }

        transferRate = measuredSentBytes * 1000 / timer.elapsed();
        qDebug() << "FastSender: flushed" << measuredSentBytes << "bytes in" << timer.elapsed() << "ms: rate =" << transferRate << "B/s";

        // write a "close connection" packet, if the protocol needs it
        writeLastData(client);
    }
signals:
    void dataReady();
    void notEnoughData();
};

class RateControlledReader: public QObject
{
    Q_OBJECT
    QIODevice *device;
    int bytesToRead;
    int interval;
    int readBufferSize;
public:
    QByteArray data;
    qint64 totalBytesRead;
    RateControlledReader(QObject& senderObj, QIODevice *dev, int kbPerSec, int maxBufferSize = 0)
        : device(dev), readBufferSize(maxBufferSize), totalBytesRead(0)
    {
        // determine how often we have to wake up
        int timesPerSecond;
        if (readBufferSize == 0) {
            // The requirement is simply "N KB per seconds"
            timesPerSecond = 20;
            bytesToRead = kbPerSec * 1024 / timesPerSecond;
        } else {
            // The requirement also includes "<readBufferSize> bytes at a time"
            bytesToRead = readBufferSize;
            timesPerSecond = kbPerSec * 1024 / readBufferSize;
        }
        interval = 1000 / timesPerSecond; // in ms

        qDebug() << "RateControlledReader: going to read" << bytesToRead
                 << "bytes every" << interval << "ms";
        qDebug() << "actual read rate will be"
                 << (bytesToRead * 1000 / interval) << "bytes/sec (wanted"
                 << kbPerSec * 1024 << "bytes/sec)";

        // Wait for data to be readyRead
        bool ok = connect(&senderObj, SIGNAL(dataReady()), this, SLOT(slotDataReady()));
        if (!ok)
            qFatal("%s: Cannot connect dataReady signal", Q_FUNC_INFO);
    }

    void wrapUp()
    {
        QByteArray someData = device->read(device->bytesAvailable());
        data += someData;
        totalBytesRead += someData.size();
        qDebug() << "wrapUp: found" << someData.size() << "bytes left. progress" << data.size();
        //qDebug() << "wrapUp: now bytesAvailable=" << device->bytesAvailable();
    }

private slots:
    void slotDataReady()
    {
        //qDebug() << "RateControlledReader: ready to go";
        startTimer(interval);
    }

protected:
    void timerEvent(QTimerEvent *)
    {
        //qDebug() << "RateControlledReader: timerEvent bytesAvailable=" << device->bytesAvailable();
        if (readBufferSize > 0 && device->bytesAvailable() > readBufferSize) {
            // This passes all the time, except in the final flush.
            //qFatal("%s: Too many bytes available", Q_FUNC_INFO);
        }

        qint64 bytesRead = 0;
        QTime stopWatch;
        stopWatch.start();
        do {
            if (device->bytesAvailable() == 0) {
                if (stopWatch.elapsed() > 20) {
                    qDebug() << "RateControlledReader: Not enough data available for reading, waited too much, timing out";
                    break;
                }
                if (!device->waitForReadyRead(5)) {
                    qDebug() << "RateControlledReader: Not enough data available for reading, even after waiting 5ms, bailing out";
                    break;
                }
            }
            QByteArray someData = device->read(bytesToRead - bytesRead);
            data += someData;
            bytesRead += someData.size();
            //qDebug() << "RateControlledReader: successfully read" << someData.size() << "progress:" << data.size();
        } while (bytesRead < bytesToRead);
        totalBytesRead += bytesRead;

        if (bytesRead < bytesToRead)
            qWarning() << "RateControlledReader: WARNING:" << bytesToRead - bytesRead << "bytes not read";
    }
};







class SlowReader : public QObject
{
    Q_OBJECT
public:
    SlowReader(QIODevice *dev)
        : device(dev)
    {
        connect(device, SIGNAL(readyRead()), this, SLOT(deviceReady()));
    }
private slots:
    void deviceReady()
    {
        QTimer::singleShot(100, this, SLOT(doRead()));
    }

    void doRead()
    {
        device->readAll();
    }
private:
    QIODevice *device;
};



class ProxyChangeHelper : public QObject
{
	Q_OBJECT
public:
	ProxyChangeHelper() : QObject(), signalCount(0) {};
public slots:
	void finishedSlot()
	{
		signalCount++;
		if (signalCount == 2)
			QMetaObject::invokeMethod(&QTestEventLoop::instance(), "exitLoop", Qt::QueuedConnection);
	}
private:
	int signalCount;
};


class HttpReUsingConnectionFromFinishedSlot : public QObject
{
    Q_OBJECT
public:
    QNetworkReply* reply1;
    QNetworkReply* reply2;
    QUrl url;
    QNetworkAccessManager manager;
public slots:
    void finishedSlot()
    {
        QVERIFY(!reply1->error());

        QFETCH(bool, doDeleteLater);
        if (doDeleteLater) {
            reply1->deleteLater();
            reply1 = 0;
        }

        // kick off 2nd request and exit the loop when it is done
        reply2 = manager.get(QNetworkRequest(url));
        reply2->setParent(this);
        connect(reply2, SIGNAL(finished()), &QTestEventLoop::instance(), SLOT(exitLoop()));
    }
};


class HttpRecursiveCreationHelper : public QObject
{
    Q_OBJECT
public:

    HttpRecursiveCreationHelper():
            QObject(0),
            requestsStartedCount_finished(0),
            requestsStartedCount_readyRead(0),
            requestsFinishedCount(0)
    {
    }
    QNetworkAccessManager manager;
    int requestsStartedCount_finished;
    int requestsStartedCount_readyRead;
    int requestsFinishedCount;
public slots:
    void finishedSlot()
    {
        requestsFinishedCount++;

        QNetworkReply *reply = qobject_cast<QNetworkReply*>(sender());
        QVERIFY(!reply->error());
        QCOMPARE(reply->bytesAvailable(), 27906);

        if (requestsFinishedCount == 60) {
            QTestEventLoop::instance().exitLoop();
            return;
        }

        if (requestsStartedCount_finished < 30) {
            startOne();
            requestsStartedCount_finished++;
        }

        reply->deleteLater();
    }
    void readyReadSlot()
    {
        QNetworkReply *reply = qobject_cast<QNetworkReply*>(sender());
        QVERIFY(!reply->error());

        if (requestsStartedCount_readyRead < 30 && reply->bytesAvailable() > 27906/2) {
            startOne();
            requestsStartedCount_readyRead++;
        }
    }
    void startOne()
    {
        QUrl url = "http://" + QtNetworkSettings::serverName() + "/qtest/fluke.gif";
        QNetworkRequest request(url);
        QNetworkReply *reply = manager.get(request);
        reply->setParent(this);
        connect(reply, SIGNAL(finished()), this, SLOT(finishedSlot()));
        connect(reply, SIGNAL(readyRead()), this, SLOT(readyReadSlot()));
    }
};


// FIXME we really need to consolidate all those server implementations
class GetFromHttpIntoBuffer2Server : QObject
{
    Q_OBJECT
    qint64 dataSize;
    qint64 dataSent;
    QTcpServer server;
    QTcpSocket *client;
    bool serverSendsContentLength;
    bool chunkedEncoding;

public:
    GetFromHttpIntoBuffer2Server (qint64 ds, bool sscl, bool ce)
        : dataSize(ds), dataSent(0), client(0),
          serverSendsContentLength(sscl), chunkedEncoding(ce)
    {
        server.listen();
        connect(&server, SIGNAL(newConnection()), this, SLOT(newConnectionSlot()));
    }

    int serverPort() { return server.serverPort(); }

public slots:

    void newConnectionSlot()
    {
        client = server.nextPendingConnection();
        client->setParent(this);
        connect(client, SIGNAL(readyRead()), this, SLOT(readyReadSlot()));
        connect(client, SIGNAL(bytesWritten(qint64)), this, SLOT(bytesWrittenSlot(qint64)));
    }

    void readyReadSlot()
    {
        client->readAll();
        client->write("HTTP/1.0 200 OK\n");
        if (serverSendsContentLength)
            client->write(QString("Content-Length: " + QString::number(dataSize) + "\n").toLatin1());
        if (chunkedEncoding)
            client->write(QString("Transfer-Encoding: chunked\n").toLatin1());
        client->write("Connection: close\n\n");
    }

    void bytesWrittenSlot(qint64 amount)
    {
        Q_UNUSED(amount);
        if (dataSent == dataSize && client) {
            // close eventually

            // chunked encoding: we have to send a last "empty" chunk
            if (chunkedEncoding)
                client->write(QString("0\r\n\r\n").toLatin1());

            client->disconnectFromHost();
            server.close();
            client = 0;
            return;
        }

        // send data
        if (client && client->bytesToWrite() < 100*1024 && dataSent < dataSize) {
            qint64 amount = qMin(qint64(16*1024), dataSize - dataSent);
            QByteArray data(amount, '@');

            if (chunkedEncoding) {
                client->write(QByteArray::number(amount, 16).toUpper());
                client->write("\r\n");
                client->write(data.constData(), amount);
                client->write("\r\n");
            } else {
                client->write(data.constData(), amount);
            }

            dataSent += amount;
        }
    }
};

class GetFromHttpIntoBuffer2Client : QObject
{
    Q_OBJECT
private:
    bool useDownloadBuffer;
    QNetworkReply *reply;
    qint64 uploadSize;
    QList<qint64> bytesAvailableList;
public:
    GetFromHttpIntoBuffer2Client (QNetworkReply *reply, bool useDownloadBuffer, qint64 uploadSize)
        : useDownloadBuffer(useDownloadBuffer), reply(reply), uploadSize(uploadSize)
    {
        connect(reply, SIGNAL(metaDataChanged()), this, SLOT(metaDataChangedSlot()));
        connect(reply, SIGNAL(readyRead()), this, SLOT(readyReadSlot()));
        connect(reply, SIGNAL(finished()), this, SLOT(finishedSlot()));
    }

    public slots:
    void metaDataChangedSlot()
    {
        if (useDownloadBuffer) {
            QSharedPointer<char> sharedPointer = qvariant_cast<QSharedPointer<char> >(reply->attribute(QNetworkRequest::DownloadBufferAttribute));
            QVERIFY(!sharedPointer.isNull()); // It will be 0 if it failed
        }

        // metaDataChanged needs to come before everything else
        QVERIFY(bytesAvailableList.isEmpty());
    }

    void readyReadSlot()
    {
        QVERIFY(!reply->isFinished());

        qint64 bytesAvailable = reply->bytesAvailable();

        // bytesAvailable must never be 0
        QVERIFY(bytesAvailable != 0);

        if (bytesAvailableList.length() < 5) {
            // We assume that the first few times the bytes available must be less than the complete size, e.g.
            // the bytesAvailable() function works correctly in case of a downloadBuffer.
            QVERIFY(bytesAvailable < uploadSize);
        }
        if (!bytesAvailableList.isEmpty()) {
            // Also check that the same bytesAvailable is not coming twice in a row
            QVERIFY(bytesAvailableList.last() != bytesAvailable);
        }

        bytesAvailableList.append(bytesAvailable);
        // Add bytesAvailable to a list an parse
    }

    void finishedSlot()
    {
        // We should have already received all readyRead
        QVERIFY(!bytesAvailableList.isEmpty());
        QCOMPARE(bytesAvailableList.last(), uploadSize);
    }
};


class AuthenticationCacheHelper : public QObject
{
    Q_OBJECT
public:
    AuthenticationCacheHelper()
    {}
public slots:
    void proxyAuthenticationRequired(const QNetworkProxy &, QAuthenticator *auth)
    {
        if (!proxyPassword.isNull()) {
            auth->setUser(proxyUserName);
            auth->setPassword(proxyPassword);
            //clear credentials, if they are asked again, they were bad
            proxyUserName.clear();
            proxyPassword.clear();
        }
    }
    void authenticationRequired(QNetworkReply*,QAuthenticator *auth)
    {
        if (!httpPassword.isNull()) {
            auth->setUser(httpUserName);
            auth->setPassword(httpPassword);
            //clear credentials, if they are asked again, they were bad
            httpUserName.clear();
            httpPassword.clear();
        }
    }
public:
    QString httpUserName;
    QString httpPassword;
    QString proxyUserName;
    QString proxyPassword;
};


class QtBug13431Helper : public QObject
{
    Q_OBJECT
public:
    QNetworkReply* m_reply;
    QTimer m_dlTimer;
public slots:
    void replyFinished(QNetworkReply*) { QTestEventLoop::instance().exitLoop(); }

    void onReadAndReschedule()
    {
        const qint64 bytesReceived = m_reply->bytesAvailable();
        if (bytesReceived && m_reply->readBufferSize()) {
           QByteArray data = m_reply->read(bytesReceived);
           // reschedule read
           const int millisecDelay = static_cast<int>(bytesReceived * 1000 / m_reply->readBufferSize());
           m_dlTimer.start(millisecDelay);
        }
        else {
           // reschedule read
           m_dlTimer.start(200);
        }
    }
};


class QtBug27161Helper : public QObject
{
    Q_OBJECT
public:
    QtBug27161Helper(MiniHttpServer & server, const QByteArray & data):
        m_server(server),
        m_data(data)
    {
        connect(&m_server, SIGNAL(newConnection()), this, SLOT(newConnectionSlot()));
    }
public slots:
    void newConnectionSlot()
    {
        connect(m_server.client, SIGNAL(bytesWritten(qint64)), this, SLOT(bytesWrittenSlot()));
    }

    void bytesWrittenSlot()
    {
        disconnect(m_server.client, SIGNAL(bytesWritten(qint64)), this, SLOT(bytesWrittenSlot()));
        m_Timer.singleShot(100, this, SLOT(timeoutSlot()));
    }

    void timeoutSlot()
    {
        m_server.doClose = true;
        // we need to emulate the bytesWrittenSlot call if the data is empty.
        if (m_data.size() == 0)
            QMetaObject::invokeMethod(&m_server, "bytesWrittenSlot", Qt::QueuedConnection);
        else
            m_server.client->write(m_data);
    }

private:
    MiniHttpServer & m_server;
    QByteArray m_data;
    QTimer m_Timer;
};



class HttpAbortHelper : public QObject
{
    Q_OBJECT
public:
    HttpAbortHelper(QNetworkReply *parent)
    : QObject(parent)
    {
        mReply = parent;
        connect(parent, SIGNAL(readyRead()), this, SLOT(readyRead()));
    }

    ~HttpAbortHelper()
    {
    }

public slots:
    void readyRead()
    {
        mReply->abort();
        QMetaObject::invokeMethod(&QTestEventLoop::instance(), "exitLoop", Qt::QueuedConnection);
    }

private:
    QNetworkReply *mReply;
};



class RateLimitedUploadDevice : public QIODevice
{
    Q_OBJECT
public:
    QByteArray data;
    QBuffer buffer;
    qint64 read;
    qint64 bandwidthQuota;
    QTimer timer;

    RateLimitedUploadDevice(QByteArray d) : QIODevice(),data(d),read(0),bandwidthQuota(0)
    {
        buffer.setData(data);
        buffer.open(QIODevice::ReadOnly);
        timer.setInterval(200);
        QObject::connect(&timer, SIGNAL(timeout()), this, SLOT(timeoutSlot()));
        timer.start();
    }

    virtual qint64 writeData(const char* , qint64 )
    {
        Q_ASSERT(false);
        return 0;
    }

    virtual qint64 readData(char* data, qint64 maxlen)
    {
        //qDebug() << Q_FUNC_INFO << maxlen << bandwidthQuota;
        maxlen = qMin(maxlen, buffer.bytesAvailable());
        maxlen = qMin(maxlen, bandwidthQuota);
        if (maxlen <= 0) {  // no quota or at end
            return 0;
        }
        bandwidthQuota -= maxlen; // reduce quota

        qint64 ret = buffer.read(data, maxlen);
        if (ret == -1) {
            return -1;
        }
        read += ret;
        //qDebug() << Q_FUNC_INFO << maxlen << bandwidthQuota << read << ret << buffer.bytesAvailable();
        return ret;
    }
    virtual bool atEnd() const { return buffer.atEnd(); }
    virtual qint64 size() const { return data.length(); }
    qint64 bytesAvailable() const
    {
        return buffer.bytesAvailable() + QIODevice::bytesAvailable();
    }
    virtual bool isSequential() const { return false; } // random access, we can seek
    virtual bool seek (qint64 pos) { return buffer.seek(pos); }
protected slots:
    void timeoutSlot()
    {
        //qDebug() << Q_FUNC_INFO;
        bandwidthQuota = 8*1024; // fill quota
        emit readyRead();
        // Emitting readyRead() several times triggers a bug ("QIODevice::read: Called with maxSize < 0") we fix with this commit
        emit readyRead();
    }
};



#ifndef QT_NO_SSL
class SslServer : public QTcpServer
{
	Q_OBJECT
public:
	SslServer() : socket(0), m_ssl(true) {}
	void incomingConnection(qintptr socketDescriptor)
	{
		QSslSocket *serverSocket = new QSslSocket;
		serverSocket->setParent(this);

		if (serverSocket->setSocketDescriptor(socketDescriptor)) {
			connect(serverSocket, SIGNAL(readyRead()), this, SLOT(readyReadSlot()));
			if (!m_ssl) {
				emit newPlainConnection(serverSocket);
				return;
			}
			connect(serverSocket, SIGNAL(encrypted()), this, SLOT(encryptedSlot()));
			connect(serverSocket, SIGNAL(sslErrors(QList<QSslError>)), serverSocket, SLOT(ignoreSslErrors()));
			setupSslServer(serverSocket);
		}
		else {
			delete serverSocket;
		}
	}
signals:
	void newEncryptedConnection(QSslSocket *s);
	void newPlainConnection(QSslSocket *s);
public slots:
	void encryptedSlot()
	{
		socket = (QSslSocket*)sender();
		emit newEncryptedConnection(socket);
	}
	void readyReadSlot()
	{
		// for the incoming sockets, not the server socket
		//qDebug() << static_cast<QSslSocket*>(sender())->bytesAvailable() << static_cast<QSslSocket*>(sender())->encryptedBytesAvailable();
	}

public:
	QSslSocket *socket;
	bool m_ssl;
};

#endif


#ifndef QT_NO_SSL

class PutWithServerClosingConnectionImmediatelyHandler: public QObject
{
    Q_OBJECT
public:
    bool m_parsedHeaders;
    QByteArray m_receivedData;
    QByteArray m_expectedData;
    QSslSocket *m_socket;
    PutWithServerClosingConnectionImmediatelyHandler(QSslSocket *s, QByteArray expected) :m_parsedHeaders(false),  m_expectedData(expected), m_socket(s)
    {
        m_socket->setParent(this);
        connect(m_socket, SIGNAL(readyRead()), SLOT(readyReadSlot()));
        connect(m_socket, SIGNAL(disconnected()), SLOT(disconnectedSlot()));
    }
signals:
    void correctFileUploadReceived();
    void corruptFileUploadReceived();

public slots:
    void closeDelayed() { m_socket->close(); }

    void readyReadSlot()
    {
        QByteArray data = m_socket->readAll();
        m_receivedData += data;
        if (!m_parsedHeaders && m_receivedData.contains("\r\n\r\n")) {
            m_parsedHeaders = true;
            QTimer::singleShot(qrand()%60, this, SLOT(closeDelayed())); // simulate random network latency
            // This server simulates a web server connection closing, e.g. because of Apaches MaxKeepAliveRequests or KeepAliveTimeout
            // In this case QNAM needs to re-send the upload data but it had a bug which then corrupts the upload
            // This test catches that.
        }

    }
    void disconnectedSlot()
    {
        if (m_parsedHeaders) {
            //qDebug() << m_receivedData.left(m_receivedData.indexOf("\r\n\r\n"));
            m_receivedData = m_receivedData.mid(m_receivedData.indexOf("\r\n\r\n")+4); // check only actual data
        }
        if (m_receivedData.length() > 0 && !m_expectedData.startsWith(m_receivedData)) {
            // We had received some data but it is corrupt!
            qDebug() << "CORRUPT" << m_receivedData.count();

#if 0 // Use this to track down the pattern of the corruption and conclude the source
            QFile a("/tmp/corrupt");
            a.open(QIODevice::WriteOnly);
            a.write(m_receivedData);
            a.close();

            QFile b("/tmp/correct");
            b.open(QIODevice::WriteOnly);
            b.write(m_expectedData);
            b.close();
            //exit(1);
#endif
            emit corruptFileUploadReceived();
        } else {
            emit correctFileUploadReceived();
        }
    }
};

class PutWithServerClosingConnectionImmediatelyServer: public SslServer
{
    Q_OBJECT
public:
    int m_correctUploads;
    int m_corruptUploads;
    int m_repliesFinished;
    int m_expectedReplies;
    QByteArray m_expectedData;
    PutWithServerClosingConnectionImmediatelyServer()
        : SslServer(), m_correctUploads(0), m_corruptUploads(0),
          m_repliesFinished(0), m_expectedReplies(0)
    {
        QObject::connect(this, SIGNAL(newEncryptedConnection(QSslSocket*)), this, SLOT(createHandlerForConnection(QSslSocket*)));
        QObject::connect(this, SIGNAL(newPlainConnection(QSslSocket*)), this, SLOT(createHandlerForConnection(QSslSocket*)));
    }

public slots:
    void createHandlerForConnection(QSslSocket* s)
    {
        PutWithServerClosingConnectionImmediatelyHandler *handler = new PutWithServerClosingConnectionImmediatelyHandler(s, m_expectedData);
        handler->setParent(this);
        QObject::connect(handler, SIGNAL(correctFileUploadReceived()), this, SLOT(increaseCorrect()));
        QObject::connect(handler, SIGNAL(corruptFileUploadReceived()), this, SLOT(increaseCorrupt()));
    }
    void increaseCorrect() { m_correctUploads++; }
    void increaseCorrupt() { m_corruptUploads++; }
    void replyFinished()
    {
        m_repliesFinished++;
        if (m_repliesFinished == m_expectedReplies) {
            QTestEventLoop::instance().exitLoop();
        }
     }
};




#endif

