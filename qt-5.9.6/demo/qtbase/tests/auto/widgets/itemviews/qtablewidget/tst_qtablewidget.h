#pragma once

#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qeventloop.h>
#include <qlist.h>
#include <qpair.h>
#include <qheaderview.h>

#include <qtablewidget.h>

class QObjectTableItem : public QObject, public QTableWidgetItem
{
    Q_OBJECT
};

class tst_QTableWidget : public QObject
{
    Q_OBJECT

public:
    tst_QTableWidget();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
    void getSetCheck();
    void clear();
    void clearContents();
    void rowCount();
    void columnCount();
    void itemAssignment();
    void item_data();
    void item();
    void takeItem_data();
    void takeItem();
    void selectedItems_data();
    void selectedItems();
    void removeRow_data();
    void removeRow();
    void removeColumn_data();
    void removeColumn();
    void insertRow_data();
    void insertRow();
    void insertColumn_data();
    void insertColumn();
    void itemStreaming_data();
    void itemStreaming();
    void itemOwnership();
    void sortItems_data();
    void sortItems();
    void setItemWithSorting_data();
    void setItemWithSorting();
    void itemData();
    void setItemData();
    void cellWidget();
    void task231094();
    void task219380_removeLastRow();
    void task262056_sortDuplicate();
    void itemWithHeaderItems();
    void mimeData();
    void selectedRowAfterSorting();

private:
    QTableWidget *testWidget;
};



class TestTableWidget : public QTableWidget
{
	Q_OBJECT
public:
	TestTableWidget(int rows, int columns, QWidget *parent = 0)
		: QTableWidget(rows, columns, parent)
	{
	}

	using QTableWidget::mimeData;
	using QTableWidget::indexFromItem;
};
