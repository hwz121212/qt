#pragma once

#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>



#include <qapplication.h>
#include <qpainter.h>
#include <qstyleoption.h>
#include <qkeysequence.h>
#include <qevent.h>
#include <qgridlayout.h>
#include <qabstractbutton.h>

class tst_QAbstractButton : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void cleanupTestCase();
    void init();

    void setAutoRepeat_data();
    void setAutoRepeat();

    void pressed();
    void released();
    void setText();
    void setIcon();

    void setShortcut();

    void animateClick();

    void isCheckable();
    void setDown();
    void isChecked();
    void toggled();
    void setEnabled();
    void shortcutEvents();
    void stopRepeatTimer();

    void mouseReleased(); // QTBUG-53244
#ifdef QT_KEYPAD_NAVIGATION
    void keyNavigation();
#endif

protected slots:
    void onClicked();
    void onToggled( bool on );
    void onPressed();
    void onReleased();
    void resetValues();

private:
    uint click_count;
    uint toggle_count;
    uint press_count;
    uint release_count;

    QAbstractButton *testWidget;
};

