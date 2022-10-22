#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>


#include "qbuttongroup.h"
#include <qaction.h>
#include <qapplication.h>
#include <qdialog.h>
#include <qlayout.h>
#include <qgroupbox.h>
#include <qradiobutton.h>
#include <qpushbutton.h>
#include <qlineedit.h>
#include <qtoolbutton.h>
#ifdef Q_OS_MAC
#include <qsettings.h>
#endif

class SpecialRadioButton: public QRadioButton
{
public:
    SpecialRadioButton(QWidget *parent) : QRadioButton(parent)
    { }

protected:
    void focusInEvent(QFocusEvent *)
    {
        QCoreApplication::postEvent(this, new QKeyEvent(QEvent::KeyPress,
                                                        Qt::Key_Down, Qt::NoModifier));
    }
};

#include <qbuttongroup.h>

class tst_QButtonGroup : public QObject
{
Q_OBJECT

private slots:
    void arrowKeyNavigation();
    void exclusive();
    void exclusiveWithActions();
    void testSignals();
    void checkedButton();

    void task106609();

    void autoIncrementId();

    void task209485_removeFromGroupInEventHandler_data();
    void task209485_removeFromGroupInEventHandler();
};

QT_BEGIN_NAMESPACE
extern bool Q_GUI_EXPORT qt_tab_all_widgets();
QT_END_NAMESPACE




class task209485_ButtonDeleter : public QObject
{
	Q_OBJECT

public:
	task209485_ButtonDeleter(QButtonGroup *group, bool deleteButton)
		: group(group)
		, deleteButton(deleteButton)
	{
		connect(group, SIGNAL(buttonClicked(int)), SLOT(buttonClicked(int)));
	}

private slots:
	void buttonClicked(int)
	{
		if (deleteButton)
			group->removeButton(group->buttons().first());
	}

private:
	QButtonGroup *group;
	bool deleteButton;
};
