//
// Statemachine code from reading SCXML file 'topmachine.scxml'
// Created by: The Qt SCXML Compiler version 1 (Qt 5.9.6)
// WARNING! All changes made in this file will be lost!
//

#include "topmachine.h"

#include <qscxmlinvokableservice.h>
#include <qscxmltabledata.h>
#include <QScxmlEcmaScriptDataModel>
#include <QScxmlNullDataModel>

#if !defined(Q_QSCXMLC_OUTPUT_REVISION)
#error "The header file 'topmachine.scxml' doesn't include <qscxmltabledata.h>."
#elif Q_QSCXMLC_OUTPUT_REVISION != 1
#error "This file was generated using the qscxmlc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The qscxmlc has changed too much.)"
#endif

struct TopMachine::Data: private QScxmlTableData {
    Data(TopMachine &stateMachine)
        : stateMachine(stateMachine)
    {}

    void init() {
        stateMachine.setTableData(this);
        stateMachine.setDataModel(&dataModel);
    }

    QString name() const Q_DECL_OVERRIDE Q_DECL_FINAL
    { return string(0); }

    QScxmlExecutableContent::ContainerId initialSetup() const Q_DECL_OVERRIDE Q_DECL_FINAL
    { return 33; }

    QScxmlExecutableContent::InstructionId *instructions() const Q_DECL_OVERRIDE Q_DECL_FINAL
    { return theInstructions; }

    QScxmlExecutableContent::StringId *dataNames(int *count) const Q_DECL_OVERRIDE Q_DECL_FINAL
    { *count = 1; return dataIds; }

    QScxmlExecutableContent::EvaluatorInfo evaluatorInfo(QScxmlExecutableContent::EvaluatorId evaluatorId) const Q_DECL_OVERRIDE Q_DECL_FINAL
    { Q_ASSERT(evaluatorId >= 0); Q_ASSERT(evaluatorId < 1); return evaluators[evaluatorId]; }

    QScxmlExecutableContent::AssignmentInfo assignmentInfo(QScxmlExecutableContent::EvaluatorId assignmentId) const Q_DECL_OVERRIDE Q_DECL_FINAL
    { Q_ASSERT(assignmentId >= 0); Q_ASSERT(assignmentId < 2); return assignments[assignmentId]; }

    QScxmlExecutableContent::ForeachInfo foreachInfo(QScxmlExecutableContent::EvaluatorId foreachId) const Q_DECL_OVERRIDE Q_DECL_FINAL
    { Q_ASSERT(foreachId >= 0); Q_ASSERT(foreachId < 0); return foreaches[foreachId]; }

    QString string(QScxmlExecutableContent::StringId id) const Q_DECL_OVERRIDE Q_DECL_FINAL
    {
        Q_ASSERT(id >= QScxmlExecutableContent::NoString); Q_ASSERT(id < 20);
        if (id == QScxmlExecutableContent::NoString) return QString();
        return QString({static_cast<QStringData*>(strings.data + id)});
    }

    const qint32 *stateMachineTable() const Q_DECL_OVERRIDE Q_DECL_FINAL
    { return theStateMachineTable; }

    QScxmlInvokableServiceFactory *serviceFactory(int id) const Q_DECL_OVERRIDE Q_DECL_FINAL;

    TopMachine &stateMachine;
    QScxmlEcmaScriptDataModel dataModel;

    static QScxmlExecutableContent::ParameterInfo param(QScxmlExecutableContent::StringId name,
                                                        QScxmlExecutableContent::EvaluatorId expr,
                                                        QScxmlExecutableContent::StringId location)
    {
        QScxmlExecutableContent::ParameterInfo p;
        p.name = name;
        p.expr = expr;
        p.location = location;
        return p;
    }

    static QScxmlExecutableContent::InvokeInfo invoke(
            QScxmlExecutableContent::StringId id,
            QScxmlExecutableContent::StringId prefix,
            QScxmlExecutableContent::EvaluatorId expr,
            QScxmlExecutableContent::StringId location,
            QScxmlExecutableContent::StringId context,
            QScxmlExecutableContent::ContainerId finalize,
            bool autoforward)
    {
        QScxmlExecutableContent::InvokeInfo i;
        i.id = id;
        i.prefix = prefix;
        i.expr = expr;
        i.location = location;
        i.context = context;
        i.finalize = finalize;
        i.autoforward = autoforward;
        return i;
    }

    static qint32 theInstructions[];
    static QScxmlExecutableContent::StringId dataIds[];
    static QScxmlExecutableContent::EvaluatorInfo evaluators[];
    static QScxmlExecutableContent::AssignmentInfo assignments[];
    static QScxmlExecutableContent::ForeachInfo foreaches[];
    static const qint32 theStateMachineTable[];
    static struct Strings {
        QArrayData data[20];
        qunicodechar stringdata[494];
    } strings;
};

TopMachine::TopMachine(QObject *parent)
    : QScxmlStateMachine(&staticMetaObject, parent)
    , data(new Data(*this))
{ qRegisterMetaType<TopMachine *>(); data->init(); }

TopMachine::~TopMachine()
{ delete data; }

