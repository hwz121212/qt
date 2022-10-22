#pragma once


#include <QtTest/QtTest>
#include <qsslcertificate.h>
#include <qsslkey.h>
#include <qsslsocket.h>
#include <qsslcertificateextension.h>

class tst_QSslCertificate : public QObject
{
    Q_OBJECT

    struct CertInfo {
        QFileInfo fileInfo;
        QFileInfo fileInfo_digest_md5;
        QFileInfo fileInfo_digest_sha1;
        QSsl::EncodingFormat format;
        CertInfo(const QFileInfo &fileInfo, QSsl::EncodingFormat format)
            : fileInfo(fileInfo), format(format) {}
    };

    QList<CertInfo> certInfoList;
    QMap<QString, QString> subjAltNameMap;
    QMap<QString, QString> pubkeyMap;
    QMap<QString, QString> md5Map;
    QMap<QString, QString> sha1Map;

    void createTestRows();
#ifndef QT_NO_SSL
    void compareCertificates(const QSslCertificate & cert1, const QSslCertificate & cert2);
#endif

    QString oldCurrentDir;

public slots:
    void initTestCase();
    void cleanupTestCase();

#ifndef QT_NO_SSL
private slots:
    void hash();
    void emptyConstructor();
    void constructor_data();
    void constructor();
    void constructor_device();
    void constructingGarbage();
    void copyAndAssign_data();
    void copyAndAssign();
    void digest_data();
    void digest();
    void subjectAlternativeNames_data();
    void utf8SubjectNames();
    void subjectAlternativeNames();
    void publicKey_data();
    void publicKey();
    void toPemOrDer_data();
    void toPemOrDer();
    void fromDevice();
    void fromPath_data();
    void fromPath();
    void certInfo();
    void certInfoQByteArray();
    void task256066toPem();
    void nulInCN();
    void nulInSan();
    void largeSerialNumber();
    void largeExpirationDate();
    void blacklistedCertificates();
    void selfsignedCertificates();
    void toText();
    void multipleCommonNames();
    void subjectAndIssuerAttributes();
    void verify();
    void extensions();
    void extensionsCritical();
    void threadSafeConstMethods();
    void version_data();
    void version();
    void pkcs12();

    // helper for verbose test failure messages
    QString toString(const QList<QSslError>&);

// ### add tests for certificate bundles (multiple certificates concatenated into a single
//     structure); both PEM and DER formatted
#endif
private:
    QString testDataDir;
};

