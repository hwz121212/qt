#ifndef REP_MODEL_MERGED_H
#define REP_MODEL_MERGED_H

// This is an autogenerated file.
// Do not edit this file, any changes made will be lost the next time it is generated.

#include <QtCore/qobject.h>
#include <QtCore/qdatastream.h>
#include <QtCore/qvariant.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qabstractitemmodel.h>

#include <QtRemoteObjects/qremoteobjectnode.h>
#include <QtRemoteObjects/qremoteobjectpendingcall.h>
#include <QtRemoteObjects/qremoteobjectreplica.h>
#include <QtRemoteObjects/qremoteobjectsource.h>
#include <QtRemoteObjects/qremoteobjectabstractitemmodelreplica.h>


class MediaReplica : public QRemoteObjectReplica
{
    Q_OBJECT
    Q_CLASSINFO(QCLASSINFO_REMOTEOBJECT_TYPE, "Media")
    Q_CLASSINFO(QCLASSINFO_REMOTEOBJECT_SIGNATURE, "4cbd1640de43cf718d0df07aea019dd411a51863")
    Q_PROPERTY(QString currentTrack READ currentTrack NOTIFY currentTrackChanged)
    Q_PROPERTY(state playState READ playState NOTIFY playStateChanged)
    Q_PROPERTY(QAbstractItemModelReplica *tracks READ tracks CONSTANT)

public:
    enum state {
        Stopped = 0,
        Paused = 1,
        Playing = 2,
    };
#if (QT_VERSION >= QT_VERSION_CHECK(5, 5, 0))
    Q_ENUM(state)
#else
    Q_ENUMS(state)
#endif

public:
    MediaReplica() : QRemoteObjectReplica() { initialize(); }
    static void registerMetatypes()
    {
        static bool initialized = false;
        if (initialized)
            return;
        initialized = true;
        qRegisterMetaType<state>();
        qRegisterMetaTypeStreamOperators<state>();

    }

private:
    MediaReplica(QRemoteObjectNode *node, const QString &name = QString())
        : QRemoteObjectReplica(ConstructWithNode)
        , m_tracks(node->acquireModel("Media::tracks"))
        { initializeNode(node, name); }

    void initialize()
    {
        MediaReplica::registerMetatypes();
        QVariantList properties;
        properties.reserve(2);
        properties << QVariant::fromValue(QString());
        properties << QVariant::fromValue(state());
        setProperties(properties);
    }

public:
    virtual ~MediaReplica() {}

    static inline state tostate(quint8 i, bool *ok = 0)
    {
        if (ok)
            *ok = true;
        switch (i) {
        case 0: return Stopped;
        case 1: return Paused;
        case 2: return Playing;
        default:
            if (ok)
                *ok = false;
            return Stopped;
        }
    }
    QString currentTrack() const
    {
        const QVariant variant = propAsVariant(0);
        if (!variant.canConvert<QString>()) {
            qWarning() << "QtRO cannot convert the property currentTrack to type QString";
        }
        return variant.value<QString >();
    }

    state playState() const
    {
        const QVariant variant = propAsVariant(1);
        if (!variant.canConvert<state>()) {
            qWarning() << "QtRO cannot convert the property playState to type state";
        }
        return variant.value<state >();
    }

    QAbstractItemModelReplica *tracks()
    {
        return m_tracks.data();
    }

Q_SIGNALS:
    void currentTrackChanged(QString);
    void playStateChanged(MediaReplica::state);

public Q_SLOTS:
    void pushCurrentTrack(QString currentTrack)
    {
        static int __repc_index = MediaReplica::staticMetaObject.indexOfSlot("pushCurrentTrack(QString)");
        QVariantList __repc_args;
        __repc_args << QVariant::fromValue(currentTrack);
        send(QMetaObject::InvokeMetaMethod, __repc_index, __repc_args);
    }
    void pushPlayState(state playState)
    {
        static int __repc_index = MediaReplica::staticMetaObject.indexOfSlot("pushPlayState(state)");
        QVariantList __repc_args;
        __repc_args << QVariant::fromValue(playState);
        send(QMetaObject::InvokeMetaMethod, __repc_index, __repc_args);
    }

private:
    QScopedPointer<QAbstractItemModelReplica> m_tracks;
    friend class QT_PREPEND_NAMESPACE(QRemoteObjectNode);
};

#if (QT_VERSION < QT_VERSION_CHECK(5, 5, 0))
    Q_DECLARE_METATYPE(MediaReplica::state)
#endif

inline QDataStream &operator<<(QDataStream &ds, const MediaReplica::state &obj)
{
    quint8 val = obj;
    ds << val;
    return ds;
}

inline QDataStream &operator>>(QDataStream &ds, MediaReplica::state &obj) {
    bool ok;
    quint8 val;
    ds >> val;
    obj = MediaReplica::tostate(val, &ok);
    if (!ok)
        qWarning() << "QtRO received an invalid enum value for typestate, value =" << val;
    return ds;
}