QScxmlInvokableServiceFactory *TopMachine::Data::serviceFactory(int id) const
{
    switch (id) {
        case 0: return new QScxmlStaticScxmlServiceFactory(&::SubMachine::staticMetaObject,invoke(3, 4, -1, -1, 2, -1, false), {}, {});
        case 1: return new QScxmlStaticScxmlServiceFactory(&::SubMachine_2::staticMetaObject,invoke(5, 4, -1, -1, 2, -1, false), {}, {});
        case 2: return new QScxmlStaticScxmlServiceFactory(&::SubMachine_3::staticMetaObject,invoke(6, 4, -1, -1, 2, -1, false), {}, {});
        default: Q_UNREACHABLE();
    }
}

qint32 TopMachine::Data::theInstructions[] = {
1, 26, 7, 0, 9, 1, 0, 2, 1, 18, 1, 16, 3, 12, 13, -1, -1, -1, -1, -1, -1, -1, 14,
-1, -1, -1, 0, 0, 12, 17, -1, -1, 0, 1, 2, 8, 1
};

QScxmlExecutableContent::StringId TopMachine::Data::dataIds[] = {
7
};

QScxmlExecutableContent::EvaluatorInfo TopMachine::Data::evaluators[] = {
{ 10, 11 }
};

QScxmlExecutableContent::AssignmentInfo TopMachine::Data::assignments[] = {
{ 7, 8, 9 }, { 7, 18, 19 }
};

QScxmlExecutableContent::ForeachInfo TopMachine::Data::foreaches[] = {
{ -1, -1, -1, -1 }
};

#define STR_LIT(idx, ofs, len) \
    Q_STATIC_STRING_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(Strings, stringdata) + ofs * sizeof(qunicodechar) - idx * sizeof(QArrayData)) \
    )
TopMachine::Data::Strings TopMachine::Data::strings = {{
STR_LIT(0, 0, 10), STR_LIT(1, 11, 8), STR_LIT(2, 20, 36), STR_LIT(3, 57, 12),
STR_LIT(4, 70, 17), STR_LIT(5, 88, 12), STR_LIT(6, 101, 12), STR_LIT(7, 114, 11),
STR_LIT(8, 126, 15), STR_LIT(9, 142, 81), STR_LIT(10, 224, 17),
STR_LIT(11, 242, 79), STR_LIT(12, 322, 51), STR_LIT(13, 374, 9),
STR_LIT(14, 384, 2), STR_LIT(15, 387, 11), STR_LIT(16, 399, 10),
STR_LIT(17, 410, 33), STR_LIT(18, 444, 1), STR_LIT(19, 446, 46)
},{
0x54,0x6f,0x70,0x4d,0x61,0x63,0x68,0x69,0x6e,0x65,0, // 0: TopMachine
0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0, // 1: topState
0x69,0x6e,0x76,0x6f,0x6b,0x65,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x20,0x69,0x6e,0x20,0x73,0x74,0x61,0x74,0x65,0x20,0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0, // 2: invoke instruction in state topState
0x73,0x75,0x62,0x6d,0x61,0x63,0x68,0x69,0x6e,0x65,0x2e,0x31,0, // 3: submachine.1
0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0x2e,0x73,0x65,0x73,0x73,0x69,0x6f,0x6e,0x2d,0, // 4: topState.session-
0x73,0x75,0x62,0x6d,0x61,0x63,0x68,0x69,0x6e,0x65,0x2e,0x32,0, // 5: submachine.2
0x73,0x75,0x62,0x6d,0x61,0x63,0x68,0x69,0x6e,0x65,0x2e,0x33,0, // 6: submachine.3
0x64,0x6f,0x6e,0x65,0x43,0x6f,0x75,0x6e,0x74,0x65,0x72,0, // 7: doneCounter
0x64,0x6f,0x6e,0x65,0x43,0x6f,0x75,0x6e,0x74,0x65,0x72,0x20,0x2b,0x20,0x31,0, // 8: doneCounter + 1
0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x20,0x69,0x6e,0x20,0x74,0x72,0x61,0x6e,0x73,0x69,0x74,0x69,0x6f,0x6e,0x20,0x20,0x6f,0x66,0x20,0x73,0x74,0x61,0x74,0x65,0x20,0x27,0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0x27,0x20,0x77,0x69,0x74,0x68,0x20,0x65,0x78,0x70,0x72,0x3d,0x22,0x64,0x6f,0x6e,0x65,0x43,0x6f,0x75,0x6e,0x74,0x65,0x72,0x20,0x2b,0x20,0x31,0x22,0, // 9: assign instruction in transition  of state 'topState' with expr=\"doneCounter + 1\"
0x64,0x6f,0x6e,0x65,0x43,0x6f,0x75,0x6e,0x74,0x65,0x72,0x20,0x3d,0x3d,0x3d,0x20,0x33,0, // 10: doneCounter === 3
0x69,0x66,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x20,0x69,0x6e,0x20,0x74,0x72,0x61,0x6e,0x73,0x69,0x74,0x69,0x6f,0x6e,0x20,0x20,0x6f,0x66,0x20,0x73,0x74,0x61,0x74,0x65,0x20,0x27,0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0x27,0x20,0x77,0x69,0x74,0x68,0x20,0x63,0x6f,0x6e,0x64,0x3d,0x22,0x64,0x6f,0x6e,0x65,0x43,0x6f,0x75,0x6e,0x74,0x65,0x72,0x20,0x3d,0x3d,0x3d,0x20,0x33,0x22,0, // 11: if instruction in transition  of state 'topState' with cond=\"doneCounter === 3\"
0x73,0x65,0x6e,0x64,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x20,0x69,0x6e,0x20,0x74,0x72,0x61,0x6e,0x73,0x69,0x74,0x69,0x6f,0x6e,0x20,0x20,0x6f,0x66,0x20,0x73,0x74,0x61,0x74,0x65,0x20,0x27,0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0x27,0, // 12: send instruction in transition  of state 'topState'
0x67,0x6f,0x54,0x6f,0x46,0x69,0x6e,0x61,0x6c,0, // 13: goToFinal
0x31,0x73,0, // 14: 1s
0x64,0x6f,0x6e,0x65,0x2e,0x69,0x6e,0x76,0x6f,0x6b,0x65,0, // 15: done.invoke
0x66,0x69,0x6e,0x61,0x6c,0x53,0x74,0x61,0x74,0x65,0, // 16: finalState
0x66,0x69,0x6e,0x61,0x6c,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x20,0x69,0x6e,0x20,0x73,0x74,0x61,0x74,0x65,0x20,0x28,0x6e,0x6f,0x6e,0x65,0x29,0, // 17: final instruction in state (none)
0x30,0, // 18: 0
0x64,0x61,0x74,0x61,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x20,0x69,0x6e,0x20,0x73,0x74,0x61,0x74,0x65,0x20,0x28,0x6e,0x6f,0x6e,0x65,0x29,0x20,0x77,0x69,0x74,0x68,0x20,0x65,0x78,0x70,0x72,0x3d,0x22,0x30,0x22,0 // 19: data instruction in state (none) with expr=\"0\"
}};

