#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB
#include <QtTest/QtTest>

#include <qstandarditemmodel.h>

class tst_QStandardItem : public QObject
{
    Q_OBJECT

private slots:
    void ctor();
    void textCtor();
    void iconTextCtor();
    void rowsColumnsCtor();
    void getSetData();
    void getSetFlags();
    void getSetRowAndColumnCount();
    void getSetChild_data();
    void getSetChild();
    void parent();
    void insertColumn_data();
    void insertColumn();
    void insertColumns_data();
    void insertColumns();
    void insertRow_data();
    void insertRow();
    void insertRows_data();
    void insertRows();
    void appendColumn_data();
    void appendColumn();
    void appendRow_data();
    void appendRow();
    void takeChild();
    void takeColumn_data();
    void takeColumn();
    void takeRow_data();
    void takeRow();
    void streamItem();
    void deleteItem();
    void clone();
    void sortChildren();
    void subclassing();
    void lessThan();
};

