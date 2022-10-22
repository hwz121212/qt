#include "tst_singleskip.h"


void tst_SingleSkip::myTest() const
{
    QSKIP("skipping test");
}

QTEST_MAIN(tst_SingleSkip)