const qint32 TopMachine::Data::theStateMachineTable[] = {
	0x1, // version
	0, // name
	1, // data-model
	13, // child states array offset
	2, // transition to initial states
	-1, // initial setup
	0, // binding
	2, // maxServiceId
	14, 2, // state offset and count
	36, 3, // transition offset and count
	54, 18, // array offset and size

	// States:
	1, -1, 0, -1, -1, -1, -1, -1, -1, 10, 0,
	16, -1, 2, -1, -1, -1, -1, 28, -1, -1, -1,

	// Transitions:
	4, -1, 1, 0, -1, 0, 
	8, -1, 1, 0, 6, -1, 
	-1, -1, 2, -1, 16, -1, 

	// Arrays:
	3, 0, 1, 2, 
	1, 15, 
	1, 1, 
	1, 13, 
	2, 0, 1, 
	2, 0, 1, 
	1, 0, 

	0xc0ff33 // terminator
};

struct qt_meta_stringdata_TopMachine_t {
    QByteArrayData data[8];
    unsigned char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TopMachine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TopMachine_t qt_meta_stringdata_TopMachine = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TopMachine"
QT_MOC_LITERAL(1, 11, 15), // "topStateChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "active"
QT_MOC_LITERAL(4, 35, 17), // "finalStateChanged"
QT_MOC_LITERAL(5, 53, 6), // "parent"
QT_MOC_LITERAL(6, 60, 8), // "topState"
QT_MOC_LITERAL(7, 69, 10) // "finalState"
    },{
0x54,0x6f,0x70,0x4d,0x61,0x63,0x68,0x69,0x6e,0x65,0, // 0: TopMachine
0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0x43,0x68,0x61,0x6e,0x67,0x65,0x64,0, // 1: topStateChanged
0, // 2: 
0x61,0x63,0x74,0x69,0x76,0x65,0, // 3: active
0x66,0x69,0x6e,0x61,0x6c,0x53,0x74,0x61,0x74,0x65,0x43,0x68,0x61,0x6e,0x67,0x65,0x64,0, // 4: finalStateChanged
0x70,0x61,0x72,0x65,0x6e,0x74,0, // 5: parent
0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0, // 6: topState
0x66,0x69,0x6e,0x61,0x6c,0x53,0x74,0x61,0x74,0x65,0 // 7: finalState
    }};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TopMachine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   33, // properties
       0,    0, // enums/sets
       1,   41, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    5,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x006a6001,
       7, QMetaType::Bool, 0x006a6001,

 // properties: notify_signal_id
       0,
       1,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   30,    2, 0x0e /* Public */,

       0        // eod
};

