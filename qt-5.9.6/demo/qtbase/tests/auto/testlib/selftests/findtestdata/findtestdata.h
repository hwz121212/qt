#pragma once


#include <QtCore/QCoreApplication>
#include <QtTest/QtTest>

#define TESTFILE "testfile"

class FindTestData: public QObject
{
    Q_OBJECT
private slots:
    void initTestCase();
    void cleanupTestCase();

    void paths();

private:
    bool touch(QString const&);
};

