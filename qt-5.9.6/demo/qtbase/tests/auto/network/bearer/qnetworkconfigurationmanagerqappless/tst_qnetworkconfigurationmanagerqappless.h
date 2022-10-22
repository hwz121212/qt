#pragma once

#include <QtTest/QtTest>
#include <QtNetwork/qnetworkaccessmanager.h>

QT_USE_NAMESPACE

class tst_QNetworkConfigurationManager : public QObject
{
    Q_OBJECT

private slots:
    void staticsInitialization();
};

