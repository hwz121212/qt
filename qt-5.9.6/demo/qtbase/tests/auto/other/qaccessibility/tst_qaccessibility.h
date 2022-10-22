#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtCore/qglobal.h>

#include <QtTest/QtTest>
#include <QtGui>
#include <QtWidgets>
#include <math.h>
#include <qpa/qplatformnativeinterface.h>
#include <qpa/qplatformintegration.h>
#include <qpa/qplatformaccessibility.h>
#include <QtGui/private/qguiapplication_p.h>
#include <QtGui/private/qhighdpiscaling_p.h>



class tst_QAccessibility : public QObject
{
    Q_OBJECT
public:
    tst_QAccessibility();

public slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();
private slots:
    void eventTest();
    void customWidget();
    void deletedWidget();
    void subclassedWidget();

    void statesStructTest();
    void navigateHierarchy();
    void sliderTest();
    void textAttributes_data();
    void textAttributes();
    void hideShowTest();

    void actionTest();

    void applicationTest();
    void mainWindowTest();
    void subWindowTest();
    void buttonTest();
    void scrollBarTest();
    void tabTest();
    void tabWidgetTest();
    void menuTest();
    void spinBoxTest();
    void doubleSpinBoxTest();
    void textEditTest();
    void textBrowserTest();
    void mdiAreaTest();
    void mdiSubWindowTest();
    void lineEditTest();
    void lineEditTextFunctions_data();
    void lineEditTextFunctions();
    void textInterfaceTest_data();
    void textInterfaceTest();
    void groupBoxTest();
    void dialogButtonBoxTest();
    void dialTest();
    void rubberBandTest();
    void abstractScrollAreaTest();
    void scrollAreaTest();

    void listTest();
    void treeTest();
    void tableTest();

    void calendarWidgetTest();
    void dockWidgetTest();
    void comboBoxTest();
    void accessibleName();
    void labelTest();
    void accelerators();
    void bridgeTest();

protected slots:
    void onClicked();
private:
    int click_count;
};


class CounterButton : public QPushButton {
	Q_OBJECT
public:
	CounterButton(const QString& name, QWidget* parent)
		: QPushButton(name, parent), clickCount(0)
	{
		connect(this, SIGNAL(clicked(bool)), SLOT(incClickCount()));
	}
	int clickCount;
public Q_SLOTS:
	void incClickCount() {
		++clickCount;
	}
};
