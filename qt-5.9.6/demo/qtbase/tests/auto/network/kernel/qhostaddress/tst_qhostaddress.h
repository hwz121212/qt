#pragma once

#include <qcoreapplication.h>
#include <QtTest/QtTest>
#include <qhostaddress.h>
#include <qplatformdefs.h>
#include <qdebug.h>
#include <qhash.h>
#include <qbytearray.h>
#include <qdatastream.h>
#ifdef Q_OS_WIN
#  include <qt_windows.h>
#  if defined(Q_OS_WINRT)
#    include <winsock2.h>
#  endif
#endif

#ifdef Q_OS_ANDROID
#  include <netinet/in.h>
#endif

Q_DECLARE_METATYPE(QHostAddress::SpecialAddress)

class tst_QHostAddress : public QObject
{
    Q_OBJECT

public:
    tst_QHostAddress();

private slots:
    void constructor_QString_data();
    void constructor_QString();
    void setAddress_QString_data();
    void setAddress_QString();
    void specialAddresses_data();
    void specialAddresses();
    void compare_data();
    void compare();
    void isEqual_data();
    void isEqual();
    void assignment();
    void scopeId();
    void hashKey();
    void streaming_data();
    void streaming();
    void parseSubnet_data();
    void parseSubnet();
    void isInSubnet_data();
    void isInSubnet();
    void isLoopback_data();
    void isLoopback();
    void isMulticast_data();
    void isMulticast();
    void convertv4v6_data();
    void convertv4v6();
};

