#include "tst_oauth1.h"


bool hostReachable(const QLatin1String &host)
{
    // check host exists
    QHostInfo hostInfo = QHostInfo::fromName(host);
    if (hostInfo.error() != QHostInfo::NoError)
        return false;

    // try to connect to host
    QTcpSocket socket;
    socket.connectToHost(host, 80);
    if (!socket.waitForConnected(1000))
        return false;

    return true;
}

int tst_OAuth1::waitForFinish(QNetworkReplyPtr &reply)
{
    int count = 0;

    connect(reply, SIGNAL(finished()), SLOT(finished()));
    connect(reply, SIGNAL(error(QNetworkReply::NetworkError)), SLOT(gotError()));
    returnCode = Success;
    loop = new QEventLoop;
    QSignalSpy spy(reply.data(), SIGNAL(downloadProgress(qint64,qint64)));
    while (!reply->isFinished()) {
        QTimer::singleShot(5000, loop, SLOT(quit()));
        if (loop->exec() == Timeout && count == spy.count() && !reply->isFinished()) {
            returnCode = Timeout;
            break;
        }
        count = spy.count();
    }
    delete loop;
    loop = nullptr;

    return returnCode;
}

void tst_OAuth1::fillParameters(QVariantMap *parameters, const QUrlQuery &query)
{
    const auto list = query.queryItems();
    for (auto it = list.begin(), end = list.end(); it != end; ++it)
        parameters->insert(it->first, it->second);
}

void tst_OAuth1::finished()
{
    if (loop)
        loop->exit(returnCode = Success);
}

void tst_OAuth1::gotError()
{
    if (loop)
        loop->exit(returnCode = Failure);
    disconnect(QObject::sender(), SIGNAL(finished()), this, 0);
}

void tst_OAuth1::clientIdentifierSignal()
{
    using PropertyTester = PropertyTester<QString>;
    PropertyTester::SetterFunctions setters {
        [](QString *expectedValue, QOAuth1 *object) {
            *expectedValue = "setClientIdentifier";
            object->setClientIdentifier(*expectedValue);
        },
        [](QString *expectedValue, QOAuth1 *object) {
            *expectedValue = "setClientCredentials";
            object->setClientCredentials(qMakePair(*expectedValue, QString()));
        }
    };
    PropertyTester::run(&QOAuth1::clientIdentifierChanged, setters);
}

void tst_OAuth1::clientSharedSecretSignal()
{
    using PropertyTester = PropertyTester<QString>;
    PropertyTester::SetterFunctions setters {
        [](QString *expectedValue, QOAuth1 *object) {
            *expectedValue = "setClientSharedSecret";
            object->setClientSharedSecret(*expectedValue);
        },
        [](QString *expectedValue, QOAuth1 *object) {
            *expectedValue = "setClientCredentials";
            object->setClientCredentials(qMakePair(QString(), *expectedValue));
        }
    };
    PropertyTester::run(&QOAuth1::clientSharedSecretChanged, setters);
}

void tst_OAuth1::tokenSecretSignal()
{
    using PropertyTester = PropertyTester<QString>;
    PropertyTester::SetterFunctions setters {
        [](QString *expectedValue, QOAuth1 *object) {
            *expectedValue = "setToken";
            object->setToken(*expectedValue);
        },
        [](QString *expectedValue, QOAuth1 *object) {
            *expectedValue = "setTokenCredentials";
            object->setTokenCredentials(qMakePair(*expectedValue, QString()));
        }
    };
    PropertyTester::run(&QOAuth1::tokenChanged, setters);
}

void tst_OAuth1::temporaryCredentialsUrlSignal()
{
    using PropertyTester = PropertyTester<QUrl>;
    PropertyTester::SetterFunctions setters {
        [](QUrl *expectedValue, QOAuth1 *object) {
            *expectedValue = QUrl("http://example.net/");
            object->setTemporaryCredentialsUrl(*expectedValue);
        }
    };
    PropertyTester::run(&QOAuth1::temporaryCredentialsUrlChanged, setters);
}

