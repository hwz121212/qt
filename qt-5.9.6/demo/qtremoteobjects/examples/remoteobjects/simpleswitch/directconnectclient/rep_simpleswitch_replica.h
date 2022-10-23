#ifndef REP_SIMPLESWITCH_REPLICA_H
#define REP_SIMPLESWITCH_REPLICA_H

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

class SimpleSwitchReplica : public QRemoteObjectReplica
{
    Q_OBJECT
    Q_CLASSINFO(QCLASSINFO_REMOTEOBJECT_TYPE, "SimpleSwitch")
    Q_CLASSINFO(QCLASSINFO_REMOTEOBJECT_SIGNATURE, "848df11717af2d8be5106a80a701bfc5723baba7")
    Q_PROPERTY(bool currState READ currState NOTIFY currStateChanged)

public:
    SimpleSwitchReplica() : QRemoteObjectReplica() { initialize(); }
    static void registerMetatypes()
    {
        static bool initialized = false;
        if (initialized)
            return;
        initialized = true;
    }

private:
    SimpleSwitchReplica(QRemoteObjectNode *node, const QString &name = QString())
        : QRemoteObjectReplica(ConstructWithNode)
        { initializeNode(node, name); }

    void initialize()
    {
        SimpleSwitchReplica::registerMetatypes();
        QVariantList properties;
        properties.reserve(1);
        properties << QVariant::fromValue(bool(false));
        setProperties(properties);
    }

public:
    virtual ~SimpleSwitchReplica() {}

    bool currState() const
    {
        const QVariant variant = propAsVariant(0);
        if (!variant.canConvert<bool>()) {
            qWarning() << "QtRO cannot convert the property currState to type bool";
        }
        return variant.value<bool >();
    }


Q_SIGNALS:
    void currStateChanged(bool);

public Q_SLOTS:
    void pushCurrState(bool currState)
    {
        static int __repc_index = SimpleSwitchReplica::staticMetaObject.indexOfSlot("pushCurrState(bool)");
        QVariantList __repc_args;
        __repc_args << QVariant::fromValue(currState);
        send(QMetaObject::InvokeMetaMethod, __repc_index, __repc_args);
    }
    void server_slot(bool clientState)
    {
        static int __repc_index = SimpleSwitchReplica::staticMetaObject.indexOfSlot("server_slot(bool)");
        QVariantList __repc_args;
        __repc_args
            << QVariant::fromValue(clientState)
        ;
        send(QMetaObject::InvokeMetaMethod, __repc_index, __repc_args);
    }

private:
    friend class QT_PREPEND_NAMESPACE(QRemoteObjectNode);
};

#if (QT_VERSION < QT_VERSION_CHECK(5, 5, 0))
#endif


QT_BEGIN_NAMESPACE
QT_END_NAMESPACE


#endif // REP_SIMPLESWITCH_REPLICA_H