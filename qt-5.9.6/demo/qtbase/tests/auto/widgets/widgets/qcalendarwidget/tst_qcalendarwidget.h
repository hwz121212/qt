#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>

#include <qcalendarwidget.h>
#include <qtoolbutton.h>
#include <qspinbox.h>
#include <qmenu.h>
#include <qdebug.h>
#include <qdatetime.h>
#include <qtextformat.h>

class tst_QCalendarWidget : public QObject
{
    Q_OBJECT

private slots:
    void getSetCheck();
    void buttonClickCheck();

    void setTextFormat();
    void resetTextFormat();

    void setWeekdayFormat();
    void showPrevNext_data();
    void showPrevNext();

    void firstDayOfWeek();

    void contentsMargins();
};

