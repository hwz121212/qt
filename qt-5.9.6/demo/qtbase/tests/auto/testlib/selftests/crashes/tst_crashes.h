#pragma once


#include <QtCore/QCoreApplication>
#include <QtTest/QtTest>

#ifdef Q_OS_WIN
#include <windows.h>
#endif

class tst_Crashes: public QObject
{
    Q_OBJECT

private slots:
    void crash();
};

