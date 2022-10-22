#include "tst_failcleanup.h"



void tst_FailCleanup::aTestFunction() const
{
    QVERIFY(true);
}

void tst_FailCleanup::cleanupTestCase() const
{
    QVERIFY2(false, "Fail inside cleanupTestCase");
}

QTEST_APPLESS_MAIN(tst_FailCleanup)
