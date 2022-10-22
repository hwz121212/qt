#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qlayout.h>
#include "qstyle.h"
#include <qevent.h>
#include <qpainter.h>
#include <qpixmap.h>
#include <qapplication.h>
#include <qwidget.h>
#include <qlabel.h>
#include <qstyleoption.h>
#include <qscrollbar.h>
#include <qprogressbar.h>
#include <qtoolbutton.h>
#include <qtoolbar.h>

#include <qcommonstyle.h>
#include <qproxystyle.h>
#include <qstylefactory.h>

#include <qimagereader.h>
#include <qimagewriter.h>
#include <qmenu.h>
#include <qpushbutton.h>
#include <qspinbox.h>
#include <qcombobox.h>
#include <qradiobutton.h>
#include <qlineedit.h>
#include <qmdiarea.h>
#include <qscrollarea.h>
#include <qwidget.h>

#include <algorithm>

#include <QtTest/private/qtesthelpers_p.h>

using namespace QTestPrivate;

class tst_QStyle : public QObject
{
    Q_OBJECT
public:
    tst_QStyle();

private:
    bool testAllFunctions(QStyle *);
    bool testScrollBarSubControls();
    void testPainting(QStyle *style, const QString &platform);
private slots:
    void drawItemPixmap();
    void init();
    void cleanup();
#ifndef QT_NO_STYLE_FUSION
    void testFusionStyle();
#endif
    void testWindowsStyle();
#if defined(Q_OS_WIN) && !defined(QT_NO_STYLE_WINDOWSXP)
    void testWindowsXPStyle();
#endif
#if defined(Q_OS_WIN) && !defined(QT_NO_STYLE_WINDOWSVISTA)
    void testWindowsVistaStyle();
#endif
#ifdef Q_OS_MAC
    void testMacStyle();
#endif
    void testStyleFactory();
    void testProxyStyle();
    void pixelMetric();
#if !defined(QT_NO_STYLE_WINDOWS) && !defined(QT_NO_STYLE_FUSION)
    void progressBarChangeStyle();
#endif
    void defaultFont();
    void testDrawingShortcuts();
    void testFrameOnlyAroundContents();

    void testProxyCalled();
    void testStyleOptionInit();
private:
    void lineUpLayoutTest(QStyle *);
    QWidget *testWidget;
};



class Qt42Style : public QCommonStyle
{
	Q_OBJECT
public:
	Qt42Style() : QCommonStyle()
	{
		margin_toplevel = 10;
		margin = 5;
		spacing = 0;
	}

	virtual int pixelMetric(PixelMetric metric, const QStyleOption * option = 0,
		const QWidget * widget = 0) const;

	int margin_toplevel;
	int margin;
	int spacing;

};


class DrawTextStyle : public QProxyStyle
{
	Q_OBJECT
public:
	DrawTextStyle(QStyle *base = 0) : QProxyStyle(), alignment(0) { setBaseStyle(base); }
	void drawItemText(QPainter *painter, const QRect &rect,
		int flags, const QPalette &pal, bool enabled,
		const QString &text, QPalette::ColorRole textRole = QPalette::NoRole) const
	{
		DrawTextStyle *that = (DrawTextStyle *)this;
		that->alignment = flags;
		QProxyStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
	}
	int alignment;
};


class ProxyTest : public QProxyStyle
{
	Q_OBJECT
public:
	ProxyTest(QStyle *style = 0)
		:QProxyStyle(style)
		, called(false)
	{}

	void drawPrimitive(PrimitiveElement pe, const QStyleOption *opt, QPainter *p, const QWidget *w) const Q_DECL_OVERRIDE {
		called = true;
		return QProxyStyle::drawPrimitive(pe, opt, p, w);
	}
	mutable bool called;
};



class TestStyleOptionInitProxy : public QProxyStyle
{
	Q_OBJECT
public:
	mutable bool invalidOptionsDetected;
	explicit TestStyleOptionInitProxy(QStyle *style = Q_NULLPTR)
		: QProxyStyle(style),
		invalidOptionsDetected(false)
	{}

	void drawPrimitive(PrimitiveElement pe, const QStyleOption *opt, QPainter *p, const QWidget *w) const Q_DECL_OVERRIDE {
		checkStyleEnum<QStyle::PrimitiveElement>(pe, opt);
		return QProxyStyle::drawPrimitive(pe, opt, p, w);
	}

