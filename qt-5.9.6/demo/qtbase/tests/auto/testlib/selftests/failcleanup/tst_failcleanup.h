#pragma once

#include <QtTest/QtTest>

class tst_FailCleanup: public QObject
{
Q_OBJECT
private slots:
    void aTestFunction() const;
    void cleanupTestCase() const;
};

