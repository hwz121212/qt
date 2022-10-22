#pragma once


#include <QtTest/QtTest>

class tst_FailInitData: public QObject
{
Q_OBJECT
private slots:
    void initTestCase() const;
    void initTestCase_data() const;
    void aTestFunction() const;
};

