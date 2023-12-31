#ifndef REP_ENUM_SOURCE_H
#define REP_ENUM_SOURCE_H

// This is an autogenerated file.
// Do not edit this file, any changes made will be lost the next time it is generated.

#include <QtCore/qobject.h>
#include <QtCore/qdatastream.h>
#include <QtCore/qvariant.h>
#include <QtCore/qmetatype.h>

#include <QtRemoteObjects/qremoteobjectnode.h>
#include <QtRemoteObjects/qremoteobjectsource.h>


class TestEnum
{
    Q_GADGET
    TestEnum();

public:
    enum Test {
        TRUE = 0,
        FALSE = 1,
    };
#if (QT_VERSION >= QT_VERSION_CHECK(5, 5, 0))
    Q_ENUM(Test)
#else
    Q_ENUMS(Test)
#endif
    static inline Test toTest(quint8 i, bool *ok = 0)
    {
        if (ok)
            *ok = true;
        switch (i) {
        case 0: return TRUE;
        case 1: return FALSE;
        default:
            if (ok)
                *ok = false;
            return TRUE;
        }
    }
};

#if (QT_VERSION < QT_VERSION_CHECK(5, 5, 0))
    Q_DECLARE_METATYPE(TestEnum::Test)
#endif

inline QDataStream &operator<<(QDataStream &ds, const TestEnum::Test &obj)
{
    quint8 val = obj;
    ds << val;
    return ds;
}

inline QDataStream &operator>>(QDataStream &ds, TestEnum::Test &obj) {
    bool ok;
    quint8 val;
    ds >> val;
    obj = TestEnum::toTest(val, &ok);
    if (!ok)
        qWarning() << "QtRO received an invalid enum value for typeTest, value =" << val;
    return ds;
}

class TestClassSource : public QObject
{
    Q_OBJECT
    Q_CLASSINFO(QCLASSINFO_REMOTEOBJECT_TYPE, "TestClass")
    Q_CLASSINFO(QCLASSINFO_REMOTEOBJECT_SIGNATURE, "d53722adfddbbc36423bd97f0d376466096e5d49")
    Q_PROPERTY(TestEnum::Test testEnum READ testEnum WRITE setTestEnum NOTIFY testEnumChanged)
    Q_PROPERTY(ClassEnum classEnum READ classEnum WRITE setClassEnum NOTIFY classEnumChanged)
    Q_PROPERTY(ClassEnum classEnumRW READ classEnumRW WRITE setClassEnumRW NOTIFY classEnumRWChanged)

public:
    enum ClassEnum {
        Null = 0,
        One = 1,
        Two = 2,
    };
#if (QT_VERSION >= QT_VERSION_CHECK(5, 5, 0))
    Q_ENUM(ClassEnum)
#else
    Q_ENUMS(ClassEnum)
#endif

public:
    explicit TestClassSource(QObject *parent = nullptr) : QObject(parent)
    {
        qRegisterMetaType<TestEnum::Test>();
        qRegisterMetaTypeStreamOperators<TestEnum::Test>();
        qRegisterMetaType<ClassEnum>();
        qRegisterMetaTypeStreamOperators<ClassEnum>();

    }

public:
    virtual ~TestClassSource() {}

    static inline ClassEnum toClassEnum(quint8 i, bool *ok = 0)
    {
        if (ok)
            *ok = true;
        switch (i) {
        case 0: return Null;
        case 1: return One;
        case 2: return Two;
        default:
            if (ok)
                *ok = false;
            return Null;
        }
    }
    virtual TestEnum::Test testEnum() const = 0;
    virtual ClassEnum classEnum() const = 0;
    virtual ClassEnum classEnumRW() const = 0;
    virtual void setTestEnum(TestEnum::Test testEnum) = 0;
    virtual void setClassEnum(ClassEnum classEnum) = 0;
    virtual void setClassEnumRW(ClassEnum classEnumRW) = 0;

Q_SIGNALS:
    void testEnumChanged(TestEnum::Test);
    void classEnumChanged(TestClassSource::ClassEnum);
    void classEnumRWChanged(TestClassSource::ClassEnum);

public Q_SLOTS:
    virtual void pushTestEnum(TestEnum::Test testEnum)
    {
        setTestEnum(testEnum);
    }
    virtual void pushClassEnum(ClassEnum classEnum)
    {
        setClassEnum(classEnum);
    }

private:
    friend class QT_PREPEND_NAMESPACE(QRemoteObjectNode);
};

