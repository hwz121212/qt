/****************************************************************************
** Meta object code from reading C++ file 'tst_gestures.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_gestures.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_gestures.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CustomGesture_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomGesture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomGesture_t qt_meta_stringdata_CustomGesture = {
    {
QT_MOC_LITERAL(0, 0, 13) // "CustomGesture"

    },
    "CustomGesture"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomGesture[] = {

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

void CustomGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CustomGesture::staticMetaObject = {
    { &QGesture::staticMetaObject, qt_meta_stringdata_CustomGesture.data,
      qt_meta_data_CustomGesture,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CustomGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomGesture.stringdata0))
        return static_cast<void*>(this);
    return QGesture::qt_metacast(_clname);
}

int CustomGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GestureWidget_t {
    QByteArrayData data[9];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GestureWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GestureWidget_t qt_meta_stringdata_GestureWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "GestureWidget"
QT_MOC_LITERAL(1, 14, 14), // "gestureStarted"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "QEvent::Type"
QT_MOC_LITERAL(4, 43, 9), // "QGesture*"
QT_MOC_LITERAL(5, 53, 14), // "gestureUpdated"
QT_MOC_LITERAL(6, 68, 15), // "gestureFinished"
QT_MOC_LITERAL(7, 84, 15), // "gestureCanceled"
QT_MOC_LITERAL(8, 100, 10) // "deleteThis"

    },
    "GestureWidget\0gestureStarted\0\0"
    "QEvent::Type\0QGesture*\0gestureUpdated\0"
    "gestureFinished\0gestureCanceled\0"
    "deleteThis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GestureWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    2,   44,    2, 0x06 /* Public */,
       6,    2,   49,    2, 0x06 /* Public */,
       7,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void GestureWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GestureWidget *_t = static_cast<GestureWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gestureStarted((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2]))); break;
        case 1: _t->gestureUpdated((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2]))); break;
        case 2: _t->gestureFinished((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2]))); break;
        case 3: _t->gestureCanceled((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2]))); break;
        case 4: _t->deleteThis(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGesture* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGesture* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGesture* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGesture* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GestureWidget::*_t)(QEvent::Type , QGesture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GestureWidget::gestureStarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GestureWidget::*_t)(QEvent::Type , QGesture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GestureWidget::gestureUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GestureWidget::*_t)(QEvent::Type , QGesture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GestureWidget::gestureFinished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GestureWidget::*_t)(QEvent::Type , QGesture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GestureWidget::gestureCanceled)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject GestureWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GestureWidget.data,
      qt_meta_data_GestureWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GestureWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GestureWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GestureWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GestureWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GestureWidget::gestureStarted(QEvent::Type _t1, QGesture * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GestureWidget::gestureUpdated(QEvent::Type _t1, QGesture * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GestureWidget::gestureFinished(QEvent::Type _t1, QGesture * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GestureWidget::gestureCanceled(QEvent::Type _t1, QGesture * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_tst_Gestures_t {
    QByteArrayData data[37];
    char stringdata0[805];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_Gestures_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_Gestures_t qt_meta_stringdata_tst_Gestures = {
    {
QT_MOC_LITERAL(0, 0, 12), // "tst_Gestures"
QT_MOC_LITERAL(1, 13, 12), // "initTestCase"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "cleanupTestCase"
QT_MOC_LITERAL(4, 43, 13), // "customGesture"
QT_MOC_LITERAL(5, 57, 21), // "autoCancelingGestures"
QT_MOC_LITERAL(6, 79, 16), // "gestureOverChild"
QT_MOC_LITERAL(7, 96, 31), // "multipleWidgetOnlyGestureInTree"
QT_MOC_LITERAL(8, 128, 19), // "conflictingGestures"
QT_MOC_LITERAL(9, 148, 33), // "conflictingGesturesInGraphics..."
QT_MOC_LITERAL(10, 182, 22), // "finishedWithoutStarted"
QT_MOC_LITERAL(11, 205, 14), // "unknownGesture"
QT_MOC_LITERAL(12, 220, 19), // "graphicsItemGesture"
QT_MOC_LITERAL(13, 240, 12), // "graphicsView"
QT_MOC_LITERAL(14, 253, 23), // "graphicsItemTreeGesture"
QT_MOC_LITERAL(15, 277, 28), // "explicitGraphicsObjectTarget"
QT_MOC_LITERAL(16, 306, 28), // "gestureOverChildGraphicsItem"
QT_MOC_LITERAL(17, 335, 27), // "twoGesturesOnDifferentLevel"
QT_MOC_LITERAL(18, 363, 22), // "multipleGesturesInTree"
QT_MOC_LITERAL(19, 386, 29), // "multipleGesturesInComplexTree"
QT_MOC_LITERAL(20, 416, 14), // "testMapToScene"
QT_MOC_LITERAL(21, 431, 13), // "ungrabGesture"
QT_MOC_LITERAL(22, 445, 16), // "consumeEventHint"
QT_MOC_LITERAL(23, 462, 20), // "unregisterRecognizer"
QT_MOC_LITERAL(24, 483, 18), // "autoCancelGestures"
QT_MOC_LITERAL(25, 502, 19), // "autoCancelGestures2"
QT_MOC_LITERAL(26, 522, 29), // "graphicsViewParentPropagation"
QT_MOC_LITERAL(27, 552, 16), // "panelPropagation"
QT_MOC_LITERAL(28, 569, 23), // "panelStacksBehindParent"
QT_MOC_LITERAL(29, 593, 25), // "deleteGestureTargetWidget"
QT_MOC_LITERAL(30, 619, 28), // "deleteGestureTargetItem_data"
QT_MOC_LITERAL(31, 648, 23), // "deleteGestureTargetItem"
QT_MOC_LITERAL(32, 672, 19), // "viewportCoordinates"
QT_MOC_LITERAL(33, 692, 25), // "partialGesturePropagation"
QT_MOC_LITERAL(34, 718, 29), // "testQGestureRecognizerCleanup"
QT_MOC_LITERAL(35, 748, 25), // "testReuseCanceledGestures"
QT_MOC_LITERAL(36, 774, 30) // "bug_13501_gesture_not_accepted"

    },
    "tst_Gestures\0initTestCase\0\0cleanupTestCase\0"
    "customGesture\0autoCancelingGestures\0"
    "gestureOverChild\0multipleWidgetOnlyGestureInTree\0"
    "conflictingGestures\0"
    "conflictingGesturesInGraphicsView\0"
    "finishedWithoutStarted\0unknownGesture\0"
    "graphicsItemGesture\0graphicsView\0"
    "graphicsItemTreeGesture\0"
    "explicitGraphicsObjectTarget\0"
    "gestureOverChildGraphicsItem\0"
    "twoGesturesOnDifferentLevel\0"
    "multipleGesturesInTree\0"
    "multipleGesturesInComplexTree\0"
    "testMapToScene\0ungrabGesture\0"
    "consumeEventHint\0unregisterRecognizer\0"
    "autoCancelGestures\0autoCancelGestures2\0"
    "graphicsViewParentPropagation\0"
    "panelPropagation\0panelStacksBehindParent\0"
    "deleteGestureTargetWidget\0"
    "deleteGestureTargetItem_data\0"
    "deleteGestureTargetItem\0viewportCoordinates\0"
    "partialGesturePropagation\0"
    "testQGestureRecognizerCleanup\0"
    "testReuseCanceledGestures\0"
    "bug_13501_gesture_not_accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_Gestures[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  189,    2, 0x08 /* Private */,
       3,    0,  190,    2, 0x08 /* Private */,
       4,    0,  191,    2, 0x08 /* Private */,
       5,    0,  192,    2, 0x08 /* Private */,
       6,    0,  193,    2, 0x08 /* Private */,
       7,    0,  194,    2, 0x08 /* Private */,
       8,    0,  195,    2, 0x08 /* Private */,
       9,    0,  196,    2, 0x08 /* Private */,
      10,    0,  197,    2, 0x08 /* Private */,
      11,    0,  198,    2, 0x08 /* Private */,
      12,    0,  199,    2, 0x08 /* Private */,
      13,    0,  200,    2, 0x08 /* Private */,
      14,    0,  201,    2, 0x08 /* Private */,
      15,    0,  202,    2, 0x08 /* Private */,
      16,    0,  203,    2, 0x08 /* Private */,
      17,    0,  204,    2, 0x08 /* Private */,
      18,    0,  205,    2, 0x08 /* Private */,
      19,    0,  206,    2, 0x08 /* Private */,
      20,    0,  207,    2, 0x08 /* Private */,
      21,    0,  208,    2, 0x08 /* Private */,
      22,    0,  209,    2, 0x08 /* Private */,
      23,    0,  210,    2, 0x08 /* Private */,
      24,    0,  211,    2, 0x08 /* Private */,
      25,    0,  212,    2, 0x08 /* Private */,
      26,    0,  213,    2, 0x08 /* Private */,
      27,    0,  214,    2, 0x08 /* Private */,
      28,    0,  215,    2, 0x08 /* Private */,
      29,    0,  216,    2, 0x08 /* Private */,
      30,    0,  217,    2, 0x08 /* Private */,
      31,    0,  218,    2, 0x08 /* Private */,
      32,    0,  219,    2, 0x08 /* Private */,
      33,    0,  220,    2, 0x08 /* Private */,
      34,    0,  221,    2, 0x08 /* Private */,
      35,    0,  222,    2, 0x08 /* Private */,
      36,    0,  223,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void tst_Gestures::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_Gestures *_t = static_cast<tst_Gestures *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->customGesture(); break;
        case 3: _t->autoCancelingGestures(); break;
        case 4: _t->gestureOverChild(); break;
        case 5: _t->multipleWidgetOnlyGestureInTree(); break;
        case 6: _t->conflictingGestures(); break;
        case 7: _t->conflictingGesturesInGraphicsView(); break;
        case 8: _t->finishedWithoutStarted(); break;
        case 9: _t->unknownGesture(); break;
        case 10: _t->graphicsItemGesture(); break;
        case 11: _t->graphicsView(); break;
        case 12: _t->graphicsItemTreeGesture(); break;
        case 13: _t->explicitGraphicsObjectTarget(); break;
        case 14: _t->gestureOverChildGraphicsItem(); break;
        case 15: _t->twoGesturesOnDifferentLevel(); break;
        case 16: _t->multipleGesturesInTree(); break;
        case 17: _t->multipleGesturesInComplexTree(); break;
        case 18: _t->testMapToScene(); break;
        case 19: _t->ungrabGesture(); break;
        case 20: _t->consumeEventHint(); break;
        case 21: _t->unregisterRecognizer(); break;
        case 22: _t->autoCancelGestures(); break;
        case 23: _t->autoCancelGestures2(); break;
        case 24: _t->graphicsViewParentPropagation(); break;
        case 25: _t->panelPropagation(); break;
        case 26: _t->panelStacksBehindParent(); break;
        case 27: _t->deleteGestureTargetWidget(); break;
        case 28: _t->deleteGestureTargetItem_data(); break;
        case 29: _t->deleteGestureTargetItem(); break;
        case 30: _t->viewportCoordinates(); break;
        case 31: _t->partialGesturePropagation(); break;
        case 32: _t->testQGestureRecognizerCleanup(); break;
        case 33: _t->testReuseCanceledGestures(); break;
        case 34: _t->bug_13501_gesture_not_accepted(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_Gestures::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_Gestures.data,
      qt_meta_data_tst_Gestures,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_Gestures::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_Gestures::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_Gestures.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_Gestures::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 35;
    }
    return _id;
}
struct qt_meta_stringdata_GestureItem_t {
    QByteArrayData data[11];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GestureItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GestureItem_t qt_meta_stringdata_GestureItem = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GestureItem"
QT_MOC_LITERAL(1, 12, 14), // "gestureStarted"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "QEvent::Type"
QT_MOC_LITERAL(4, 41, 9), // "QGesture*"
QT_MOC_LITERAL(5, 51, 14), // "gestureUpdated"
QT_MOC_LITERAL(6, 66, 15), // "gestureFinished"
QT_MOC_LITERAL(7, 82, 15), // "gestureCanceled"
QT_MOC_LITERAL(8, 98, 10), // "deleteThis"
QT_MOC_LITERAL(9, 109, 14), // "addSelfToScene"
QT_MOC_LITERAL(10, 124, 9) // "eventType"

    },
    "GestureItem\0gestureStarted\0\0QEvent::Type\0"
    "QGesture*\0gestureUpdated\0gestureFinished\0"
    "gestureCanceled\0deleteThis\0addSelfToScene\0"
    "eventType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GestureItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    2,   49,    2, 0x06 /* Public */,
       6,    2,   54,    2, 0x06 /* Public */,
       7,    2,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   64,    2, 0x0a /* Public */,
       9,    2,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,   10,    2,

       0        // eod
};

void GestureItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GestureItem *_t = static_cast<GestureItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gestureStarted((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2]))); break;
        case 1: _t->gestureUpdated((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2]))); break;
        case 2: _t->gestureFinished((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2]))); break;
        case 3: _t->gestureCanceled((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2]))); break;
        case 4: _t->deleteThis(); break;
        case 5: _t->addSelfToScene((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGesture* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGesture* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGesture* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGesture* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGesture* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GestureItem::*_t)(QEvent::Type , QGesture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GestureItem::gestureStarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GestureItem::*_t)(QEvent::Type , QGesture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GestureItem::gestureUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GestureItem::*_t)(QEvent::Type , QGesture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GestureItem::gestureFinished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GestureItem::*_t)(QEvent::Type , QGesture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GestureItem::gestureCanceled)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject GestureItem::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_GestureItem.data,
      qt_meta_data_GestureItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GestureItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GestureItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GestureItem.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsObject::qt_metacast(_clname);
}

int GestureItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void GestureItem::gestureStarted(QEvent::Type _t1, QGesture * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GestureItem::gestureUpdated(QEvent::Type _t1, QGesture * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GestureItem::gestureFinished(QEvent::Type _t1, QGesture * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GestureItem::gestureCanceled(QEvent::Type _t1, QGesture * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_NoConsumeWidgetBug13501_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NoConsumeWidgetBug13501_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NoConsumeWidgetBug13501_t qt_meta_stringdata_NoConsumeWidgetBug13501 = {
    {
QT_MOC_LITERAL(0, 0, 23) // "NoConsumeWidgetBug13501"

    },
    "NoConsumeWidgetBug13501"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NoConsumeWidgetBug13501[] = {

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

void NoConsumeWidgetBug13501::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject NoConsumeWidgetBug13501::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NoConsumeWidgetBug13501.data,
      qt_meta_data_NoConsumeWidgetBug13501,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NoConsumeWidgetBug13501::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NoConsumeWidgetBug13501::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NoConsumeWidgetBug13501.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NoConsumeWidgetBug13501::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
