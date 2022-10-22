#pragma once


#include <QtTest/QtTest>
#include <QStyleOption>


class tst_QStyleOption: public QObject
{
    Q_OBJECT

private slots:
    void qstyleoptioncast_data();
    void qstyleoptioncast();
};

