#include "tst_printdatatagswithglobaltags.h"





void tst_PrintDataTagsWithGlobalTags::initTestCase_data() const
{
    QTest::addColumn<int>("f");
    QTest::addColumn<int>("g");

    QTest::newRow("global data tag 1 ") << 1 << 2;
    QTest::newRow("global data tag 2") << 1 << 2;
}

void tst_PrintDataTagsWithGlobalTags::initTestCase() const
{
}

void tst_PrintDataTagsWithGlobalTags::a_data() const
{
    QTest::addColumn<int>("x");
    QTest::addColumn<int>("y");

    QTest::newRow("data tag a1 ") << 1 << 2;
    QTest::newRow("data tag a2") << 1 << 2;
}

void tst_PrintDataTagsWithGlobalTags::a() const
{
}

void tst_PrintDataTagsWithGlobalTags::b() const
{
}

void tst_PrintDataTagsWithGlobalTags::c_data() const
{
    QTest::addColumn<int>("x");

    QTest::newRow("data tag c1") << 1;
    QTest::newRow("data tag c2") << 1;
    QTest::newRow("data tag c3") << 1;
}

void tst_PrintDataTagsWithGlobalTags::c() const
{
}

QTEST_MAIN(tst_PrintDataTagsWithGlobalTags)