void TopMachine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { TopMachine *_r = new TopMachine((*reinterpret_cast< QObject **>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TopMachine *_t = static_cast<TopMachine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: QMetaObject::activate(_o, &staticMetaObject, 0, _a); break;
        case 1: QMetaObject::activate(_o, &staticMetaObject, 1, _a); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        Q_UNUSED(result);
        Q_UNUSED(func);
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TopMachine *_t = static_cast<TopMachine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isActive(0); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isActive(1); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TopMachine::staticMetaObject = {
    { &QScxmlStateMachine::staticMetaObject, qt_meta_stringdata_TopMachine.data,
      qt_meta_data_TopMachine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TopMachine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TopMachine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, reinterpret_cast<const char *>(
            qt_meta_stringdata_TopMachine.stringdata0)))
        return static_cast<void*>(const_cast< TopMachine*>(this));
    return QScxmlStateMachine::qt_metacast(_clname);
}

int TopMachine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScxmlStateMachine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}


struct SubMachine::Data: private QScxmlTableData {
    Data(SubMachine &stateMachine)
        : stateMachine(stateMachine)
    {}

    void init() {
        stateMachine.setTableData(this);
        stateMachine.setDataModel(&dataModel);
    }

    QString name() const Q_DECL_OVERRIDE Q_DECL_FINAL
    { return string(0); }

    QScxmlExecutableContent::ContainerId initialSetup() const Q_DECL_OVERRIDE Q_DECL_FINAL
    { return -1; }

    QScxmlExecutableContent::InstructionId *instructions() const Q_DECL_OVERRIDE Q_DECL_FINAL
    { return theInstructions; }

    QScxmlExecutableContent::StringId *dataNames(int *count) const Q_DECL_OVERRIDE Q_DECL_FINAL
    { *count = 0; return dataIds; }

    QScxmlExecutableContent::EvaluatorInfo evaluatorInfo(QScxmlExecutableContent::EvaluatorId evaluatorId) const Q_DECL_OVERRIDE Q_DECL_FINAL
    { Q_ASSERT(evaluatorId >= 0); Q_ASSERT(evaluatorId < 0); return evaluators[evaluatorId]; }

    QScxmlExecutableContent::AssignmentInfo assignmentInfo(QScxmlExecutableContent::EvaluatorId assignmentId) const Q_DECL_OVERRIDE Q_DECL_FINAL
    { Q_ASSERT(assignmentId >= 0); Q_ASSERT(assignmentId < 0); return assignments[assignmentId]; }

    QScxmlExecutableContent::ForeachInfo foreachInfo(QScxmlExecutableContent::EvaluatorId foreachId) const Q_DECL_OVERRIDE Q_DECL_FINAL
    { Q_ASSERT(foreachId >= 0); Q_ASSERT(foreachId < 0); return foreaches[foreachId]; }

    QString string(QScxmlExecutableContent::StringId id) const Q_DECL_OVERRIDE Q_DECL_FINAL
    {
        Q_ASSERT(id >= QScxmlExecutableContent::NoString); Q_ASSERT(id < 3);
        if (id == QScxmlExecutableContent::NoString) return QString();
        return QString({static_cast<QStringData*>(strings.data + id)});
    }

    const qint32 *stateMachineTable() const Q_DECL_OVERRIDE Q_DECL_FINAL
    { return theStateMachineTable; }

    QScxmlInvokableServiceFactory *serviceFactory(int id) const Q_DECL_OVERRIDE Q_DECL_FINAL;

    SubMachine &stateMachine;
    QScxmlNullDataModel dataModel;

    static QScxmlExecutableContent::ParameterInfo param(QScxmlExecutableContent::StringId name,
                                                        QScxmlExecutableContent::EvaluatorId expr,
                                                        QScxmlExecutableContent::StringId location)
    {
        QScxmlExecutableContent::ParameterInfo p;
        p.name = name;
        p.expr = expr;
        p.location = location;
        return p;
    }

    static QScxmlExecutableContent::InvokeInfo invoke(
            QScxmlExecutableContent::StringId id,
            QScxmlExecutableContent::StringId prefix,
            QScxmlExecutableContent::EvaluatorId expr,
            QScxmlExecutableContent::StringId location,
            QScxmlExecutableContent::StringId context,
            QScxmlExecutableContent::ContainerId finalize,
            bool autoforward)
    {
        QScxmlExecutableContent::InvokeInfo i;
        i.id = id;
        i.prefix = prefix;
        i.expr = expr;
        i.location = location;
        i.context = context;
        i.finalize = finalize;
        i.autoforward = autoforward;
        return i;
    }

    static qint32 theInstructions[];
    static QScxmlExecutableContent::StringId dataIds[];
    static QScxmlExecutableContent::EvaluatorInfo evaluators[];
    static QScxmlExecutableContent::AssignmentInfo assignments[];
    static QScxmlExecutableContent::ForeachInfo foreaches[];
    static const qint32 theStateMachineTable[];
    static struct Strings {
        QArrayData data[3];
        qunicodechar stringdata[55];
    } strings;
};

SubMachine::SubMachine(QObject *parent)
    : QScxmlStateMachine(&staticMetaObject, parent)
    , data(new Data(*this))
{ qRegisterMetaType<SubMachine *>(); data->init(); }

SubMachine::~SubMachine()
{ delete data; }

QScxmlInvokableServiceFactory *SubMachine::Data::serviceFactory(int id) const
{
    Q_UNUSED(id);
    Q_UNREACHABLE();
}

qint32 SubMachine::Data::theInstructions[] = {
12, 2, -1, -1, 0
};

QScxmlExecutableContent::StringId SubMachine::Data::dataIds[] = {
-1
};

QScxmlExecutableContent::EvaluatorInfo SubMachine::Data::evaluators[] = {
{ -1, -1 }
};

QScxmlExecutableContent::AssignmentInfo SubMachine::Data::assignments[] = {
{ -1, -1, -1 }
};

QScxmlExecutableContent::ForeachInfo SubMachine::Data::foreaches[] = {
{ -1, -1, -1, -1 }
};

#define STR_LIT(idx, ofs, len) \
    Q_STATIC_STRING_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(Strings, stringdata) + ofs * sizeof(qunicodechar) - idx * sizeof(QArrayData)) \
    )
