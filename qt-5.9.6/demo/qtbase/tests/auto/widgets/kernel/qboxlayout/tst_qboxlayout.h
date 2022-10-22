#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <QtGui>
#include <QtWidgets>

#include <QtTest/private/qtesthelpers_p.h>

using namespace QTestPrivate;

class tst_QBoxLayout : public QObject
{
    Q_OBJECT

private slots:
    void cleanup();
    void insertSpacerItem();
    void insertLayout();
    void sizeHint();
    void sizeConstraints();
    void setGeometry();
    void setStyleShouldChangeSpacing();

    void testLayoutEngine_data();
    void testLayoutEngine();

    void taskQTBUG_7103_minMaxWidthNotRespected();
    void taskQTBUG_27420_takeAtShouldUnparentLayout();
    void taskQTBUG_40609_addingWidgetToItsOwnLayout();
    void taskQTBUG_40609_addingLayoutToItself();
    void replaceWidget();
};

class CustomLayoutStyle : public QProxyStyle
{
    Q_OBJECT
public:
    CustomLayoutStyle() : QProxyStyle(QStyleFactory::create("windows"))
    {
        hspacing = 5;
        vspacing = 10;
    }

    virtual int pixelMetric(PixelMetric metric, const QStyleOption * option = 0,
                            const QWidget * widget = 0 ) const;

    int hspacing;
    int vspacing;
};

