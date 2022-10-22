#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>


#include "qcommandlinkbutton.h"
#include <qapplication.h>

#include <qcommandlinkbutton.h>
#include <qmenu.h>
#include <qtimer.h>
#include <QDialog>
#include <QGridLayout>
#include <QPainter>

class tst_QCommandLinkButton : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void cleanupTestCase();
    void init();

    void getSetCheck();
    void pressed();
    void setAccel();
    void isCheckable();
    void setDown();
    void popupCrash();
    void isChecked();
    void animateClick();
    void toggle();
    void clicked();
    void toggled();
    void defaultAndAutoDefault();
    void setAutoRepeat();
    void heightForWithWithIcon();

protected slots:
    void resetCounters();
    void onClicked();
    void onToggled( bool on );
    void onPressed();
    void onReleased();
    void helperSlotDelete();

private:
    uint click_count;
    uint toggle_count;
    uint press_count;
    uint release_count;

    QCommandLinkButton *testWidget;
};

