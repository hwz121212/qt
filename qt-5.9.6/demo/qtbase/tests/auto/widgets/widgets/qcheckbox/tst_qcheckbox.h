#pragma once




#define QT_GUI_LIB
#define QT_WIDGETS_LIB
#include <QtTest/QtTest>


#include "qcheckbox.h"
#include <qapplication.h>
#include <qpixmap.h>
#include <qdatetime.h>
#include <qcheckbox.h>

class tst_QCheckBox : public QObject
{
Q_OBJECT

private slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();

    void setChecked();
    void setTriState();
    void setText_data();
    void setText();
    void isToggleButton();
    void setDown();
    void setAutoRepeat();
    void toggle();
    void pressed();
    void toggled();
    void stateChanged();
    void foregroundRole();
    void minimumSizeHint();

protected slots:
    void onClicked();
    void onToggled( bool on );
    void onPressed();
    void onReleased();
    void onStateChanged( int state );

private:
    uint click_count;
    uint toggle_count;
    uint press_count;
    uint release_count;
    int cur_state;
    QCheckBox *testWidget;
};

