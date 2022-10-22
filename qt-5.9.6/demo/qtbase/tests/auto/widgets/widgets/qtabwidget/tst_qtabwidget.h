#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qtabwidget.h>
#include <qtabbar.h>
#include <qdebug.h>
#include <qapplication.h>
#include <qlabel.h>
#include <QtWidgets/qboxlayout.h>

#if defined(Q_OS_WIN) && !defined(Q_OS_WINRT)
#  include <qt_windows.h>
#define Q_CHECK_PAINTEVENTS \
    if (::SwitchDesktop(::GetThreadDesktop(::GetCurrentThreadId())) == 0) \
        QSKIP("desktop is not visible, this test would fail");
#else
#define Q_CHECK_PAINTEVENTS
#endif

class QTabWidgetChild:public QTabWidget {
  public:
    QTabWidgetChild():tabCount(0) {
        QVERIFY(tabBar() != NULL);
        QWidget *w = new QWidget;
        int index = addTab(w, "test");
          QCOMPARE(tabCount, 1);
          removeTab(index);
          QCOMPARE(tabCount, 0);

          // Test bad arguments
          // This will assert, so don't do it :)
          //setTabBar(NULL);
    };

  protected:
    virtual void tabInserted(int /*index */ ) {
        tabCount++;
    };
    virtual void tabRemoved(int /*index */ ) {
        tabCount--;
    };
    int tabCount;
};

class tst_QTabWidget:public QObject {
  Q_OBJECT

private slots:
    void init();
    void cleanup();

    void getSetCheck();
    void testChild();
    void addRemoveTab();
    void tabPosition();
    void tabEnabled();
    void tabText();
    void tabShape();
    void tabTooltip();
    void tabIcon();
    void indexOf();
    void currentWidget();
    void currentIndex();
    void cornerWidget();
    void removeTab();
    void clear();
    void keyboardNavigation();
    void paintEventCount();
    void minimumSizeHint();
    void heightForWidth_data();
    void heightForWidth();
    void tabBarClicked();
    void moveCurrentTab();

  private:
    int addPage();
    void removePage(int index);
    QTabWidget *tw;
};


//test that the QTabWidget::count() is correct at the moment the currentChanged signal is emit
class RemoveTabObject : public QObject
{
	Q_OBJECT
public:
	RemoveTabObject(QTabWidget *_tw) : tw(_tw), count(-1) {
		connect(tw, SIGNAL(currentChanged(int)), this, SLOT(currentChanged()));
	}

	QTabWidget *tw;
	int count;
public slots:
	void currentChanged() { count = tw->count(); }
};

