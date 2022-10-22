#pragma once


#include <QtTest/QtTest>

#include <qcoreapplication.h>
#include <qdebug.h>
#include <qxml.h>

class tst_QXml : public QObject
{
Q_OBJECT

private slots:
    void getSetCheck();
    void interpretedAs0D() const;
#ifndef QT_NO_EXCEPTIONS
    void exception();
#endif
};
