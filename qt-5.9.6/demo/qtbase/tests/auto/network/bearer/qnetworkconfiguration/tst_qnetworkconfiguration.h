#pragma once

#include <QtTest/QtTest>
#include "../qbearertestcommon.h"

#ifndef QT_NO_BEARERMANAGEMENT
#include <QtNetwork/qnetworkconfiguration.h>
#include <QtNetwork/qnetworkconfigmanager.h>
#endif

/*
  Although this unit test doesn't use QNetworkAccessManager
  this include is used to ensure that bearer continues to compile against
  Qt 4.7+ which has a QNetworkConfiguration enabled QNetworkAccessManager
*/
#include <QNetworkAccessManager>

QT_USE_NAMESPACE

class tst_QNetworkConfiguration : public QObject
{
    Q_OBJECT

private slots:
#ifndef QT_NO_BEARERMANAGEMENT
    void invalidPoint();
    void comparison();
    void children();
    void isRoamingAvailable();
    void connectTimeout();
#endif
};

