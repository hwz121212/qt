#pragma once


#include <QtCore/QCoreApplication>
#include <QtTest/QtTest>

/* This test must be explicitly enabled since there are no compile tests for valgrind.h */
#ifdef QT_BUG236484
#include <valgrind/valgrind.h>
#endif

class tst_BenchlibCallgrind: public QObject
{
    Q_OBJECT

private slots:
#ifdef QT_BUG236484
    void failInChildProcess();
#endif

    void twoHundredMillionInstructions();
};

