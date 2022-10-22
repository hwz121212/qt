#pragma once

#include <QtTest/QtTest>

class tst_SkipCleanup: public QObject
{
Q_OBJECT
private slots:
    void aTestFunction() const;
    void cleanupTestCase() const;
};

