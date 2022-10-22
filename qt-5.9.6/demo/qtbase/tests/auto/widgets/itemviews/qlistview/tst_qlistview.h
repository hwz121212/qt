#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>

#include <qabstractitemmodel.h>
#include <qapplication.h>
#include <qlistview.h>
#include <private/qlistview_p.h>
#include <private/qcoreapplication_p.h>
#include <qlistwidget.h>
#include <qitemdelegate.h>
#include <qstandarditemmodel.h>
#include <qstringlistmodel.h>
#include <cmath>
#include <math.h>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QDialog>
#include <QtWidgets/QStyledItemDelegate>
#include <QtWidgets/QStyleFactory>
#include <QtWidgets/QVBoxLayout>

#include <QtTest/private/qtesthelpers_p.h>

using namespace QTestPrivate;

#if defined(Q_OS_WIN)
#  include <windows.h>
#  include <QtGui/QGuiApplication>
#include <qpa/qplatformnativeinterface.h>
#endif // Q_OS_WIN


class tst_QListView : public QObject
{
    Q_OBJECT

private slots:
    void cleanup();
    void getSetCheck();
    void noDelegate();
    void noModel();
    void emptyModel();
    void removeRows();
    void cursorMove();
    void hideRows();
    void moveCursor();
    void moveCursor2();
    void moveCursor3();
    void indexAt();
    void clicked();
    void singleSelectionRemoveRow();
    void singleSelectionRemoveColumn();
    void modelColumn();
    void hideFirstRow();
    void batchedMode();
    void setCurrentIndex();
    void selection_data();
    void selection();
    void scrollTo();
    void scrollBarRanges();
    void scrollBarAsNeeded_data();
    void scrollBarAsNeeded();
    void moveItems();
    void wordWrap();
#if defined(Q_OS_WIN) && !defined(Q_OS_WINRT)
    void setCurrentIndexAfterAppendRowCrash();
#endif
    void emptyItemSize();
    void task203585_selectAll();
    void task228566_infiniteRelayout();
    void task248430_crashWith0SizedItem();
    void task250446_scrollChanged();
    void task196118_visualRegionForSelection();
    void task254449_draggingItemToNegativeCoordinates();
    void keyboardSearch();
    void shiftSelectionWithNonUniformItemSizes();
    void clickOnViewportClearsSelection();
    void task262152_setModelColumnNavigate();
    void taskQTBUG_2233_scrollHiddenItems_data();
    void taskQTBUG_2233_scrollHiddenItems();
    void taskQTBUG_633_changeModelData();
    void taskQTBUG_435_deselectOnViewportClick();
    void taskQTBUG_2678_spacingAndWrappedText();
    void taskQTBUG_5877_skippingItemInPageDownUp();
    void taskQTBUG_9455_wrongScrollbarRanges();
    void styleOptionViewItem();
    void taskQTBUG_12308_artihmeticException();
    void taskQTBUG_12308_wrongFlowLayout();
    void taskQTBUG_21115_scrollToAndHiddenItems_data();
    void taskQTBUG_21115_scrollToAndHiddenItems();
    void draggablePaintPairs_data();
    void draggablePaintPairs();
    void taskQTBUG_21804_hiddenItemsAndScrollingWithKeys_data();
    void taskQTBUG_21804_hiddenItemsAndScrollingWithKeys();
    void spacing_data();
    void spacing();
    void testScrollToWithHidden();
    void testViewOptions();
    void taskQTBUG_39902_mutualScrollBars_data();
    void taskQTBUG_39902_mutualScrollBars();
    void horizontalScrollingByVerticalWheelEvents();
    void taskQTBUG_7232_AllowUserToControlSingleStep();
    void taskQTBUG_51086_skippingIndexesInSelectedIndexes();
    void taskQTBUG_47694_indexOutOfBoundBatchLayout();
};



#if defined(Q_OS_WIN) && !defined(Q_OS_WINRT)
class SetCurrentIndexAfterAppendRowCrashDialog : public QDialog
{
	Q_OBJECT
public:
	SetCurrentIndexAfterAppendRowCrashDialog()
	{
		setWindowTitle(QTest::currentTestFunction());
		listView = new QListView(this);
		QVBoxLayout *layout = new QVBoxLayout(this);
		layout->addWidget(listView);
		listView->setViewMode(QListView::IconMode);

		model = new QStandardItemModel(this);
		listView->setModel(model);

		timer = new QTimer(this);
		connect(timer, SIGNAL(timeout()), this, SLOT(buttonClicked()));
		timer->start(1000);
	}

protected:
	void showEvent(QShowEvent *event) override;

private slots:
	void buttonClicked()
	{
		timer->stop();
		QStandardItem *item = new QStandardItem("test");
		model->appendRow(item);
		listView->setCurrentIndex(model->indexFromItem(item));
		close();
	}
private:
	QListView *listView;
	QStandardItemModel *model;
	QTimer *timer;
};


#endif // Q_OS_WIN && !Q_OS_WINRT






class Delegate12308 : public QStyledItemDelegate
{
	Q_OBJECT
public:
	Delegate12308(QObject *parent = 0) : QStyledItemDelegate(parent)
	{ }

	void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
	{
		QVERIFY(option.rect.topLeft() != QPoint(-1, -1));
		QStyledItemDelegate::paint(painter, option, index);
	}
};
