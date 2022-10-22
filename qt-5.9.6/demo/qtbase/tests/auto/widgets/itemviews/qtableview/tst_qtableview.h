#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <private/qtablewidget_p.h>
#include <QtTest/QtTest>
#include "private/qapplication_p.h"

#include <algorithm>

#include <QtTest/private/qtesthelpers_p.h>

using namespace QTestPrivate;


class tst_QTableView : public QObject
{
    Q_OBJECT

private slots:
    void getSetCheck();

    void noDelegate();
    void noModel();
    void emptyModel();

    void removeRows_data();
    void removeRows();

    void removeColumns_data();
    void removeColumns();

    void keyboardNavigation_data();
    void keyboardNavigation();

    void headerSections_data();
    void headerSections();

    void moveCursor_data();
    void moveCursor();

    void moveCursorStrikesBack_data();
    void moveCursorStrikesBack();

    void moveCursorBiggerJump();

    void hideRows_data();
    void hideRows();

    void hideColumns_data();
    void hideColumns();

    void selection_data();
    void selection();

    void selectRow_data();
    void selectRow();

    void selectColumn_data();
    void selectColumn();

    void selectall_data();
    void selectall();

    void visualRect_data();
    void visualRect();

    void fetchMore();
    void setHeaders();

    void resizeRowsToContents_data();
    void resizeRowsToContents();

    void resizeColumnsToContents_data();
    void resizeColumnsToContents();

    void rowViewportPosition_data();
    void rowViewportPosition();

    void rowAt_data();
    void rowAt();

    void rowHeight_data();
    void rowHeight();

    void columnViewportPosition_data();
    void columnViewportPosition();

    void columnAt_data();
    void columnAt();

    void columnWidth_data();
    void columnWidth();

    void hiddenRow_data();
    void hiddenRow();

    void hiddenColumn_data();
    void hiddenColumn();

    void sortingEnabled_data();
    void sortingEnabled();

    void scrollTo_data();
    void scrollTo();

    void indexAt_data();
    void indexAt();

    void span_data();
    void span();
    void spans();
    void spans_data();
    void spansAfterRowInsertion();
    void spansAfterColumnInsertion();
    void spansAfterRowRemoval();
    void spansAfterColumnRemoval();
    void editSpanFromDirections_data();
    void editSpanFromDirections();

    void checkHeaderReset();
    void checkHeaderMinSize();

    void resizeToContents();

    void tabFocus();
    void bigModel();
    void selectionSignal();
    void setCurrentIndex();

    // task-specific tests:
    void task173773_updateVerticalHeader();
    void task227953_setRootIndex();
    void task240266_veryBigColumn();
    void task248688_autoScrollNavigation();
    void task259308_scrollVerticalHeaderSwappedSections();
    void task191545_dragSelectRows();
    void taskQTBUG_5062_spansInconsistency();
    void taskQTBUG_4516_clickOnRichTextLabel();
#if QT_CONFIG(wheelevent)
    void taskQTBUG_5237_wheelEventOnHeader();
#endif
    void taskQTBUG_8585_crashForNoGoodReason();
    void taskQTBUG_7774_RtoLVisualRegionForSelection();
    void taskQTBUG_8777_scrollToSpans();
    void taskQTBUG_10169_sizeHintForRow();
    void taskQTBUG_30653_doItemsLayout();
    void taskQTBUG_50171_selectRowAfterSwapColumns();

#if QT_CONFIG(wheelevent)
    void mouseWheel_data();
    void mouseWheel();
#endif

    void addColumnWhileEditing();
    void task234926_setHeaderSorting();

    void changeHeaderData();
    void viewOptions();

    void taskQTBUG_7232_AllowUserToControlSingleStep();
};




class QtTestTableModel : public QAbstractTableModel
{
	Q_OBJECT

signals:
	void invalidIndexEncountered() const;

public slots:
	bool submit() { ++submit_count; return QAbstractTableModel::submit(); }

public:
	QtTestTableModel(int rows = 0, int columns = 0, QObject *parent = 0)
		: QAbstractTableModel(parent),
		row_count(rows),
		column_count(columns),
		submit_count(0),
		can_fetch_more(false),
		fetch_more_count(0),
		disabled_rows(),
		disabled_columns() {}

