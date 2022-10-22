#include "tst_skip.h"




void tst_Skip::test_data()
{
    QTest::addColumn<bool>("booll");
    QTest::newRow("local 1") << false;
    QTest::newRow("local 2") << true;

    QSKIP("skipping all");
}

void tst_Skip::test()
{
    qDebug("this line should never be reached, since we skip in the _data function");
}

void tst_Skip::emptytest_data()
{
    QSKIP("skipping all");
}

void tst_Skip::emptytest()
{
    qDebug("this line should never be reached, since we skip in the _data function");
}

void tst_Skip::singleSkip_data()
{
    QTest::addColumn<bool>("booll");
    QTest::newRow("local 1") << false;
    QTest::newRow("local 2") << true;
}

void tst_Skip::singleSkip()
{
    QFETCH(bool, booll);
    if (!booll)
        QSKIP("skipping one");
    qDebug("this line should only be reached once (%s)", booll ? "true" : "false");
}

QTEST_MAIN(tst_Skip)
