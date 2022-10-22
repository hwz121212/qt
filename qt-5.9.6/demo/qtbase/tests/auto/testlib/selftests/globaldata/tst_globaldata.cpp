#include "tst_globaldata.h"



void tst_globaldata::initTestCase()
{
    qDebug() << "initTestCase"
             << (QTest::currentTestFunction() ? QTest::currentTestFunction() : "(null)")
             << (QTest::currentDataTag() ? QTest::currentDataTag() : "(null)");
}

void tst_globaldata::initTestCase_data()
{
    QTest::addColumn<bool>("booli");
    QTest::newRow("1") << false;
    QTest::newRow("2") << true;
}

void tst_globaldata::cleanupTestCase()
{
    qDebug() << "cleanupTestCase"
             << (QTest::currentTestFunction() ? QTest::currentTestFunction() : "(null)")
             << (QTest::currentDataTag() ? QTest::currentDataTag() : "(null)");
}

void tst_globaldata::init()
{
    qDebug() << "init"
             << (QTest::currentTestFunction() ? QTest::currentTestFunction() : "(null)")
             << (QTest::currentDataTag() ? QTest::currentDataTag() : "(null)");
}

void tst_globaldata::cleanup()
{
    qDebug() << "cleanup"
             << (QTest::currentTestFunction() ? QTest::currentTestFunction() : "(null)")
             << (QTest::currentDataTag() ? QTest::currentDataTag() : "(null)");
}

void tst_globaldata::testGlobal_data()
{
    QTest::addColumn<bool>("booll");
    QTest::newRow("local 1") << false;
    QTest::newRow("local 2") << true;
}

void tst_globaldata::testGlobal()
{
    QFETCH_GLOBAL(bool, booli);
    qDebug() << "global:" << booli;
    QFETCH(bool, booll);
    qDebug() << "local:" << booll;
}

void tst_globaldata::skip_data()
{
    QTest::addColumn<bool>("booll");
    QTest::newRow("local 1") << false;
    QTest::newRow("local 2") << true;

    QSKIP("skipping");
}

void tst_globaldata::skip()
{
    qDebug() << "this line should never be reached";
}

void tst_globaldata::skipSingle()
{
    QFETCH_GLOBAL(bool, booli);
    QFETCH(bool, booll);

    if (booli && !booll)
        QSKIP("skipping");
    qDebug() << "global:" << booli << "local:" << booll;
}

void tst_globaldata::skipLocal()
{
    QSKIP("skipping");
}

QTEST_MAIN(tst_globaldata)
