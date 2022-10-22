#pragma once

#include <QNetworkDatagram>
#include <QtTest>
#include <QCoreApplication>

class tst_QNetworkDatagram : public QObject
{
    Q_OBJECT

public:
    tst_QNetworkDatagram();

private Q_SLOTS:
    void getSetCheck();
    void makeReply_data();
    void makeReply();
};