#if (QT_VERSION < QT_VERSION_CHECK(5, 5, 0))
    Q_DECLARE_METATYPE(TestClassSource::ClassEnum)
#endif

inline QDataStream &operator<<(QDataStream &ds, const TestClassSource::ClassEnum &obj)
{
    quint8 val = obj;
    ds << val;
    return ds;
}

inline QDataStream &operator>>(QDataStream &ds, TestClassSource::ClassEnum &obj) {
    bool ok;
    quint8 val;
    ds >> val;
    obj = TestClassSource::toClassEnum(val, &ok);
    if (!ok)
        qWarning() << "QtRO received an invalid enum value for typeClassEnum, value =" << val;
    return ds;
}


class TestClassSimpleSource : public QObject
{
    Q_OBJECT
    Q_CLASSINFO(QCLASSINFO_REMOTEOBJECT_TYPE, "TestClass")
    Q_CLASSINFO(QCLASSINFO_REMOTEOBJECT_SIGNATURE, "d53722adfddbbc36423bd97f0d376466096e5d49")
    Q_PROPERTY(TestEnum::Test testEnum READ testEnum WRITE setTestEnum NOTIFY testEnumChanged)
    Q_PROPERTY(ClassEnum classEnum READ classEnum WRITE setClassEnum NOTIFY classEnumChanged)
    Q_PROPERTY(ClassEnum classEnumRW READ classEnumRW WRITE setClassEnumRW NOTIFY classEnumRWChanged)

public:
    enum ClassEnum {
        Null = 0,
        One = 1,
        Two = 2,
    };
#if (QT_VERSION >= QT_VERSION_CHECK(5, 5, 0))
    Q_ENUM(ClassEnum)
#else
    Q_ENUMS(ClassEnum)
#endif

public:
    explicit TestClassSimpleSource(QObject *parent = nullptr) : QObject(parent)
        , _testEnum()
        , _classEnum()
        , _classEnumRW()
    {
        qRegisterMetaType<TestEnum::Test>();
        qRegisterMetaTypeStreamOperators<TestEnum::Test>();
        qRegisterMetaType<ClassEnum>();
        qRegisterMetaTypeStreamOperators<ClassEnum>();

    }

public:
    virtual ~TestClassSimpleSource() {}

    static inline ClassEnum toClassEnum(quint8 i, bool *ok = 0)
    {
        if (ok)
            *ok = true;
        switch (i) {
        case 0: return Null;
        case 1: return One;
        case 2: return Two;
        default:
            if (ok)
                *ok = false;
            return Null;
        }
    }
    virtual TestEnum::Test testEnum() const { return _testEnum; }
    virtual ClassEnum classEnum() const { return _classEnum; }
    virtual ClassEnum classEnumRW() const { return _classEnumRW; }
    virtual void setTestEnum(TestEnum::Test testEnum)
    {
        if (testEnum != _testEnum) { 
            _testEnum = testEnum;
            Q_EMIT testEnumChanged(_testEnum);
        }
    }
    virtual void setClassEnum(ClassEnum classEnum)
    {
        if (classEnum != _classEnum) { 
            _classEnum = classEnum;
            Q_EMIT classEnumChanged(_classEnum);
        }
    }
    virtual void setClassEnumRW(ClassEnum classEnumRW)
    {
        if (classEnumRW != _classEnumRW) { 
            _classEnumRW = classEnumRW;
            Q_EMIT classEnumRWChanged(_classEnumRW);
        }
    }

Q_SIGNALS:
    void testEnumChanged(TestEnum::Test);
    void classEnumChanged(TestClassSimpleSource::ClassEnum);
    void classEnumRWChanged(TestClassSimpleSource::ClassEnum);

public Q_SLOTS:
    virtual void pushTestEnum(TestEnum::Test testEnum)
    {
        setTestEnum(testEnum);
    }
    virtual void pushClassEnum(ClassEnum classEnum)
    {
        setClassEnum(classEnum);
    }

private:
    TestEnum::Test _testEnum;
    ClassEnum _classEnum;
    ClassEnum _classEnumRW;

private:
    friend class QT_PREPEND_NAMESPACE(QRemoteObjectNode);
};

