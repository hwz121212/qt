/****************************************************************************
** Meta object code from reading C++ file 'serverobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../serverobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServerObject_t {
    QByteArrayData data[11];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerObject_t qt_meta_stringdata_ServerObject = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ServerObject"
QT_MOC_LITERAL(1, 13, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 29, 35), // "org.qtproject.autotests.Perfo..."
QT_MOC_LITERAL(3, 65, 7), // "noReply"
QT_MOC_LITERAL(4, 73, 9), // "Q_NOREPLY"
QT_MOC_LITERAL(5, 83, 0), // ""
QT_MOC_LITERAL(6, 84, 12), // "QDBusVariant"
QT_MOC_LITERAL(7, 97, 4), // "size"
QT_MOC_LITERAL(8, 102, 4), // "data"
QT_MOC_LITERAL(9, 107, 4), // "echo"
QT_MOC_LITERAL(10, 112, 7) // "nothing"

    },
    "ServerObject\0D-Bus Interface\0"
    "org.qtproject.autotests.Performance\0"
    "noReply\0Q_NOREPLY\0\0QDBusVariant\0size\0"
    "data\0echo\0nothing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerObject[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      10,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    1,   66,    4, 0x0a /* Public */,
       3,    1,   69,    4, 0x0a /* Public */,
       3,    1,   72,    4, 0x0a /* Public */,
       7,    1,   75,    5, 0x0a /* Public */,
       7,    1,   78,    5, 0x0a /* Public */,
       7,    1,   81,    5, 0x0a /* Public */,
       9,    1,   84,    5, 0x0a /* Public */,
       9,    1,   87,    5, 0x0a /* Public */,
       9,    1,   90,    5, 0x0a /* Public */,
      10,    0,   93,    5, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 6,    5,
    QMetaType::Int, QMetaType::QByteArray,    8,
    QMetaType::Int, QMetaType::QString,    8,
    QMetaType::Int, 0x80000000 | 6,    8,
    QMetaType::QByteArray, QMetaType::QByteArray,    8,
    QMetaType::QString, QMetaType::QString,    8,
    0x80000000 | 6, 0x80000000 | 6,    8,
    QMetaType::Void,

       0        // eod
};

void ServerObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ServerObject *_t = static_cast<ServerObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->noReply((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->noReply((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->noReply((*reinterpret_cast< const QDBusVariant(*)>(_a[1]))); break;
        case 3: { int _r = _t->size((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->size((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->size((*reinterpret_cast< const QDBusVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { QByteArray _r = _t->echo((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->echo((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QDBusVariant _r = _t->echo((*reinterpret_cast< const QDBusVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusVariant*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->nothing(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        }
    }
}

const QMetaObject ServerObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ServerObject.data,
      qt_meta_data_ServerObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ServerObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ServerObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
