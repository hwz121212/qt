#pragma once


#include <QtCore/QCoreApplication>
#include <QtTest/QtTest>

class tst_FetchBogus: public QObject
{
    Q_OBJECT

private slots:
    void fetchBogus_data();
    void fetchBogus();
};

