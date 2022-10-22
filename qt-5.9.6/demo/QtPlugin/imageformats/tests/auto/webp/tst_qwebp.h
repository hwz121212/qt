#pragma once

#include <QtTest/QtTest>
#include <QtGui/QtGui>

class tst_qwebp : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void readImage_data();
    void readImage();
    void readAnimation_data();
    void readAnimation();
    void writeImage_data();
    void writeImage();
};
