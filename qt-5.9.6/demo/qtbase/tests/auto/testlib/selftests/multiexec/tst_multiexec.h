#pragma once


#include <QtTest/QtTest>

class tst_Nothing: public QObject
{
Q_OBJECT
private slots:
    void nothing() { QVERIFY(true); }
};

