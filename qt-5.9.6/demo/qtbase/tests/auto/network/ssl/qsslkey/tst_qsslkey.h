#pragma once


#include <QtTest/QtTest>
#include <qsslkey.h>
#include <qsslsocket.h>

#include <QtNetwork/qhostaddress.h>
#include <QtNetwork/qnetworkproxy.h>

#ifdef QT_BUILD_INTERNAL
    #ifndef QT_NO_SSL
        #include "private/qsslkey_p.h"
        #define TEST_CRYPTO
    #endif
    #ifndef QT_NO_OPENSSL
        #include "private/qsslsocket_openssl_symbols_p.h"
    #endif
#endif

class tst_QSslKey : public QObject
{
    Q_OBJECT

    struct KeyInfo {
        QFileInfo fileInfo;
        QSsl::KeyAlgorithm algorithm;
        QSsl::KeyType type;
        int length;
        QSsl::EncodingFormat format;
        KeyInfo(
            const QFileInfo &fileInfo, QSsl::KeyAlgorithm algorithm, QSsl::KeyType type,
            int length, QSsl::EncodingFormat format)
            : fileInfo(fileInfo), algorithm(algorithm), type(type), length(length)
            , format(format) {}
    };

    QList<KeyInfo> keyInfoList;

    void createPlainTestRows(bool filter = false, QSsl::EncodingFormat format = QSsl::EncodingFormat::Pem);

public slots:
    void initTestCase();

#ifndef QT_NO_SSL

private slots:
    void emptyConstructor();
    void constructor_data();
    void constructor();
#ifndef QT_NO_OPENSSL
    void constructorHandle_data();
    void constructorHandle();
#endif
    void copyAndAssign_data();
    void copyAndAssign();
    void equalsOperator();
    void length_data();
    void length();
    void toPemOrDer_data();
    void toPemOrDer();
    void toEncryptedPemOrDer_data();
    void toEncryptedPemOrDer();

    void passphraseChecks_data();
    void passphraseChecks();
    void noPassphraseChecks();
#ifdef TEST_CRYPTO
    void encrypt_data();
    void encrypt();
#endif

#endif
private:
    QString testDataDir;
};