class MediaSource : public QObject
{
    Q_OBJECT
    Q_CLASSINFO(QCLASSINFO_REMOTEOBJECT_TYPE, "Media")
    Q_CLASSINFO(QCLASSINFO_REMOTEOBJECT_SIGNATURE, "4cbd1640de43cf718d0df07aea019dd411a51863")
    Q_PROPERTY(QString currentTrack READ currentTrack WRITE setCurrentTrack NOTIFY currentTrackChanged)
    Q_PROPERTY(state playState READ playState WRITE setPlayState NOTIFY playStateChanged)
    Q_PROPERTY(QAbstractItemModel *tracks READ tracks CONSTANT)

public:
    enum state {
        Stopped = 0,
        Paused = 1,
        Playing = 2,
    };
#if (QT_VERSION >= QT_VERSION_CHECK(5, 5, 0))
    Q_ENUM(state)
#else
    Q_ENUMS(state)
#endif

public:
    explicit MediaSource(QObject *parent = nullptr) : QObject(parent)
    {
        qRegisterMetaType<state>();
        qRegisterMetaTypeStreamOperators<state>();

    }

public:
    virtual ~MediaSource() {}

    static inline state tostate(quint8 i, bool *ok = 0)
    {
        if (ok)
            *ok = true;
        switch (i) {
        case 0: return Stopped;
        case 1: return Paused;
        case 2: return Playing;
        default:
            if (ok)
                *ok = false;
            return Stopped;
        }
    }
    virtual QString currentTrack() const = 0;
    virtual state playState() const = 0;
    virtual void setCurrentTrack(QString currentTrack) = 0;
    virtual void setPlayState(state playState) = 0;
    virtual QAbstractItemModel *tracks() = 0;

Q_SIGNALS:
    void currentTrackChanged(QString);
    void playStateChanged(MediaSource::state);

public Q_SLOTS:
    virtual void pushCurrentTrack(QString currentTrack)
    {
        setCurrentTrack(currentTrack);
    }
    virtual void pushPlayState(state playState)
    {
        setPlayState(playState);
    }

private:
    friend class QT_PREPEND_NAMESPACE(QRemoteObjectNode);
};

#if (QT_VERSION < QT_VERSION_CHECK(5, 5, 0))
    Q_DECLARE_METATYPE(MediaSource::state)
#endif

inline QDataStream &operator<<(QDataStream &ds, const MediaSource::state &obj)
{
    quint8 val = obj;
    ds << val;
    return ds;
}

inline QDataStream &operator>>(QDataStream &ds, MediaSource::state &obj) {
    bool ok;
    quint8 val;
    ds >> val;
    obj = MediaSource::tostate(val, &ok);
    if (!ok)
        qWarning() << "QtRO received an invalid enum value for typestate, value =" << val;
    return ds;
}


class MediaSimpleSource : public QObject
{
    Q_OBJECT
    Q_CLASSINFO(QCLASSINFO_REMOTEOBJECT_TYPE, "Media")
    Q_CLASSINFO(QCLASSINFO_REMOTEOBJECT_SIGNATURE, "4cbd1640de43cf718d0df07aea019dd411a51863")
    Q_PROPERTY(QString currentTrack READ currentTrack WRITE setCurrentTrack NOTIFY currentTrackChanged)
    Q_PROPERTY(state playState READ playState WRITE setPlayState NOTIFY playStateChanged)
    Q_PROPERTY(QAbstractItemModel *tracks READ tracks CONSTANT)

public:
    enum state {
        Stopped = 0,
        Paused = 1,
        Playing = 2,
    };
#if (QT_VERSION >= QT_VERSION_CHECK(5, 5, 0))
    Q_ENUM(state)
#else
    Q_ENUMS(state)
#endif

public:
    explicit MediaSimpleSource(QAbstractItemModel *model1, QObject *parent = nullptr) : QObject(parent)
        , m_tracks(model1)
        , _currentTrack()
        , _playState()
    {
        qRegisterMetaType<state>();
        qRegisterMetaTypeStreamOperators<state>();

    }

public:
    virtual ~MediaSimpleSource() {}

    static inline state tostate(quint8 i, bool *ok = 0)
    {
        if (ok)
            *ok = true;
        switch (i) {
        case 0: return Stopped;
        case 1: return Paused;
        case 2: return Playing;
        default:
            if (ok)
                *ok = false;
            return Stopped;
        }
    }
    virtual QString currentTrack() const { return _currentTrack; }
    virtual state playState() const { return _playState; }
    virtual void setCurrentTrack(QString currentTrack)
    {
        if (currentTrack != _currentTrack) { 
            _currentTrack = currentTrack;
            Q_EMIT currentTrackChanged(_currentTrack);
        }
    }
    virtual void setPlayState(state playState)
    {
        if (playState != _playState) { 
            _playState = playState;
            Q_EMIT playStateChanged(_playState);
        }
    }
    QAbstractItemModel *tracks()
    {
        return m_tracks.data();
    }

Q_SIGNALS:
    void currentTrackChanged(QString);
    void playStateChanged(MediaSimpleSource::state);

public Q_SLOTS:
    virtual void pushCurrentTrack(QString currentTrack)
    {
        setCurrentTrack(currentTrack);
    }
    virtual void pushPlayState(state playState)
    {
        setPlayState(playState);
    }

private:
    QString _currentTrack;
    state _playState;
    QScopedPointer<QAbstractItemModel> m_tracks;

private:
    friend class QT_PREPEND_NAMESPACE(QRemoteObjectNode);
};

