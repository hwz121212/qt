/****************************************************************************
** Meta object code from reading C++ file 'qquickdefaultprogressbar_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickdefaultprogressbar_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickdefaultprogressbar_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickDefaultProgressBar_t {
    QByteArrayData data[6];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickDefaultProgressBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickDefaultProgressBar_t qt_meta_stringdata_QQuickDefaultProgressBar = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QQuickDefaultProgressBar"
QT_MOC_LITERAL(1, 25, 15), // "progressChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 20), // "indeterminateChanged"
QT_MOC_LITERAL(4, 63, 13), // "indeterminate"
QT_MOC_LITERAL(5, 77, 8) // "progress"

    },
    "QQuickDefaultProgressBar\0progressChanged\0"
    "\0indeterminateChanged\0indeterminate\0"
    "progress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickDefaultProgressBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00495903,
       5, QMetaType::QReal, 0x00495903,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void QQuickDefaultProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickDefaultProgressBar *_t = static_cast<QQuickDefaultProgressBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progressChanged(); break;
        case 1: _t->indeterminateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickDefaultProgressBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDefaultProgressBar::progressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickDefaultProgressBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDefaultProgressBar::indeterminateChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickDefaultProgressBar *_t = static_cast<QQuickDefaultProgressBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isIndeterminate(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->progress(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickDefaultProgressBar *_t = static_cast<QQuickDefaultProgressBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIndeterminate(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setProgress(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickDefaultProgressBar::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QQuickDefaultProgressBar.data,
      qt_meta_data_QQuickDefaultProgressBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickDefaultProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickDefaultProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickDefaultProgressBar.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickDefaultProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickDefaultProgressBar::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickDefaultProgressBar::indeterminateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
