#include "tst_printdatatags.h"




void tst_PrintDataTags::a_data() const
{
    QTest::addColumn<int>("x");
    QTest::addColumn<int>("y");

    QTest::newRow("data tag a1 ") << 1 << 2;
    QTest::newRow("data tag a2") << 1 << 2;
}

void tst_PrintDataTags::a() const
{
}

void tst_PrintDataTags::b() const
{
}

void tst_PrintDataTags::c_data() const
{
    QTest::addColumn<int>("x");

    QTest::newRow("data tag c1") << 1;
    QTest::newRow("data tag c2") << 1;
    QTest::newRow("data tag c3") << 1;
}

void tst_PrintDataTags::c() const
{
}

QTEST_MAIN(tst_PrintDataTags)
