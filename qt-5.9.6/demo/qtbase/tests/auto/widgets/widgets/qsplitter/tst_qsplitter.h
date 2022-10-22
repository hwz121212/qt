#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qapplication.h>
#include <qsplitter.h>
#include <qstyle.h>
#include <qfile.h>
#include <qtextstream.h>
#include <qlayout.h>
#include <qabstractscrollarea.h>
#include <qgraphicsview.h>
#include <qmdiarea.h>
#include <qscrollarea.h>
#include <qtextedit.h>
#include <qtreeview.h>
#include <qlabel.h>
#include <qdialog.h>
#include <qscreen.h>
#include <qproxystyle.h>
#include <qdebug.h> // for file error messages

QT_FORWARD_DECLARE_CLASS(QSplitter)
QT_FORWARD_DECLARE_CLASS(QWidget)
class tst_QSplitter : public QObject
{
    Q_OBJECT

public:
    tst_QSplitter();
    virtual ~tst_QSplitter();

public slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
private slots:
    void getSetCheck();
    void setSizes();
    void setSizes_data();
    void saveAndRestoreState();
    void saveAndRestoreState_data();
    void saveState_data();
    void addWidget();
    void insertWidget();
    void setStretchFactor_data();
    void setStretchFactor();
    void testShowHide_data();
    void testShowHide();
    void testRemoval();
    void rubberBandNotInSplitter();
    void saveAndRestoreStateOfNotYetShownSplitter();
    void saveAndRestoreHandleWidth();
    void replaceWidget_data();
    void replaceWidget();
    void replaceWidgetWithSplitterChild_data();
    void replaceWidgetWithSplitterChild();
    void handleMinimumWidth();

    // task-specific tests below me:
    void task187373_addAbstractScrollAreas();
    void task187373_addAbstractScrollAreas_data();
    void task169702_sizes();
    void taskQTBUG_4101_ensureOneNonCollapsedWidget_data();
    void taskQTBUG_4101_ensureOneNonCollapsedWidget();
    void setLayout();
    void autoAdd();

private:
    void removeThirdWidget();
    void addThirdWidget();
    QSplitter *splitter;
    QWidget *w1;
    QWidget *w2;
    QWidget *w3;
};