void tst_OAuth1::temporaryTokenCredentialsUrlSignal()
{
    using PropertyTester = PropertyTester<QUrl>;
    PropertyTester::SetterFunctions setters {
        [](QUrl *expectedValue, QOAuth1 *object) {
            *expectedValue = QUrl("http://example.net/");
            object->setTemporaryCredentialsUrl(*expectedValue);
        }
    };
    PropertyTester::run(&QOAuth1::temporaryCredentialsUrlChanged, setters);
}

void tst_OAuth1::tokenCredentialsUrlSignal()
{
    using PropertyTester = PropertyTester<QUrl>;
    PropertyTester::SetterFunctions setters {
        [](QUrl *expectedValue, QOAuth1 *object) {
            *expectedValue = QUrl("http://example.net/");
            object->setTokenCredentialsUrl(*expectedValue);
        }
    };
    PropertyTester::run(&QOAuth1::tokenCredentialsUrlChanged, setters);
}

void tst_OAuth1::signatureMethodSignal()
{
    using PropertyTester = PropertyTester<QOAuth1::SignatureMethod>;
    PropertyTester::SetterFunctions setters {
        [](PropertyTester::InnerType *expectedValue, QOAuth1 *object) {
            QVERIFY(object->signatureMethod() != QOAuth1::SignatureMethod::PlainText);
            *expectedValue = QOAuth1::SignatureMethod::PlainText;
            object->setSignatureMethod(*expectedValue);
        }
    };
    PropertyTester::run(&QOAuth1::signatureMethodChanged, setters);
}

void tst_OAuth1::getToken_data()
{
    QTest::addColumn<StringPair>("clientCredentials");
    QTest::addColumn<StringPair>("token");
    QTest::addColumn<StringPair>("expectedToken");
    QTest::addColumn<QUrl>("url");
    QTest::addColumn<QNetworkAccessManager::Operation>("requestType");

    // term.ie

    const StringPair emptyCredentials;
    if (hostReachable(QLatin1String("term.ie"))) {
        QTest::newRow("term.ie_request_get") << qMakePair(QStringLiteral("key"),
                                                        QStringLiteral("secret"))
                                            << emptyCredentials
                                            << qMakePair(QStringLiteral("requestkey"),
                                                        QStringLiteral("requestsecret"))
                                            << QUrl("http://term.ie/oauth/example/request_token.php")
                                            << QNetworkAccessManager::GetOperation;

        QTest::newRow("term.ie_request_post") << qMakePair(QStringLiteral("key"),
                                                        QStringLiteral("secret"))
                                            << emptyCredentials
                                            << qMakePair(QStringLiteral("requestkey"),
                                                        QStringLiteral("requestsecret"))
                                            << QUrl("http://term.ie/oauth/example/request_token.php")
                                            << QNetworkAccessManager::PostOperation;

        QTest::newRow("term.ie_access_get") << qMakePair(QStringLiteral("key"),
                                                        QStringLiteral("secret"))
                                            << qMakePair(QStringLiteral("requestkey"),
                                                        QStringLiteral("requestsecret"))
                                            << qMakePair(QStringLiteral("accesskey"),
                                                        QStringLiteral("accesssecret"))
                                            << QUrl("http://term.ie/oauth/example/access_token.php")
                                            << QNetworkAccessManager::GetOperation;

        QTest::newRow("term.ie_access_post") << qMakePair(QStringLiteral("key"),
                                                        QStringLiteral("secret"))
                                            << qMakePair(QStringLiteral("requestkey"),
                                                        QStringLiteral("requestsecret"))
                                            << qMakePair(QStringLiteral("accesskey"),
                                                        QStringLiteral("accesssecret"))
                                            << QUrl("http://term.ie/oauth/example/access_token.php")
                                            << QNetworkAccessManager::PostOperation;
    }
    // oauthbin.com
    if (hostReachable(QLatin1String("oauthbin.com"))) {
        QTest::newRow("oauthbin.com_request_get") << qMakePair(QStringLiteral("key"),
                                                            QStringLiteral("secret"))
                                                << emptyCredentials
                                                << qMakePair(QStringLiteral("requestkey"),
                                                            QStringLiteral("requestsecret"))
                                                << QUrl("http://oauthbin.com/v1/request-token")
                                                << QNetworkAccessManager::GetOperation;

        QTest::newRow("oauthbin.com_request_post") << qMakePair(QStringLiteral("key"),
                                                                QStringLiteral("secret"))
                                                << emptyCredentials
                                                << qMakePair(QStringLiteral("requestkey"),
                                                                QStringLiteral("requestsecret"))
                                                << QUrl("http://oauthbin.com/v1/request-token")
                                                << QNetworkAccessManager::PostOperation;

        QTest::newRow("oauthbin.com_access_get") << qMakePair(QStringLiteral("key"),
                                                            QStringLiteral("secret"))
                                                << qMakePair(QStringLiteral("requestkey"),
                                                            QStringLiteral("requestsecret"))
                                                << qMakePair(QStringLiteral("accesskey"),
                                                            QStringLiteral("accesssecret"))
                                                << QUrl("http://oauthbin.com/v1/access-token")
                                                << QNetworkAccessManager::GetOperation;

        QTest::newRow("oauthbin.com_access_post") << qMakePair(QStringLiteral("key"),
                                                            QStringLiteral("secret"))
                                                << qMakePair(QStringLiteral("requestkey"),
                                                            QStringLiteral("requestsecret"))
                                                << qMakePair(QStringLiteral("accesskey"),
                                                            QStringLiteral("accesssecret"))
                                                << QUrl("http://oauthbin.com/v1/access-token")
                                                << QNetworkAccessManager::PostOperation;
    }
}

