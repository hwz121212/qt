#pragma once


#include <QDomDocument>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTimer>
#include <QtDebug>
#include <QtTest/QtTest>
#include <QXmlDefaultHandler>
#include <QXmlInputSource>
#include <QXmlSimpleReader>

class tst_QXmlInputSource : public QObject
{
    Q_OBJECT

private slots:
    void reset() const;
    void resetSimplified() const;
    void waitForReadyIODevice() const;
    void inputFromSlowDevice() const;
};



class ServerAndClient : public QObject
{
	Q_OBJECT

public:
	ServerAndClient(QEventLoop &ev) : success(false)
		, eventLoop(ev)
		, bodyBytesRead(0)
		, bodyLength(-1)
		, isBody(false)
	{
		setObjectName("serverAndClient");
		tcpServer = new QTcpServer(this);
		connect(tcpServer, SIGNAL(newConnection()), this, SLOT(newConnection()));
		tcpServer->listen(QHostAddress::LocalHost, 1088);
		httpClient = new QNetworkAccessManager(this);
		connect(httpClient, SIGNAL(finished(QNetworkReply*)), SLOT(requestFinished(QNetworkReply*)));
	}

	bool success;
	QEventLoop &eventLoop;

public slots:
	void doIt()
	{
		QUrl url("http://127.0.0.1:1088");
		QNetworkRequest req(url);
		req.setRawHeader("POST", url.path().toLatin1());
		req.setRawHeader("user-agent", "xml-test");
		req.setRawHeader("keep-alive", "false");
		req.setRawHeader("host", url.host().toLatin1());

		QByteArray xmlrpc("<methodCall>\r\n\
                <methodName>SFD.GetVersion</methodName>\r\n\
                <params/>\r\n\
                </methodCall>");
		req.setHeader(QNetworkRequest::ContentLengthHeader, xmlrpc.size());
		req.setHeader(QNetworkRequest::ContentTypeHeader, "text/xml");

		httpClient->post(req, xmlrpc);
	}

	void requestFinished(QNetworkReply *reply)
	{
		QCOMPARE(reply->error(), QNetworkReply::NoError);
		reply->deleteLater();
	}

private slots:
	void newConnection()
	{
		QTcpSocket *const s = tcpServer->nextPendingConnection();

		if (s)
			connect(s, SIGNAL(readyRead()), this, SLOT(readyRead()));
	}

	void readyRead()
	{
		QTcpSocket *const s = static_cast<QTcpSocket *>(sender());

		while (s->bytesAvailable())
		{
			const QString line(s->readLine());

			if (line.startsWith("Content-Length:"))
				bodyLength = line.mid(15).toInt();

			if (isBody)
			{
				body.append(line);
				bodyBytesRead += line.length();
			}
			else if (line == "\r\n")
			{
				isBody = true;
				if (bodyLength == -1)
				{
					qFatal("No length was specified in the header.");
				}
			}
		}

		if (bodyBytesRead == bodyLength)
		{
			QDomDocument domDoc;
			success = domDoc.setContent(body);
			eventLoop.exit();
		}
	}

private:
	QByteArray body;
	int bodyBytesRead, bodyLength;
	bool isBody;
	QTcpServer *tcpServer;
	QNetworkAccessManager* httpClient;
};

