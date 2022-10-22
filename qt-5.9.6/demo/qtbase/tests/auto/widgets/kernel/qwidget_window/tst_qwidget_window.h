#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB


#include <QtTest/QtTest>
#include <QtGui/QtGui>
#include <QtCore/QTextStream>
#include <QtCore/QStringList>
#include <QtCore/QMimeData>
#include <QtCore/QPoint>
#include <qeventloop.h>
#include <qlist.h>

#include <qlistwidget.h>
#include <qpushbutton.h>
#include <qboxlayout.h>
#include <qtabwidget.h>
#include <qlabel.h>
#include <qmainwindow.h>
#include <qtoolbar.h>
#include <private/qwindow_p.h>

#include <QtTest/private/qtesthelpers_p.h>

using namespace QTestPrivate;

class tst_QWidget_window : public QObject
{
    Q_OBJECT

public:
    tst_QWidget_window(){};

public slots:
    void initTestCase();
    void cleanupTestCase();
    void cleanup();

private slots:
    void tst_min_max_size();
    void tst_min_max_size_data();
    void tst_move_show();
    void tst_show_move();
    void tst_show_move_hide_show();

    void tst_resize_show();
    void tst_show_resize();
    void tst_show_resize_hide_show();

    void tst_windowFilePathAndwindowTitle_data();
    void tst_windowFilePathAndwindowTitle();
    void tst_windowFilePath_data();
    void tst_windowFilePath();

    void tst_showWithoutActivating();
    void tst_paintEventOnSecondShow();
    void tst_paintEventOnResize_QTBUG50796();

#ifndef QT_NO_DRAGANDDROP
    void tst_dnd();
#endif

    void tst_qtbug35600();
    void tst_updateWinId_QTBUG40681();
    void tst_recreateWindow_QTBUG40817();

    void tst_resize_count();
    void tst_move_count();

    void tst_eventfilter_on_toplevel();

    void QTBUG_50561_QCocoaBackingStore_paintDevice_crash();

    void QTBUG_56277_resize_on_showEvent();
};



class ResizeWidget : public QWidget
{
	Q_OBJECT
public:
	ResizeWidget(QWidget *parent = 0)
		: QWidget(parent)
		, resizeCount(0)
	{ }

	int resizeCount;

protected:
	void resizeEvent(QResizeEvent *) Q_DECL_OVERRIDE
	{
		resizeCount++;
	}
};


class MoveWidget : public QWidget
{
	Q_OBJECT
public:
	MoveWidget(QWidget *parent = 0)
		: QWidget(parent)
		, moveCount(0)
	{ }

	void moveEvent(QMoveEvent *) Q_DECL_OVERRIDE
	{
		moveCount++;
	}

	int moveCount;
};
