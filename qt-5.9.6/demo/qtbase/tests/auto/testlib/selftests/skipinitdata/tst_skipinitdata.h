#pragma once


#include <QtTest/QtTest>

class tst_SkipInitData: public QObject
{
Q_OBJECT
private slots:
    void initTestCase_data() const;
    void initTestCase() const;
    void aTestFunction() const;
};

