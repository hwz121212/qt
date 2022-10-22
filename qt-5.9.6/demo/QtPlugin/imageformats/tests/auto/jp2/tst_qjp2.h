#pragma once

#include <QtCore/QtCore>
#include <QtTest/QtTest>
#include <QtGui/QtGui>

class tst_qjp2: public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void readImage_data();
    void readImage();
};

