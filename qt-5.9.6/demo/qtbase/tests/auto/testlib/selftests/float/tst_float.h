#pragma once

#include <QtCore/QCoreApplication>
#include <QtTest/QtTest>
#include <QDebug>

class tst_float: public QObject
{
    Q_OBJECT
private slots:
    void floatComparisons() const;
    void floatComparisons_data() const;
    void compareFloatTests() const;
    void compareFloatTests_data() const;
};

