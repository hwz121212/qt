#pragma once


#include <QtTest/QtTest>
#include <QtCore/QUrl>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkCookie>

Q_DECLARE_METATYPE(QNetworkRequest::KnownHeaders)

class tst_QNetworkRequest: public QObject
{
    Q_OBJECT

private slots:
    void ctor_data();
    void ctor();
    void setUrl_data();
    void setUrl();
    void setRawHeader_data();
    void setRawHeader();
    void rawHeaderList_data();
    void rawHeaderList();
    void setHeader_data();
    void setHeader();
    void rawHeaderParsing_data();
    void rawHeaderParsing();
    void originatingObject();

    void removeHeader();
};

