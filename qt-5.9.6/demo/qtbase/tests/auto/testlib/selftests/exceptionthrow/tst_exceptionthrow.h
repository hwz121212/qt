#pragma once


#include <QtTest/QtTest>

class tst_Exception: public QObject
{
    Q_OBJECT

private slots:
    void throwException() const;
};