	int rowCount(const QModelIndex& = QModelIndex()) const { return row_count; }
	int columnCount(const QModelIndex& = QModelIndex()) const { return column_count; }
	bool isEditable(const QModelIndex &) const { return true; }

	Qt::ItemFlags flags(const QModelIndex &index) const
	{
		Qt::ItemFlags index_flags = QAbstractTableModel::flags(index);
		if (disabled_rows.contains(index.row())
			|| disabled_columns.contains(index.column()))
			index_flags &= ~Qt::ItemIsEnabled;
		return index_flags;
	}

	void disableRow(int row)
	{
		disabled_rows.insert(row);
	}

	void enableRow(int row)
	{
		disabled_rows.remove(row);
	}

	void disableColumn(int column)
	{
		disabled_columns.insert(column);
	}

	void enableColumn(int column)
	{
		disabled_columns.remove(column);
	}

	QVariant data(const QModelIndex &idx, int role) const
	{
		if (!idx.isValid() || idx.row() >= row_count || idx.column() >= column_count) {
			qWarning() << "Invalid modelIndex [%d,%d,%p]" << idx;
			emit invalidIndexEncountered();
			return QVariant();
		}

		if (role == Qt::DisplayRole || role == Qt::EditRole) {
			return QLatin1Char('[') + QString::number(idx.row()) + QLatin1Char(',')
				+ QString::number(idx.column()) + QLatin1String(",0]");
		}

		return QVariant();
	}

	bool insertRows(int start, int count, const QModelIndex &parent = QModelIndex())
	{
		if (start < 0 || start > row_count)
			return false;

		beginInsertRows(parent, start, start + count - 1);
		row_count += count;
		endInsertRows();
		return true;
	}

	bool removeRows(int start, int count, const QModelIndex &parent = QModelIndex())
	{
		if (start < 0 || start >= row_count || row_count < count)
			return false;

		beginRemoveRows(parent, start, start + count - 1);
		row_count -= count;
		endRemoveRows();
		return true;
	}

	void removeLastRow()
	{
		beginRemoveRows(QModelIndex(), row_count - 1, row_count - 1);
		--row_count;
		endRemoveRows();
	}

	void removeAllRows()
	{
		beginRemoveRows(QModelIndex(), 0, row_count - 1);
		row_count = 0;
		endRemoveRows();
	}

	bool insertColumns(int start, int count, const QModelIndex &parent = QModelIndex())
	{
		if (start < 0 || start > column_count)
			return false;

		beginInsertColumns(parent, start, start + count - 1);
		column_count += count;
		endInsertColumns();
		return true;
	}

	bool removeColumns(int start, int count, const QModelIndex &parent = QModelIndex())
	{
		if (start < 0 || start >= column_count || column_count < count)
			return false;

		beginRemoveColumns(parent, start, start + count - 1);
		column_count -= count;
		endRemoveColumns();
		return true;
	}

	void removeLastColumn()
	{
		beginRemoveColumns(QModelIndex(), column_count - 1, column_count - 1);
		--column_count;
		endRemoveColumns();
	}

	void removeAllColumns()
	{
		beginRemoveColumns(QModelIndex(), 0, column_count - 1);
		column_count = 0;
		endRemoveColumns();
	}

	bool canFetchMore(const QModelIndex &) const
	{
		return can_fetch_more;
	}

	void fetchMore(const QModelIndex &)
	{
		++fetch_more_count;
	}

	void reset()
	{
		beginResetModel();
		endResetModel();
	}

	int row_count;
	int column_count;
	int submit_count;
	bool can_fetch_more;
	int fetch_more_count;
	QSet<int> disabled_rows;
	QSet<int> disabled_columns;
};

class QtTestTableView : public QTableView
{
	Q_OBJECT

public:
	QtTestTableView(QWidget *parent = 0) : QTableView(parent), checkSignalOrder(false), hasCurrentChanged(0), hasSelectionChanged(0) {}

