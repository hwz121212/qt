#pragma once


#define QT_GUI_LIB

#define QT_WIDGETS_LIB
#include <QtTest/QtTest>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStyle>
#include <QtWidgets/QLayout>
#include <QtWidgets/QDialog>
#include <QtWidgets/QAction>
#include <qdialogbuttonbox.h>
#include <limits.h>
#include <QApplication>

Q_DECLARE_METATYPE(QDialogButtonBox::ButtonRole)
Q_DECLARE_METATYPE(QDialogButtonBox::StandardButton)
Q_DECLARE_METATYPE(QDialogButtonBox::StandardButtons)

class tst_QDialogButtonBox : public QObject
{
    Q_OBJECT
public:
    tst_QDialogButtonBox();
    ~tst_QDialogButtonBox();


public slots:
    void buttonClicked1(QAbstractButton *);
    void acceptClicked();
    void rejectClicked();
    void helpRequestedClicked();

private slots:
    void standardButtons();
    void testConstructor1();
    void testConstructor2();
    void testConstructor2_data();
    void testConstructor3();
    void testConstructor3_data();
    void testConstructor4();
    void testConstructor4_data();
    void setOrientation_data();
    void setOrientation();
    void addButton1_data();
    void addButton1();
    void addButton2_data();
    void addButton2();
    void addButton3_data();
    void addButton3();
    void clear_data();
    void clear();
    void removeButton_data();
    void removeButton();
    void buttonRole_data();
    void buttonRole();
    void setStandardButtons_data();
    void setStandardButtons();
    void layoutReuse();


    // Skip these tests, buttons is used in every test thus far.
//    void buttons_data();
//    void buttons();

    void testDelete();
    void testSignalEmissionAfterDelete_QTBUG_45835();
    void testRemove();
    void testMultipleAdd();
    void testStandardButtonMapping_data();
    void testStandardButtonMapping();
    void testSignals_data();
    void testSignals();
    void testSignalOrder();
    void testDefaultButton_data();
    void testDefaultButton();

    void task191642_default();
    void testDeletedStandardButton();

private:
    qint64 timeStamp;
    qint64 buttonClicked1TimeStamp;
    qint64 acceptTimeStamp;
    qint64 rejectTimeStamp;
    qint64 helpRequestedTimeStamp;
};



class ObjectDeleter : public QObject
{
	Q_OBJECT
public slots:
	void deleteButton(QAbstractButton *button)
	{
		delete button;
	}

	void deleteSender()
	{
		delete sender();
	}
};
