/****************************************************************************
** Meta object code from reading C++ file 'qplacemanagerengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qplacemanagerengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplacemanagerengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPlaceManagerEngine_t {
    QByteArrayData data[20];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlaceManagerEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlaceManagerEngine_t qt_meta_stringdata_QPlaceManagerEngine = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QPlaceManagerEngine"
QT_MOC_LITERAL(1, 20, 8), // "finished"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "QPlaceReply*"
QT_MOC_LITERAL(4, 43, 5), // "reply"
QT_MOC_LITERAL(5, 49, 5), // "error"
QT_MOC_LITERAL(6, 55, 18), // "QPlaceReply::Error"
QT_MOC_LITERAL(7, 74, 11), // "errorString"
QT_MOC_LITERAL(8, 86, 10), // "placeAdded"
QT_MOC_LITERAL(9, 97, 7), // "placeId"
QT_MOC_LITERAL(10, 105, 12), // "placeUpdated"
QT_MOC_LITERAL(11, 118, 12), // "placeRemoved"
QT_MOC_LITERAL(12, 131, 13), // "categoryAdded"
QT_MOC_LITERAL(13, 145, 14), // "QPlaceCategory"
QT_MOC_LITERAL(14, 160, 8), // "category"
QT_MOC_LITERAL(15, 169, 16), // "parentCategoryId"
QT_MOC_LITERAL(16, 186, 15), // "categoryUpdated"
QT_MOC_LITERAL(17, 202, 15), // "categoryRemoved"
QT_MOC_LITERAL(18, 218, 10), // "categoryId"
QT_MOC_LITERAL(19, 229, 11) // "dataChanged"

    },
    "QPlaceManagerEngine\0finished\0\0"
    "QPlaceReply*\0reply\0error\0QPlaceReply::Error\0"
    "errorString\0placeAdded\0placeId\0"
    "placeUpdated\0placeRemoved\0categoryAdded\0"
    "QPlaceCategory\0category\0parentCategoryId\0"
    "categoryUpdated\0categoryRemoved\0"
    "categoryId\0dataChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlaceManagerEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    3,   67,    2, 0x06 /* Public */,
       5,    2,   74,    2, 0x26 /* Public | MethodCloned */,
       8,    1,   79,    2, 0x06 /* Public */,
      10,    1,   82,    2, 0x06 /* Public */,
      11,    1,   85,    2, 0x06 /* Public */,
      12,    2,   88,    2, 0x06 /* Public */,
      16,    2,   93,    2, 0x06 /* Public */,
      17,    2,   98,    2, 0x06 /* Public */,
      19,    0,  103,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6, QMetaType::QString,    2,    5,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    2,    5,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 13, QMetaType::QString,   14,   15,
    QMetaType::Void, 0x80000000 | 13, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   18,   15,
    QMetaType::Void,

       0        // eod
};

void QPlaceManagerEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlaceManagerEngine *_t = static_cast<QPlaceManagerEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< QPlaceReply*(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< QPlaceReply*(*)>(_a[1])),(*reinterpret_cast< QPlaceReply::Error(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->error((*reinterpret_cast< QPlaceReply*(*)>(_a[1])),(*reinterpret_cast< QPlaceReply::Error(*)>(_a[2]))); break;
        case 3: _t->placeAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->placeUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->placeRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->categoryAdded((*reinterpret_cast< const QPlaceCategory(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->categoryUpdated((*reinterpret_cast< const QPlaceCategory(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->categoryRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->dataChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPlaceReply* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPlaceReply* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPlaceReply::Error >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPlaceReply* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPlaceReply::Error >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPlaceCategory >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPlaceCategory >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QPlaceManagerEngine::*_t)(QPlaceReply * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPlaceManagerEngine::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QPlaceManagerEngine::*_t)(QPlaceReply * , QPlaceReply::Error , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPlaceManagerEngine::error)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QPlaceManagerEngine::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPlaceManagerEngine::placeAdded)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QPlaceManagerEngine::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPlaceManagerEngine::placeUpdated)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QPlaceManagerEngine::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPlaceManagerEngine::placeRemoved)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QPlaceManagerEngine::*_t)(const QPlaceCategory & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPlaceManagerEngine::categoryAdded)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QPlaceManagerEngine::*_t)(const QPlaceCategory & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPlaceManagerEngine::categoryUpdated)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QPlaceManagerEngine::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPlaceManagerEngine::categoryRemoved)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QPlaceManagerEngine::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPlaceManagerEngine::dataChanged)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject QPlaceManagerEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QPlaceManagerEngine.data,
      qt_meta_data_QPlaceManagerEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QPlaceManagerEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlaceManagerEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPlaceManagerEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPlaceManagerEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QPlaceManagerEngine::finished(QPlaceReply * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlaceManagerEngine::error(QPlaceReply * _t1, QPlaceReply::Error _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void QPlaceManagerEngine::placeAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QPlaceManagerEngine::placeUpdated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QPlaceManagerEngine::placeRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QPlaceManagerEngine::categoryAdded(const QPlaceCategory & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QPlaceManagerEngine::categoryUpdated(const QPlaceCategory & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QPlaceManagerEngine::categoryRemoved(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QPlaceManagerEngine::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
