#pragma once


#include <QtCore/QCoreApplication>
#include <QtTest/QtTest>

class tst_SingleSkip: public QObject
{
    Q_OBJECT

private slots:
    void myTest() const;
};
