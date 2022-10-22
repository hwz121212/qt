#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <QtCore/QProcess>
#include <QtCore/QRegularExpression>



class tst_qdbusxml2cpp : public QObject
{
    Q_OBJECT

    enum { Interface, Adaptor };

private slots:
    void initTestCase_data();
    void process_data();
    void process();
};

