/****************************************************************************
** Meta object code from reading C++ file 'qtest2recognizerdup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../plugins/test1/qtest2recognizerdup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtest2recognizerdup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QTest2RecognizerDup_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTest2RecognizerDup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTest2RecognizerDup_t qt_meta_stringdata_QTest2RecognizerDup = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QTest2RecognizerDup"
QT_MOC_LITERAL(1, 20, 9), // "test2_dup"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "QTest2RecognizerDup\0test2_dup\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTest2RecognizerDup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QTest2RecognizerDup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTest2RecognizerDup *_t = static_cast<QTest2RecognizerDup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->test2_dup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QTest2RecognizerDup::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTest2RecognizerDup::test2_dup)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QTest2RecognizerDup::staticMetaObject = {
    { &QSensorGestureRecognizer::staticMetaObject, qt_meta_stringdata_QTest2RecognizerDup.data,
      qt_meta_data_QTest2RecognizerDup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QTest2RecognizerDup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTest2RecognizerDup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QTest2RecognizerDup.stringdata0))
        return static_cast<void*>(this);
    return QSensorGestureRecognizer::qt_metacast(_clname);
}

int QTest2RecognizerDup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSensorGestureRecognizer::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QTest2RecognizerDup::test2_dup()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
