/****************************************************************************
** Meta object code from reading C++ file 'tst_qtconcurrentiteratekernel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qtconcurrentiteratekernel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qtconcurrentiteratekernel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QtConcurrentIterateKernel_t {
    QByteArrayData data[8];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QtConcurrentIterateKernel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QtConcurrentIterateKernel_t qt_meta_stringdata_tst_QtConcurrentIterateKernel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "tst_QtConcurrentIterateKernel"
QT_MOC_LITERAL(1, 30, 11), // "instantiate"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 6), // "cancel"
QT_MOC_LITERAL(4, 50, 10), // "stresstest"
QT_MOC_LITERAL(5, 61, 12), // "noIterations"
QT_MOC_LITERAL(6, 74, 10), // "throttling"
QT_MOC_LITERAL(7, 85, 15) // "multipleResults"

    },
    "tst_QtConcurrentIterateKernel\0instantiate\0"
    "\0cancel\0stresstest\0noIterations\0"
    "throttling\0multipleResults"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QtConcurrentIterateKernel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_QtConcurrentIterateKernel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QtConcurrentIterateKernel *_t = static_cast<tst_QtConcurrentIterateKernel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->instantiate(); break;
        case 1: _t->cancel(); break;
        case 2: _t->stresstest(); break;
        case 3: _t->noIterations(); break;
        case 4: _t->throttling(); break;
        case 5: _t->multipleResults(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QtConcurrentIterateKernel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QtConcurrentIterateKernel.data,
      qt_meta_data_tst_QtConcurrentIterateKernel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QtConcurrentIterateKernel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QtConcurrentIterateKernel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QtConcurrentIterateKernel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QtConcurrentIterateKernel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
