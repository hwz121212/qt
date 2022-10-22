#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>

#include <qapplication.h>
#include <qtoolbar.h>
#include <qcombobox.h>
#include <qwidgetaction.h>
#include <qlabel.h>
#include <qmenu.h>
#include <qmainwindow.h>
#include <qmenubar.h>

#include <QtTest/private/qtesthelpers_p.h>

using namespace QTestPrivate;

class tst_QWidgetAction : public QObject
{
    Q_OBJECT
private slots:
    void initTestCase();
    void cleanup();
    void defaultWidget();
    void visibilityUpdate();
    void customWidget();
    void keepOwnership();
    void visibility();
    void setEnabled();
    void popup();
    void releaseWidgetCrash();
};

