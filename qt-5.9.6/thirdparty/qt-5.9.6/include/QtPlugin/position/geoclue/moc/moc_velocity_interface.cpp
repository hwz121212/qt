/****************************************************************************
** Meta object code from reading C++ file 'velocity_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../velocity_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'velocity_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrgFreedesktopGeoclueVelocityInterface_t {
    QByteArrayData data[13];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrgFreedesktopGeoclueVelocityInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrgFreedesktopGeoclueVelocityInterface_t qt_meta_stringdata_OrgFreedesktopGeoclueVelocityInterface = {
    {
QT_MOC_LITERAL(0, 0, 38), // "OrgFreedesktopGeoclueVelocity..."
QT_MOC_LITERAL(1, 39, 15), // "VelocityChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 6), // "fields"
QT_MOC_LITERAL(4, 63, 9), // "timestamp"
QT_MOC_LITERAL(5, 73, 5), // "speed"
QT_MOC_LITERAL(6, 79, 9), // "direction"
QT_MOC_LITERAL(7, 89, 5), // "climb"
QT_MOC_LITERAL(8, 95, 11), // "GetVelocity"
QT_MOC_LITERAL(9, 107, 47), // "QDBusPendingReply<int,int,dou..."
QT_MOC_LITERAL(10, 155, 15), // "QDBusReply<int>"
QT_MOC_LITERAL(11, 171, 4), // "int&"
QT_MOC_LITERAL(12, 176, 7) // "double&"

    },
    "OrgFreedesktopGeoclueVelocityInterface\0"
    "VelocityChanged\0\0fields\0timestamp\0"
    "speed\0direction\0climb\0GetVelocity\0"
    "QDBusPendingReply<int,int,double,double,double>\0"
    "QDBusReply<int>\0int&\0double&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrgFreedesktopGeoclueVelocityInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   40,    2, 0x0a /* Public */,
       8,    4,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,

 // slots: parameters
    0x80000000 | 9,
    0x80000000 | 10, 0x80000000 | 11, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12,    4,    5,    6,    7,

       0        // eod
};

void OrgFreedesktopGeoclueVelocityInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OrgFreedesktopGeoclueVelocityInterface *_t = static_cast<OrgFreedesktopGeoclueVelocityInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->VelocityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 1: { QDBusPendingReply<int,int,double,double,double> _r = _t->GetVelocity();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<int,int,double,double,double>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusReply<int> _r = _t->GetVelocity((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDBusReply<int>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (OrgFreedesktopGeoclueVelocityInterface::*_t)(int , int , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrgFreedesktopGeoclueVelocityInterface::VelocityChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject OrgFreedesktopGeoclueVelocityInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgFreedesktopGeoclueVelocityInterface.data,
      qt_meta_data_OrgFreedesktopGeoclueVelocityInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OrgFreedesktopGeoclueVelocityInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgFreedesktopGeoclueVelocityInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrgFreedesktopGeoclueVelocityInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgFreedesktopGeoclueVelocityInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OrgFreedesktopGeoclueVelocityInterface::VelocityChanged(int _t1, int _t2, double _t3, double _t4, double _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
