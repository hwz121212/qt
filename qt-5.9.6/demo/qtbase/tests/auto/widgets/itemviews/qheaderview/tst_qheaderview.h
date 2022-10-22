#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <QStandardItemModel>
#include <QStringListModel>
#include <QSortFilterProxyModel>
#include <QTableView>
#include <QProxyStyle>

#include <qabstractitemmodel.h>
#include <qapplication.h>
#include <qheaderview.h>
#include <private/qheaderview_p.h>
#include <qitemdelegate.h>
#include <qtreewidget.h>
#include <qdebug.h>
#include <qscreen.h>

typedef QList<int> IntList;

typedef QList<bool> BoolList;

class TestStyle : public QProxyStyle
{
public:
    void drawControl(ControlElement element, const QStyleOption *option, QPainter *painter, const QWidget *widget) const
    {
        if (element == CE_HeaderSection) {
            if (const QStyleOptionHeader *header = qstyleoption_cast<const QStyleOptionHeader *>(option))
                lastPosition = header->position;
        }
        QProxyStyle::drawControl(element, option, painter, widget);
    }
    mutable QStyleOptionHeader::SectionPosition lastPosition;
};

class protected_QHeaderView : public QHeaderView
{
    Q_OBJECT
public:
    protected_QHeaderView(Qt::Orientation orientation) : QHeaderView(orientation) {
        resizeSections();
    };

    void testEvent();
    void testhorizontalOffset();
    void testverticalOffset();
    void testVisualRegionForSelection();
    friend class tst_QHeaderView;
};

class XResetModel : public QStandardItemModel
{
    virtual bool removeRows(int row, int count, const QModelIndex &parent = QModelIndex())
    {
        blockSignals(true);
        bool r = QStandardItemModel::removeRows(row, count, parent);
        blockSignals(false);
        emit reset();
        return r;
    }
    virtual bool insertRows(int row, int count, const QModelIndex &parent = QModelIndex())
    {
        blockSignals(true);
        bool r = QStandardItemModel::insertRows(row, count, parent);
        blockSignals(false);
        emit reset();
        return r;
    }
};

class tst_QHeaderView : public QObject
{
    Q_OBJECT

public:
    tst_QHeaderView();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();
    void getSetCheck();
    void visualIndex();

    void visualIndexAt_data();
    void visualIndexAt();

    void noModel();
    void emptyModel();
    void removeRows();
    void removeCols();

    void clickable();
    void movable();
    void hidden();
    void stretch();

    void sectionSize_data();
    void sectionSize();

    void length();
    void offset();
    void sectionSizeHint();
    void logicalIndex();
    void logicalIndexAt();
    void swapSections();

    void moveSection_data();
    void moveSection();

    void resizeMode();

    void resizeSection_data();
    void resizeSection();

    void resizeAndMoveSection_data();
    void resizeAndMoveSection();
    void resizeHiddenSection_data();
    void resizeHiddenSection();
    void resizeAndInsertSection_data();
    void resizeAndInsertSection();
    void resizeWithResizeModes_data();
    void resizeWithResizeModes();
    void moveAndInsertSection_data();
    void moveAndInsertSection();
    void highlightSections();
    void showSortIndicator();
    void sortIndicatorTracking();
    void removeAndInsertRow();
    void unhideSection();
    void testEvent();
    void headerDataChanged();
    void currentChanged();
    void horizontalOffset();
    void verticalOffset();
    void stretchSectionCount();
    void hiddenSectionCount();
    void focusPolicy();
    void moveSectionAndReset();
    void moveSectionAndRemove();
    void saveRestore();
    void restoreQt4State();
    void restoreToMoreColumns();
    void restoreToMoreColumnsNoMovedColumns();
    void restoreBeforeSetModel();
    void defaultSectionSizeTest();
    void defaultSectionSizeTestStyles();

    void defaultAlignment_data();
    void defaultAlignment();

    void globalResizeMode_data();
    void globalResizeMode();

    void sectionPressedSignal_data();
    void sectionPressedSignal();
    void sectionClickedSignal_data() { sectionPressedSignal_data(); }
    void sectionClickedSignal();

    void defaultSectionSize_data();
    void defaultSectionSize();

    void oneSectionSize();

    void hideAndInsert_data();
    void hideAndInsert();

    void removeSection();
    void preserveHiddenSectionWidth();
    void invisibleStretchLastSection();
    void noSectionsWithNegativeSize();

    void emptySectionSpan();
    void task236450_hidden_data();
    void task236450_hidden();
    void task248050_hideRow();
    void QTBUG6058_reset();
    void QTBUG7833_sectionClicked();
    void checkLayoutChangeEmptyModel();
    void QTBUG8650_crashOnInsertSections();
    void QTBUG12268_hiddenMovedSectionSorting();
    void QTBUG14242_hideSectionAutoSize();
    void QTBUG50171_visualRegionForSwappedItems();
    void QTBUG53221_assertShiftHiddenRow();
    void ensureNoIndexAtLength();
    void offsetConsistent();

    void initialSortOrderRole();

