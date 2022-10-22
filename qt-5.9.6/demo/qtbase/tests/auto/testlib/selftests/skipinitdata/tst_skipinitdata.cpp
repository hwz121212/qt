#include "tst_skipinitdata.h"



void tst_SkipInitData::initTestCase_data() const
{
    QSKIP("Skip inside initTestCase_data. This should skip all tests in the class.");
}

void tst_SkipInitData::initTestCase() const
{
}

/*! \internal
  This function should never be run because initTestCase fails.
 */
void tst_SkipInitData::aTestFunction() const
{
    qDebug() << "ERROR: this function is NOT supposed to be run.";
}

QTEST_APPLESS_MAIN(tst_SkipInitData)