SubMachine::Data::Strings SubMachine::Data::strings = {{
STR_LIT(0, 0, 10), STR_LIT(1, 11, 8), STR_LIT(2, 20, 33)
},{
0x53,0x75,0x62,0x4d,0x61,0x63,0x68,0x69,0x6e,0x65,0, // 0: SubMachine
0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0, // 1: topState
0x66,0x69,0x6e,0x61,0x6c,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x20,0x69,0x6e,0x20,0x73,0x74,0x61,0x74,0x65,0x20,0x28,0x6e,0x6f,0x6e,0x65,0x29,0 // 2: final instruction in state (none)
}};

const qint32 SubMachine::Data::theStateMachineTable[] = {
	0x1, // version
	0, // name
	0, // data-model
	0, // child states array offset
	0, // transition to initial states
	-1, // initial setup
	0, // binding
	-1, // maxServiceId
	14, 1, // state offset and count
	25, 1, // transition offset and count
	31, 4, // array offset and size

	// States:
	1, -1, 2, -1, -1, -1, -1, 0, -1, -1, -1,

	// Transitions:
	-1, -1, 2, -1, 2, -1, 

	// Arrays:
	1, 0, 
	1, 0, 

	0xc0ff33 // terminator
};

struct qt_meta_stringdata_SubMachine_t {
    QByteArrayData data[6];
    unsigned char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubMachine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubMachine_t qt_meta_stringdata_SubMachine = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SubMachine"
QT_MOC_LITERAL(1, 11, 15), // "topStateChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "active"
QT_MOC_LITERAL(4, 35, 6), // "parent"
QT_MOC_LITERAL(5, 42, 8) // "topState"
    },{
0x53,0x75,0x62,0x4d,0x61,0x63,0x68,0x69,0x6e,0x65,0, // 0: SubMachine
0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0x43,0x68,0x61,0x6e,0x67,0x65,0x64,0, // 1: topStateChanged
0, // 2: 
0x61,0x63,0x74,0x69,0x76,0x65,0, // 3: active
0x70,0x61,0x72,0x65,0x6e,0x74,0, // 4: parent
0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0 // 5: topState
    }};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubMachine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   25, // properties
       0,    0, // enums/sets
       1,   29, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x006a6001,

 // properties: notify_signal_id
       0,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   22,    2, 0x0e /* Public */,

       0        // eod
};

