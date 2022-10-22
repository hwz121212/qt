#pragma once


#include <QtCore/QCoreApplication>
#include <QtTest/QtTest>

class tst_QExecStringList: public QObject
{
    Q_OBJECT

private slots:
    void testA() const;
    void testB() const;
    void testB_data() const;
    void testC() const;
};

