#pragma once

#define QT_GUI_LIB
#define QT_WIDGETS_LIB
#include <QtTest/QtTest>

#include <qcoreapplication.h>
#include <qdebug.h>
#include <qabstractscrollarea.h>
#include <qscrollarea.h>
#include <qscrollbar.h>
#include <qlabel.h>
#include <qwidget.h>
#include <qdialog.h>

class tst_QAbstractScrollArea : public QObject
{
Q_OBJECT

public:
    tst_QAbstractScrollArea();
    virtual ~tst_QAbstractScrollArea();
private slots:
    void scrollBarWidgets();
    void setScrollBars();
    void setScrollBars2();
    void objectNaming();
    void patternBackground();

    void viewportCrash();
    void task214488_layoutDirection_data();
    void task214488_layoutDirection();

    void margins();
};