void SubMachine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { SubMachine *_r = new SubMachine((*reinterpret_cast< QObject **>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SubMachine *_t = static_cast<SubMachine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: QMetaObject::activate(_o, &staticMetaObject, 0, _a); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        Q_UNUSED(result);
        Q_UNUSED(func);
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SubMachine *_t = static_cast<SubMachine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isActive(0); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SubMachine::staticMetaObject = {
    { &QScxmlStateMachine::staticMetaObject, qt_meta_stringdata_SubMachine.data,
      qt_meta_data_SubMachine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SubMachine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubMachine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, reinterpret_cast<const char *>(
            qt_meta_stringdata_SubMachine.stringdata0)))
        return static_cast<void*>(const_cast< SubMachine*>(this));
    return QScxmlStateMachine::qt_metacast(_clname);
}

int SubMachine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScxmlStateMachine::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}


struct SubMachine_2::Data: private QScxmlTableData {
    Data(SubMachine_2 &stateMachine)
        : stateMachine(stateMachine)
    {}

    void init() {
        stateMachine.setTableData(this);
        stateMachine.setDataModel(&dataModel);
    }

    QString name() const Q_DECL_OVERRIDE Q_DECL_FINAL
    { return string(0); }

    QScxmlExecutableContent::ContainerId initialSetup() const Q_DECL_OVERRIDE Q_DECL_FINAL
    { return -1; }

    QScxmlExecutableContent::InstructionId *instructions() const Q_DECL_OVERRIDE Q_DECL_FINAL
    { return theInstructions; }

    QScxmlExecutableContent::StringId *dataNames(int *count) const Q_DECL_OVERRIDE Q_DECL_FINAL
    { *count = 0; return dataIds; }

    QScxmlExecutableContent::EvaluatorInfo evaluatorInfo(QScxmlExecutableContent::EvaluatorId evaluatorId) const Q_DECL_OVERRIDE Q_DECL_FINAL
    { Q_ASSERT(evaluatorId >= 0); Q_ASSERT(evaluatorId < 0); return evaluators[evaluatorId]; }

    QScxmlExecutableContent::AssignmentInfo assignmentInfo(QScxmlExecutableContent::EvaluatorId assignmentId) const Q_DECL_OVERRIDE Q_DECL_FINAL
    { Q_ASSERT(assignmentId >= 0); Q_ASSERT(assignmentId < 0); return assignments[assignmentId]; }

    QScxmlExecutableContent::ForeachInfo foreachInfo(QScxmlExecutableContent::EvaluatorId foreachId) const Q_DECL_OVERRIDE Q_DECL_FINAL
    { Q_ASSERT(foreachId >= 0); Q_ASSERT(foreachId < 0); return foreaches[foreachId]; }

    QString string(QScxmlExecutableContent::StringId id) const Q_DECL_OVERRIDE Q_DECL_FINAL
    {
        Q_ASSERT(id >= QScxmlExecutableContent::NoString); Q_ASSERT(id < 3);
        if (id == QScxmlExecutableContent::NoString) return QString();
        return QString({static_cast<QStringData*>(strings.data + id)});
    }

    const qint32 *stateMachineTable() const Q_DECL_OVERRIDE Q_DECL_FINAL
    { return theStateMachineTable; }

    QScxmlInvokableServiceFactory *serviceFactory(int id) const Q_DECL_OVERRIDE Q_DECL_FINAL;

    SubMachine_2 &stateMachine;
    QScxmlNullDataModel dataModel;

    static QScxmlExecutableContent::ParameterInfo param(QScxmlExecutableContent::StringId name,
                                                        QScxmlExecutableContent::EvaluatorId expr,
                                                        QScxmlExecutableContent::StringId location)
    {
        QScxmlExecutableContent::ParameterInfo p;
        p.name = name;
        p.expr = expr;
        p.location = location;
        return p;
    }

    static QScxmlExecutableContent::InvokeInfo invoke(
            QScxmlExecutableContent::StringId id,
            QScxmlExecutableContent::StringId prefix,
            QScxmlExecutableContent::EvaluatorId expr,
            QScxmlExecutableContent::StringId location,
            QScxmlExecutableContent::StringId context,
            QScxmlExecutableContent::ContainerId finalize,
            bool autoforward)
    {
        QScxmlExecutableContent::InvokeInfo i;
        i.id = id;
        i.prefix = prefix;
        i.expr = expr;
        i.location = location;
        i.context = context;
        i.finalize = finalize;
        i.autoforward = autoforward;
        return i;
    }

    static qint32 theInstructions[];
    static QScxmlExecutableContent::StringId dataIds[];
    static QScxmlExecutableContent::EvaluatorInfo evaluators[];
    static QScxmlExecutableContent::AssignmentInfo assignments[];
    static QScxmlExecutableContent::ForeachInfo foreaches[];
    static const qint32 theStateMachineTable[];
    static struct Strings {
        QArrayData data[3];
        qunicodechar stringdata[55];
    } strings;
};

SubMachine_2::SubMachine_2(QObject *parent)
    : QScxmlStateMachine(&staticMetaObject, parent)
    , data(new Data(*this))
{ qRegisterMetaType<SubMachine_2 *>(); data->init(); }

SubMachine_2::~SubMachine_2()
{ delete data; }

QScxmlInvokableServiceFactory *SubMachine_2::Data::serviceFactory(int id) const
{
    Q_UNUSED(id);
    Q_UNREACHABLE();
}

qint32 SubMachine_2::Data::theInstructions[] = {
12, 2, -1, -1, 0
};

QScxmlExecutableContent::StringId SubMachine_2::Data::dataIds[] = {
-1
};

QScxmlExecutableContent::EvaluatorInfo SubMachine_2::Data::evaluators[] = {
{ -1, -1 }
};

QScxmlExecutableContent::AssignmentInfo SubMachine_2::Data::assignments[] = {
{ -1, -1, -1 }
};

QScxmlExecutableContent::ForeachInfo SubMachine_2::Data::foreaches[] = {
{ -1, -1, -1, -1 }
};

#define STR_LIT(idx, ofs, len) \
    Q_STATIC_STRING_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(Strings, stringdata) + ofs * sizeof(qunicodechar) - idx * sizeof(QArrayData)) \
    )
SubMachine_2::Data::Strings SubMachine_2::Data::strings = {{
STR_LIT(0, 0, 10), STR_LIT(1, 11, 8), STR_LIT(2, 20, 33)
},{
0x53,0x75,0x62,0x4d,0x61,0x63,0x68,0x69,0x6e,0x65,0, // 0: SubMachine
0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0, // 1: topState
0x66,0x69,0x6e,0x61,0x6c,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x20,0x69,0x6e,0x20,0x73,0x74,0x61,0x74,0x65,0x20,0x28,0x6e,0x6f,0x6e,0x65,0x29,0 // 2: final instruction in state (none)
}};

const qint32 SubMachine_2::Data::theStateMachineTable[] = {
	0x1, // version
	0, // name
	0, // data-model
	0, // child states array offset
	0, // transition to initial states
	-1, // initial setup
	0, // binding
	-1, // maxServiceId
	14, 1, // state offset and count
	25, 1, // transition offset and count
	31, 4, // array offset and size

	// States:
	1, -1, 2, -1, -1, -1, -1, 0, -1, -1, -1,

	// Transitions:
	-1, -1, 2, -1, 2, -1, 

	// Arrays:
	1, 0, 
	1, 0, 

	0xc0ff33 // terminator
};

