#pragma once


#include <QtTest/QtTest>
#include <QtGui/QtGui>

class tst_qdds: public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void readImage_data();
    void readImage();
    void testMipmaps_data();
    void testMipmaps();
    void testWriteImage_data();
    void testWriteImage();
};
