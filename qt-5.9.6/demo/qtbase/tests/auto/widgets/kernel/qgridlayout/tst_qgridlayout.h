#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qlayout.h>
#include <qapplication.h>
#include <qwidget.h>
#include <qproxystyle.h>
#include <qsizepolicy.h>
//#include <QtGui>

#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QStyleFactory>
#include <QSharedPointer>

#include <QtTest/private/qtesthelpers_p.h>

using namespace QTestPrivate;

class tst_QGridLayout : public QObject
{
Q_OBJECT

private slots:
    void cleanup();
    void getItemPosition();
    void itemAtPosition();
    void badDistributionBug();
    void setMinAndMaxSize();
    void spacingAndSpacers();

    void spacingsAndMargins();
    void spacingsAndMargins_data();
    void minMaxSize_data();
    void minMaxSize();

    void styleDependentSpacingsAndMargins_data();
    void styleDependentSpacingsAndMargins();
    void layoutSpacing_data();
    void layoutSpacing();
    void spacing();
    void spacerWithSpacing();
    void contentsRect();
    void distributeMultiCell();

    void taskQTBUG_27420_takeAtShouldUnparentLayout();
    void taskQTBUG_40609_addingWidgetToItsOwnLayout();
    void taskQTBUG_40609_addingLayoutToItself();
    void taskQTBUG_52357_spacingWhenItemIsHidden();
    void replaceWidget();
    void dontCrashWhenExtendsToEnd();
};


class Qt42Style : public QProxyStyle
{
	Q_OBJECT
public:
	Qt42Style() : QProxyStyle(QStyleFactory::create("windows"))
	{
		spacing = 6;
		margin = 9;
		margin_toplevel = 11;
	}

	virtual int pixelMetric(PixelMetric metric, const QStyleOption * option = 0,
		const QWidget * widget = 0) const;

	int spacing;
	int margin;
	int margin_toplevel;

};


class CustomLayoutStyle : public QProxyStyle
{
	Q_OBJECT
public:
	CustomLayoutStyle() : QProxyStyle(QStyleFactory::create("windows"))
	{
		hspacing = 5;
		vspacing = 10;
		reimplementSubelementRect = false;
	}

	virtual int pixelMetric(PixelMetric metric, const QStyleOption * option = 0,
		const QWidget * widget = 0) const;
	virtual QRect subElementRect(SubElement sr, const QStyleOption *opt,
		const QWidget *widget) const;

	int hspacing;
	int vspacing;
	bool reimplementSubelementRect;

	int layoutSpacing(QSizePolicy::ControlType control1,
		QSizePolicy::ControlType control2,
		Qt::Orientation orientation,
		const QStyleOption *option = 0,
		const QWidget *widget = 0) const;

};
