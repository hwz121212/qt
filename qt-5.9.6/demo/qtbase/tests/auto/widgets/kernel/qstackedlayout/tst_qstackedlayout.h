#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <QLineEdit>
#include <QLabel>
#include <QStackedLayout>
#include <qapplication.h>
#include <qwidget.h>
#include <QPushButton>

class tst_QStackedLayout : public QObject
{
    Q_OBJECT

public:
    tst_QStackedLayout();

private slots:
    void init();
    void cleanup();

    void getSetCheck();
    void testCase();
    void deleteCurrent();
    void removeWidget();
    void keepFocusAfterSetCurrent();
    void heigthForWidth();
    void replaceWidget();

private:
    QWidget *testWidget;
};

