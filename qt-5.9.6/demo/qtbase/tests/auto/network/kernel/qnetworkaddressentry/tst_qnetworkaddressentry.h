#pragma once


#include <QtTest/QtTest>
#include <qcoreapplication.h>
#include <qnetworkinterface.h>

Q_DECLARE_METATYPE(QHostAddress)

class tst_QNetworkAddressEntry: public QObject
{
    Q_OBJECT
private slots:
    void getSetCheck();
    void prefixAndNetmask_data();
    void prefixAndNetmask();
};

