#include "tst_failinitdata.h"



void tst_FailInitData::initTestCase_data() const
{
    QVERIFY(false);
}

/*! \internal
  This function should never be run because initTestCase_data fails.
 */
void tst_FailInitData::initTestCase() const
{
    qDebug() << "This function is NOT supposed to be called.";
}

/*! \internal
  This function should never be run because initTestCase_data fails.
 */
void tst_FailInitData::aTestFunction() const
{
    qDebug() << "This function is NOT supposed to be called.";
}

QTEST_APPLESS_MAIN(tst_FailInitData)
