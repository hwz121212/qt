/****************************************************************************
** Meta object code from reading C++ file 'datagenerator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../datagenerator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datagenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataGenerator_t {
    QByteArrayData data[10];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataGenerator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataGenerator_t qt_meta_stringdata_DataGenerator = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DataGenerator"
QT_MOC_LITERAL(1, 14, 12), // "generateData"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 17), // "QScatter3DSeries*"
QT_MOC_LITERAL(4, 46, 6), // "series"
QT_MOC_LITERAL(5, 53, 5), // "count"
QT_MOC_LITERAL(6, 59, 3), // "add"
QT_MOC_LITERAL(7, 63, 9), // "writeLine"
QT_MOC_LITERAL(8, 73, 9), // "itemCount"
QT_MOC_LITERAL(9, 83, 3) // "fps"

    },
    "DataGenerator\0generateData\0\0"
    "QScatter3DSeries*\0series\0count\0add\0"
    "writeLine\0itemCount\0fps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataGenerator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       6,    2,   34,    2, 0x0a /* Public */,
       7,    2,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    8,    9,

       0        // eod
};

void DataGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataGenerator *_t = static_cast<DataGenerator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->generateData((*reinterpret_cast< QScatter3DSeries*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: _t->add((*reinterpret_cast< QScatter3DSeries*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 2: _t->writeLine((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScatter3DSeries* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScatter3DSeries* >(); break;
            }
            break;
        }
    }
}

const QMetaObject DataGenerator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataGenerator.data,
      qt_meta_data_DataGenerator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DataGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataGenerator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
