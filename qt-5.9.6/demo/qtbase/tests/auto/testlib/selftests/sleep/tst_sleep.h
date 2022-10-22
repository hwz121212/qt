#pragma once


#include <QtCore/QCoreApplication>
#include <QtTest/QtTest>

class tst_Sleep: public QObject
{
    Q_OBJECT

private slots:
    void sleep();
};

