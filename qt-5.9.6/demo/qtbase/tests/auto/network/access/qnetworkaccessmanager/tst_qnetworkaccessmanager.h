#pragma once

#include <QtTest/QtTest>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#ifndef QT_NO_BEARERMANAGEMENT
#include <QtNetwork/QNetworkConfigurationManager>
#endif

#include <QtCore/QDebug>

#ifndef QT_NO_BEARERMANAGEMENT
Q_DECLARE_METATYPE(QNetworkAccessManager::NetworkAccessibility)
#endif

class tst_QNetworkAccessManager : public QObject
{
    Q_OBJECT

public:
    tst_QNetworkAccessManager();

private slots:
    void networkAccessible();
    void alwaysCacheRequest();
};

