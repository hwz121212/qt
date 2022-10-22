#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB
#include <QtTest/QtTest>


#include <qaction.h>
#include <qdockwidget.h>
#include <qmainwindow.h>
#include <qlineedit.h>
#include <qtabbar.h>
#include <QDesktopWidget>
#include <QtGui/QPainter>
#include "private/qdockwidget_p.h"

bool hasFeature(QDockWidget *dockwidget, QDockWidget::DockWidgetFeature feature);


void setFeature(QDockWidget *dockwidget, QDockWidget::DockWidgetFeature feature, bool on = true);


class tst_QDockWidget : public QObject
{
     Q_OBJECT

public:
    tst_QDockWidget();

private slots:
    void getSetCheck();
    void widget();
    void features();
    void setFloating();
    void allowedAreas();
    void toggleViewAction();
    void visibilityChanged();
    void updateTabBarOnVisibilityChanged();
    void dockLocationChanged();
    void setTitleBarWidget();
    void titleBarDoubleClick();
    void restoreStateOfFloating();
    void restoreDockWidget();
    void restoreStateWhileStillFloating();
    // task specific tests:
    void task165177_deleteFocusWidget();
    void task169808_setFloating();
    void task237438_setFloatingCrash();
    void task248604_infiniteResize();
    void task258459_visibilityChanged();
    void taskQTBUG_1665_closableChanged();
    void taskQTBUG_9758_undockedGeometry();
};

