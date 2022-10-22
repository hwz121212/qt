#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qtreewidget.h>
#include <qtreewidgetitemiterator.h>
#include <qapplication.h>
#include <qeventloop.h>
#include <qdebug.h>
#include <qheaderview.h>
#include <qlineedit.h>
#include <QScrollBar>
#include <QStyledItemDelegate>

class CustomTreeWidget : public QTreeWidget
{
    Q_OBJECT
public:
    QModelIndex indexFromItem(QTreeWidgetItem *item, int column = 0) const
    { return QTreeWidget::indexFromItem(item, column); }

    QMimeData * mimeData(const QList<QTreeWidgetItem*> items) const
    { return QTreeWidget::mimeData(items); }
};

class tst_QTreeWidget : public QObject
{
    Q_OBJECT

public:
    tst_QTreeWidget();
    ~tst_QTreeWidget();


public slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();

private slots:
    void getSetCheck();
    void addTopLevelItem();
    void currentItem_data();
    void currentItem();
    void editItem_data();
    void editItem();
    void takeItem_data();
    void takeItem();
    void removeChild_data();
    void removeChild();
    void setItemHidden();
    void setItemHidden2();
    void selectedItems_data();
    void selectedItems();
    void itemAssignment();
    void clone_data();
    void clone();
    void expand_data();
    void expand();
    void checkState_data();
    void checkState();
    void findItems_data();
    void findItems();
    void findItemsInColumn();
    void sortItems_data();
    void sortItems();
    void deleteItems_data();
    void deleteItems();
    void itemAboveOrBelow();
    void itemStreaming_data();
    void itemStreaming();
    void insertTopLevelItems_data();
    void insertTopLevelItems();
    void keyboardNavigation();
    void scrollToItem();
    void setSortingEnabled();
    void match();
    void columnCount();
    void setHeaderLabels();
    void setHeaderItem();
    void itemWidget_data();
    void itemWidget();
    void insertItemsWithSorting_data();
    void insertItemsWithSorting();
    void insertExpandedItemsWithSorting_data();
    void insertExpandedItemsWithSorting();
    void changeDataWithSorting_data();
    void changeDataWithSorting();
    void changeDataWithStableSorting_data();
    void changeDataWithStableSorting();

    void sortedIndexOfChild_data();
    void sortedIndexOfChild();
    void defaultRowSizes();

    void task191552_rtl();
    void task203673_selection();
    void rootItemFlags();
    void task218661_setHeaderData();
    void task245280_sortChildren();
    void task253109_itemHeight();

    void nonEditableTristate();

    // QTreeWidgetItem
    void itemOperatorLessThan();
    void addChild();
    void setData();
    void enableDisable();

    void expandAndCallapse();
    void itemData();
    void setDisabled();
    void removeSelectedItem();
    void removeCurrentItem();
    void removeCurrentItem_task186451();
    void randomExpand();
    void crashTest();
    void sortAndSelect();

    void task206367_duplication();
    void selectionOrder();

    void setSelectionModel();
    void task217309();
    void setCurrentItemExpandsParent();
    void task239150_editorWidth();
    void setTextUpdate();
    void taskQTBUG2844_visualItemRect();
    void setChildIndicatorPolicy();

    void taskQTBUG_34717_collapseAtBottom();
    void task20345_sortChildren();
    void getMimeDataWithInvalidItem();

public slots:
    void itemSelectionChanged();
    void emitDataChanged();

private:
    CustomTreeWidget *testWidget;
};



class AnotherTreeWidget : public QTreeWidget
{
	Q_OBJECT
public:
	AnotherTreeWidget(QWidget *parent = 0) : QTreeWidget(parent) {}
	void deleteCurrent() { if (currentItem()) delete currentItem(); }
};
