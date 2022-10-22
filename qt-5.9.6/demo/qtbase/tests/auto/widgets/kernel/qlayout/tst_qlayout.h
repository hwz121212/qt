#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>

#include <qcoreapplication.h>
#include <qdebug.h>
#include <qboxlayout.h>
#include <qmenubar.h>
#include <qdialog.h>
#include <qsizegrip.h>
#include <qlabel.h>
#include <QtWidgets/QFrame>
#include <QtWidgets/QStyleFactory>
#include <QtWidgets/QSizePolicy>
#include <QtWidgets/QComboBox>
#include <QPushButton>
#include <QRadioButton>
#include <QApplication>

#include <private/qlayoutengine_p.h>

#include <QtTest/private/qtesthelpers_p.h>

using namespace QTestPrivate;

class tst_QLayout : public QObject
{
Q_OBJECT

public:
    tst_QLayout();
    virtual ~tst_QLayout();

private slots:
    void cleanup() { QVERIFY(QApplication::topLevelWidgets().isEmpty()); }
    void getSetCheck();
    void geometry();
    void smartMaxSize();
    void setLayoutBugs();
    void setContentsMargins();
    void layoutItemRect();
    void warnIfWrongParent();
    void controlTypes();
    void controlTypes2();
    void adjustSizeShouldMakeSureLayoutIsActivated();
    void testRetainSizeWhenHidden();
};
