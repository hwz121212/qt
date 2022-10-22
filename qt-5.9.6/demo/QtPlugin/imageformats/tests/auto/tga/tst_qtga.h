#pragma once

#include <QtTest/QtTest>
#include <QtGui/QtGui>

class tst_qtga: public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void readImage_data();
    void readImage();
};
