#pragma once

#include <QtCore>
#include <QtTest>
#include <QtNetwork>
#include <QHostInfo>

#include <QtNetworkAuth/qoauth1.h>

#include <private/qoauth1_p.h>

Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)
Q_DECLARE_METATYPE(QAbstractOAuth::Error)

// TODO: Test PUT and DELETE operations.
// TODO: Write tests to test errors.
// TODO: Remove common event loop

typedef QSharedPointer<QNetworkReply> QNetworkReplyPtr;

class tst_OAuth1 : public QObject
{
    Q_OBJECT

    using StringPair = QPair<QString, QString>;

    QEventLoop *loop = nullptr;
    enum RunSimpleRequestReturn { Timeout = 0, Success, Failure };
    int returnCode;

    using QObject::connect;
    static bool connect(const QNetworkReplyPtr &ptr,
                        const char *signal,
                        const QObject *receiver,
                        const char *slot,
                        Qt::ConnectionType ct = Qt::AutoConnection)
    {
        return connect(ptr.data(), signal, receiver, slot, ct);
    }
    bool connect(const QNetworkReplyPtr &ptr,
                 const char *signal,
                 const char *slot,
                 Qt::ConnectionType ct = Qt::AutoConnection)
    {
        return connect(ptr.data(), signal, slot, ct);
    }

public:
    int waitForFinish(QNetworkReplyPtr &reply);
    void fillParameters(QVariantMap *parameters, const QUrlQuery &query);

    template<class Type>
    struct PropertyTester
    {
        typedef Type InnerType;
        typedef void(QOAuth1::*ConstSignalType)(const Type &);
        typedef void(QOAuth1::*SignalType)(Type);
        typedef QVector<std::function<void(Type *, QOAuth1 *object)>> SetterFunctions;

    private:
        // Each entry in setters should set its first parameter to an expected value
        // and act on its second, a QOAuth1 object, to trigger signal; this
        // function shall check that signal is passed the value the setter previously
        // told us to expect.
        template<class SignalType>
        static void runImpl(SignalType signal, const SetterFunctions &setters)
        {
            QOAuth1 obj;
            Type expectedValue;
            QSignalSpy spy(&obj, signal);
            connect(&obj, signal, [&](const Type &value) {
                QCOMPARE(expectedValue, value);
            });
            for (const auto &setter : setters) {
                const auto previous = expectedValue;
                setter(&expectedValue, &obj);
                QVERIFY(previous != expectedValue); // To check if the value was modified
            }
            QCOMPARE(spy.count(), setters.size()); // The signal should be emitted
        }

    public:

        static void run(ConstSignalType signal, const SetterFunctions &setters)
        {
            runImpl(signal, setters);
        }

        static void run(SignalType signal, const SetterFunctions &setters)
        {
            runImpl(signal, setters);
        }
    };

public Q_SLOTS:
    void finished();
    void gotError();

private Q_SLOTS:
    void clientIdentifierSignal();
    void clientSharedSecretSignal();
    void tokenSecretSignal();
    void temporaryCredentialsUrlSignal();
    void temporaryTokenCredentialsUrlSignal();
    void tokenCredentialsUrlSignal();
    void signatureMethodSignal();

    void getToken_data();
    void getToken();

    void grant_data();
    void grant();

    void authenticatedCalls_data();
    void authenticatedCalls();
};

