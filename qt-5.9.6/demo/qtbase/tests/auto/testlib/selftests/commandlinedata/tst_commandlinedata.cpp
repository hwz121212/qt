#include "tst_commandlinedata.h"



void tst_DataTable::fiveTablePasses() const
{
    QFETCH(bool, test);

    QVERIFY(test);
}

void tst_DataTable::fiveTablePasses_data() const
{
    QTest::addColumn<bool>("test");

    QTest::newRow("fiveTablePasses_data1") << true;
    QTest::newRow("fiveTablePasses_data2") << true;
    QTest::newRow("fiveTablePasses_data3") << true;
    QTest::newRow("fiveTablePasses_data4") << true;
    QTest::newRow("fiveTablePasses_data5") << true;
}

QTEST_MAIN(tst_DataTable)

