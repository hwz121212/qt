/****************************************************************************
** Meta object code from reading C++ file 'qdebugmessageservicefactory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdebugmessageservicefactory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdebugmessageservicefactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDebugMessageServiceFactory_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDebugMessageServiceFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDebugMessageServiceFactory_t qt_meta_stringdata_QDebugMessageServiceFactory = {
    {
QT_MOC_LITERAL(0, 0, 27) // "QDebugMessageServiceFactory"

    },
    "QDebugMessageServiceFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDebugMessageServiceFactory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QDebugMessageServiceFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QDebugMessageServiceFactory::staticMetaObject = {
    { &QQmlDebugServiceFactory::staticMetaObject, qt_meta_stringdata_QDebugMessageServiceFactory.data,
      qt_meta_data_QDebugMessageServiceFactory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDebugMessageServiceFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDebugMessageServiceFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDebugMessageServiceFactory.stringdata0))
        return static_cast<void*>(this);
    return QQmlDebugServiceFactory::qt_metacast(_clname);
}

int QDebugMessageServiceFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlDebugServiceFactory::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xf0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xdc, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    ')',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'Q',  't',  '.',  'Q',  'Q',  'm',  'l', 
    'D',  'e',  'b',  'u',  'g',  'S',  'e',  'r', 
    'v',  'i',  'c',  'e',  'F',  'a',  'c',  't', 
    'o',  'r',  'y',  0x00, 0x9b, 0x0a, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x1b, 0x00, 'Q',  'D', 
    'e',  'b',  'u',  'g',  'M',  'e',  's',  's', 
    'a',  'g',  'e',  'S',  'e',  'r',  'v',  'i', 
    'c',  'e',  'F',  'a',  'c',  't',  'o',  'r', 
    'y',  0x00, 0x00, 0x00, 0xda, ' ',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x14, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    '<',  0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    '8',  0x00, 0x00, 0x00, 0x14, 0x03, 0x00, 0x00,
    0x04, 0x00, 'K',  'e',  'y',  's',  0x00, 0x00,
    ' ',  0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x1c, 0x00, 0x00, 0x00, 0x0d, 0x00, 'D',  'e', 
    'b',  'u',  'g',  'M',  'e',  's',  's',  'a', 
    'g',  'e',  's',  0x00, 0x8b, 0x01, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00, 'D',  0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 't',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xf0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xdc, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    ')',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'Q',  't',  '.',  'Q',  'Q',  'm',  'l', 
    'D',  'e',  'b',  'u',  'g',  'S',  'e',  'r', 
    'v',  'i',  'c',  'e',  'F',  'a',  'c',  't', 
    'o',  'r',  'y',  0x00, 0x95, 0x0a, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, '<',  0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, '8',  0x00, 0x00, 0x00,
    0x14, 0x03, 0x00, 0x00, 0x04, 0x00, 'K',  'e', 
    'y',  's',  0x00, 0x00, ' ',  0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
    0x0d, 0x00, 'D',  'e',  'b',  'u',  'g',  'M', 
    'e',  's',  's',  'a',  'g',  'e',  's',  0x00,
    0x8b, 0x01, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x1b, 0x14, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x1b, 0x00, 'Q',  'D',  'e',  'b',  'u',  'g', 
    'M',  'e',  's',  's',  'a',  'g',  'e',  'S', 
    'e',  'r',  'v',  'i',  'c',  'e',  'F',  'a', 
    'c',  't',  'o',  'r',  'y',  0x00, 0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0xda, ' ',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
    0xc0, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(QDebugMessageServiceFactory, QDebugMessageServiceFactory)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
