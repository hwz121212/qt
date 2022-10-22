#pragma once

#include <QtTest/QtTest>

#include <qpa/qplatformprintplugin.h>
#include <qpa/qplatformprintersupport.h>

#include <private/qprintdevice_p.h>

class tst_QPrintDevice : public QObject
{
    Q_OBJECT

private slots:
    void basics();
};

