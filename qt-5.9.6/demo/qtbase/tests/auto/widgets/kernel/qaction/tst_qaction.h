#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QDialog>
#include <QMainWindow>
#include <QtTest/QtTest>

#include <qapplication.h>
#include <qevent.h>
#include <qaction.h>
#include <qmenu.h>
#include <qpa/qplatformtheme.h>
#include <private/qguiapplication_p.h>

class tst_QAction : public QObject
{
    Q_OBJECT

public:
    tst_QAction();

    void updateState(QActionEvent *e);

private slots:
    void init();
    void cleanup();
    void getSetCheck();
    void setText_data();
    void setText();
    void setIconText_data() { setText_data(); }
    void setIconText();
    void setUnknownFont();
    void actionEvent();
    void setStandardKeys();
    void alternateShortcuts();
    void enabledVisibleInteraction();
    void task200823_tooltip();
    void task229128TriggeredSignalWithoutActiongroup();
    void task229128TriggeredSignalWhenInActiongroup();
    void repeat();
    void setData();
    void disableShortcutsWithBlockedWidgets_data();
    void disableShortcutsWithBlockedWidgets();

private:
    int m_lastEventType;
    const int m_keyboardScheme;
    QAction *m_lastAction;
};



class MyWidget : public QWidget
{
	Q_OBJECT
public:
	explicit MyWidget(tst_QAction *tst, QWidget *parent = nullptr) : QWidget(parent), m_test(tst)
	{
		setWindowTitle(QTest::currentTestFunction());
	}

protected:
	void actionEvent(QActionEvent *e) override { m_test->updateState(e); }

private:
	tst_QAction *m_test;
};
