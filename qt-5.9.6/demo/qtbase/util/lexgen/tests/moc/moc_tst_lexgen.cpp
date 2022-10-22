/****************************************************************************
** Meta object code from reading C++ file 'tst_lexgen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_lexgen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_lexgen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_LexGen_t {
    QByteArrayData data[10];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_LexGen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_LexGen_t qt_meta_stringdata_tst_LexGen = {
    {
QT_MOC_LITERAL(0, 0, 10), // "tst_LexGen"
QT_MOC_LITERAL(1, 11, 15), // "nfa_singleInput"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "nfa_alternating"
QT_MOC_LITERAL(4, 44, 17), // "nfa_concatenating"
QT_MOC_LITERAL(5, 62, 12), // "nfa_optional"
QT_MOC_LITERAL(6, 75, 14), // "nfa_toDFA_data"
QT_MOC_LITERAL(7, 90, 9), // "nfa_toDFA"
QT_MOC_LITERAL(8, 100, 11), // "lexgen_data"
QT_MOC_LITERAL(9, 112, 6) // "lexgen"

    },
    "tst_LexGen\0nfa_singleInput\0\0nfa_alternating\0"
    "nfa_concatenating\0nfa_optional\0"
    "nfa_toDFA_data\0nfa_toDFA\0lexgen_data\0"
    "lexgen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_LexGen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_LexGen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_LexGen *_t = static_cast<tst_LexGen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nfa_singleInput(); break;
        case 1: _t->nfa_alternating(); break;
        case 2: _t->nfa_concatenating(); break;
        case 3: _t->nfa_optional(); break;
        case 4: _t->nfa_toDFA_data(); break;
        case 5: _t->nfa_toDFA(); break;
        case 6: _t->lexgen_data(); break;
        case 7: _t->lexgen(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_LexGen::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_LexGen.data,
      qt_meta_data_tst_LexGen,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_LexGen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_LexGen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_LexGen.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_LexGen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
