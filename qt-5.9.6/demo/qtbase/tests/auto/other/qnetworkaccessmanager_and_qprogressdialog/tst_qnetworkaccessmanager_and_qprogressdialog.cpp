#include "tst_qnetworkaccessmanager_and_qprogressdialog.h"


#include "../../network-settings.h"

tst_QNetworkAccessManager_And_QProgressDialog::tst_QNetworkAccessManager_And_QProgressDialog()
{
}

void tst_QNetworkAccessManager_And_QProgressDialog::initTestCase()
{
    if (!QtNetworkSettings::verifyTestNetworkSettings())
        QSKIP("No network test server available");
}

void tst_QNetworkAccessManager_And_QProgressDialog::downloadCheck_data()
{
    QTest::addColumn<bool>("useZeroCopy");
    QTest::newRow("with-zeroCopy") << true;
    QTest::newRow("without-zeroCopy") << false;
}

void tst_QNetworkAccessManager_And_QProgressDialog::downloadCheck()
{
    QFETCH(bool, useZeroCopy);

    DownloadCheckWidget widget;
    widget.zeroCopy = useZeroCopy;
    widget.show();
    // run and exit on finished()
    QTestEventLoop::instance().enterLoop(10);
    QVERIFY(!QTestEventLoop::instance().timeout());
    // run some more to catch the late readyRead() (or: to not catch it)
    QTestEventLoop::instance().enterLoop(1);
    QVERIFY(QTestEventLoop::instance().timeout());
    // the following fails when a readyRead() was received after finished()
    QVERIFY(!widget.lateReadyRead);
}




void DownloadCheckWidget::go()
{
	QNetworkRequest request(QUrl("http://" + QtNetworkSettings::serverName() + "/qtest/bigfile"));
	if (zeroCopy)
		request.setAttribute(QNetworkRequest::MaximumDownloadBufferSizeAttribute, 10 * 1024 * 1024);

	QNetworkReply *reply = netmanager.get(
		QNetworkRequest(
			QUrl("http://" + QtNetworkSettings::serverName() + "/qtest/bigfile")
		));
	connect(reply, SIGNAL(downloadProgress(qint64, qint64)),
		this, SLOT(dataReadProgress(qint64, qint64)));
	connect(reply, SIGNAL(readyRead()),
		this, SLOT(dataReadyRead()));
	connect(reply, SIGNAL(finished()), this, SLOT(finishedFromReply()));

	progressDlg.exec();
}


QTEST_MAIN(tst_QNetworkAccessManager_And_QProgressDialog)

