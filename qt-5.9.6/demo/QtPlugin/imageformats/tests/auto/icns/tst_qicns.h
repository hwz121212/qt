#pragma once


#include <QtTest/QtTest>
#include <QtGui/QtGui>

class tst_qicns: public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void readIcons_data();
    void readIcons();
    void writeIcons_data();
    void writeIcons();
};
