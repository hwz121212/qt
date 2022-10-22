/****************************************************************************
** Meta object code from reading C++ file 'annotatedurl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../annotatedurl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'annotatedurl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnnotatedUrl_t {
    QByteArrayData data[14];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnnotatedUrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnnotatedUrl_t qt_meta_stringdata_AnnotatedUrl = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AnnotatedUrl"
QT_MOC_LITERAL(1, 13, 12), // "annotatedUrl"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "url"
QT_MOC_LITERAL(4, 31, 5), // "title"
QT_MOC_LITERAL(5, 37, 6), // "pixmap"
QT_MOC_LITERAL(6, 44, 14), // "targetDetected"
QT_MOC_LITERAL(7, 59, 17), // "QNearFieldTarget*"
QT_MOC_LITERAL(8, 77, 6), // "target"
QT_MOC_LITERAL(9, 84, 10), // "targetLost"
QT_MOC_LITERAL(10, 95, 13), // "handleMessage"
QT_MOC_LITERAL(11, 109, 12), // "QNdefMessage"
QT_MOC_LITERAL(12, 122, 7), // "message"
QT_MOC_LITERAL(13, 130, 23) // "handlePolledNdefMessage"

    },
    "AnnotatedUrl\0annotatedUrl\0\0url\0title\0"
    "pixmap\0targetDetected\0QNearFieldTarget*\0"
    "target\0targetLost\0handleMessage\0"
    "QNdefMessage\0message\0handlePolledNdefMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnnotatedUrl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   46,    2, 0x0a /* Public */,
       9,    1,   49,    2, 0x0a /* Public */,
      10,    2,   52,    2, 0x0a /* Public */,
      13,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::QPixmap,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 7,   12,    8,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void AnnotatedUrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnnotatedUrl *_t = static_cast<AnnotatedUrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->annotatedUrl((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QPixmap(*)>(_a[3]))); break;
        case 1: _t->targetDetected((*reinterpret_cast< QNearFieldTarget*(*)>(_a[1]))); break;
        case 2: _t->targetLost((*reinterpret_cast< QNearFieldTarget*(*)>(_a[1]))); break;
        case 3: _t->handleMessage((*reinterpret_cast< const QNdefMessage(*)>(_a[1])),(*reinterpret_cast< QNearFieldTarget*(*)>(_a[2]))); break;
        case 4: _t->handlePolledNdefMessage((*reinterpret_cast< QNdefMessage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNdefMessage >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNdefMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AnnotatedUrl::*_t)(const QUrl & , const QString & , const QPixmap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnnotatedUrl::annotatedUrl)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AnnotatedUrl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AnnotatedUrl.data,
      qt_meta_data_AnnotatedUrl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AnnotatedUrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnnotatedUrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnnotatedUrl.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AnnotatedUrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AnnotatedUrl::annotatedUrl(const QUrl & _t1, const QString & _t2, const QPixmap & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
