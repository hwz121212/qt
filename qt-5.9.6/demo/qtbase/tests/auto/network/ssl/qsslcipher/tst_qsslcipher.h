#pragma once



#include <QtTest/QtTest>
#include <qsslcipher.h>

#include <QtNetwork/qhostaddress.h>
#include <QtNetwork/qnetworkproxy.h>

class tst_QSslCipher : public QObject
{
    Q_OBJECT

#ifndef QT_NO_SSL

private slots:
    void constructing();

#endif // QT_NO_SSL
};
