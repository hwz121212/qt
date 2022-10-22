/****************************************************************************
** Meta object code from reading C++ file 'birthdayparty.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../birthdayparty.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'birthdayparty.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BirthdayPartyAttached_t {
    QByteArrayData data[2];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BirthdayPartyAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BirthdayPartyAttached_t qt_meta_stringdata_BirthdayPartyAttached = {
    {
QT_MOC_LITERAL(0, 0, 21), // "BirthdayPartyAttached"
QT_MOC_LITERAL(1, 22, 4) // "rsvp"

    },
    "BirthdayPartyAttached\0rsvp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BirthdayPartyAttached[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QDate, 0x00095103,

       0        // eod
};

void BirthdayPartyAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        BirthdayPartyAttached *_t = static_cast<BirthdayPartyAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDate*>(_v) = _t->rsvp(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BirthdayPartyAttached *_t = static_cast<BirthdayPartyAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRsvp(*reinterpret_cast< QDate*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject BirthdayPartyAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BirthdayPartyAttached.data,
      qt_meta_data_BirthdayPartyAttached,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BirthdayPartyAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BirthdayPartyAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BirthdayPartyAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BirthdayPartyAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_BirthdayParty_t {
    QByteArrayData data[10];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BirthdayParty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BirthdayParty_t qt_meta_stringdata_BirthdayParty = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BirthdayParty"
QT_MOC_LITERAL(1, 14, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 30, 6), // "guests"
QT_MOC_LITERAL(3, 37, 12), // "partyStarted"
QT_MOC_LITERAL(4, 50, 0), // ""
QT_MOC_LITERAL(5, 51, 4), // "time"
QT_MOC_LITERAL(6, 56, 4), // "host"
QT_MOC_LITERAL(7, 61, 7), // "Person*"
QT_MOC_LITERAL(8, 69, 24), // "QQmlListProperty<Person>"
QT_MOC_LITERAL(9, 94, 12) // "announcement"

    },
    "BirthdayParty\0DefaultProperty\0guests\0"
    "partyStarted\0\0time\0host\0Person*\0"
    "QQmlListProperty<Person>\0announcement"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BirthdayParty[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       1,   16, // methods
       3,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   21,    4, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QTime,    5,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x0009510b,
       2, 0x80000000 | 8, 0x00095009,
       9, QMetaType::QString, 0x00095103,

       0        // eod
};

void BirthdayParty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BirthdayParty *_t = static_cast<BirthdayParty *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->partyStarted((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BirthdayParty::*_t)(const QTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BirthdayParty::partyStarted)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Person* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BirthdayParty *_t = static_cast<BirthdayParty *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Person**>(_v) = _t->host(); break;
        case 1: *reinterpret_cast< QQmlListProperty<Person>*>(_v) = _t->guests(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->announcement(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BirthdayParty *_t = static_cast<BirthdayParty *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHost(*reinterpret_cast< Person**>(_v)); break;
        case 2: _t->setAnnouncement(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject BirthdayParty::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BirthdayParty.data,
      qt_meta_data_BirthdayParty,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BirthdayParty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BirthdayParty::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BirthdayParty.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BirthdayParty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BirthdayParty::partyStarted(const QTime & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
