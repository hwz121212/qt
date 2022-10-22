#pragma once

#include <QtCore/QCoreApplication>
#include <QtNetwork/QDnsLookup>
#include <QtTest/QtTest>

class tst_QDnsLookup_Appless : public QObject
{
    Q_OBJECT

private slots:
    void noApplication();
    void recreateApplication();
    void destroyApplicationDuringLookup();
};