#if (QT_VERSION < QT_VERSION_CHECK(5, 5, 0))
    Q_DECLARE_METATYPE(TestClassSimpleSource::ClassEnum)
#endif

inline QDataStream &operator<<(QDataStream &ds, const TestClassSimpleSource::ClassEnum &obj)
{
    quint8 val = obj;
    ds << val;
    return ds;
}

inline QDataStream &operator>>(QDataStream &ds, TestClassSimpleSource::ClassEnum &obj) {
    bool ok;
    quint8 val;
    ds >> val;
    obj = TestClassSimpleSource::toClassEnum(val, &ok);
    if (!ok)
        qWarning() << "QtRO received an invalid enum value for typeClassEnum, value =" << val;
    return ds;
}


template <class ObjectType>
struct TestClassSourceAPI : public SourceApiMap
{
    // You need to add this enum as well as Q_ENUM to your
    // QObject class in order to use .rep enums over QtRO for
    // non-repc generated QObjects.
    enum ClassEnum {
        Null = 0,
        One = 1,
        Two = 2,
    };
    TestClassSourceAPI(ObjectType *object)
        : SourceApiMap()
    {
        Q_UNUSED(object);
        _properties[0] = 3;
        _properties[1] = qtro_prop_index<ObjectType>(&ObjectType::testEnum, static_cast<TestEnum::Test (QObject::*)()>(0),"testEnum");
        qtro_method_test<ObjectType>(&ObjectType::testEnumChanged, static_cast<void (QObject::*)()>(0));
        _properties[2] = qtro_prop_index<ObjectType>(&ObjectType::classEnum, static_cast<typename ObjectType::ClassEnum (QObject::*)()>(0),"classEnum");
        qtro_method_test<ObjectType>(&ObjectType::classEnumChanged, static_cast<void (QObject::*)()>(0));
        _properties[3] = qtro_prop_index<ObjectType>(&ObjectType::classEnumRW, static_cast<typename ObjectType::ClassEnum (QObject::*)()>(0),"classEnumRW");
        qtro_method_test<ObjectType>(&ObjectType::setClassEnumRW, static_cast<void (QObject::*)(typename ObjectType::ClassEnum)>(0));
        qtro_method_test<ObjectType>(&ObjectType::classEnumRWChanged, static_cast<void (QObject::*)()>(0));
        _signals[0] = 3;
        _signals[1] = qtro_signal_index<ObjectType>(&ObjectType::testEnumChanged, static_cast<void (QObject::*)()>(0),signalArgCount+0,&signalArgTypes[0]);
        _signals[2] = qtro_signal_index<ObjectType>(&ObjectType::classEnumChanged, static_cast<void (QObject::*)()>(0),signalArgCount+1,&signalArgTypes[1]);
        _signals[3] = qtro_signal_index<ObjectType>(&ObjectType::classEnumRWChanged, static_cast<void (QObject::*)()>(0),signalArgCount+2,&signalArgTypes[2]);
        _methods[0] = 2;
        _methods[1] = qtro_method_index<ObjectType>(&ObjectType::pushTestEnum, static_cast<void (QObject::*)(TestEnum::Test)>(0),"pushTestEnum(TestEnum::Test)",methodArgCount+0,&methodArgTypes[0]);
        _methods[2] = qtro_method_index<ObjectType>(&ObjectType::pushClassEnum, static_cast<void (QObject::*)(typename ObjectType::ClassEnum)>(0),"pushClassEnum(typename ObjectType::ClassEnum)",methodArgCount+1,&methodArgTypes[1]);
        _modelCount = 0;
    }

