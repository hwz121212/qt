#pragma once


#include <QtTest/QtTest>
#include <QtCore/QUrl>
#include <QtNetwork/QNetworkCookie>


class tst_QNetworkCookie: public QObject
{
    Q_OBJECT

private slots:
    void getterSetter();

    void parseSingleCookie_data();
    void parseSingleCookie();

    void parseMultipleCookies_data();
    void parseMultipleCookies();
};

