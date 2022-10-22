#pragma once


#include <QtCore/QCoreApplication>
#include <QtTest/QtTest>

#include <private/cycle_p.h>

class tst_BenchlibTickCounter: public QObject
{
    Q_OBJECT

private slots:
    void threeBillionTicks();
};

