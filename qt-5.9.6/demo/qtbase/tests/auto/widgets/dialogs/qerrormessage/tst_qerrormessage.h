#pragma once


#include <QtTest/QtTest>
#include <QErrorMessage>
#include <QDebug>
#include <QCheckBox>

class tst_QErrorMessage : public QObject
{
    Q_OBJECT

private slots:
    void dontShowAgain();
    void dontShowCategoryAgain();

};

