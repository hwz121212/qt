#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>

#include <qcoreapplication.h>
#include <qdebug.h>
#include <qstackedwidget.h>
#include <qpushbutton.h>
#include <QHBoxLayout>
#include <qlineedit.h>

class tst_QStackedWidget : public QObject
{
Q_OBJECT

public:
    tst_QStackedWidget();
    virtual ~tst_QStackedWidget();

private slots:
    void getSetCheck();
    void testMinimumSize();
    void dynamicPages();
};

