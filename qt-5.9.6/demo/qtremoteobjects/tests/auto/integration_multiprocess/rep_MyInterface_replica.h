#ifndef REP_MYINTERFACE_REPLICA_H
#define REP_MYINTERFACE_REPLICA_H

// This is an autogenerated file.
// Do not edit this file, any changes made will be lost the next time it is generated.

#include <QtCore/qobject.h>
#include <QtCore/qdatastream.h>
#include <QtCore/qvariant.h>
#include <QtCore/qmetatype.h>

#include <QtRemoteObjects/qremoteobjectnode.h>
#include <QtRemoteObjects/qremoteobjectpendingcall.h>
#include <QtRemoteObjects/qremoteobjectreplica.h>

#include <QtCore>

class MyInterfaceReplica : public QRemoteObjectReplica
{
    Q_OBJECT
    Q_CLASSINFO(QCLASSINFO_REMOTEOBJECT_TYPE, "MyInterface")
    Q_CLASSINFO(QCLASSINFO_REMOTEOBJECT_SIGNATURE, "8e78021bdc1e6adb4b9463fd528409079def070a")
    Q_PROPERTY(Enum1 enum1 READ enum1 NOTIFY enum1Changed)
    Q_PROPERTY(bool started READ started NOTIFY startedChanged)

public:
    enum Enum1 {
        First = 0,
        Second = 1,
        Third = 2,
    };
#if (QT_VERSION >= QT_VERSION_CHECK(5, 5, 0))
    Q_ENUM(Enum1)
#else
    Q_ENUMS(Enum1)
#endif

public:
    MyInterfaceReplica() : QRemoteObjectReplica() { initialize(); }
    static void registerMetatypes()
    {
        static bool initialized = false;
        if (initialized)
            return;
        initialized = true;
        qRegisterMetaType<Enum1>();
        qRegisterMetaTypeStreamOperators<Enum1>();

    }

private:
    MyInterfaceReplica(QRemoteObjectNode *node, const QString &name = QString())
        : QRemoteObjectReplica(ConstructWithNode)
        { initializeNode(node, name); }

    void initialize()
    {
        MyInterfaceReplica::registerMetatypes();
        QVariantList properties;
        properties.reserve(2);
        properties << QVariant::fromValue(Enum1(First));
        properties << QVariant::fromValue(bool(false));
        setProperties(properties);
    }

public:
    virtual ~MyInterfaceReplica() {}

    static inline Enum1 toEnum1(quint8 i, bool *ok = 0)
    {
        if (ok)
            *ok = true;
        switch (i) {
        case 0: return First;
        case 1: return Second;
        case 2: return Third;
        default:
            if (ok)
                *ok = false;
            return First;
        }
    }
    Enum1 enum1() const
    {
        const QVariant variant = propAsVariant(0);
        if (!variant.canConvert<Enum1>()) {
            qWarning() << "QtRO cannot convert the property enum1 to type Enum1";
        }
        return variant.value<Enum1 >();
    }

    bool started() const
    {
        const QVariant variant = propAsVariant(1);
        if (!variant.canConvert<bool>()) {
            qWarning() << "QtRO cannot convert the property started to type bool";
        }
        return variant.value<bool >();
    }


Q_SIGNALS:
    void enum1Changed(MyInterfaceReplica::Enum1);
    void startedChanged(bool);
    void advance();

public Q_SLOTS:
    void pushEnum1(Enum1 enum1)
    {
        static int __repc_index = MyInterfaceReplica::staticMetaObject.indexOfSlot("pushEnum1(Enum1)");
        QVariantList __repc_args;
        __repc_args << QVariant::fromValue(enum1);
        send(QMetaObject::InvokeMetaMethod, __repc_index, __repc_args);
    }
    void pushStarted(bool started)
    {
        static int __repc_index = MyInterfaceReplica::staticMetaObject.indexOfSlot("pushStarted(bool)");
        QVariantList __repc_args;
        __repc_args << QVariant::fromValue(started);
        send(QMetaObject::InvokeMetaMethod, __repc_index, __repc_args);
    }
    QRemoteObjectPendingReply<bool> start()
    {
        static int __repc_index = MyInterfaceReplica::staticMetaObject.indexOfSlot("start()");
        QVariantList __repc_args;
        return QRemoteObjectPendingReply<bool>(sendWithReply(QMetaObject::InvokeMetaMethod, __repc_index, __repc_args));
    }
    QRemoteObjectPendingReply<bool> stop()
    {
        static int __repc_index = MyInterfaceReplica::staticMetaObject.indexOfSlot("stop()");
        QVariantList __repc_args;
        return QRemoteObjectPendingReply<bool>(sendWithReply(QMetaObject::InvokeMetaMethod, __repc_index, __repc_args));
    }

private:
    friend class QT_PREPEND_NAMESPACE(QRemoteObjectNode);
};

#if (QT_VERSION < QT_VERSION_CHECK(5, 5, 0))
    Q_DECLARE_METATYPE(MyInterfaceReplica::Enum1)
#endif

inline QDataStream &operator<<(QDataStream &ds, const MyInterfaceReplica::Enum1 &obj)
{
    quint8 val = obj;
    ds << val;
    return ds;
}

inline QDataStream &operator>>(QDataStream &ds, MyInterfaceReplica::Enum1 &obj) {
    bool ok;
    quint8 val;
    ds >> val;
    obj = MyInterfaceReplica::toEnum1(val, &ok);
    if (!ok)
        qWarning() << "QtRO received an invalid enum value for typeEnum1, value =" << val;
    return ds;
}


QT_BEGIN_NAMESPACE
QT_END_NAMESPACE


#endif // REP_MYINTERFACE_REPLICA_H