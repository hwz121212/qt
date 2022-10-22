#pragma once


#include <QtCore/QCoreApplication>
#include <QtCore/QRegularExpression>
#include <QtTest/QtTest>

class tst_Warnings: public QObject
{
    Q_OBJECT
private slots:
    void testWarnings();
    void testMissingWarnings();
    void testMissingWarningsRegularExpression();
    void testMissingWarningsWithData_data();
    void testMissingWarningsWithData();
};

