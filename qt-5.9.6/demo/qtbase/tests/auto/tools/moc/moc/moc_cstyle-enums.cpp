/****************************************************************************
** Meta object code from reading C++ file 'cstyle-enums.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cstyle-enums.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cstyle-enums.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CStyleEnums_t {
    QByteArrayData data[7];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CStyleEnums_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CStyleEnums_t qt_meta_stringdata_CStyleEnums = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CStyleEnums"
QT_MOC_LITERAL(1, 12, 3), // "Baz"
QT_MOC_LITERAL(2, 16, 3), // "Foo"
QT_MOC_LITERAL(3, 20, 3), // "Bar"
QT_MOC_LITERAL(4, 24, 4), // "Baz2"
QT_MOC_LITERAL(5, 29, 4), // "Foo2"
QT_MOC_LITERAL(6, 34, 4) // "Bar2"

    },
    "CStyleEnums\0Baz\0Foo\0Bar\0Baz2\0Foo2\0"
    "Bar2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CStyleEnums[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    2,   22,
       4, 0x0,    2,   26,

 // enum data: key, value
       2, uint(CStyleEnums::Foo),
       3, uint(CStyleEnums::Bar),
       5, uint(CStyleEnums::Foo2),
       6, uint(CStyleEnums::Bar2),

       0        // eod
};

const QMetaObject CStyleEnums::staticMetaObject = {
    { nullptr, qt_meta_stringdata_CStyleEnums.data,
      qt_meta_data_CStyleEnums,  nullptr, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
