#include "tst_skipinit.h"



void tst_SkipInit::initTestCase() const
{
    QSKIP("Skip inside initTestCase. This should skip all tests in the class.");
}

/*! \internal
  This function should never be run because initTestCase fails.
 */
void tst_SkipInit::aTestFunction() const
{
    qDebug() << "ERROR: This function is NOT supposed to be run.";
}

QTEST_APPLESS_MAIN(tst_SkipInit)
