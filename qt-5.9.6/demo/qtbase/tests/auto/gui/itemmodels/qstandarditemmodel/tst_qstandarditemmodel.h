#pragma once


#include <QtTest/QtTest>

#include <qstandarditemmodel.h>
#include <QTreeView>
#include <private/qtreeview_p.h>
#include "modeltest.h"

class tst_QStandardItemModel : public QObject
{
    Q_OBJECT

public:
    tst_QStandardItemModel();

    enum ModelChanged {
        RowsAboutToBeInserted,
        RowsInserted,
        RowsAboutToBeRemoved,
        RowsRemoved,
        ColumnsAboutToBeInserted,
        ColumnsInserted,
        ColumnsAboutToBeRemoved,
        ColumnsRemoved
    };

public slots:
    void init();
    void cleanup();

protected slots:
    void checkAboutToBeRemoved();
    void checkRemoved();
    void updateRowAboutToBeRemoved();

    void rowsAboutToBeInserted(const QModelIndex &parent, int first, int last)
        { modelChanged(RowsAboutToBeInserted, parent, first, last); }
    void rowsInserted(const QModelIndex &parent, int first, int last)
        { modelChanged(RowsInserted, parent, first, last); }
    void rowsAboutToBeRemoved(const QModelIndex &parent, int first, int last)
        { modelChanged(RowsAboutToBeRemoved, parent, first, last); }
    void rowsRemoved(const QModelIndex &parent, int first, int last)
        { modelChanged(RowsRemoved, parent, first, last); }
    void columnsAboutToBeInserted(const QModelIndex &parent, int first, int last)
        { modelChanged(ColumnsAboutToBeInserted, parent, first, last); }
    void columnsInserted(const QModelIndex &parent, int first, int last)
        { modelChanged(ColumnsInserted, parent, first, last); }
    void columnsAboutToBeRemoved(const QModelIndex &parent, int first, int last)
        { modelChanged(ColumnsAboutToBeRemoved, parent, first, last); }
    void columnsRemoved(const QModelIndex &parent, int first, int last)
        { modelChanged(ColumnsRemoved, parent, first, last); }

    void modelChanged(ModelChanged change, const QModelIndex &parent, int first, int last);

private slots:
    void insertRow_data();
    void insertRow();
    void insertRows();
    void insertRowsItems();
    void insertRowInHierarcy();
    void insertColumn_data();
    void insertColumn();
    void insertColumns();
    void removeRows();
    void removeColumns();
    void setHeaderData();
    void persistentIndexes();
    void removingPersistentIndexes();
    void updatingPersistentIndexes();

    void checkChildren();
    void data();
    void clear();
    void sort_data();
    void sort();
    void sortRole_data();
    void sortRole();
    void findItems();
    void getSetHeaderItem();
    void indexFromItem();
    void itemFromIndex();
    void getSetItemPrototype();
    void getSetItemData();
    void setHeaderLabels_data();
    void setHeaderLabels();
    void itemDataChanged();
    void takeHeaderItem();
    void useCase1();
    void useCase2();
    void useCase3();

    void setNullChild();
    void deleteChild();

    void rootItemFlags();
#ifdef QT_BUILD_INTERNAL
    void treeDragAndDrop();
#endif
    void removeRowsAndColumns();

    void itemRoleNames();
    void getMimeDataWithInvalidModelIndex();
    void supportedDragDropActions();

private:
    QAbstractItemModel *m_model;
    QPersistentModelIndex persistent;
    QVector<QModelIndex> rcParent;
    QVector<int> rcFirst;
    QVector<int> rcLast;

    //return true if models have the same structure, and all child have the same text
    bool compareModels(QStandardItemModel *model1, QStandardItemModel *model2);
    //return true if models have the same structure, and all child have the same text
    bool compareItems(QStandardItem *item1, QStandardItem *item2);
};
