#pragma once


#include <QtTest/QtTest>

#include <qtreewidget.h>
#include <qtreewidgetitemiterator.h>
#include <qapplication.h>
#include <qeventloop.h>
#include <qdebug.h>

class tst_QTreeWidgetItemIterator : public QObject
{
    Q_OBJECT

public:
    tst_QTreeWidgetItemIterator();

private slots:
    void initTestCase();
    void cleanupTestCase();

    void postincrement();
    void preincrement();
    void postdecrement();
    void predecrement();
    void plus_eq_data();
    void plus_eq();
    void minus_eq_data();
    void minus_eq();
    void iteratorflags_data();
    void iteratorflags();
    void updateIfModifiedFromWidget_data();
    void updateIfModifiedFromWidget();
    void constructIteratorWithItem_data();
    void constructIteratorWithItem();
    void updateIteratorAfterDeletedItem_and_ContinueIteration_data();
    void updateIteratorAfterDeletedItem_and_ContinueIteration();
    void initializeIterator();
    void sortingEnabled();
private:
    QTreeWidget *testWidget;
};
