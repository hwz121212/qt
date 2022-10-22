#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>

#include <qcoreapplication.h>
#include <qdebug.h>
#include <qtoolbutton.h>
#include <qmenu.h>
#include <qaction.h>
#include <qstyleoption.h>
#include <qscreen.h>
#include <qlabel.h>

class tst_QToolButton : public QObject
{
Q_OBJECT

public:
    tst_QToolButton();
    virtual ~tst_QToolButton();

private slots:
    void getSetCheck();
    void triggered();
    void collapseTextOnPriority();
    void task230994_iconSize();
    void task176137_autoRepeatOfAction();
    void qtbug_26956_popupTimerDone();
    void qtbug_34759_sizeHintResetWhenSettingMenu();

protected slots:
    void sendMouseClick();
private:
    QPointer<QWidget> m_menu;
};

