/****************************************************************************
** Meta object code from reading C++ file 'slots-with-void-template.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../slots-with-void-template.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'slots-with-void-template.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SlotsWithVoidTemplateTest_t {
    QByteArrayData data[10];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SlotsWithVoidTemplateTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SlotsWithVoidTemplateTest_t qt_meta_stringdata_SlotsWithVoidTemplateTest = {
    {
QT_MOC_LITERAL(0, 0, 25), // "SlotsWithVoidTemplateTest"
QT_MOC_LITERAL(1, 26, 8), // "mySignal"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 18), // "TestTemplate<void>"
QT_MOC_LITERAL(4, 55, 12), // "myVoidSignal"
QT_MOC_LITERAL(5, 68, 13), // "myVoidSignal2"
QT_MOC_LITERAL(6, 82, 9), // "dummySlot"
QT_MOC_LITERAL(7, 92, 10), // "dummySlot2"
QT_MOC_LITERAL(8, 103, 11), // "anotherSlot"
QT_MOC_LITERAL(9, 115, 6) // "mySlot"

    },
    "SlotsWithVoidTemplateTest\0mySignal\0\0"
    "TestTemplate<void>\0myVoidSignal\0"
    "myVoidSignal2\0dummySlot\0dummySlot2\0"
    "anotherSlot\0mySlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SlotsWithVoidTemplateTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    0,   52,    2, 0x06 /* Public */,
       5,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   54,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,
       8,    1,   56,    2, 0x0a /* Public */,
       9,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    0x80000000 | 3,

       0        // eod
};

void SlotsWithVoidTemplateTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SlotsWithVoidTemplateTest *_t = static_cast<SlotsWithVoidTemplateTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mySignal((*reinterpret_cast< const TestTemplate<void>(*)>(_a[1]))); break;
        case 1: _t->myVoidSignal(); break;
        case 2: _t->myVoidSignal2(); break;
        case 3: _t->dummySlot(); break;
        case 4: _t->dummySlot2(); break;
        case 5: _t->anotherSlot((*reinterpret_cast< const TestTemplate<void>(*)>(_a[1]))); break;
        case 6: { TestTemplate<void> _r = _t->mySlot();
            if (_a[0]) *reinterpret_cast< TestTemplate<void>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SlotsWithVoidTemplateTest::*_t)(const TestTemplate<void> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlotsWithVoidTemplateTest::mySignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SlotsWithVoidTemplateTest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlotsWithVoidTemplateTest::myVoidSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SlotsWithVoidTemplateTest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlotsWithVoidTemplateTest::myVoidSignal2)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SlotsWithVoidTemplateTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SlotsWithVoidTemplateTest.data,
      qt_meta_data_SlotsWithVoidTemplateTest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SlotsWithVoidTemplateTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SlotsWithVoidTemplateTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SlotsWithVoidTemplateTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SlotsWithVoidTemplateTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void SlotsWithVoidTemplateTest::mySignal(const TestTemplate<void> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SlotsWithVoidTemplateTest::myVoidSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SlotsWithVoidTemplateTest::myVoidSignal2()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
