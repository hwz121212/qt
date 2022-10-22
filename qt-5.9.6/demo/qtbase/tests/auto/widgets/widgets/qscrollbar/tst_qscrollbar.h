#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <QScrollBar>
#include <QStyleOptionSlider>
#include <QScrollArea>
#include <QScreen>

#include <QtTest/private/qtesthelpers_p.h>

using namespace QTestPrivate;

class tst_QScrollBar : public QObject
{
    Q_OBJECT
private slots:
    void scrollSingleStep();
    void task_209492();
#if QT_CONFIG(wheelevent)
    void QTBUG_27308();
#endif
    void QTBUG_42871();
};

class SingleStepTestScrollBar : public QScrollBar {
    Q_OBJECT
public:
    explicit SingleStepTestScrollBar(Qt::Orientation o, QWidget *parent = 0) : QScrollBar(o, parent) {}

public slots:
    void hideAndShow()
    {
        hide();
        show();
    }
};



class QTBUG_42871_Handler : public QObject {
	Q_OBJECT
public:
	int updatesCount;
	QTBUG_42871_Handler() : QObject(), updatesCount(0) {}
public slots:
	void valueUpdated(int) { ++updatesCount; QTest::qSleep(600); }
};