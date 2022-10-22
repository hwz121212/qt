#pragma once

#include <QtTest/QtTest>
#include <QtGlobal>
#include <QtAlgorithms>
#include <QtPrintSupport/qprinterinfo.h>

#include <algorithm>

#ifdef Q_OS_UNIX
#  include <unistd.h>
#  include <sys/types.h>
#  include <sys/wait.h>
#endif


class tst_QPrinterInfo : public QObject
{
    Q_OBJECT

public slots:
#ifdef QT_NO_PRINTER
    void initTestCase();
    void cleanupTestCase();
#else
private slots:
#ifndef Q_OS_WIN32
    void testForDefaultPrinter();
    void testForPrinters();
#endif
    void testForPaperSizes();
    void testConstructors();
    void testAssignment();
    void namedPrinter();

private:
    QString getDefaultPrinterFromSystem();
    QStringList getPrintersFromSystem();

#ifdef Q_OS_UNIX
    QString getOutputFromCommand(const QStringList& command);
#endif // Q_OS_UNIX
#endif
};
