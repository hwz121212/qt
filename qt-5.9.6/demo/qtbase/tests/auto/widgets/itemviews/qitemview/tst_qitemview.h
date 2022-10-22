#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <QtCore/QtCore>
#include "viewstotest.h"
#include <stdlib.h>

#if defined(Q_OS_UNIX) || defined(Q_OS_WIN)
#include <time.h>
#endif

#if defined(Q_OS_WIN)
#  define random rand
#  define srandom srand
#endif

/*!
    See viewstotest.cpp for instructions on how to have your view tested with these tests.

    Each test such as visualRect have a _data() function which populate the QTest data with
    tests specified by viewstotest.cpp and any extra data needed for that particular test.

    setupWithNoTestData() fills QTest data with only the tests it is used by most tests.

    There are some basic qDebug statements sprikled about that might be helpfull for
    fixing your issues.
 */
class tst_QItemView : public QObject
{
    Q_OBJECT

private slots:
    void init();
    void cleanup();

    void nonDestructiveBasicTest_data();
    void nonDestructiveBasicTest();

    void spider_data();
    void spider();

    void resize_data();
    void resize();

    void visualRect_data();
    void visualRect();

    void indexAt_data();
    void indexAt();

    void scrollTo_data();
    void scrollTo();

    void moveCursor_data();
    void moveCursor();

private:
    void setupWithNoTestData();
    void populate();
    void walkScreen(QAbstractItemView *view);

    QAbstractItemView *view;
    QAbstractItemModel *treeModel;
    ViewsToTest *testViews;
};

/*!
 * Views should not make invalid requests, sense a model might not check all the bad cases.
 */
class CheckerModel : public QStandardItemModel
{
    Q_OBJECT

public:
    CheckerModel() : QStandardItemModel() {};

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole ) const {
        if (!index.isValid()) {
            qWarning("%s: index is not valid", Q_FUNC_INFO);
            return QVariant();
        }
        return QStandardItemModel::data(index, role);
    };

    Qt::ItemFlags flags(const QModelIndex & index) const {
        if (!index.isValid()) {
            qWarning("%s: index is not valid", Q_FUNC_INFO);
            return Qt::ItemFlags();
        }
        if (index.row() == 2 || index.row() == rowCount() - 3
            || index.column() == 2 || index.column() == columnCount() - 3) {
            Qt::ItemFlags f = QStandardItemModel::flags(index);
            f &= ~Qt::ItemIsEnabled;
            return f;
        }
        return QStandardItemModel::flags(index);
    };

    QModelIndex parent ( const QModelIndex & child ) const {
        if (!child.isValid()) {
            qWarning("%s: child index is not valid", Q_FUNC_INFO);
            return QModelIndex();
        }
        return QStandardItemModel::parent(child);
    };

    QVariant headerData ( int section, Qt::Orientation orientation, int role = Qt::DisplayRole ) const {
        if (orientation == Qt::Horizontal
            && (section < 0 || section > columnCount())) {
            qWarning("%s: invalid section %d, must be in range 0..%d",
                     Q_FUNC_INFO, section, columnCount());
            return QVariant();
        }
        if (orientation == Qt::Vertical
            && (section < 0 || section > rowCount())) {
            qWarning("%s: invalid section %d, must be in range 0..%d",
                     Q_FUNC_INFO, section, rowCount());
            return QVariant();
        }
        return QStandardItemModel::headerData(section, orientation, role);
    }

    QModelIndex index( int row, int column, const QModelIndex & parent = QModelIndex() ) const {
        return QStandardItemModel::index(row, column, parent);
    };

    bool setData ( const QModelIndex & index, const QVariant & value, int role = Qt::EditRole ) {
        if (!index.isValid()) {
            qWarning("%s: index is not valid", Q_FUNC_INFO);
            return false;
        }
        return QStandardItemModel::setData(index, value, role);
    }

    void sort( int column, Qt::SortOrder order = Qt::AscendingOrder ) {
        if (column < 0 || column > columnCount())
            qWarning("%s: invalid column %d, must be in range 0..%d",
                     Q_FUNC_INFO, column, columnCount());
        else
            QStandardItemModel::sort(column, order);
    };

    QModelIndexList match ( const QModelIndex & start, int role, const QVariant & value, int hits = 1, Qt::MatchFlags flags = Qt::MatchFlags( Qt::MatchStartsWith | Qt::MatchWrap ) ) const {
        if (hits <= 0) {
            qWarning("%s: hits must be greater than zero", Q_FUNC_INFO);
            return QModelIndexList();
        }
        if (!value.isValid()) {
            qWarning("%s: value is not valid", Q_FUNC_INFO);
            return QModelIndexList();
        }
        return QAbstractItemModel::match(start, role, value, hits, flags);
    };

    bool setHeaderData ( int section, Qt::Orientation orientation, const QVariant & value, int role = Qt::EditRole ) {
        if (orientation == Qt::Horizontal
            && (section < 0 || section > columnCount())) {
            qWarning("%s: invalid section %d, must be in range 0..%d",
                     Q_FUNC_INFO, section, columnCount());
            return false;
        }
        if (orientation == Qt::Vertical
            && (section < 0 || section > rowCount())) {
            qWarning("%s: invalid section %d, must be in range 0..%d",
                     Q_FUNC_INFO, section, rowCount());
            return false;
        }
        return QAbstractItemModel::setHeaderData(section, orientation, value, role);
    };
};
