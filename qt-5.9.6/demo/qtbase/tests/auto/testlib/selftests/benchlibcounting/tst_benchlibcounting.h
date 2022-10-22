#pragma once

#include <QtCore/QCoreApplication>
#include <QtTest/QtTest>

class tst_BenchlibCounting : public QObject
{
    Q_OBJECT

private slots:
    void passingBenchmark();
    void skippingBenchmark();
    void failingBenchmark();
};