    QString name() const override { return QStringLiteral("TestClass"); }
    QString typeName() const override { return QStringLiteral("TestClass"); }
    int propertyCount() const override { return _properties[0]; }
    int signalCount() const override { return _signals[0]; }
    int methodCount() const override { return _methods[0]; }
    int modelCount() const override { return _modelCount; }
    int sourcePropertyIndex(int index) const override
    {
        if (index < 0 || index >= _properties[0])
            return -1;
        return _properties[index+1];
    }
    int sourceSignalIndex(int index) const override
    {
        if (index < 0 || index >= _signals[0])
            return -1;
        return _signals[index+1];
    }
    int sourceMethodIndex(int index) const override
    {
        if (index < 0 || index >= _methods[0])
            return -1;
        return _methods[index+1];
    }
    int signalParameterCount(int index) const override
    {
        if (index < 0 || index >= _signals[0])
            return -1;
        return signalArgCount[index];
    }
    int signalParameterType(int sigIndex, int paramIndex) const override
    {
        if (sigIndex < 0 || sigIndex >= _signals[0] || paramIndex < 0 || paramIndex >= signalArgCount[sigIndex])
            return -1;
        return signalArgTypes[sigIndex][paramIndex];
    }
    int methodParameterCount(int index) const override
    {
        if (index < 0 || index >= _methods[0])
            return -1;
        return methodArgCount[index];
    }
    int methodParameterType(int methodIndex, int paramIndex) const override
    {
        if (methodIndex < 0 || methodIndex >= _methods[0] || paramIndex < 0 || paramIndex >= methodArgCount[methodIndex])
            return -1;
        return methodArgTypes[methodIndex][paramIndex];
    }
    int propertyIndexFromSignal(int index) const override
    {
        switch (index) {
        case 0: return _properties[1];
        case 1: return _properties[2];
        case 2: return _properties[3];
        }
        return -1;
    }
    int propertyRawIndexFromSignal(int index) const override
    {
        switch (index) {
        case 0: return 1;
        case 1: return 2;
        case 2: return 3;
        }
        return -1;
    }
    const QByteArray signalSignature(int index) const override
    {
        switch (index) {
        case 0: return QByteArrayLiteral("testEnumChanged()");
        case 1: return QByteArrayLiteral("classEnumChanged()");
        case 2: return QByteArrayLiteral("classEnumRWChanged()");
        }
        return QByteArrayLiteral("");
    }
    const QByteArray methodSignature(int index) const override
    {
        switch (index) {
        case 0: return QByteArrayLiteral("pushTestEnum(TestEnum::Test)");
        case 1: return QByteArrayLiteral("pushClassEnum(ClassEnum)");
        }
        return QByteArrayLiteral("");
    }
    QMetaMethod::MethodType methodType(int) const override
    {
        return QMetaMethod::Slot;
    }
    const QByteArray typeName(int index) const override
    {
        switch (index) {
        case 0: return QByteArrayLiteral("void");
        case 1: return QByteArrayLiteral("void");
        }
        return QByteArrayLiteral("");
    }
    QByteArray objectSignature() const override { return QByteArray{"d53722adfddbbc36423bd97f0d376466096e5d49"}; }

    int _properties[4];
    int _signals[4];
    int _methods[3];
    int signalArgCount[3];
    const int* signalArgTypes[3];
    int methodArgCount[2];
    const int* methodArgTypes[2];
    int _modelCount;
};
QT_BEGIN_NAMESPACE
QT_END_NAMESPACE


#endif // REP_ENUM_SOURCE_H