    void logicalIndexAtTest_data()   { setupTestData(); }
    void visualIndexAtTest_data()    { setupTestData(); }
    void hideShowTest_data()         { setupTestData(); }
    void swapSectionsTest_data()     { setupTestData(); }
    void moveSectionTest_data()      { setupTestData(); }
    void defaultSizeTest_data()      { setupTestData(); }
    void removeTest_data()           { setupTestData(true); }
    void insertTest_data()           { setupTestData(true); }
    void mixedTests_data()           { setupTestData(true); }
    void resizeToContentTest_data()  { setupTestData(); }
    void logicalIndexAtTest();
    void visualIndexAtTest();
    void hideShowTest();
    void swapSectionsTest();
    void moveSectionTest();
    void defaultSizeTest();
    void removeTest();
    void insertTest();
    void mixedTests();
    void resizeToContentTest();
    void testStreamWithHide();
    void testStylePosition();
    void stretchAndRestoreLastSection();

    void sizeHintCrash();

protected:
    void setupTestData(bool use_reset_model = false);
    void additionalInit();
    void calculateAndCheck(int cppline, const int precalced_comparedata[]);

    QWidget *topLevel;
    QHeaderView *view;
    QStandardItemModel *model;
    QTableView *m_tableview;
    bool m_using_reset_model;
    QElapsedTimer timer;
};

class QtTestModel: public QAbstractTableModel
{

Q_OBJECT

public:
    QtTestModel(QObject *parent = 0): QAbstractTableModel(parent),
       cols(0), rows(0), wrongIndex(false) {}
    int rowCount(const QModelIndex&) const { return rows; }
    int columnCount(const QModelIndex&) const { return cols; }
    bool isEditable(const QModelIndex &) const { return true; }

    QVariant data(const QModelIndex &idx, int) const
    {
        if (idx.row() < 0 || idx.column() < 0 || idx.column() >= cols || idx.row() >= rows) {
            wrongIndex = true;
            qWarning("Invalid modelIndex [%d,%d,%p]", idx.row(), idx.column(), idx.internalPointer());
        }
        return QLatin1Char('[') + QString::number(idx.row()) + QLatin1Char(',')
            + QString::number(idx.column()) + QLatin1String(",0]");
    }

    void insertOneColumn(int col)
    {
        beginInsertColumns(QModelIndex(), col, col);
        --cols;
        endInsertColumns();
    }

    void removeFirstRow()
    {
        beginRemoveRows(QModelIndex(), 0, 0);
        --rows;
        endRemoveRows();
    }

    void removeLastRow()
    {
        beginRemoveRows(QModelIndex(), rows - 1, rows - 1);
        --rows;
        endRemoveRows();
    }

    void removeAllRows()
    {
        beginRemoveRows(QModelIndex(), 0, rows - 1);
        rows = 0;
        endRemoveRows();
    }

    void removeOneColumn(int col)
    {
        beginRemoveColumns(QModelIndex(), col, col);
        --cols;
        endRemoveColumns();
    }

    void removeLastColumn()
    {
        beginRemoveColumns(QModelIndex(), cols - 1, cols - 1);
        --cols;
        endRemoveColumns();
    }

    void removeAllColumns()
    {
        beginRemoveColumns(QModelIndex(), 0, cols - 1);
        cols = 0;
        endRemoveColumns();
    }

    void cleanup()
    {
        cols = 3;
        rows = 3;
        emit layoutChanged();
    }

    void emitLayoutChanged()
    {
        emit layoutAboutToBeChanged();
        emit layoutChanged();
    }

    void emitLayoutChangedWithRemoveFirstRow()
    {
        emit layoutAboutToBeChanged();
        QModelIndexList milNew;
        const auto milOld = persistentIndexList();
        milNew.reserve(milOld.size());
        for (int i = 0; i < milOld.size(); ++i)
            milNew += QModelIndex();
        changePersistentIndexList(milOld, milNew);
        emit layoutChanged();
    }

    int cols, rows;
    mutable bool wrongIndex;
};




class SimpleModel : public QAbstractItemModel
{
	Q_OBJECT
public:

	SimpleModel(QObject* parent = 0)
		: QAbstractItemModel(parent),
		m_col_count(3) {}

	QModelIndex parent(const QModelIndex &/*child*/) const
	{
		return QModelIndex();
	}
	QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const
	{
		return hasIndex(row, column, parent) ? createIndex(row, column) : QModelIndex();
	}
	int rowCount(const QModelIndex & /*parent*/ = QModelIndex()) const
	{
		return 8;
	}
	int columnCount(const QModelIndex &/*parent*/ = QModelIndex()) const
	{
		return m_col_count;
	}

	QVariant data(const QModelIndex &index, int role) const
	{
		if (!index.isValid())
		{
			return QVariant();
		}
		if (role == Qt::DisplayRole) {
			return QString::number(index.row()) + QLatin1Char(',') + QString::number(index.column());
		}
		return QVariant();
	}

	void setColumnCount(int c)
	{
		m_col_count = c;
	}

private:
	int m_col_count;
};
