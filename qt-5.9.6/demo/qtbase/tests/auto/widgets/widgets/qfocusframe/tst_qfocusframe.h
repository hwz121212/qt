#pragma once


#include <QtTest/QtTest>

#include <qcoreapplication.h>
#include <qdebug.h>
#include <qfocusframe.h>

class tst_QFocusFrame : public QObject
{
Q_OBJECT

public:
    tst_QFocusFrame();
    virtual ~tst_QFocusFrame();

private slots:
    void getSetCheck();
};

