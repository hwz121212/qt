#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB


#include <QtTest/QtTest>
#include "qprogressbar.h"
#include <qlocale.h>
#include <qapplication.h>
#include <qstyleoption.h>
#include <qdebug.h>
#include <qtimer.h>
#include <QStyleFactory>

class tst_QProgressBar : public QObject
{
Q_OBJECT
private slots:
    void getSetCheck();
    void minMaxSameValue();
    void destroyIndeterminate();
    void text();
    void format();
    void setValueRepaint();
#ifndef Q_OS_MAC
    void setMinMaxRepaint();
#endif
    void sizeHint();
    void formatedText_data();
    void formatedText();
    void localizedFormattedText();

    void task245201_testChangeStyleAndDelete_data();
    void task245201_testChangeStyleAndDelete();
};

