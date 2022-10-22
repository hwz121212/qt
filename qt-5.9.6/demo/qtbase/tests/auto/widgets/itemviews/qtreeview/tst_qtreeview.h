#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include "../../../../shared/fakedirmodel.h"
#include <qabstractitemview.h>
#include <QtTest/QtTest>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <private/qtreeview_p.h>

#include <QtTest/private/qtesthelpers_p.h>

using namespace QTestPrivate;


class tst_QTreeView : public QObject
{
    Q_OBJECT

public slots:
    void selectionOrderTest();

private slots:
    void getSetCheck();

    // one test per QTreeView property
    void construction();
    void alternatingRowColors();
    void currentIndex_data();
    void currentIndex();
#ifndef QT_NO_DRAGANDDROP
    void dragDropMode_data();
    void dragDropMode();
    void dragDropModeFromDragEnabledAndAcceptDrops_data();
    void dragDropModeFromDragEnabledAndAcceptDrops();
    void dragDropOverwriteMode();
#endif
    void editTriggers_data();
    void editTriggers();
    void hasAutoScroll();
    void horizontalScrollMode();
    void iconSize();
    void indexAt();
    void indexWidget();
    void itemDelegate();
    void itemDelegateForColumnOrRow();
    void keyboardSearch();
    void keyboardSearchMultiColumn();
    void setModel();
    void openPersistentEditor();
    void rootIndex();

    // specialized tests below
    void setHeader();
    void columnHidden();
    void rowHidden();
    void noDelegate();
    void noModel();
    void emptyModel();
    void removeRows();
    void removeCols();
    void limitedExpand();
    void expandAndCollapse_data();
    void expandAndCollapse();
    void expandAndCollapseAll();
    void expandWithNoChildren();
#ifndef QT_NO_ANIMATION
    void quickExpandCollapse();
#endif
    void keyboardNavigation();
    void headerSections();
    void moveCursor_data();
    void moveCursor();
    void setSelection_data();
    void setSelection();
    void extendedSelection_data();
    void extendedSelection();
    void indexAbove();
    void indexBelow();
    void clicked();
    void mouseDoubleClick();
    void rowsAboutToBeRemoved();
    void headerSections_unhideSection();
    void columnAt();
    void scrollTo();
    void rowsAboutToBeRemoved_move();
    void resizeColumnToContents();
    void insertAfterSelect();
    void removeAfterSelect();
    void hiddenItems();
    void spanningItems();
    void rowSizeHint();
    void setSortingEnabledTopLevel();
    void setSortingEnabledChild();
    void headerHidden();
    void indentation();

    void selection();
    void removeAndInsertExpandedCol0();
    void selectionWithHiddenItems();
    void selectAll();

    void disabledButCheckable();
    void sortByColumn_data();
    void sortByColumn();

    void evilModel_data();
    void evilModel();

    void indexRowSizeHint();
    void addRowsWhileSectionsAreHidden();
    void filterProxyModelCrash();
    void renderToPixmap_data();
    void renderToPixmap();
    void styleOptionViewItem();
    void keyboardNavigationWithDisabled();
    void saveRestoreState();

    // task-specific tests:
    void task174627_moveLeftToRoot();
    void task171902_expandWith1stColHidden();
    void task203696_hidingColumnsAndRowsn();
    void task211293_removeRootIndex();
    void task216717_updateChildren();
    void task220298_selectColumns();
    void task224091_appendColumns();
    void task225539_deleteModel();
    void task230123_setItemsExpandable();
    void task202039_closePersistentEditor();
    void task238873_avoidAutoReopening();
    void task244304_clickOnDecoration();
    void task246536_scrollbarsNotWorking();
    void task250683_wrongSectionSize();
    void task239271_addRowsWithFirstColumnHidden();
    void task254234_proxySort();
    void task248022_changeSelection();
    void task245654_changeModelAndExpandAll();
    void doubleClickedWithSpans();
    void taskQTBUG_6450_selectAllWith1stColumnHidden();
    void taskQTBUG_9216_setSizeAndUniformRowHeightsWrongRepaint();
    void taskQTBUG_11466_keyboardNavigationRegression();
    void taskQTBUG_13567_removeLastItemRegression();
    void taskQTBUG_25333_adjustViewOptionsForIndex();
    void taskQTBUG_18539_emitLayoutChanged();
    void taskQTBUG_8176_emitOnExpandAll();
    void taskQTBUG_37813_crash();
    void taskQTBUG_45697_crash();
    void taskQTBUG_7232_AllowUserToControlSingleStep();
    void taskQTBUG_8376();
    void testInitialFocus();
};



class task174627_TreeView : public QTreeView
{
	Q_OBJECT
protected slots:
	void currentChanged(const QModelIndex &current, const QModelIndex &)
	{
		emit currentChanged(current);
	}
signals:
	void currentChanged(const QModelIndex &);
};



