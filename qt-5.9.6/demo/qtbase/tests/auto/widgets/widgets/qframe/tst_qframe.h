#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QTest>
#include <QFrame>
#include <QStyleOptionFrame>
#include <QPixmap>
#include <QStyle>
#include <QStyleFactory>

class tst_QFrame : public QObject
{
    Q_OBJECT
private slots:
    void testDefaults();
    void testInitStyleOption_data();
    void testInitStyleOption();
    void testPainting_data();
    void testPainting();
};

