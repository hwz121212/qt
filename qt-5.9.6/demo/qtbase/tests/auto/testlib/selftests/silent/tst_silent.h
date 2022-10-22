#pragma once

#include <QtCore/QCoreApplication>
#include <QtTest/QtTest>
#include <private/qtestlog_p.h>

class tst_Silent : public QObject
{
    Q_OBJECT

private slots:
    void pass();
    void skip();
    void fail();
    void xfail();
    void xpass();

    // This test function must be last, as it calls qFatal().
    void messages();
};

