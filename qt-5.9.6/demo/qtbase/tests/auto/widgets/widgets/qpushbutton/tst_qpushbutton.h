#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>


#include "qpushbutton.h"
#include <qapplication.h>

#include <qpushbutton.h>
#include <qmenu.h>
#include <qtimer.h>
#include <QDialog>
#include <QGridLayout>
#include <QStyleFactory>
#include <QTabWidget>

class tst_QPushButton : public QObject
{
Q_OBJECT

private slots:
    void initTestCase();
    void cleanupTestCase();
    void init();

    void getSetCheck();
    void autoRepeat();
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
    void sizeHint_data();
    void sizeHint();
    void taskQTBUG_20191_shortcutWithKeypadModifer();
    void emitReleasedAfterChange();

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

    QPushButton *testWidget;
};

