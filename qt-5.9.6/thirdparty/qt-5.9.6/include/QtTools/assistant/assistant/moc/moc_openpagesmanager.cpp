/****************************************************************************
** Meta object code from reading C++ file 'openpagesmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../openpagesmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openpagesmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenPagesManager_t {
    QByteArrayData data[22];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenPagesManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenPagesManager_t qt_meta_stringdata_OpenPagesManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OpenPagesManager"
QT_MOC_LITERAL(1, 17, 14), // "aboutToAddPage"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "pageAdded"
QT_MOC_LITERAL(4, 43, 5), // "index"
QT_MOC_LITERAL(5, 49, 10), // "pageClosed"
QT_MOC_LITERAL(6, 60, 16), // "aboutToClosePage"
QT_MOC_LITERAL(7, 77, 10), // "createPage"
QT_MOC_LITERAL(8, 88, 11), // "HelpViewer*"
QT_MOC_LITERAL(9, 100, 3), // "url"
QT_MOC_LITERAL(10, 104, 10), // "fromSearch"
QT_MOC_LITERAL(11, 115, 23), // "createNewPageFromSearch"
QT_MOC_LITERAL(12, 139, 15), // "createBlankPage"
QT_MOC_LITERAL(13, 155, 16), // "closeCurrentPage"
QT_MOC_LITERAL(14, 172, 8), // "nextPage"
QT_MOC_LITERAL(15, 181, 20), // "nextPageWithSwitcher"
QT_MOC_LITERAL(16, 202, 12), // "previousPage"
QT_MOC_LITERAL(17, 215, 24), // "previousPageWithSwitcher"
QT_MOC_LITERAL(18, 240, 9), // "closePage"
QT_MOC_LITERAL(19, 250, 4), // "page"
QT_MOC_LITERAL(20, 255, 14), // "setCurrentPage"
QT_MOC_LITERAL(21, 270, 16) // "closePagesExcept"

    },
    "OpenPagesManager\0aboutToAddPage\0\0"
    "pageAdded\0index\0pageClosed\0aboutToClosePage\0"
    "createPage\0HelpViewer*\0url\0fromSearch\0"
    "createNewPageFromSearch\0createBlankPage\0"
    "closeCurrentPage\0nextPage\0"
    "nextPageWithSwitcher\0previousPage\0"
    "previousPageWithSwitcher\0closePage\0"
    "page\0setCurrentPage\0closePagesExcept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenPagesManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    1,  105,    2, 0x06 /* Public */,
       5,    0,  108,    2, 0x06 /* Public */,
       6,    1,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,  112,    2, 0x0a /* Public */,
       7,    1,  117,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  120,    2, 0x0a /* Public */,
      12,    0,  123,    2, 0x0a /* Public */,
      13,    0,  124,    2, 0x0a /* Public */,
      14,    0,  125,    2, 0x0a /* Public */,
      15,    0,  126,    2, 0x0a /* Public */,
      16,    0,  127,    2, 0x0a /* Public */,
      17,    0,  128,    2, 0x0a /* Public */,
      18,    1,  129,    2, 0x0a /* Public */,
      20,    1,  132,    2, 0x0a /* Public */,
      20,    1,  135,    2, 0x08 /* Private */,
      18,    1,  138,    2, 0x08 /* Private */,
      21,    1,  141,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    0x80000000 | 8, QMetaType::QUrl, QMetaType::Bool,    9,   10,
    0x80000000 | 8, QMetaType::QUrl,    9,
    0x80000000 | 8, QMetaType::QUrl,    9,
    0x80000000 | 8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,   19,
    QMetaType::Void, 0x80000000 | 8,   19,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QModelIndex,    4,

       0        // eod
};

void OpenPagesManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpenPagesManager *_t = static_cast<OpenPagesManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToAddPage(); break;
        case 1: _t->pageAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->pageClosed(); break;
        case 3: _t->aboutToClosePage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: { HelpViewer* _r = _t->createPage((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< HelpViewer**>(_a[0]) = std::move(_r); }  break;
        case 5: { HelpViewer* _r = _t->createPage((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< HelpViewer**>(_a[0]) = std::move(_r); }  break;
        case 6: { HelpViewer* _r = _t->createNewPageFromSearch((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< HelpViewer**>(_a[0]) = std::move(_r); }  break;
        case 7: { HelpViewer* _r = _t->createBlankPage();
            if (_a[0]) *reinterpret_cast< HelpViewer**>(_a[0]) = std::move(_r); }  break;
        case 8: _t->closeCurrentPage(); break;
        case 9: _t->nextPage(); break;
        case 10: _t->nextPageWithSwitcher(); break;
        case 11: _t->previousPage(); break;
        case 12: _t->previousPageWithSwitcher(); break;
        case 13: _t->closePage((*reinterpret_cast< HelpViewer*(*)>(_a[1]))); break;
        case 14: _t->setCurrentPage((*reinterpret_cast< HelpViewer*(*)>(_a[1]))); break;
        case 15: _t->setCurrentPage((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 16: _t->closePage((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 17: _t->closePagesExcept((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (OpenPagesManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenPagesManager::aboutToAddPage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OpenPagesManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenPagesManager::pageAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OpenPagesManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenPagesManager::pageClosed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (OpenPagesManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenPagesManager::aboutToClosePage)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject OpenPagesManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OpenPagesManager.data,
      qt_meta_data_OpenPagesManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OpenPagesManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenPagesManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenPagesManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenPagesManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void OpenPagesManager::aboutToAddPage()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OpenPagesManager::pageAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OpenPagesManager::pageClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OpenPagesManager::aboutToClosePage(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
