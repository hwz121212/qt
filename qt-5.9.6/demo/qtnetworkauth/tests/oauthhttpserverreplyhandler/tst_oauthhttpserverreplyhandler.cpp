#include "tst_oauthhttpserverreplyhandler.h"


void tst_QOAuthHttpServerReplyHandler::callback()
{
    int count = 0;
    QOAuthHttpServerReplyHandler replyHandler;
    QUrlQuery query("callback=test");
    QVERIFY(replyHandler.isListening());
    QUrl callback(replyHandler.callback());
    QVERIFY(!callback.isEmpty());
    callback.setQuery(query);
    QEventLoop eventLoop;
    connect(&replyHandler, &QOAuthHttpServerReplyHandler::callbackReceived, [&](
            const QVariantMap &parameters) {
        for (auto item : query.queryItems()) {
            QVERIFY(parameters.contains(item.first));
            QCOMPARE(parameters[item.first].toString(), item.second);
        }
        count = parameters.count();
        eventLoop.quit();
    });

    QNetworkAccessManager networkAccessManager;
    QNetworkRequest request;
    request.setUrl(callback);
    QNetworkReplyPtr reply;
    reply.reset(networkAccessManager.get(request));
    eventLoop.exec();
    QCOMPARE(count, query.queryItems().count());
}

QTEST_MAIN(tst_QOAuthHttpServerReplyHandler)

