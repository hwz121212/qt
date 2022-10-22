#pragma once


#include <QtTest/QtTest>
#include <QtNetwork/QDnsLookup>
#include <QtNetwork/QHostAddress>

static const int Timeout = 15000; // 15s

class tst_QDnsLookup: public QObject
{
    Q_OBJECT

    QString domainName(const QString &input);
    QString domainNameList(const QString &input);
    QStringList domainNameListAlternatives(const QString &input);
public slots:
    void initTestCase();

private slots:
    void lookup_data();
    void lookup();
    void lookupReuse();
    void lookupAbortRetry();
};

