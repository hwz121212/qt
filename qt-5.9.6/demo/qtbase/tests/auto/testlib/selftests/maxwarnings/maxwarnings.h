#pragma once


#include <QtCore/QCoreApplication>
#include <QtTest/QtTest>

class MaxWarnings: public QObject
{
    Q_OBJECT
private slots:
    void warn();
};
