/****************************************************************************
** Meta object code from reading C++ file 'qscxmlcppdatamodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qscxmlcppdatamodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscxmlcppdatamodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QScxmlCppDataModel_t {
    QByteArrayData data[4];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScxmlCppDataModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScxmlCppDataModel_t qt_meta_stringdata_QScxmlCppDataModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QScxmlCppDataModel"
QT_MOC_LITERAL(1, 19, 5), // "setup"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 17) // "initialDataValues"

    },
    "QScxmlCppDataModel\0setup\0\0initialDataValues"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScxmlCppDataModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, QMetaType::QVariantMap,    3,

       0        // eod
};

void QScxmlCppDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScxmlCppDataModel *_t = static_cast<QScxmlCppDataModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->setup((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject QScxmlCppDataModel::staticMetaObject = {
    { &QScxmlDataModel::staticMetaObject, qt_meta_stringdata_QScxmlCppDataModel.data,
      qt_meta_data_QScxmlCppDataModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScxmlCppDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScxmlCppDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScxmlCppDataModel.stringdata0))
        return static_cast<void*>(this);
    return QScxmlDataModel::qt_metacast(_clname);
}

int QScxmlCppDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScxmlDataModel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
