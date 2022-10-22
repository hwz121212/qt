#include "tst_skipcleanup.h"


void tst_SkipCleanup::aTestFunction() const
{
    QVERIFY(true);
}

void tst_SkipCleanup::cleanupTestCase() const
{
    QSKIP("Skip inside cleanupTestCase.");
}

QTEST_APPLESS_MAIN(tst_SkipCleanup)
