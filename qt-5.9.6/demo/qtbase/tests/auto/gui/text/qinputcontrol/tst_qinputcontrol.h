#pragma once

#include <QtTest/QtTest>

#include <private/qinputcontrol_p.h>
#include <QtGui/QKeyEvent>

class tst_QInputControl: public QObject
{
    Q_OBJECT
private slots:
    void isAcceptableInput_data();
    void isAcceptableInput();
    void tabOnlyAcceptableInputForTextEdit();
};

