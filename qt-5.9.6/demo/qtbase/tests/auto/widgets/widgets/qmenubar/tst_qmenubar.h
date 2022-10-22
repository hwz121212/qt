#pragma once



#define QT_GUI_LIB
#define QT_WIDGETS_LIB


#include <QtTest/QtTest>
#include <qapplication.h>
#include <qmainwindow.h>
#include <qmenubar.h>
#include <qstyle.h>
#include <qproxystyle.h>
#include <qstylefactory.h>
#include <qdesktopwidget.h>
#include <qaction.h>
#include <qstyleoption.h>
#include <QVBoxLayout>
#include <QLabel>
#include <QPlainTextEdit>
#include <qscreen.h>

#include <qobject.h>

QT_FORWARD_DECLARE_CLASS(QMainWindow)

#include <qmenubar.h>

#include <QtTest/private/qtesthelpers_p.h>

using namespace QTestPrivate;


class Menu : public QMenu
{
    Q_OBJECT
        public slots:
            void addActions()
            {
                //this will change the geometry of the menu
                addAction("action1");
                addAction("action2");
            }
};

struct TestMenu
{
    QList<QMenu *> menus;
    QList<QAction *> actions;
};

class tst_QMenuBar : public QObject
{
    Q_OBJECT
public:
    tst_QMenuBar();

private slots:
    void getSetCheck();
    void cleanup();

    void clear();
    void removeItemAt();
    void removeItemAt_data();
    void removeItem_data();
    void removeItem();
    void count();
    void insertItem_QString_QObject();

#if !defined(Q_OS_DARWIN)
    void accel();
    void activatedCount();
    void activatedCount_data();

    void check_accelKeys();
    void check_cursorKeys1();
    void check_cursorKeys2();
    void check_cursorKeys3();

    void check_escKey();
#endif
#ifndef Q_OS_WINCE
    void allowActiveAndDisabled();
#endif

    void taskQTBUG56860_focus();
    void check_endKey();
    void check_homeKey();

//     void check_mouse1_data();
//     void check_mouse1();
//     void check_mouse2_data();
//     void check_mouse2();

    void check_altPress();
    void check_altClosePress();
#if !defined(Q_OS_DARWIN)
    void check_shortcutPress();
    void check_menuPosition();
    void taskQTBUG46812_doNotLeaveMenubarHighlighted();
#endif
    void task223138_triggered();
    void task256322_highlight();
    void menubarSizeHint();
#ifndef Q_OS_MAC
    void taskQTBUG4965_escapeEaten();
#endif
    void taskQTBUG11823_crashwithInvisibleActions();
    void closeOnSecondClickAndOpenOnThirdClick();
    void cornerWidgets_data();
    void cornerWidgets();
    void taskQTBUG53205_crashReparentNested();
#ifdef Q_OS_MACOS
    void taskQTBUG56275_reinsertMenuInParentlessQMenuBar();
    void QTBUG_57404_existingMenuItemException();
#endif
    void taskQTBUG55966_subMenuRemoved();
    void QTBUG_58344_invalidIcon();

    void platformMenu();

protected slots:
    void onSimpleActivated( QAction*);
    void onComplexActionTriggered();
    void slotForTaskQTBUG53205();

private:
    TestMenu initSimpleMenuBar(QMenuBar *mb, bool forceNonNative = true);
    TestMenu initWindowWithSimpleMenuBar(QMainWindow &w, bool forceNonNative = true);
    QAction *createCharacterAction(QMenu *menu, char lowerAscii);
    QMenu *addNumberedMenu(QMenuBar *mb, int n);
    TestMenu initComplexMenuBar(QMenuBar *mb);
    TestMenu initWindowWithComplexMenuBar(QMainWindow &w);

    QAction* m_lastSimpleAcceleratorId;
    int m_simpleActivatedCount;
    int m_complexTriggerCount[int('k')];
    QMenuBar* taskQTBUG53205MenuBar;
};

