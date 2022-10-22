#pragma once


#include <QtTest/QtTest>
#include <qabstractnetworkcache.h>

#define EXAMPLE_URL "http://user:pass@www.example.com/#foo"

class tst_QNetworkCacheMetaData : public QObject
{
    Q_OBJECT

private slots:
    void qnetworkcachemetadata_data();
    void qnetworkcachemetadata();

    void expirationDate_data();
    void expirationDate();
    void isValid_data();
    void isValid();
    void lastModified_data();
    void lastModified();
    void operatorEqual_data();
    void operatorEqual();
    void operatorEqualEqual_data();
    void operatorEqualEqual();
    void rawHeaders_data();
    void rawHeaders();
    void saveToDisk_data();
    void saveToDisk();
    void url_data();
    void url();

    void stream();
};
