#pragma once



#define QT_GUI_LIB
#define QT_WIDGETS_LIB


#include <QtTest/QtTest>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qscreen.h>

class tst_QToolTip : public QObject
{
    Q_OBJECT

private slots:
    void init();
    void cleanup();
    void task183679_data();
    void task183679();
    void whatsThis();
    void setPalette();
};


class Widget_task183679 : public QWidget
{
	Q_OBJECT
public:
	Widget_task183679(QWidget *parent = 0) : QWidget(parent) {}

	void showDelayedToolTip(int msecs)
	{
		QTimer::singleShot(msecs, this, SLOT(showToolTip()));
	}

private slots:
	void showToolTip()
	{
		QToolTip::showText(mapToGlobal(QPoint(0, 0)), "tool tip text", this);
	}
};
