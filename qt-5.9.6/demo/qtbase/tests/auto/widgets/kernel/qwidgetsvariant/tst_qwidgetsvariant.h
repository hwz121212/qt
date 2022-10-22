#pragma once

#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <QWidget>



#include <qvariant.h>




class tst_QWidgetsVariant : public QObject
{
    Q_OBJECT

private slots:

    void constructor_invalid_data();
    void constructor_invalid();

    void canConvert_data();
    void canConvert();

    void writeToReadFromDataStream_data();
    void writeToReadFromDataStream();

    void qvariant_cast_QObject_data();
    void qvariant_cast_QObject();
    void qvariant_cast_QObject_derived();

    void debugStream_data();
    void debugStream();

    void implicitConstruction();

    void widgetsVariantAtExit();
};



class CustomQWidget : public QWidget {
	Q_OBJECT
public:
	CustomQWidget(QWidget *parent = 0) : QWidget(parent) {}
};