#pragma once


#include <QtTest/QtTest>
#include <QAxScriptManager>
#include <QAxScript>

class tst_QAxScript : public QObject
{
    Q_OBJECT

private slots:
    void scriptReturnValue();
};
