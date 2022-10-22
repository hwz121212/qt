#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qgraphicslinearlayout.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicswidget.h>
#include <qgraphicsscene.h>
#include <qgraphicsview.h>
#include <qapplication.h>
#include <QtWidgets/qstyle.h>
#include <QtWidgets/qproxystyle.h>

class tst_QGraphicsLinearLayout : public QObject {
Q_OBJECT

private slots:
    void initTestCase();
    void qgraphicslinearlayout_data();
    void qgraphicslinearlayout();

    void alignment_data();
    void alignment();
    void count_data();
    void count();
    void dump_data();
    void dump();
    void geometry_data();
    void geometry();
    void insertItem_data();
    void insertItem();
    void insertStretch_data();
    void insertStretch();
    void invalidate_data();
    void invalidate();
    void itemAt_data();
    void itemAt();
    void itemAt_visualOrder();
    void orientation_data();
    void orientation();
    void removeAt_data();
    void removeAt();
    void removeItem_data();
    void removeItem();
    void setGeometry_data();
    void setGeometry();
    void defaultSpacing();
    void setSpacing_data();
    void setSpacing();
    void setItemSpacing_data();
    void setItemSpacing();
    void itemSpacing();
    void setStretchFactor_data();
    void setStretchFactor();
    void testStretch();
    void defaultStretchFactors_data();
    void defaultStretchFactors();
    void sizeHint_data();
    void sizeHint();
    void updateGeometry();
    void layoutDirection();
    void removeLayout();
    void avoidRecursionInInsertItem();
    void styleInfoLeak();
    void testAlignmentInLargerLayout();
    void testOffByOneInLargerLayout();
    void testDefaultAlignment();
    void combineSizePolicies();
    void hiddenItems();

    // Task specific tests
    void task218400_insertStretchCrash();
};
