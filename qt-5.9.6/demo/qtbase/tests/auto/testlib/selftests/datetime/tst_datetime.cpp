#include "tst_datetime.h"



void tst_DateTime::dateTime() const
{
    const QDateTime utc(QDate(2000, 5, 3), QTime(4, 3, 4), Qt::UTC);
    const QDateTime local(QDate(2000, 5, 3), QTime(4, 3, 4), Qt::OffsetFromUTC, 120 /* 2 minutes */);

    QCOMPARE(local, utc);
}

void tst_DateTime::qurl() const
{
    QFETCH(QUrl, operandA);
    QFETCH(QUrl, operandB);

    QCOMPARE(operandA, operandB);
}

void tst_DateTime::qurl_data() const
{
    QTest::addColumn<QUrl>("operandA");
    QTest::addColumn<QUrl>("operandB");

    QTest::newRow("empty urls") << QUrl() << QUrl();
    QTest::newRow("empty rhs") << QUrl(QLatin1String("http://example.com")) << QUrl();
    QTest::newRow("empty lhs") << QUrl() << QUrl(QLatin1String("http://example.com"));
    QTest::newRow("same urls") << QUrl(QLatin1String("http://example.com")) << QUrl(QLatin1String("http://example.com"));
}

QTEST_MAIN(tst_DateTime)
