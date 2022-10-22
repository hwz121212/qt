#pragma once

#include <QtTest/QtTest>
#include <QtGui/QtGui>


class tst_qtiff: public QObject
{
    Q_OBJECT
private slots:
    void initTestCase();

    void formatHandler();

    void readImage_data();
    void readImage();

    void readCorruptImage_data();
    void readCorruptImage();

    void tiffCompression_data();
    void tiffCompression();
    void tiffEndianness();

    void tiffOrientation_data();
    void tiffOrientation();

    void tiffGrayscale();

    void dotsPerMeter_data();
    void dotsPerMeter();

    void physicalDpi_data();
    void physicalDpi();

    void writeImage_data();
    void writeImage();

    void readWriteNonDestructive_data();
    void readWriteNonDestructive();

    void largeTiff();

    void supportsOption_data();
    void supportsOption();

    void resolution_data();
    void resolution();

    void multipage_data();
    void multipage();

    void tiled_data();
    void tiled();

private:
    QString prefix;
};
