#pragma once

#define QT_GUI_LIB
#define QT_WIDGETS_LIB
#include <QtTest/QtTest>


#include <qapplication.h>
#include <qfontdatabase.h>
#include <qfontinfo.h>
#include <qtimer.h>
#include <qmainwindow.h>
#include <qlistview.h>
#include "qfontdialog.h"
#include <private/qfontdialog_p.h>

QT_FORWARD_DECLARE_CLASS(QtTestEventThread)

class tst_QFontDialog : public QObject
{
    Q_OBJECT

public:
    tst_QFontDialog();
    virtual ~tst_QFontDialog();


public slots:
    void postKeyReturn();
    void testGetFont();
    void testSetFont();
    void testNonStandardFontSize();

public slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();
private slots:
    void defaultOkButton();
    void setFont();
    void task256466_wrongStyle();
    void setNonStandardFontSize();
#ifndef QT_NO_STYLE_STYLESHEET
    void qtbug_41513_stylesheetStyle();
#endif


private:
    void runSlotWithFailsafeTimer(const char *member);
};