	void drawControl(ControlElement element, const QStyleOption *opt, QPainter *p, const QWidget *w) const Q_DECL_OVERRIDE {
		checkStyleEnum<QStyle::ControlElement>(element, opt);
		return QProxyStyle::drawControl(element, opt, p, w);
	}

	QRect subElementRect(SubElement subElement, const QStyleOption *option, const QWidget *widget) const Q_DECL_OVERRIDE {
		checkStyleEnum<QStyle::SubElement>(subElement, option);
		return QProxyStyle::subElementRect(subElement, option, widget);
	}

	void drawComplexControl(ComplexControl cc, const QStyleOptionComplex *opt, QPainter *p, const QWidget *widget) const Q_DECL_OVERRIDE {
		checkStyleEnum<QStyle::ComplexControl>(cc, opt);
		return QProxyStyle::drawComplexControl(cc, opt, p, widget);
	}

	QRect subControlRect(ComplexControl cc, const QStyleOptionComplex *opt, SubControl sc, const QWidget *widget) const Q_DECL_OVERRIDE {
		checkStyleEnum<QStyle::ComplexControl>(cc, opt);
		return QProxyStyle::subControlRect(cc, opt, sc, widget);
	}

	int pixelMetric(PixelMetric metric, const QStyleOption *option, const QWidget *widget) const Q_DECL_OVERRIDE {
		checkStyleEnum<QStyle::PixelMetric>(metric, option);
		return QProxyStyle::pixelMetric(metric, option, widget);
	}

	QSize sizeFromContents(ContentsType ct, const QStyleOption *opt, const QSize &contentsSize, const QWidget *w) const Q_DECL_OVERRIDE {
		checkStyleEnum<QStyle::ContentsType>(ct, opt);
		return QProxyStyle::sizeFromContents(ct, opt, contentsSize, w);
	}

	int styleHint(StyleHint stylehint, const QStyleOption *opt, const QWidget *widget, QStyleHintReturn *returnData) const Q_DECL_OVERRIDE {
		checkStyleEnum<QStyle::StyleHint>(stylehint, opt);
		return QProxyStyle::styleHint(stylehint, opt, widget, returnData);
	}

	QPixmap standardPixmap(StandardPixmap standardPixmap, const QStyleOption *opt, const QWidget *widget) const  Q_DECL_OVERRIDE {
		checkStyleEnum<QStyle::StandardPixmap>(standardPixmap, opt);
		return QProxyStyle::standardPixmap(standardPixmap, opt, widget);
	}

	QIcon standardIcon(StandardPixmap standardIcon, const QStyleOption *option, const QWidget *widget) const Q_DECL_OVERRIDE {
		checkStyleEnum<QStyle::StandardPixmap>(standardIcon, option);
		return QProxyStyle::standardIcon(standardIcon, option, widget);
	}

	QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap &pixmap, const QStyleOption *opt) const  Q_DECL_OVERRIDE {
		checkStyle(QString::asprintf("QIcon::Mode(%i)", iconMode).toLatin1(), opt);
		return QProxyStyle::generatedIconPixmap(iconMode, pixmap, opt);
	}

	int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption *option, const QWidget *widget) const Q_DECL_OVERRIDE {
		checkStyle(QString::asprintf("QSizePolicy::ControlType(%i), QSizePolicy::ControlType(%i)", control1, control2).toLatin1(), option);
		return QProxyStyle::layoutSpacing(control1, control2, orientation, option, widget);
	}

private:
	void checkStyle(const QByteArray &info, const QStyleOption *opt) const {
		if (opt && (opt->version == 0 || opt->styleObject == Q_NULLPTR)) {
			invalidOptionsDetected = true;
			qWarning() << baseStyle()->metaObject()->className()
				<< "Invalid QStyleOption found for"
				<< info;
			qWarning() << "Version:" << opt->version << "StyleObject:" << opt->styleObject;
		}
	}

	template<typename MEnum>
	void checkStyleEnum(MEnum element, const QStyleOption *opt) const {
		static QMetaEnum _enum = QMetaEnum::fromType<MEnum>();
		checkStyle(_enum.valueToKey(element), opt);
	}
};
