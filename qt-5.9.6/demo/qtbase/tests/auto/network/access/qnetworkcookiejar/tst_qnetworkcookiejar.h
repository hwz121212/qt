#pragma once


#include <QtTest/QtTest>
#include <QtCore/QJsonArray>
#include <QtCore/QJsonDocument>
#include <QtCore/QJsonObject>
#include <QtCore/QJsonValue>
#include <QtNetwork/QNetworkCookieJar>
#include <QtNetwork/QNetworkCookie>
#include <QtNetwork/QNetworkRequest>
#include "private/qtldurl_p.h"

class tst_QNetworkCookieJar: public QObject
{
    Q_OBJECT

private slots:
    void getterSetter();
    void setCookiesFromUrl_data();
    void setCookiesFromUrl();
    void cookiesForUrl_data();
    void cookiesForUrl();
#ifdef QT_BUILD_INTERNAL
    void effectiveTLDs_data();
    void effectiveTLDs();
#endif
    void rfc6265_data();
    void rfc6265();
};