void tst_OAuth1::getToken()
{
    QFETCH(StringPair, clientCredentials);
    QFETCH(StringPair, token);
    QFETCH(StringPair, expectedToken);
    QFETCH(QUrl, url);
    QFETCH(QNetworkAccessManager::Operation, requestType);

    StringPair tokenReceived;
    QNetworkAccessManager networkAccessManager;
    QNetworkReplyPtr reply;

    struct OAuth1 : QOAuth1
    {
        OAuth1(QNetworkAccessManager *manager) : QOAuth1(manager) {}
        using QOAuth1::requestTokenCredentials;
    } o1(&networkAccessManager);

    o1.setClientCredentials(clientCredentials.first, clientCredentials.second);
    o1.setTokenCredentials(token);
    o1.setTemporaryCredentialsUrl(url);
    QVariantMap parameters {{ "c2&a3", "c2=a3" }};
    reply.reset(o1.requestTokenCredentials(requestType, url, token, parameters));
    QVERIFY(!reply.isNull());
    connect(&o1, &QOAuth1::tokenChanged, [&tokenReceived](const QString &token){
        tokenReceived.first = token;
    });
    connect(&o1, &QOAuth1::tokenSecretChanged, [&tokenReceived](const QString &tokenSecret) {
        tokenReceived.second = tokenSecret;
    });
    QVERIFY(waitForFinish(reply) == Success);
    QVERIFY(!tokenReceived.first.isEmpty() && !tokenReceived.second.isEmpty());
}

void tst_OAuth1::grant_data()
{
    QTest::addColumn<QString>("consumerKey");
    QTest::addColumn<QString>("consumerSecret");
    QTest::addColumn<QString>("requestToken");
    QTest::addColumn<QString>("requestTokenSecret");
    QTest::addColumn<QString>("accessToken");
    QTest::addColumn<QString>("accessTokenSecret");
    QTest::addColumn<QUrl>("requestTokenUrl");
    QTest::addColumn<QUrl>("accessTokenUrl");
    QTest::addColumn<QUrl>("authenticatedCallUrl");
    QTest::addColumn<QNetworkAccessManager::Operation>("requestType");

    if (hostReachable(QLatin1String("term.ie"))) {
        QTest::newRow("term.ie_get") << "key"
                                    << "secret"
                                    << "requestkey"
                                    << "requestsecret"
                                    << "accesskey"
                                    << "accesssecret"
                                    << QUrl("http://term.ie/oauth/example/request_token.php")
                                    << QUrl("http://term.ie/oauth/example/access_token.php")
                                    << QUrl("http://term.ie/oauth/example/echo_api.php")
                                    << QNetworkAccessManager::GetOperation;
        QTest::newRow("term.ie_post") << "key"
                                    << "secret"
                                    << "requestkey"
                                    << "requestsecret"
                                    << "accesskey"
                                    << "accesssecret"
                                    << QUrl("http://term.ie/oauth/example/request_token.php")
                                    << QUrl("http://term.ie/oauth/example/access_token.php")
                                    << QUrl("http://term.ie/oauth/example/echo_api.php")
                                    << QNetworkAccessManager::PostOperation;
    }
    if (hostReachable(QLatin1String("oauthbin.com"))) {
        QTest::newRow("oauthbin.com_get") << "key"
                                        << "secret"
                                        << "requestkey"
                                        << "requestsecret"
                                        << "accesskey"
                                        << "accesssecret"
                                        << QUrl("http://oauthbin.com/v1/request-token")
                                        << QUrl("http://oauthbin.com/v1/access-token")
                                        << QUrl("http://oauthbin.com/v1/echo")
                                        << QNetworkAccessManager::GetOperation;
        QTest::newRow("oauthbin.com_post") << "key"
                                        << "secret"
                                        << "requestkey"
                                        << "requestsecret"
                                        << "accesskey"
                                        << "accesssecret"
                                        << QUrl("http://oauthbin.com/v1/request-token")
                                        << QUrl("http://oauthbin.com/v1/access-token")
                                        << QUrl("http://oauthbin.com/v1/echo")
                                        << QNetworkAccessManager::PostOperation;
    }
}

