#include "tst_qtconcurrentmedian.h"
#include <qtconcurrentmedian.h>

#include <QtTest/QtTest>


void tst_QtConcurrentMedian::median_data()
{
    QTest::addColumn<QList<int> >("values");
    QTest::addColumn<int>("expectedMedian");

    QTest::newRow("size=1")
        << (QList<int>() << 1)
        << 1;

    QTest::newRow("size=2")
        << (QList<int>() << 3 << 2)
        << 3;

    QTest::newRow("size=3")
        << (QList<int>() << 3 << 1 << 2)
        << 2;

    QTest::newRow("gcc bug 58800 (nth_element)")
        << (QList<int>() << 207089 << 202585 << 180067 << 157549 << 211592 << 216096 << 207089)
        << 207089;
}

void tst_QtConcurrentMedian::median()
{
    QFETCH(QList<int> , values);
    QFETCH(int, expectedMedian);

    QtConcurrent::Median<int> m(values.size());
    foreach (int value, values)
        m.addValue(value);
    QCOMPARE(m.median(), expectedMedian);
}

QTEST_MAIN(tst_QtConcurrentMedian)
//#include "tst_qtconcurrentmedian.moc"
