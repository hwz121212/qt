/****************************************************************************
** Meta object code from reading C++ file 'qgeotilefetcher_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qgeotilefetcher_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeotilefetcher_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoTileFetcher_t {
    QByteArrayData data[17];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoTileFetcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoTileFetcher_t qt_meta_stringdata_QGeoTileFetcher = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QGeoTileFetcher"
QT_MOC_LITERAL(1, 16, 12), // "tileFinished"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "QGeoTileSpec"
QT_MOC_LITERAL(4, 43, 4), // "spec"
QT_MOC_LITERAL(5, 48, 5), // "bytes"
QT_MOC_LITERAL(6, 54, 6), // "format"
QT_MOC_LITERAL(7, 61, 9), // "tileError"
QT_MOC_LITERAL(8, 71, 11), // "errorString"
QT_MOC_LITERAL(9, 83, 18), // "updateTileRequests"
QT_MOC_LITERAL(10, 102, 18), // "QSet<QGeoTileSpec>"
QT_MOC_LITERAL(11, 121, 10), // "tilesAdded"
QT_MOC_LITERAL(12, 132, 12), // "tilesRemoved"
QT_MOC_LITERAL(13, 145, 18), // "cancelTileRequests"
QT_MOC_LITERAL(14, 164, 5), // "tiles"
QT_MOC_LITERAL(15, 170, 15), // "requestNextTile"
QT_MOC_LITERAL(16, 186, 8) // "finished"

    },
    "QGeoTileFetcher\0tileFinished\0\0"
    "QGeoTileSpec\0spec\0bytes\0format\0tileError\0"
    "errorString\0updateTileRequests\0"
    "QSet<QGeoTileSpec>\0tilesAdded\0"
    "tilesRemoved\0cancelTileRequests\0tiles\0"
    "requestNextTile\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoTileFetcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       7,    2,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   56,    2, 0x0a /* Public */,
      13,    1,   61,    2, 0x08 /* Private */,
      15,    0,   64,    2, 0x08 /* Private */,
      16,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray, QMetaType::QString,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,
    QMetaType::Void, 0x80000000 | 10,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QGeoTileFetcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoTileFetcher *_t = static_cast<QGeoTileFetcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tileFinished((*reinterpret_cast< const QGeoTileSpec(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->tileError((*reinterpret_cast< const QGeoTileSpec(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->updateTileRequests((*reinterpret_cast< const QSet<QGeoTileSpec>(*)>(_a[1])),(*reinterpret_cast< const QSet<QGeoTileSpec>(*)>(_a[2]))); break;
        case 3: _t->cancelTileRequests((*reinterpret_cast< const QSet<QGeoTileSpec>(*)>(_a[1]))); break;
        case 4: _t->requestNextTile(); break;
        case 5: _t->finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoTileSpec >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoTileSpec >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<QGeoTileSpec> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<QGeoTileSpec> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGeoTileFetcher::*_t)(const QGeoTileSpec & , const QByteArray & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoTileFetcher::tileFinished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGeoTileFetcher::*_t)(const QGeoTileSpec & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoTileFetcher::tileError)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QGeoTileFetcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGeoTileFetcher.data,
      qt_meta_data_QGeoTileFetcher,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGeoTileFetcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoTileFetcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoTileFetcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGeoTileFetcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QGeoTileFetcher::tileFinished(const QGeoTileSpec & _t1, const QByteArray & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGeoTileFetcher::tileError(const QGeoTileSpec & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