	void setModel(QAbstractItemModel *model)
	{
		QTableView::setModel(model);
		connect(selectionModel(), SIGNAL(currentChanged(QModelIndex, QModelIndex)),
			this, SLOT(slotCurrentChanged(QModelIndex, QModelIndex)));
		connect(selectionModel(), SIGNAL(selectionChanged(QItemSelection, QItemSelection)),
			this, SLOT(itemSelectionChanged(QItemSelection, QItemSelection)));
	}

	// enum CursorAction and moveCursor() are protected in QTableView.
	enum CursorAction {
		MoveUp = QAbstractItemView::MoveUp,
		MoveDown = QAbstractItemView::MoveDown,
		MoveLeft = QAbstractItemView::MoveLeft,
		MoveRight = QAbstractItemView::MoveRight,
		MoveHome = QAbstractItemView::MoveHome,
		MoveEnd = QAbstractItemView::MoveEnd,
		MovePageUp = QAbstractItemView::MovePageUp,
		MovePageDown = QAbstractItemView::MovePageDown,
		MoveNext = QAbstractItemView::MoveNext,
		MovePrevious = QAbstractItemView::MovePrevious
	};

	QModelIndex doMoveCursor(QtTestTableView::CursorAction cursorAction,
		Qt::KeyboardModifiers modifiers)
	{
		return QTableView::moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers);
	}

	int columnWidthHint(int column) const
	{
		return sizeHintForColumn(column);
	}

	int rowHeightHint(int row) const
	{
		return sizeHintForRow(row);
	}

	bool isIndexHidden(const QModelIndex &index) const
	{
		return QTableView::isIndexHidden(index);
	}

	void setSelection(const QRect &rect, QItemSelectionModel::SelectionFlags command)
	{
		QTableView::setSelection(rect, command);
	}

	QModelIndexList selectedIndexes() const
	{
		return QTableView::selectedIndexes();
	}

	int sizeHintForRow(int row) const
	{
		return QTableView::sizeHintForRow(row);
	}

	QStyleOptionViewItem viewOptions() const {
		return QTableView::viewOptions();
	}

	bool checkSignalOrder;
public slots:
	void slotCurrentChanged(QModelIndex, QModelIndex) {
		hasCurrentChanged++;
		if (checkSignalOrder)
			QVERIFY(hasCurrentChanged > hasSelectionChanged);
	}

	void itemSelectionChanged(QItemSelection, QItemSelection) {
		hasSelectionChanged++;
		if (checkSignalOrder)
			QVERIFY(hasCurrentChanged >= hasSelectionChanged);
	}
private:
	int hasCurrentChanged;
	int hasSelectionChanged;

};



class Model : public QAbstractTableModel {

	Q_OBJECT

public:
	Model(QObject * parent = 0) : QAbstractTableModel(parent) {
	}

	int rowCount(const QModelIndex &) const {
		return rows;
	}
	int columnCount(const QModelIndex &) const {
		return columns;
	}
	QVariant data(const QModelIndex &, int) const
	{
		return QVariant();
	}
	void res()
	{
		beginResetModel();
		endResetModel();
	}

	int rows;
	int columns;
};



class BigModel : public QAbstractTableModel
{
	Q_OBJECT
public:
	virtual QVariant data(const QModelIndex &index,
		int role = Qt::DisplayRole) const
	{
		if (role == Qt::DisplayRole)
			return QString::number(index.column()) + QLatin1String(" - ") + QString::number(index.row());
		return QVariant();
	}


	int rowCount(const QModelIndex & parent = QModelIndex()) const
	{
		Q_UNUSED(parent);
		return 10000000;
	}

	int columnCount(const QModelIndex & parent = QModelIndex()) const
	{
		Q_UNUSED(parent);
		return 20000000;
	}
};



class TestTableView : public QTableView {
	Q_OBJECT
public:
	TestTableView(QWidget *parent = 0) : QTableView(parent)
	{
		connect(this, SIGNAL(entered(QModelIndex)), this, SLOT(openEditor(QModelIndex)));
	}
	~TestTableView() {}
public slots:
	void onDataChanged()
	{
		for (int i = 0; i < model()->rowCount(); i++) {
			setRowHidden(i, model()->data(model()->index(i, 0)).toBool());
		}
	}

	void openEditor(const QModelIndex& index)
	{
		openPersistentEditor(index);
	}
};
