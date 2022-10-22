#pragma once


#include <QtTest/QtTest>
#include <qfileiconprovider.h>
#include <qfileinfo.h>

class tst_QFileIconProvider : public QObject
{
    Q_OBJECT

private slots:
    void qfileiconprovider_data();
    void qfileiconprovider();

    void iconType_data();
    void iconType();

    void iconInfo_data();
    void iconInfo();

    void type_data();
    void type();

    void taskQTBUG_46755_QFileIconEngine_crash();
};
