#pragma once



#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>

#include "qmdisubwindow.h"
#include "qmdiarea.h"

#include <QLayout>
#include <QLineEdit>
#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QGroupBox>
#include <QTextEdit>
#include <QLayout>
#include <QHBoxLayout>
#include <QByteArray>
#include <QStyle>
#include <QStyleOptionTitleBar>
#include <QPushButton>
#include <QScreen>
#include <QSizeGrip>



class tst_QMdiSubWindow : public QObject
{
    Q_OBJECT
private slots:
    void initTestCase();
    void sizeHint();
    void minimumSizeHint();
    void minimumSize();
    void setWidget();
    void setWindowState_data();
    void setWindowState();
    void mainWindowSupport();
    void emittingOfSignals_data();
    void emittingOfSignals();
    void showShaded();
    void showNormal_data();
    void showNormal();
#ifndef QT_NO_CURSOR
    void setOpaqueResizeAndMove_data();
    void setOpaqueResizeAndMove();
#endif
    void setWindowFlags_data();
    void setWindowFlags();
    void mouseDoubleClick();
    void setSystemMenu();
    void restoreFocus();
    void restoreFocusOverCreation();
    void changeFocusWithTab();
    void closeEvent();
    void setWindowTitle();
    void resizeEvents_data();
    void resizeEvents();
#if defined(Q_OS_MAC)
    void defaultSizeGrip();
#endif
    void hideAndShow();
    void keepWindowMaximizedState();
    void explicitlyHiddenWidget();
    void resizeTimer();
    void fixedMinMaxSize();
#if !defined (Q_OS_DARWIN)
    void replaceMenuBarWhileMaximized();
    void closeOnDoubleClick_data();
    void closeOnDoubleClick();
#endif
    void setFont();
    void task_188849();
    void mdiArea();
    void task_182852();
    void task_233197();
    void task_226929();
    void styleChange();
    void testFullScreenState();
    void testRemoveBaseWidget();
};