void tst_OAuth1::grant()
{
    QFETCH(QString, consumerKey);
    QFETCH(QString, consumerSecret);
    QFETCH(QString, requestToken);
    QFETCH(QString, requestTokenSecret);
    QFETCH(QString, accessToken);
    QFETCH(QString, accessTokenSecret);
    QFETCH(QUrl, requestTokenUrl);
    QFETCH(QUrl, accessTokenUrl);

    bool tokenReceived = false;
    QNetworkAccessManager networkAccessManager;

    QOAuth1 o1(&networkAccessManager);

    {
        QSignalSpy clientIdentifierSpy(&o1, &QOAuth1::clientIdentifierChanged);
        QSignalSpy clientSharedSecretSpy(&o1, &QOAuth1::clientSharedSecretChanged);
        o1.setClientCredentials(consumerKey, consumerSecret);
        QCOMPARE(clientIdentifierSpy.count(), 1);
        QCOMPARE(clientSharedSecretSpy.count(), 1);
    }
    {
        QSignalSpy spy(&o1, &QOAuth1::temporaryCredentialsUrlChanged);
        o1.setTemporaryCredentialsUrl(requestTokenUrl);
        QCOMPARE(spy.count(), 1);
    }
    {
        QSignalSpy spy(&o1, &QOAuth1::tokenCredentialsUrlChanged);
        o1.setTokenCredentialsUrl(accessTokenUrl);
        QCOMPARE(spy.count(), 1);
    }
    connect(&o1, &QAbstractOAuth::statusChanged, [&](QAbstractOAuth::Status status) {
        if (status == QAbstractOAuth::Status::TemporaryCredentialsReceived) {
            if (!requestToken.isEmpty())
                QCOMPARE(requestToken, o1.tokenCredentials().first);
            if (!requestTokenSecret.isEmpty())
                QCOMPARE(requestTokenSecret, o1.tokenCredentials().second);
            tokenReceived = true;
        } else if (status == QAbstractOAuth::Status::Granted) {
            if (!accessToken.isEmpty())
                QCOMPARE(accessToken, o1.tokenCredentials().first);
            if (!accessTokenSecret.isEmpty())
                QCOMPARE(accessTokenSecret, o1.tokenCredentials().second);
            tokenReceived = true;
        }
    });

    QEventLoop eventLoop;

    QSignalSpy grantSignalSpy(&o1, &QOAuth1::granted);
    QTimer::singleShot(10000, &eventLoop, &QEventLoop::quit);
    connect(&o1, &QOAuth1::granted, &eventLoop, &QEventLoop::quit);
    o1.grant();
    eventLoop.exec();
    QVERIFY(tokenReceived);
    QCOMPARE(grantSignalSpy.count(), 1);
    QCOMPARE(o1.status(), QAbstractOAuth::Status::Granted);
}

