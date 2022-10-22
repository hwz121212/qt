#pragma once

#include <QtTest/QtTest>
#include <QtCore/QVariant>
#include <QtCore/QDateTime>
#include <QtCore/QMetaType>

#include <qt_windows.h>

QT_BEGIN_NAMESPACE

// Conversion functions from statically linked library (axtypes.h)
bool QVariantToVARIANT_container(const QVariant &var, VARIANT &arg,
                                 const QByteArray &typeName = QByteArray(),
                                 bool out = false);

QVariant VARIANTToQVariant_container(const VARIANT &arg, const QByteArray &typeName,
                                     uint type = 0);

QT_END_NAMESPACE

class tst_Conversion : public QObject
{
    Q_OBJECT

private slots:
    void conversion_data();
    void conversion();
};

enum Mode {
    ByValue,
    ByReference, // Allocate new value
    OutParameter // Pre-allocated out-parameter by reference (test works only for types < qint64)
};
