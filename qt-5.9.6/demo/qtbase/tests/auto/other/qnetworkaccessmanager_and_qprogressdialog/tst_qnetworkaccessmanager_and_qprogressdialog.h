#pragma once


#include <QtTest/QtTest>
#include <QtGui>
#include <QtWidgets>
#include <QtCore>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <qdebug.h>




class tst_QNetworkAccessManager_And_QProgressDialog : public QObject
{
	Q_OBJECT
public:
	tst_QNetworkAccessManager_And_QProgressDialog();
private slots:
	void initTestCase();
	void downloadCheck();
	void downloadCheck_data();
};

class DownloadCheckWidget : public QWidget
{
	Q_OBJECT
public:
	DownloadCheckWidget(QWidget *parent = 0) :
		QWidget(parent), lateReadyRead(true), zeroCopy(false),
		progressDlg(this), netmanager(this)
	{
		progressDlg.setRange(1, 100);
		QMetaObject::invokeMethod(this, "go", Qt::QueuedConnection);
	}
	bool lateReadyRead;
	bool zeroCopy;
public slots:
	void go();

	void dataReadProgress(qint64 done, qint64 total)
	{
		QNetworkReply *reply = qobject_cast<QNetworkReply *>(sender());
		Q_UNUSED(reply);
		progressDlg.setMaximum(total);
		progressDlg.setValue(done);
	}
	void dataReadyRead()
	{
		QNetworkReply *reply = qobject_cast<QNetworkReply *>(sender());
		Q_UNUSED(reply);
		lateReadyRead = true;
	}
	void finishedFromReply()
	{
		QNetworkReply *reply = qobject_cast<QNetworkReply *>(sender());
		lateReadyRead = false;
		reply->deleteLater();
		QTestEventLoop::instance().exitLoop();
	}

private:
	QProgressDialog progressDlg;
	QNetworkAccessManager netmanager;
};


