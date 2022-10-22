#pragma once



#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>

#include <QDial>

class tst_QDial : public QObject
{
    Q_OBJECT
public:
    tst_QDial();

private slots:
    void getSetCheck();
    void valueChanged();
    void sliderMoved();
    void wrappingCheck();
};

