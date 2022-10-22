/****************************************************************************
** Meta object code from reading C++ file 'tst_qactiongroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qactiongroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qactiongroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QActionGroup_t {
    QByteArrayData data[9];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QActionGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QActionGroup_t qt_meta_stringdata_tst_QActionGroup = {
    {
QT_MOC_LITERAL(0, 0, 16), // "tst_QActionGroup"
QT_MOC_LITERAL(1, 17, 7), // "cleanup"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 18), // "enabledPropagation"
QT_MOC_LITERAL(4, 45, 18), // "visiblePropagation"
QT_MOC_LITERAL(5, 64, 9), // "exclusive"
QT_MOC_LITERAL(6, 74, 10), // "separators"
QT_MOC_LITERAL(7, 85, 27), // "testActionInTwoQActionGroup"
QT_MOC_LITERAL(8, 113, 20) // "unCheckCurrentAction"

    },
    "tst_QActionGroup\0cleanup\0\0enabledPropagation\0"
    "visiblePropagation\0exclusive\0separators\0"
    "testActionInTwoQActionGroup\0"
    "unCheckCurrentAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QActionGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_QActionGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QActionGroup *_t = static_cast<tst_QActionGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cleanup(); break;
        case 1: _t->enabledPropagation(); break;
        case 2: _t->visiblePropagation(); break;
        case 3: _t->exclusive(); break;
        case 4: _t->separators(); break;
        case 5: _t->testActionInTwoQActionGroup(); break;
        case 6: _t->unCheckCurrentAction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QActionGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QActionGroup.data,
      qt_meta_data_tst_QActionGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QActionGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QActionGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QActionGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QActionGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
