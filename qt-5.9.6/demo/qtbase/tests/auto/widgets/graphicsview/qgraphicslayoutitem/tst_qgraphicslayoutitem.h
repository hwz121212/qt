#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qgraphicslayoutitem.h>
#include <float.h>
#include <limits.h>

class tst_QGraphicsLayoutItem : public QObject {
Q_OBJECT

private slots:
    void qgraphicslayoutitem();

    void contentsRect();
    void effectiveSizeHint_data();
    void effectiveSizeHint();
    void getContentsMargins();
    void isLayout_data();
    void isLayout();
    void maximumSize();
    void minimumSize();
    void parentLayoutItem_data();
    void parentLayoutItem();
    void preferredSize();
    void setMaximumSize_data();
    void setMaximumSize();
    void setMinimumSize_data();
    void setMinimumSize();
    void setPreferredSize_data();
    void setPreferredSize();
    void setSizePolicy_data();
    void setPreferredSize2();
    void setSizePolicy();
};
