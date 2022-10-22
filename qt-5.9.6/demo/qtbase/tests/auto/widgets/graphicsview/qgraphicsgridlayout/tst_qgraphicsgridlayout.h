#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qgraphicsgridlayout.h>
#include <qgraphicswidget.h>
#include <qgraphicsscene.h>
#include <qgraphicsview.h>
#include <qapplication.h>



class tst_QGraphicsGridLayout : public QObject
{
    Q_OBJECT

private slots:
    void qgraphicsgridlayout_data();
    void qgraphicsgridlayout();
    void addItem_data();
    void addItem();
    void alignment_data();
    void alignment();
    void alignment2();
    void alignment2_data();
    void columnAlignment_data();
    void columnAlignment();
    void columnCount_data();
    void columnCount();
    void columnMaximumWidth_data();
    void columnMaximumWidth();
    void columnMinimumWidth_data();
    void columnMinimumWidth();
    void columnPreferredWidth_data();
    void columnPreferredWidth();
    void setColumnFixedWidth();
    void columnSpacing();
    void columnStretchFactor();
    void count();
    void contentsMargins();
    void horizontalSpacing_data();
    void horizontalSpacing();
    void itemAt();
    void removeAt();
    void removeItem();
    void rowAlignment_data();
    void rowAlignment();
    void rowCount_data();
    void rowCount();
    void rowMaximumHeight_data();
    void rowMaximumHeight();
    void rowMinimumHeight_data();
    void rowMinimumHeight();
    void rowPreferredHeight_data();
    void rowPreferredHeight();
    void rowSpacing();
    void rowStretchFactor_data();
    void rowStretchFactor();
    void setColumnSpacing_data();
    void setColumnSpacing();
    void setGeometry_data();
    void setGeometry();
    void setRowFixedHeight();
    void setRowSpacing_data();
    void setRowSpacing();
    void setSpacing_data();
    void setSpacing();
    void sizeHint_data();
    void sizeHint();
    void verticalSpacing_data();
    void verticalSpacing();
    void layoutDirection_data();
    void layoutDirection();
    void removeLayout();
    void defaultStretchFactors_data();
    void defaultStretchFactors();
    void geometries_data();
    void geometries();
    void avoidRecursionInInsertItem();
    void styleInfoLeak();
    void task236367_maxSizeHint();
    void spanningItem2x2_data();
    void spanningItem2x2();
    void spanningItem2x3_data();
    void spanningItem2x3();
    void spanningItem();
    void spanAcrossEmptyRow();
    void heightForWidth();
    void widthForHeight();
    void heightForWidthWithSpanning();
    void stretchAndHeightForWidth();
    void testDefaultAlignment();
    void hiddenItems();
};
