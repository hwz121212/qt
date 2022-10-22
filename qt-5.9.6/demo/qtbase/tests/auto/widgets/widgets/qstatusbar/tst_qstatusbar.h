#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>


#include <qstatusbar.h>
#include <QLabel>
#include <QMainWindow>
#include <QSizeGrip>

class tst_QStatusBar: public QObject
{
    Q_OBJECT

protected slots:
    void messageChanged(const QString&);

private slots:
    void init();
    void cleanup();

    void tempMessage();
    void insertWidget();
    void insertPermanentWidget();
    void setSizeGripEnabled();
    void task194017_hiddenWidget();
    void QTBUG4334_hiddenOnMaximizedWindow();
    void QTBUG25492_msgtimeout();
    void messageChangedSignal();

private:
    QStatusBar *testWidget;
    QString currentMessage;
};

