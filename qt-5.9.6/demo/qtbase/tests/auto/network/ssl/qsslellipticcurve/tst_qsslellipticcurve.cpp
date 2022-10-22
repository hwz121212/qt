#include "tst_qsslellipticcurve.h"



#ifndef QT_NO_SSL

void tst_QSslEllipticCurve::constExpr()
{
#ifdef Q_COMPILER_CONSTEXPR
    // check that default ctor and op ==/!= are constexpr:
    char array1[QSslEllipticCurve() == QSslEllipticCurve() ?  1 : -1];
    char array2[QSslEllipticCurve() != QSslEllipticCurve() ? -1 :  1];
    Q_UNUSED(array1);
    Q_UNUSED(array2);
#else
    QSKIP("This test requires C++11 generalized constant expression support enabled in the compiler.");
#endif
}

void tst_QSslEllipticCurve::construction()
{
    QSslEllipticCurve curve;
    QCOMPARE(curve.isValid(), false);
    QCOMPARE(curve.shortName(), QString());
    QCOMPARE(curve.longName(), QString());
    QCOMPARE(curve.isTlsNamedCurve(), false);
}

void tst_QSslEllipticCurve::fromShortName_data()
{
    QTest::addColumn<QString>("shortName");
    QTest::addColumn<QSslEllipticCurve>("curve");
    QTest::addColumn<bool>("valid");

    QTest::newRow("QString()") << QString() << QSslEllipticCurve() << false;
    QTest::newRow("\"\"") << QString("") << QSslEllipticCurve() << false;
    QTest::newRow("does-not-exist") << QStringLiteral("does-not-exist") << QSslEllipticCurve() << false;
    Q_FOREACH (QSslEllipticCurve ec, QSslConfiguration::supportedEllipticCurves()) {
        const QString sN = ec.shortName();
        QTest::newRow(qPrintable("supported EC \"" + sN + '"')) << sN << ec << true;
        // At least in the OpenSSL impl, the short name is case-sensitive. That feels odd.
        //const QString SN = sN.toUpper();
        //QTest::newRow(qPrintable("supported EC \"" + SN + '"')) << SN << ec << true;
        //const QString sn = sN.toLower();
        //QTest::newRow(qPrintable("supported EC \"" + sn + '"')) << sn << ec << true;
    }
}

void tst_QSslEllipticCurve::fromShortName()
{
    QFETCH(QString, shortName);
    QFETCH(QSslEllipticCurve, curve);
    QFETCH(bool, valid);

    const QSslEllipticCurve result = QSslEllipticCurve::fromShortName(shortName);
    QCOMPARE(result, curve);
    QCOMPARE(result.isValid(), valid);
    QCOMPARE(result.shortName(), curve.shortName());
    QCOMPARE(result.shortName(), valid ? shortName : QString());
}

void tst_QSslEllipticCurve::fromLongName_data()
{
    QTest::addColumn<QString>("longName");
    QTest::addColumn<QSslEllipticCurve>("curve");
    QTest::addColumn<bool>("valid");

    QTest::newRow("QString()") << QString() << QSslEllipticCurve() << false;
    QTest::newRow("\"\"") << QString("") << QSslEllipticCurve() << false;
    QTest::newRow("does-not-exist") << QStringLiteral("does-not-exist") << QSslEllipticCurve() << false;
    Q_FOREACH (QSslEllipticCurve ec, QSslConfiguration::supportedEllipticCurves()) {
        const QString lN = ec.longName();
        QTest::newRow(qPrintable("supported EC \"" + lN + '"')) << lN << ec << true;
    }
}

void tst_QSslEllipticCurve::fromLongName()
{
    QFETCH(QString, longName);
    QFETCH(QSslEllipticCurve, curve);
    QFETCH(bool, valid);

    const QSslEllipticCurve result = QSslEllipticCurve::fromLongName(longName);
    QCOMPARE(result, curve);
    QCOMPARE(result.isValid(), valid);
    QCOMPARE(result.longName(), curve.longName());
    QCOMPARE(result.longName(), valid ? longName : QString());
}

#endif // QT_NO_SSL

QTEST_MAIN(tst_QSslEllipticCurve)

