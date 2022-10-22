/****************************************************************************
** Meta object code from reading C++ file 'escapes-in-string-literals.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../escapes-in-string-literals.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'escapes-in-string-literals.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StringLiterals_t {
    QByteArrayData data[7];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StringLiterals_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StringLiterals_t qt_meta_stringdata_StringLiterals = {
    {
QT_MOC_LITERAL(0, 0, 14), // "StringLiterals"
QT_MOC_LITERAL(1, 15, 4), // "Test"
QT_MOC_LITERAL(2, 20, 73), // "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa..."
QT_MOC_LITERAL(3, 91, 5), // "Test2"
QT_MOC_LITERAL(4, 97, 73), // "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa..."
QT_MOC_LITERAL(5, 168, 5), // "Test3"
QT_MOC_LITERAL(6, 174, 72) // "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa..."

    },
    "StringLiterals\0Test\0"
    "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\x53\0"
    "Test2\0"
    "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\123\0"
    "Test3\0"
    "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n"
    "b"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StringLiterals[] = {

 // content:
       7,       // revision
       0,       // classname
       3,   14, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,

       0        // eod
};

void StringLiterals::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject StringLiterals::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StringLiterals.data,
      qt_meta_data_StringLiterals,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StringLiterals::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StringLiterals::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StringLiterals.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StringLiterals::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
