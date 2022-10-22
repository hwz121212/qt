#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>

#include <qapplication.h>
#include <qdebug.h>
#include <qprogressbar.h>
#include <qprogressdialog.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qpointer.h>
#include <qthread.h>
#include <qtranslator.h>

class tst_QProgressDialog : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void cleanup();
    void autoShow_data();
    void autoShow();
    void autoShowCtor();
    void getSetCheck();
    void task198202();
    void QTBUG_31046();
    void settingCustomWidgets();
    void i18n();
};
