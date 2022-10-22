#pragma once


#include <QtCore/QCoreApplication>
#include <QtTest/QtTest>

class tst_BenchlibWalltime: public QObject
{
    Q_OBJECT

private slots:
    void waitForOneThousand();
    void waitForFourThousand();
    void qbenchmark_once();
};

