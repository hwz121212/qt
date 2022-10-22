/****************************************************************************
** Meta object code from reading C++ file 'bytearrayprototype.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bytearrayprototype.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bytearrayprototype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ByteArrayPrototype_t {
    QByteArrayData data[21];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ByteArrayPrototype_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ByteArrayPrototype_t qt_meta_stringdata_ByteArrayPrototype = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ByteArrayPrototype"
QT_MOC_LITERAL(1, 19, 4), // "chop"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 1), // "n"
QT_MOC_LITERAL(4, 27, 6), // "equals"
QT_MOC_LITERAL(5, 34, 5), // "other"
QT_MOC_LITERAL(6, 40, 4), // "left"
QT_MOC_LITERAL(7, 45, 3), // "len"
QT_MOC_LITERAL(8, 49, 3), // "mid"
QT_MOC_LITERAL(9, 53, 3), // "pos"
QT_MOC_LITERAL(10, 57, 6), // "remove"
QT_MOC_LITERAL(11, 64, 12), // "QScriptValue"
QT_MOC_LITERAL(12, 77, 5), // "right"
QT_MOC_LITERAL(13, 83, 10), // "simplified"
QT_MOC_LITERAL(14, 94, 8), // "toBase64"
QT_MOC_LITERAL(15, 103, 7), // "toLower"
QT_MOC_LITERAL(16, 111, 7), // "toUpper"
QT_MOC_LITERAL(17, 119, 7), // "trimmed"
QT_MOC_LITERAL(18, 127, 8), // "truncate"
QT_MOC_LITERAL(19, 136, 14), // "toLatin1String"
QT_MOC_LITERAL(20, 151, 7) // "valueOf"

    },
    "ByteArrayPrototype\0chop\0\0n\0equals\0"
    "other\0left\0len\0mid\0pos\0remove\0"
    "QScriptValue\0right\0simplified\0toBase64\0"
    "toLower\0toUpper\0trimmed\0truncate\0"
    "toLatin1String\0valueOf"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ByteArrayPrototype[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x0a /* Public */,
       4,    1,   92,    2, 0x0a /* Public */,
       6,    1,   95,    2, 0x0a /* Public */,
       8,    2,   98,    2, 0x0a /* Public */,
       8,    1,  103,    2, 0x2a /* Public | MethodCloned */,
      10,    2,  106,    2, 0x0a /* Public */,
      12,    1,  111,    2, 0x0a /* Public */,
      13,    0,  114,    2, 0x0a /* Public */,
      14,    0,  115,    2, 0x0a /* Public */,
      15,    0,  116,    2, 0x0a /* Public */,
      16,    0,  117,    2, 0x0a /* Public */,
      17,    0,  118,    2, 0x0a /* Public */,
      18,    1,  119,    2, 0x0a /* Public */,
      19,    0,  122,    2, 0x0a /* Public */,
      20,    0,  123,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Bool, QMetaType::QByteArray,    5,
    QMetaType::QByteArray, QMetaType::Int,    7,
    QMetaType::QByteArray, QMetaType::Int, QMetaType::Int,    9,    7,
    QMetaType::QByteArray, QMetaType::Int,    9,
    0x80000000 | 11, QMetaType::Int, QMetaType::Int,    9,    7,
    QMetaType::QByteArray, QMetaType::Int,    7,
    QMetaType::QByteArray,
    QMetaType::QByteArray,
    QMetaType::QByteArray,
    QMetaType::QByteArray,
    QMetaType::QByteArray,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::QString,
    0x80000000 | 11,

       0        // eod
};

void ByteArrayPrototype::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ByteArrayPrototype *_t = static_cast<ByteArrayPrototype *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->chop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: { bool _r = _t->equals((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { QByteArray _r = _t->left((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 3: { QByteArray _r = _t->mid((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 4: { QByteArray _r = _t->mid((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 5: { QScriptValue _r = _t->remove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 6: { QByteArray _r = _t->right((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 7: { QByteArray _r = _t->simplified();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 8: { QByteArray _r = _t->toBase64();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 9: { QByteArray _r = _t->toLower();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 10: { QByteArray _r = _t->toUpper();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 11: { QByteArray _r = _t->trimmed();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->truncate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: { QString _r = _t->toLatin1String();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { QScriptValue _r = _t->valueOf();
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject ByteArrayPrototype::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ByteArrayPrototype.data,
      qt_meta_data_ByteArrayPrototype,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ByteArrayPrototype::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ByteArrayPrototype::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ByteArrayPrototype.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QScriptable"))
        return static_cast< QScriptable*>(this);
    return QObject::qt_metacast(_clname);
}

int ByteArrayPrototype::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
