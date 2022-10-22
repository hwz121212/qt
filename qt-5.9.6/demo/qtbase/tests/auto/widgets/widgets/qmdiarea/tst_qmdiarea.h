#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>

#include <QMdiSubWindow>
#include <QMdiArea>

#include <QApplication>
#include <QMainWindow>
#include <QMenuBar>
#include <QPushButton>
#include <QStyle>
#include <QStyleOption>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QDesktopWidget>
#include <QDockWidget>
#include <QScrollBar>
#include <QTextEdit>
#ifndef QT_NO_OPENGL
#include <QtOpenGL>
#include <QOpenGLContext>
#endif
#include <QStyleHints>



class tst_QMdiArea : public QObject
{
    Q_OBJECT
public:
    tst_QMdiArea();
public slots:
    void cleanup();

protected slots:
    void activeChanged(QMdiSubWindow *child);

private slots:
    // Tests from QWorkspace
    void subWindowActivated_data();
    void subWindowActivated();
    void subWindowActivated2();
    void subWindowActivatedWithMinimize();
    void showWindows();
    void changeWindowTitle();
    void changeModified();
    void childSize();
    void fixedSize();
    // New tests
    void minimumSizeHint();
    void sizeHint();
    void setActiveSubWindow();
    void activeSubWindow();
    void currentSubWindow();
    void addAndRemoveWindows();
    void addAndRemoveWindowsWithReparenting();
    void removeSubWindow_2();
    void closeWindows();
    void activateNextAndPreviousWindow();
    void subWindowList_data();
    void subWindowList();
    void setBackground();
    void setViewport();
    void tileSubWindows();
    void cascadeAndTileSubWindows();
    void resizeMaximizedChildWindows_data();
    void resizeMaximizedChildWindows();
    void focusWidgetAfterAddSubWindow();
    void dontMaximizeSubWindowOnActivation();
    void delayedPlacement();
    void iconGeometryInMenuBar();
    void resizeTimer();
    void updateScrollBars();
    void setActivationOrder_data();
    void setActivationOrder();
    void tabBetweenSubWindows();
    void setViewMode();
    void setTabsClosable();
    void setTabsMovable();
    void setTabShape();
    void setTabPosition_data();
    void setTabPosition();
    void nativeSubWindows();
    void task_209615();
    void task_236750();

private:
    QMdiSubWindow *activeWindow;
};