#if (QT_VERSION < QT_VERSION_CHECK(5, 5, 0))
    Q_DECLARE_METATYPE(MediaSimpleSource::state)
#endif

inline QDataStream &operator<<(QDataStream &ds, const MediaSimpleSource::state &obj)
{
    quint8 val = obj;
    ds << val;
    return ds;
}

inline QDataStream &operator>>(QDataStream &ds, MediaSimpleSource::state &obj) {
    bool ok;
    quint8 val;
    ds >> val;
    obj = MediaSimpleSource::tostate(val, &ok);
    if (!ok)
        qWarning() << "QtRO received an invalid enum value for typestate, value =" << val;
    return ds;
}


template <class ObjectType>
struct MediaSourceAPI : public SourceApiMap
{
    // You need to add this enum as well as Q_ENUM to your
    // QObject class in order to use .rep enums over QtRO for
    // non-repc generated QObjects.
    enum state {
        Stopped = 0,
        Paused = 1,
        Playing = 2,
    };
    MediaSourceAPI(ObjectType *object)
        : SourceApiMap()
    {
        _properties[0] = 2;
        _properties[1] = qtro_prop_index<ObjectType>(&ObjectType::currentTrack, static_cast<QString (QObject::*)()>(0),"currentTrack");
        qtro_method_test<ObjectType>(&ObjectType::currentTrackChanged, static_cast<void (QObject::*)()>(0));
        _properties[2] = qtro_prop_index<ObjectType>(&ObjectType::playState, static_cast<typename ObjectType::state (QObject::*)()>(0),"playState");
        qtro_method_test<ObjectType>(&ObjectType::playStateChanged, static_cast<void (QObject::*)()>(0));
        _signals[0] = 2;
        _signals[1] = qtro_signal_index<ObjectType>(&ObjectType::currentTrackChanged, static_cast<void (QObject::*)()>(0),signalArgCount+0,&signalArgTypes[0]);
        _signals[2] = qtro_signal_index<ObjectType>(&ObjectType::playStateChanged, static_cast<void (QObject::*)()>(0),signalArgCount+1,&signalArgTypes[1]);
        _methods[0] = 2;
        _methods[1] = qtro_method_index<ObjectType>(&ObjectType::pushCurrentTrack, static_cast<void (QObject::*)(QString)>(0),"pushCurrentTrack(QString)",methodArgCount+0,&methodArgTypes[0]);
        _methods[2] = qtro_method_index<ObjectType>(&ObjectType::pushPlayState, static_cast<void (QObject::*)(typename ObjectType::state)>(0),"pushPlayState(typename ObjectType::state)",methodArgCount+1,&methodArgTypes[1]);
        _modelCount = 1;
        _models[0] = object->tracks();
    }

    QString name() const override { return QStringLiteral("Media"); }
    QString typeName() const override { return QStringLiteral("Media"); }
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
        }
        return -1;
    }
    int propertyRawIndexFromSignal(int index) const override
    {
        switch (index) {
        case 0: return 1;
        case 1: return 2;
        }
        return -1;
    }
    const QByteArray signalSignature(int index) const override
    {
        switch (index) {
        case 0: return QByteArrayLiteral("currentTrackChanged()");
        case 1: return QByteArrayLiteral("playStateChanged()");
        }
        return QByteArrayLiteral("");
    }
    const QByteArray methodSignature(int index) const override
    {
        switch (index) {
        case 0: return QByteArrayLiteral("pushCurrentTrack(QString)");
        case 1: return QByteArrayLiteral("pushPlayState(state)");
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
    QByteArray objectSignature() const override { return QByteArray{"4cbd1640de43cf718d0df07aea019dd411a51863"}; }

    int _properties[3];
    int _signals[3];
    int _methods[3];
    int signalArgCount[2];
    const int* signalArgTypes[2];
    int methodArgCount[2];
    const int* methodArgTypes[2];
    int _modelCount;
    QAbstractItemModel *_models[1];
    void modelSetup(QRemoteObjectHostBase *node) const override
    {
        QVector<int> roles;
        int roleIndex;
        QHash<int, QByteArray> knownRoles;

        // Handle model #1 tracks
        roles.clear();
        knownRoles = _models[0]->roleNames();
        roleIndex = knownRoles.key("display", -1);
        if (roleIndex == -1)
            qWarning() << "Invalid role display for model tracks";
        else
            roles << roleIndex;
        node->enableRemoting(_models[0], "Media::tracks", roles, nullptr);
    }
};
QT_BEGIN_NAMESPACE
QT_END_NAMESPACE


#endif // REP_MODEL_MERGED_H
