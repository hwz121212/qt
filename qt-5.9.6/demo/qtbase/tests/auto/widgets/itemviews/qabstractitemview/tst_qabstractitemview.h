#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <QtTest/private/qtesthelpers_p.h>

#include <qabstractitemview.h>
#include <qstandarditemmodel.h>
#include <qapplication.h>
#include <qevent.h>
#include <qlistview.h>
#include <qlistwidget.h>
#include <qtableview.h>
#include <qtablewidget.h>
#include <qtreeview.h>
#include <qtreewidget.h>
#include <qheaderview.h>
#include <qspinbox.h>
#include <qitemdelegate.h>
#include <qpushbutton.h>
#include <qscrollbar.h>
#include <qboxlayout.h>
#include <qitemdelegate.h>
#include <qlineedit.h>
#include <qscreen.h>
#include <qscopedpointer.h>
#include <qstyleditemdelegate.h>
#include <qstringlistmodel.h>
#include <qsortfilterproxymodel.h>
#include <qproxystyle.h>
#include <qdialog.h>

Q_DECLARE_METATYPE(Qt::ItemFlags);

using namespace QTestPrivate;


class GeometriesTestView : public QTableView
{
    Q_OBJECT
public:
    GeometriesTestView() : QTableView(), updateGeometriesCalled(false) {}
    bool updateGeometriesCalled;
protected slots:
    void updateGeometries() Q_DECL_OVERRIDE { updateGeometriesCalled = true; QTableView::updateGeometries(); }
};

class tst_QAbstractItemView : public QObject
{
    Q_OBJECT

public:
    void basic_tests(QAbstractItemView *view);

private slots:
    void cleanup();
    void getSetCheck();
    void emptyModels_data();
    void emptyModels();
    void setModel_data();
    void setModel();
    void noModel();
    void dragSelect();
    void rowDelegate();
    void columnDelegate();
    void selectAll();
    void ctrlA();
    void persistentEditorFocus();
    void setItemDelegate();
    void setItemDelegate_data();
    // The dragAndDrop() test doesn't work, and is thus disabled on Mac and Windows
    // for the following reasons:
    //   Mac: use of GetCurrentEventButtonState() in QDragManager::drag()
    //   Win: unknown reason
#if !defined(Q_OS_MAC) && !defined(Q_OS_WIN)
#if 0
    void dragAndDrop();
    void dragAndDropOnChild();
#endif
#endif
    void noFallbackToRoot();
    void setCurrentIndex_data();
    void setCurrentIndex();

    void task221955_selectedEditor();
    void task250754_fontChange();
    void task200665_itemEntered();
    void task257481_emptyEditor();
    void shiftArrowSelectionAfterScrolling();
    void shiftSelectionAfterRubberbandSelection();
    void ctrlRubberbandSelection();
    void QTBUG6407_extendedSelection();
    void QTBUG6753_selectOnSelection();
    void testDelegateDestroyEditor();
    void testClickedSignal();
    void testChangeEditorState();
    void deselectInSingleSelection();
    void testNoActivateOnDisabledItem();
    void testFocusPolicy_data();
    void testFocusPolicy();
    void QTBUG31411_noSelection();
    void QTBUG39324_settingSameInstanceOfIndexWidget();
    void sizeHintChangeTriggersLayout();
    void shiftSelectionAfterChangingModelContents();
    void QTBUG48968_reentrant_updateEditorGeometries();
    void QTBUG50102_SH_ItemView_ScrollMode();
    void QTBUG50535_update_on_new_selection_model();
    void testSelectionModelInSyncWithView();
    void testClickToSelect();
    void testDialogAsEditor();
    void QTBUG46785_mouseout_hover_state();
    void testClearModelInClickedSignal();
    void inputMethodEnabled_data();
    void inputMethodEnabled();
};


class SetSelectionTestView : public QListView
{
	Q_OBJECT
public:
	SetSelectionTestView() : QListView() {}

signals:
	void setSelectionCalled(const QRect &rect);

protected:
	void setSelection(const QRect &rect, QItemSelectionModel::SelectionFlags flags) Q_DECL_OVERRIDE
	{
		emit setSelectionCalled(rect);
		QListView::setSelection(rect, flags);
	}
};


class StateChangeDelegate : public QItemDelegate {
	Q_OBJECT

public:
	explicit StateChangeDelegate(QObject* parent = 0) :
		QItemDelegate(parent)
	{}

	void setEditorData(QWidget *editor, const QModelIndex &index) const Q_DECL_OVERRIDE {
		Q_UNUSED(index);
		static bool w = true;
		editor->setEnabled(w);
		w = !w;
	}
};

class StateChangeModel : public QStandardItemModel {
	Q_OBJECT

public:
	explicit StateChangeModel(QObject *parent = 0) :
		QStandardItemModel(parent)
	{}

	void emitDataChanged() {
		emit dataChanged(index(0, 0), index(0, 1));
	}
};
