#pragma once


#include <qtconcurrentfilter.h>
#include <QCoreApplication>
#include <QList>
#include <QLinkedList>
#include <QtTest/QtTest>



class tst_QtConcurrentFilter : public QObject
{
    Q_OBJECT

private slots:
    void filter();
    void filtered();
    void filteredReduced();
    void resultAt();
    void incrementalResults();
    void noDetach();
    void stlContainers();
};