struct qt_meta_stringdata_SubMachine_2_t {
    QByteArrayData data[6];
    unsigned char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubMachine_2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubMachine_2_t qt_meta_stringdata_SubMachine_2 = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SubMachine_2"
QT_MOC_LITERAL(1, 13, 15), // "topStateChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "active"
QT_MOC_LITERAL(4, 37, 6), // "parent"
QT_MOC_LITERAL(5, 44, 8) // "topState"
    },{
0x53,0x75,0x62,0x4d,0x61,0x63,0x68,0x69,0x6e,0x65,0x5f,0x32,0, // 0: SubMachine_2
0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0x43,0x68,0x61,0x6e,0x67,0x65,0x64,0, // 1: topStateChanged
0, // 2: 
0x61,0x63,0x74,0x69,0x76,0x65,0, // 3: active
0x70,0x61,0x72,0x65,0x6e,0x74,0, // 4: parent
0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0 // 5: topState
    }};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubMachine_2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   25, // properties
       0,    0, // enums/sets
       1,   29, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x006a6001,

 // properties: notify_signal_id
       0,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   22,    2, 0x0e /* Public */,

       0        // eod
};

void SubMachine_2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { SubMachine_2 *_r = new SubMachine_2((*reinterpret_cast< QObject **>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SubMachine_2 *_t = static_cast<SubMachine_2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: QMetaObject::activate(_o, &staticMetaObject, 0, _a); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        Q_UNUSED(result);
        Q_UNUSED(func);
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SubMachine_2 *_t = static_cast<SubMachine_2 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isActive(0); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SubMachine_2::staticMetaObject = {
    { &QScxmlStateMachine::staticMetaObject, qt_meta_stringdata_SubMachine_2.data,
      qt_meta_data_SubMachine_2,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SubMachine_2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubMachine_2::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, reinterpret_cast<const char *>(
            qt_meta_stringdata_SubMachine_2.stringdata0)))
        return static_cast<void*>(const_cast< SubMachine_2*>(this));
    return QScxmlStateMachine::qt_metacast(_clname);
}

int SubMachine_2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScxmlStateMachine::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}


struct SubMachine_3::Data: private QScxmlTableData {
    Data(SubMachine_3 &stateMachine)
        : stateMachine(stateMachine)
    {}

    void init() {
        stateMachine.setTableData(this);
        stateMachine.setDataModel(&dataModel);
    }

    QString name() const Q_DECL_OVERRIDE Q_DECL_FINAL
    { return string(0); }

    QScxmlExecutableContent::ContainerId initialSetup() const Q_DECL_OVERRIDE Q_DECL_FINAL
    { return -1; }

    QScxmlExecutableContent::InstructionId *instructions() const Q_DECL_OVERRIDE Q_DECL_FINAL
    { return theInstructions; }

    QScxmlExecutableContent::StringId *dataNames(int *count) const Q_DECL_OVERRIDE Q_DECL_FINAL
    { *count = 0; return dataIds; }

    QScxmlExecutableContent::EvaluatorInfo evaluatorInfo(QScxmlExecutableContent::EvaluatorId evaluatorId) const Q_DECL_OVERRIDE Q_DECL_FINAL
    { Q_ASSERT(evaluatorId >= 0); Q_ASSERT(evaluatorId < 0); return evaluators[evaluatorId]; }

    QScxmlExecutableContent::AssignmentInfo assignmentInfo(QScxmlExecutableContent::EvaluatorId assignmentId) const Q_DECL_OVERRIDE Q_DECL_FINAL
    { Q_ASSERT(assignmentId >= 0); Q_ASSERT(assignmentId < 0); return assignments[assignmentId]; }

    QScxmlExecutableContent::ForeachInfo foreachInfo(QScxmlExecutableContent::EvaluatorId foreachId) const Q_DECL_OVERRIDE Q_DECL_FINAL
    { Q_ASSERT(foreachId >= 0); Q_ASSERT(foreachId < 0); return foreaches[foreachId]; }

    QString string(QScxmlExecutableContent::StringId id) const Q_DECL_OVERRIDE Q_DECL_FINAL
    {
        Q_ASSERT(id >= QScxmlExecutableContent::NoString); Q_ASSERT(id < 3);
        if (id == QScxmlExecutableContent::NoString) return QString();
        return QString({static_cast<QStringData*>(strings.data + id)});
    }

    const qint32 *stateMachineTable() const Q_DECL_OVERRIDE Q_DECL_FINAL
    { return theStateMachineTable; }

    QScxmlInvokableServiceFactory *serviceFactory(int id) const Q_DECL_OVERRIDE Q_DECL_FINAL;

    SubMachine_3 &stateMachine;
    QScxmlNullDataModel dataModel;

    static QScxmlExecutableContent::ParameterInfo param(QScxmlExecutableContent::StringId name,
                                                        QScxmlExecutableContent::EvaluatorId expr,
                                                        QScxmlExecutableContent::StringId location)
    {
        QScxmlExecutableContent::ParameterInfo p;
        p.name = name;
        p.expr = expr;
        p.location = location;
        return p;
    }

    static QScxmlExecutableContent::InvokeInfo invoke(
            QScxmlExecutableContent::StringId id,
            QScxmlExecutableContent::StringId prefix,
            QScxmlExecutableContent::EvaluatorId expr,
            QScxmlExecutableContent::StringId location,
            QScxmlExecutableContent::StringId context,
            QScxmlExecutableContent::ContainerId finalize,
            bool autoforward)
    {
        QScxmlExecutableContent::InvokeInfo i;
        i.id = id;
        i.prefix = prefix;
        i.expr = expr;
        i.location = location;
        i.context = context;
        i.finalize = finalize;
        i.autoforward = autoforward;
        return i;
    }

    static qint32 theInstructions[];
    static QScxmlExecutableContent::StringId dataIds[];
    static QScxmlExecutableContent::EvaluatorInfo evaluators[];
    static QScxmlExecutableContent::AssignmentInfo assignments[];
    static QScxmlExecutableContent::ForeachInfo foreaches[];
    static const qint32 theStateMachineTable[];
    static struct Strings {
        QArrayData data[3];
        qunicodechar stringdata[55];
    } strings;
};

SubMachine_3::SubMachine_3(QObject *parent)
    : QScxmlStateMachine(&staticMetaObject, parent)
    , data(new Data(*this))
{ qRegisterMetaType<SubMachine_3 *>(); data->init(); }

SubMachine_3::~SubMachine_3()
{ delete data; }

QScxmlInvokableServiceFactory *SubMachine_3::Data::serviceFactory(int id) const
{
    Q_UNUSED(id);
    Q_UNREACHABLE();
}

qint32 SubMachine_3::Data::theInstructions[] = {
12, 2, -1, -1, 0
};

QScxmlExecutableContent::StringId SubMachine_3::Data::dataIds[] = {
-1
};

QScxmlExecutableContent::EvaluatorInfo SubMachine_3::Data::evaluators[] = {
{ -1, -1 }
};

QScxmlExecutableContent::AssignmentInfo SubMachine_3::Data::assignments[] = {
{ -1, -1, -1 }
};

QScxmlExecutableContent::ForeachInfo SubMachine_3::Data::foreaches[] = {
{ -1, -1, -1, -1 }
};

#define STR_LIT(idx, ofs, len) \
    Q_STATIC_STRING_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(Strings, stringdata) + ofs * sizeof(qunicodechar) - idx * sizeof(QArrayData)) \
    )
