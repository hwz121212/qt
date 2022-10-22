#pragma once


#include <QtTest/QtTest>

#include <qcoreapplication.h>
#include <qdebug.h>
#include <QtPrintSupport/qtprintsupportglobal.h>
#if QT_CONFIG(printdialog)
#include <qabstractprintdialog.h>
#include <qprinter.h>
#endif

class tst_QAbstractPrintDialog : public QObject
{
Q_OBJECT

#if !QT_CONFIG(printdialog)
public slots:
    void initTestCase();
#else
private slots:
    void getSetCheck();
    void setMinMax();
    void setFromTo();
#endif
};

#if !QT_CONFIG(printdialog)
void tst_QAbstractPrintDialog::initTestCase()
{
    QSKIP("This test requires printing and print dialog support");
}

#else

class MyAbstractPrintDialog : public QAbstractPrintDialog
{
public:
    MyAbstractPrintDialog(QPrinter *p) : QAbstractPrintDialog(p) {}
    int exec() { return 0; }
};
#endif
