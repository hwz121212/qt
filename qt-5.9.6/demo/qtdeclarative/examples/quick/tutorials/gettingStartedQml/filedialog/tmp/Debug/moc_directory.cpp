/****************************************************************************
** Meta object code from reading C++ file 'directory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../directory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'directory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Directory_t {
    QByteArrayData data[12];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Directory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Directory_t qt_meta_stringdata_Directory = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Directory"
QT_MOC_LITERAL(1, 10, 16), // "directoryChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "filenameChanged"
QT_MOC_LITERAL(4, 44, 18), // "fileContentChanged"
QT_MOC_LITERAL(5, 63, 8), // "saveFile"
QT_MOC_LITERAL(6, 72, 8), // "loadFile"
QT_MOC_LITERAL(7, 81, 10), // "filesCount"
QT_MOC_LITERAL(8, 92, 5), // "files"
QT_MOC_LITERAL(9, 98, 22), // "QQmlListProperty<File>"
QT_MOC_LITERAL(10, 121, 8), // "filename"
QT_MOC_LITERAL(11, 130, 11) // "fileContent"

    },
    "Directory\0directoryChanged\0\0filenameChanged\0"
    "fileContentChanged\0saveFile\0loadFile\0"
    "filesCount\0files\0QQmlListProperty<File>\0"
    "filename\0fileContent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Directory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x02 /* Public */,
       6,    0,   43,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00095001,
       8, 0x80000000 | 9, 0x00095409,
      10, QMetaType::QString, 0x00495103,
      11, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

       0        // eod
};

void Directory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Directory *_t = static_cast<Directory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->directoryChanged(); break;
        case 1: _t->filenameChanged(); break;
        case 2: _t->fileContentChanged(); break;
        case 3: _t->saveFile(); break;
        case 4: _t->loadFile(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Directory::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Directory::directoryChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Directory::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Directory::filenameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Directory::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Directory::fileContentChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Directory *_t = static_cast<Directory *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->filesCount(); break;
        case 1: *reinterpret_cast< QQmlListProperty<File>*>(_v) = _t->files(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->filename(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->fileContent(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Directory *_t = static_cast<Directory *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setFilename(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setFileContent(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject Directory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Directory.data,
      qt_meta_data_Directory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Directory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Directory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Directory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Directory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Directory::directoryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Directory::filenameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Directory::fileContentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
