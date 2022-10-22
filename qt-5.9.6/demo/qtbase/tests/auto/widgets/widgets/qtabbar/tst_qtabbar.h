#pragma once



#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qapplication.h>
#include <qtabbar.h>

#include <qpushbutton.h>
#include <qstyle.h>

class tst_QTabBar : public QObject
{
    Q_OBJECT

public:
    tst_QTabBar();
    virtual ~tst_QTabBar();

public slots:
    void initTestCase();
    void cleanupTestCase();
    void init();

private slots:
    void getSetCheck();
    void setIconSize();
    void setIconSize_data();

    void testCurrentChanged_data();
    void testCurrentChanged();

    void insertAtCurrentIndex();

    void removeTab_data();
    void removeTab();

    void setElideMode_data();
    void setElideMode();
    void sizeHints();

    void setUsesScrollButtons_data();
    void setUsesScrollButtons();

    void removeLastTab();

    void closeButton();

    void tabButton_data();
    void tabButton();

    void selectionBehaviorOnRemove_data();
    void selectionBehaviorOnRemove();

    void moveTab_data();
    void moveTab();

    void task251184_removeTab();
    void changeTitleWhileDoubleClickingTab();

    void taskQTBUG_10052_widgetLayoutWhenMoving();

    void tabBarClicked();
    void autoHide();
};


class TabBar : public QTabBar
{
	Q_OBJECT
public:
	void callMoveTab(int from, int to) { moveTab(from, to); }
};


class MyTabBar : public QTabBar
{
	Q_OBJECT
public slots:
	void onCurrentChanged()
	{
		//we just want this to be done once
		disconnect(this, SIGNAL(currentChanged(int)), this, SLOT(onCurrentChanged()));
		removeTab(0);
	}
};


class TitleChangeTabBar : public QTabBar
{
	Q_OBJECT

		QTimer timer;
	int count;

public:
	TitleChangeTabBar(QWidget * parent = 0) : QTabBar(parent), count(0)
	{
		setMovable(true);
		addTab("0");
		connect(&timer, SIGNAL(timeout()), this, SLOT(updateTabText()));
		timer.start(1);
	}

public slots:
	void updateTabText()
	{
		count++;
		setTabText(0, QString::number(count));
	}
};