void tst_OAuth1::authenticatedCalls_data()
{
    QTest::addColumn<QString>("consumerKey");
    QTest::addColumn<QString>("consumerSecret");
    QTest::addColumn<QString>("accessKey");
    QTest::addColumn<QString>("accessKeySecret");
    QTest::addColumn<QUrl>("url");
    QTest::addColumn<QVariantMap>("parameters");
    QTest::addColumn<QNetworkAccessManager::Operation>("operation");

    const QVariantMap parameters { { QStringLiteral("first"), QStringLiteral("first") },
                                   { QStringLiteral("second"), QStringLiteral("second") },
                                   { QStringLiteral("third"), QStringLiteral("third") },
                                   { QStringLiteral("c2&a3"), QStringLiteral("2=%$&@q") }
                                 };

    if (hostReachable(QLatin1String("term.ie"))) {
        QTest::newRow("term.ie_get") << "key"
                                    << "secret"
                                    << "accesskey"
                                    << "accesssecret"
                                    << QUrl("http://term.ie/oauth/example/echo_api.php")
                                    << parameters
                                    << QNetworkAccessManager::GetOperation;
        QTest::newRow("term.ie_post") << "key"
                                    << "secret"
                                    << "accesskey"
                                    << "accesssecret"
                                    << QUrl("http://term.ie/oauth/example/echo_api.php")
                                    << parameters
                                    << QNetworkAccessManager::PostOperation;
        QTest::newRow("term.ie_percent_encoded_query")
            << "key"
            << "secret"
            << "accesskey"
            << "accesssecret"
            << QUrl("http://term.ie/oauth/example/echo_api.php?key=%40value+1%2B2=3")
            << parameters
            << QNetworkAccessManager::GetOperation;
    }
    if (hostReachable(QLatin1String("oauthbin.com"))) {
        QTest::newRow("oauthbin.com_get") << "key"
                                        << "secret"
                                        << "accesskey"
                                        << "accesssecret"
                                        << QUrl("http://oauthbin.com/v1/echo")
                                        << parameters
                                        << QNetworkAccessManager::GetOperation;
        QTest::newRow("oauthbin.com_post") << "key"
                                        << "secret"
                                        << "accesskey"
                                        << "accesssecret"
                                        << QUrl("http://oauthbin.com/v1/echo")
                                        << parameters
                                        << QNetworkAccessManager::PostOperation;
        QTest::newRow("oauthbin.com_percent_encoded_query")
            << "key"
            << "secret"
            << "accesskey"
            << "accesssecret"
            << QUrl("http://oauthbin.com/v1/echo?key=%40value+1%2B2=3")
            << parameters
            << QNetworkAccessManager::GetOperation;
    }
}

void tst_OAuth1::authenticatedCalls()
{
    QFETCH(QString, consumerKey);
    QFETCH(QString, consumerSecret);
    QFETCH(QString, accessKey);
    QFETCH(QString, accessKeySecret);
    QFETCH(QUrl, url);
    QFETCH(QVariantMap, parameters);
    QFETCH(QNetworkAccessManager::Operation, operation);

    QNetworkAccessManager networkAccessManager;
    QNetworkReplyPtr reply;
    QString receivedData;
    QString parametersString;
    {
        if (url.hasQuery()) {
            parametersString = url.query(QUrl::FullyDecoded);
            if (!parameters.empty())
                parametersString.append(QLatin1Char('&'));
        }
        bool first = true;
        for (auto it = parameters.begin(), end = parameters.end(); it != end; ++it) {
            if (first)
                first = false;
            else
                parametersString += QLatin1Char('&');
            parametersString += it.key() + QLatin1Char('=') + it.value().toString();
        }
    }

    QOAuth1 o1(&networkAccessManager);
    o1.setClientCredentials(consumerKey, consumerSecret);
    o1.setTokenCredentials(accessKey, accessKeySecret);
    if (operation == QNetworkAccessManager::GetOperation)
        reply.reset(o1.get(url, parameters));
    else if (operation == QNetworkAccessManager::PostOperation)
        reply.reset(o1.post(url, parameters));
    QVERIFY(!reply.isNull());
    QVERIFY(!reply->isFinished());

    connect(&networkAccessManager, &QNetworkAccessManager::finished,
            [&](QNetworkReply *reply) {
        QByteArray data = reply->readAll();
        QUrlQuery query(QString::fromUtf8(data));
        receivedData = query.toString(QUrl::FullyDecoded);
    });
    QVERIFY(waitForFinish(reply) == Success);
    QCOMPARE(receivedData, parametersString);
    reply.clear();
}

QTEST_MAIN(tst_OAuth1)

