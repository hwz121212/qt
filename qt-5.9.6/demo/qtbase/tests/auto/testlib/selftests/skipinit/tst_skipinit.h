#pragma once


#include <QtTest/QtTest>

class tst_SkipInit: public QObject
{
Q_OBJECT
private slots:
    void initTestCase() const;
    void aTestFunction() const;
};

