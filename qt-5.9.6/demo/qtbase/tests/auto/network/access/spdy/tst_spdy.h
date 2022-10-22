#pragma once


#include <QtTest/QtTest>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QHttpPart>
#include <QtNetwork/QHttpMultiPart>
#include <QtNetwork/QNetworkProxy>
#include <QtNetwork/QAuthenticator>
#if defined(QT_BUILD_INTERNAL) && !defined(QT_NO_OPENSSL)
#include <QtNetwork/private/qsslsocket_openssl_p.h>
#endif // QT_BUILD_INTERNAL && !QT_NO_OPENSSL

#include "../../../network-settings.h"

Q_DECLARE_METATYPE(QAuthenticator*)

class tst_Spdy: public QObject
{
    Q_OBJECT

public:
    tst_Spdy();
    ~tst_Spdy();

private Q_SLOTS:
    void initTestCase();
    void settingsAndNegotiation_data();
    void settingsAndNegotiation();
#ifndef QT_NO_NETWORKPROXY
    void download_data();
    void download();
#endif // !QT_NO_NETWORKPROXY
    void headerFields();
#ifndef QT_NO_NETWORKPROXY
    void upload_data();
    void upload();
    void errors_data();
    void errors();
#endif // !QT_NO_NETWORKPROXY
    void multipleRequests_data();
    void multipleRequests();

private:
    QNetworkAccessManager m_manager;
    int m_multipleRequestsCount;
    int m_multipleRepliesFinishedCount;
    const QString m_rfc3252FilePath;

protected Q_SLOTS:
    void proxyAuthenticationRequired(const QNetworkProxy &, QAuthenticator *authenticator);
    void multipleRequestsFinishedSlot();
};

