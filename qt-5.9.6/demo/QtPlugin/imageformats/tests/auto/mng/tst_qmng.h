#pragma once

#include <QtTest/QtTest>
#include <QtGui/QtGui>

class tst_qmng: public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void readImage_data();
    void readImage();
    void readCorruptImage_data();
    void readCorruptImage();
};
