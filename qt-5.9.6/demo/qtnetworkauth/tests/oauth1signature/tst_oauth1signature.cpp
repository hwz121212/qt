#include "tst_oauth1signature.h"


QOAuth1Signature tst_OAuth1Signature::createTwitterSignature()
{
    // Example from https://dev.twitter.com/oauth/overview/creating-signatures

    const QUrl url("https://api.twitter.com/1/statuses/update.json?include_entities=true");
    QOAuth1Signature signature(url,
                               QStringLiteral("kAcSOqF21Fu85e7zjz7ZN2U4ZRhfV3WpwPAoE3Z7kBw"),
                               QStringLiteral("LswwdoUaIvS8ltyTt5jkRh4J50vUPVVHtR2YPi5kE"),
                               QOAuth1Signature::HttpRequestMethod::Post);
    const QString body = QUrl::fromPercentEncoding("status=Hello%20Ladies%20%2b%20Gentlemen%2c%20a"
                                                   "%20signed%20OAuth%20request%21");

    signature.insert(QStringLiteral("oauth_consumer_key"),
                     QStringLiteral("xvz1evFS4wEEPTGEFPHBog"));
    signature.insert(QStringLiteral("oauth_nonce"),
                     QStringLiteral("kYjzVBB8Y0ZFabxSWbWovY3uYSQ2pTgmZeNu2VS4cg"));
    signature.insert(QStringLiteral("oauth_signature_method"),
                     QStringLiteral("HMAC-SHA1"));
    signature.insert(QStringLiteral("oauth_timestamp"), QStringLiteral("1318622958"));
    signature.insert(QStringLiteral("oauth_token"),
                     QStringLiteral("370773112-GmHxMAgYyLbNEtIKZeRNFsMKPR9EyMZeS9weJAEb"));
    signature.insert(QStringLiteral("oauth_version"), QStringLiteral("1.0"));
    signature.addRequestBody(QUrlQuery(body));
    return signature;
}

void tst_OAuth1Signature::signature()
{
    const QOAuth1Signature signature = createTwitterSignature();
    QByteArray signatureData = signature.hmacSha1();
    QCOMPARE(signatureData.toBase64(), QByteArray("tnnArxj06cWHq44gCs1OSKk/jLY="));
}

void tst_OAuth1Signature::copyAndModify()
{
    const QOAuth1Signature signature = createTwitterSignature();
    QOAuth1Signature copy = signature;
    QCOMPARE(signature.hmacSha1(), copy.hmacSha1());
    copy.insert(QStringLiteral("signature"), QStringLiteral("modified"));
    QVERIFY(signature.hmacSha1() != copy.hmacSha1());
}

QTEST_MAIN(tst_OAuth1Signature)

