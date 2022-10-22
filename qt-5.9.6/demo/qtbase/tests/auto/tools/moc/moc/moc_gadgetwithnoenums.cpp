/****************************************************************************
** Meta object code from reading C++ file 'gadgetwithnoenums.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gadgetwithnoenums.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gadgetwithnoenums.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GadgetWithNoEnums_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GadgetWithNoEnums_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GadgetWithNoEnums_t qt_meta_stringdata_GadgetWithNoEnums = {
    {
QT_MOC_LITERAL(0, 0, 17) // "GadgetWithNoEnums"

    },
    "GadgetWithNoEnums"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GadgetWithNoEnums[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

       0        // eod
};

const QMetaObject GadgetWithNoEnums::staticMetaObject = {
    { nullptr, qt_meta_stringdata_GadgetWithNoEnums.data,
      qt_meta_data_GadgetWithNoEnums,  nullptr, nullptr, nullptr}
};

struct qt_meta_stringdata_DerivedGadgetWithEnums_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DerivedGadgetWithEnums_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DerivedGadgetWithEnums_t qt_meta_stringdata_DerivedGadgetWithEnums = {
    {
QT_MOC_LITERAL(0, 0, 22), // "DerivedGadgetWithEnums"
QT_MOC_LITERAL(1, 23, 7), // "FooEnum"
QT_MOC_LITERAL(2, 31, 8) // "FooValue"

    },
    "DerivedGadgetWithEnums\0FooEnum\0FooValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DerivedGadgetWithEnums[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    1,   18,

 // enum data: key, value
       2, uint(DerivedGadgetWithEnums::FooValue),

       0        // eod
};

const QMetaObject DerivedGadgetWithEnums::staticMetaObject = {
    { &GadgetWithNoEnums::staticMetaObject, qt_meta_stringdata_DerivedGadgetWithEnums.data,
      qt_meta_data_DerivedGadgetWithEnums,  nullptr, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
