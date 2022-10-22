#pragma once


#include <QtTest/QtTest>

class tst_FailInit: public QObject
{
Q_OBJECT
private slots:
    void initTestCase() const;
    void aTestFunction() const;
};