class TreeView : public QTreeView
{
	Q_OBJECT
public slots:
	void handleSelectionChanged()
	{
		//let's select the last item
		QModelIndex idx = model()->index(0, 0);
		selectionModel()->select(QItemSelection(idx, idx), QItemSelectionModel::Select);
		disconnect(selectionModel(), SIGNAL(selectionChanged(QItemSelection, QItemSelection)), this, SLOT(handleSelectionChanged()));
	}
};



class TreeViewQTBUG_9216 : public QTreeView
{
	Q_OBJECT
public:
	void paintEvent(QPaintEvent *event)
	{
		if (doCompare)
			QCOMPARE(event->rect(), viewport()->rect());
		QTreeView::paintEvent(event);
		painted++;
	}
	int painted;
	bool doCompare;
};



class Model_11466 : public QAbstractItemModel
{
	Q_OBJECT
public:
	Model_11466(QObject * /* parent */) :
		m_block(false)
	{
		// set up the model to have two top level items and a few others
		m_selectionModel = new QItemSelectionModel(this, this); // owned by this

		connect(m_selectionModel, SIGNAL(currentChanged(QModelIndex, QModelIndex)),
			this, SLOT(slotCurrentChanged(QModelIndex, QModelIndex)));
	};

	int rowCount(const QModelIndex &parent) const
	{
		if (parent.isValid())
			return (parent.internalId() == 0) ? 4 : 0;
		return 2; // two top level items
	}

	int columnCount(const QModelIndex & /* parent */) const
	{
		return 2;
	}

	QVariant data(const QModelIndex &index, int role) const
	{
		if (role == Qt::DisplayRole && index.isValid()) {
			qint64 parentRowPlusOne = index.internalId();
			QString str;
			QTextStream stream(&str);
			if (parentRowPlusOne > 0)
				stream << parentRowPlusOne << " -> " << index.row() << " : " << index.column();
			else
				stream << index.row() << " : " << index.column();
			return QVariant(str);
		}
		return QVariant();
	}

	QModelIndex parent(const QModelIndex &index) const
	{
		if (index.isValid()) {
			qint64 parentRowPlusOne = index.internalId();
			if (parentRowPlusOne > 0) {
				int row = static_cast<int>(parentRowPlusOne - 1);
				return createIndex(row, 0);
			}
		}
		return QModelIndex();
	}

	void bindView(QTreeView *view)
	{
		// sets the view to this model with a shared selection model
		QItemSelectionModel *oldModel = view->selectionModel();
		if (oldModel != m_selectionModel)
			delete oldModel;
		view->setModel(this); // this creates a new selection model for the view, but we don't want it either ...
		oldModel = view->selectionModel();
		view->setSelectionModel(m_selectionModel);
		delete oldModel;
	}

	QModelIndex index(int row, int column, const QModelIndex &parent) const
	{
		return createIndex(row, column, parent.isValid() ? (quintptr)(parent.row() + 1) : (quintptr)0);
	}

public slots:
	void slotCurrentChanged(const QModelIndex &current, const QModelIndex &)
	{
		if (m_block)
			return;

		if (current.isValid()) {
			int selectedRow = current.row();
			const quintptr parentRowPlusOne = current.internalId();

			for (int i = 0; i < 2; ++i) {
				// announce the removal of all non top level items
				beginRemoveRows(createIndex(i, 0), 0, 3);
				// nothing to actually do for the removal
				endRemoveRows();

				// put them back in again
				beginInsertRows(createIndex(i, 0), 0, 3);
				// nothing to actually do for the insertion
				endInsertRows();
			}
			// reselect the current item ...
			QModelIndex selectedIndex = createIndex(selectedRow, 0, parentRowPlusOne);

			m_block = true; // recursion block
			m_selectionModel->select(selectedIndex, QItemSelectionModel::ClearAndSelect | QItemSelectionModel::Current | QItemSelectionModel::Rows);
			m_selectionModel->setCurrentIndex(selectedIndex, QItemSelectionModel::NoUpdate);
			m_block = false;
		}
		else {
			m_selectionModel->clear();
		}
	}

private:
	bool m_block;
	QItemSelectionModel *m_selectionModel;
};




// QTBUG-45697: Using a QTreeView with a multi-column model filtered by QSortFilterProxyModel,
// when sorting the source model while the widget is not yet visible and showing the widget
// later on, corruption occurs in QTreeView.
class Qtbug45697TestWidget : public QWidget
{
	Q_OBJECT
public:
	static const int columnCount = 3;

	explicit Qtbug45697TestWidget();
	int timerTick() const { return m_timerTick; }

public slots:
	void slotTimer();

private:
	QTreeView *m_treeView;
	QStandardItemModel *m_model;
	QSortFilterProxyModel *m_sortFilterProxyModel;
	int m_timerTick;
};