SubMachine_3::Data::Strings SubMachine_3::Data::strings = {{
STR_LIT(0, 0, 10), STR_LIT(1, 11, 8), STR_LIT(2, 20, 33)
},{
0x53,0x75,0x62,0x4d,0x61,0x63,0x68,0x69,0x6e,0x65,0, // 0: SubMachine
0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0, // 1: topState
0x66,0x69,0x6e,0x61,0x6c,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x20,0x69,0x6e,0x20,0x73,0x74,0x61,0x74,0x65,0x20,0x28,0x6e,0x6f,0x6e,0x65,0x29,0 // 2: final instruction in state (none)
}};

const qint32 SubMachine_3::Data::theStateMachineTable[] = {
	0x1, // version
	0, // name
	0, // data-model
	0, // child states array offset
	0, // transition to initial states
	-1, // initial setup
	0, // binding
	-1, // maxServiceId
	14, 1, // state offset and count
	25, 1, // transition offset and count
	31, 4, // array offset and size

	// States:
	1, -1, 2, -1, -1, -1, -1, 0, -1, -1, -1,

	// Transitions:
	-1, -1, 2, -1, 2, -1, 

	// Arrays:
	1, 0, 
	1, 0, 

	0xc0ff33 // terminator
};

struct qt_meta_stringdata_SubMachine_3_t {
    QByteArrayData data[6];
    unsigned char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubMachine_3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubMachine_3_t qt_meta_stringdata_SubMachine_3 = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SubMachine_3"
QT_MOC_LITERAL(1, 13, 15), // "topStateChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "active"
QT_MOC_LITERAL(4, 37, 6), // "parent"
QT_MOC_LITERAL(5, 44, 8) // "topState"
    },{
0x53,0x75,0x62,0x4d,0x61,0x63,0x68,0x69,0x6e,0x65,0x5f,0x33,0, // 0: SubMachine_3
0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0x43,0x68,0x61,0x6e,0x67,0x65,0x64,0, // 1: topStateChanged
0, // 2: 
0x61,0x63,0x74,0x69,0x76,0x65,0, // 3: active
0x70,0x61,0x72,0x65,0x6e,0x74,0, // 4: parent
0x74,0x6f,0x70,0x53,0x74,0x61,0x74,0x65,0 // 5: topState
    }};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubMachine_3[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   25, // properties
       0,    0, // enums/sets
       1,   29, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x006a6001,

 // properties: notify_signal_id
       0,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   22,    2, 0x0e /* Public */,

       0        // eod
};

void SubMachine_3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { SubMachine_3 *_r = new SubMachine_3((*reinterpret_cast< QObject **>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SubMachine_3 *_t = static_cast<SubMachine_3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: QMetaObject::activate(_o, &staticMetaObject, 0, _a); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        Q_UNUSED(result);
        Q_UNUSED(func);
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SubMachine_3 *_t = static_cast<SubMachine_3 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isActive(0); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SubMachine_3::staticMetaObject = {
    { &QScxmlStateMachine::staticMetaObject, qt_meta_stringdata_SubMachine_3.data,
      qt_meta_data_SubMachine_3,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SubMachine_3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubMachine_3::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, reinterpret_cast<const char *>(
            qt_meta_stringdata_SubMachine_3.stringdata0)))
        return static_cast<void*>(const_cast< SubMachine_3*>(this));
    return QScxmlStateMachine::qt_metacast(_clname);
}

int SubMachine_3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScxmlStateMachine::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}


