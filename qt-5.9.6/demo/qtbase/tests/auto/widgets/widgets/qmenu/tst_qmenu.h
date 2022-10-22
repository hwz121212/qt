#pragma once



#define QT_GUI_LIB
#define QT_WIDGETS_LIB


#include <QtTest/QtTest>
#include <QtTest/private/qtesthelpers_p.h>
#include <qapplication.h>
#include <QPushButton>
#include <QMainWindow>
#include <QMenuBar>
#include <QToolBar>
#include <QToolButton>
#include <QStatusBar>
#include <QListWidget>
#include <QWidgetAction>
#include <QDesktopWidget>
#include <QScreen>
#include <qdialog.h>

#include <qmenu.h>
#include <qstyle.h>
#include <QStyleHints>
#include <QTimer>
#include <qdebug.h>

#include <qpa/qplatformtheme.h>

using namespace QTestPrivate;

Q_DECLARE_METATYPE(Qt::Key);
Q_DECLARE_METATYPE(Qt::KeyboardModifiers);

struct MenuMetrics {
    int fw;
    int hmargin;
    int vmargin;
    int tearOffHeight;

    MenuMetrics(const QMenu *menu) {
        fw = menu->style()->pixelMetric(QStyle::PM_MenuPanelWidth, nullptr, menu);
        hmargin = menu->style()->pixelMetric(QStyle::PM_MenuHMargin, nullptr, menu);
        vmargin = menu->style()->pixelMetric(QStyle::PM_MenuVMargin, nullptr, menu);
        tearOffHeight = menu->style()->pixelMetric(QStyle::PM_MenuTearoffHeight, nullptr, menu);
    }
};

class tst_QMenu : public QObject
{
    Q_OBJECT

public:
    tst_QMenu();

public slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
private slots:
    void getSetCheck();
    void addActionsAndClear();
    void addActionsConnect();

    void keyboardNavigation_data();
    void keyboardNavigation();
    void focus();
    void overrideMenuAction();
    void statusTip();
    void widgetActionFocus();
    void mouseActivation();
    void tearOff();
    void submenuTearOffDontClose();
    void layoutDirection();

    void task208001_stylesheet();
    void activeSubMenuPosition();
    void activeSubMenuPositionExec();
    void task242454_sizeHint();
    void task176201_clear();
    void task250673_activeMultiColumnSubMenuPosition();
    void task256918_setFont();
    void menuSizeHint();
    void task258920_mouseBorder();
    void setFixedWidth();
    void deleteActionInTriggered();
    void pushButtonPopulateOnAboutToShow();
    void QTBUG7907_submenus_autoselect();
    void QTBUG7411_submenus_activate();
    void QTBUG30595_rtl_submenu();
    void QTBUG20403_nested_popup_on_shortcut_trigger();
#ifndef QT_NO_CURSOR
    void QTBUG47515_widgetActionEnterLeave();
#endif
    void QTBUG_10735_crashWithDialog();
#ifdef Q_OS_MAC
    void QTBUG_37933_ampersands_data();
    void QTBUG_37933_ampersands();
#endif
    void QTBUG_56917_wideMenuSize();
    void QTBUG_56917_wideMenuScreenNumber();
    void QTBUG_56917_wideSubmenuScreenNumber();
    void menuSize_Scrolling_data();
    void menuSize_Scrolling();
    void tearOffMenuNotDisplayed();
    void QTBUG_61039_menu_shortcuts();

protected slots:
    void onActivated(QAction*);
    void onHighlighted(QAction*);
    void onStatusMessageChanged(const QString &);
    void onStatusTipTimer();
    void deleteAction(QAction *a) { delete a; }
private:
    void createActions();
    QMenu *menus[2], *lastMenu;
    enum { num_builtins = 10 };
    QAction *activated, *highlighted, *builtins[num_builtins];
    QString statustip;
    bool m_onStatusTipTimerExecuted;
};



// QTBUG-49588, QTBUG-48396: activeSubMenuPositionExec() is the same as
// activeSubMenuPosition(), but uses QMenu::exec(), which produces a different
// sequence of events. Verify that the sub menu is positioned to the right of the
// main menu.
class SubMenuPositionExecMenu : public QMenu
{
	Q_OBJECT
public:
	SubMenuPositionExecMenu() : QMenu("Menu-Title"), m_timerId(-1), m_timerTick(0)
	{
		addAction("Item 1");
		m_subMenu = addMenu("Submenu");
		m_subAction = m_subMenu->addAction("Sub-Item1");
		setActiveAction(m_subMenu->menuAction());
	}

protected:
	void showEvent(QShowEvent *e) Q_DECL_OVERRIDE
	{
		QVERIFY(m_subMenu->isVisible());
		QVERIFY2(m_subMenu->x() > x(),
			(QByteArray::number(m_subMenu->x()) + ' ' + QByteArray::number(x())).constData());
		m_timerId = startTimer(50);
		QMenu::showEvent(e);
	}

	void timerEvent(QTimerEvent *e) Q_DECL_OVERRIDE
	{
		if (e->timerId() == m_timerId) {
			switch (m_timerTick++) {
			case 0:
				m_subMenu->close();
				break;
			case 1:
				close();
				break;
			}
		}
	}

private:
	int m_timerId;
	int m_timerTick;
	QMenu *m_subMenu;
	QAction *m_subAction;
};


class Menu : public QMenu
{
	Q_OBJECT
public slots:
	void clear()
	{
		QMenu::clear();
	}
};



class Menu258920 : public QMenu
{
	Q_OBJECT
public slots:
	void paintEvent(QPaintEvent *e)
	{
		QMenu::paintEvent(e);
		painted = true;
	}

public:
	bool painted;
};


class PopulateOnAboutToShowTestMenu : public QMenu {
	Q_OBJECT
public:
	explicit PopulateOnAboutToShowTestMenu(QWidget *parent = 0);

public slots:
	void populateMenu();
};



class MyMenu : public QMenu
{
	Q_OBJECT
public:
	MyMenu() : m_currentIndex(0)
	{
		for (int i = 0; i < 2; ++i)
			dialogActions[i] = addAction(QLatin1String("dialog ") + QString::number(i), dialogs + i, SLOT(exec()));
	}

	void activateAction(int index)
	{
		m_currentIndex = index;
		popup(QPoint());
		QVERIFY(QTest::qWaitForWindowExposed(this));
		setActiveAction(dialogActions[index]);
		QTimer::singleShot(500, this, SLOT(checkVisibility()));
		QTest::keyClick(this, Qt::Key_Enter); //activation
	}

public slots:
	void activateLastAction()
	{
		activateAction(1);
	}

	void checkVisibility()
	{
		QTRY_VERIFY(dialogs[m_currentIndex].isVisible());
		if (m_currentIndex == 1) {
			QApplication::closeAllWindows(); //this is the end of the test
		}
	}

private:
	QAction *dialogActions[2];
	QDialog dialogs[2];
	int m_currentIndex;
};
