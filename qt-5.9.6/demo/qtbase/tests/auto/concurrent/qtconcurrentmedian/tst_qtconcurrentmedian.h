#pragma once

#include <qtconcurrentmedian.h>

#include <QtTest/QtTest>

class tst_QtConcurrentMedian: public QObject
{
    Q_OBJECT
private slots:
    void median_data();
    void median();
};
