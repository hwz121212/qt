/****************************************************************************
** Meta object code from reading C++ file 'contactmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../contactmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contactmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactModel_t {
    QByteArrayData data[16];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactModel_t qt_meta_stringdata_ContactModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ContactModel"
QT_MOC_LITERAL(1, 13, 3), // "get"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 3), // "row"
QT_MOC_LITERAL(4, 22, 6), // "append"
QT_MOC_LITERAL(5, 29, 8), // "fullName"
QT_MOC_LITERAL(6, 38, 7), // "address"
QT_MOC_LITERAL(7, 46, 4), // "city"
QT_MOC_LITERAL(8, 51, 6), // "number"
QT_MOC_LITERAL(9, 58, 3), // "set"
QT_MOC_LITERAL(10, 62, 6), // "remove"
QT_MOC_LITERAL(11, 69, 11), // "ContactRole"
QT_MOC_LITERAL(12, 81, 12), // "FullNameRole"
QT_MOC_LITERAL(13, 94, 11), // "AddressRole"
QT_MOC_LITERAL(14, 106, 8), // "CityRole"
QT_MOC_LITERAL(15, 115, 10) // "NumberRole"

    },
    "ContactModel\0get\0\0row\0append\0fullName\0"
    "address\0city\0number\0set\0remove\0"
    "ContactRole\0FullNameRole\0AddressRole\0"
    "CityRole\0NumberRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       1,   60, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x02 /* Public */,
       4,    4,   37,    2, 0x02 /* Public */,
       9,    5,   46,    2, 0x02 /* Public */,
      10,    1,   57,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QVariantMap, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Int,    3,

 // enums: name, flags, count, data
      11, 0x0,    4,   64,

 // enum data: key, value
      12, uint(ContactModel::FullNameRole),
      13, uint(ContactModel::AddressRole),
      14, uint(ContactModel::CityRole),
      15, uint(ContactModel::NumberRole),

       0        // eod
};

void ContactModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContactModel *_t = static_cast<ContactModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QVariantMap _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->append((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 2: _t->set((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 3: _t->remove((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ContactModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_ContactModel.data,
      qt_meta_data_ContactModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ContactModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int ContactModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
