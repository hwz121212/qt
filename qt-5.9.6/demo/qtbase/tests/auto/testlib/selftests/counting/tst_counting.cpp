#include "tst_counting.h"




Q_DECLARE_METATYPE(TestResult);

void tst_Counting::helper()
{
    QFETCH(TestResult, result);

    switch (result) {
        case Pass:
            QVERIFY(true);
            QCOMPARE(2 + 1, 3);
            break;
        case Fail:
            QVERIFY(false);
            break;
        case Skip:
            QSKIP("Skipping");
            break;
    }
}

void tst_Counting::testPassPass_data()
{
    QTest::addColumn<TestResult>("result");
    QTest::newRow("row 1") << Pass;
    QTest::newRow("row 2") << Pass;
}

void tst_Counting::testPassPass()
{
    helper();
}

void tst_Counting::testPassSkip_data()
{
    QTest::addColumn<TestResult>("result");
    QTest::newRow("row 1") << Pass;
    QTest::newRow("row 2") << Skip;
}

void tst_Counting::testPassSkip()
{
    helper();
}

void tst_Counting::testPassFail_data()
{
    QTest::addColumn<TestResult>("result");
    QTest::newRow("row 1") << Pass;
    QTest::newRow("row 2") << Fail;
}

void tst_Counting::testPassFail()
{
    helper();
}

void tst_Counting::testSkipPass_data()
{
    QTest::addColumn<TestResult>("result");
    QTest::newRow("row 1") << Skip;
    QTest::newRow("row 2") << Pass;
}

void tst_Counting::testSkipPass()
{
    helper();
}

void tst_Counting::testSkipSkip_data()
{
    QTest::addColumn<TestResult>("result");
    QTest::newRow("row 1") << Skip;
    QTest::newRow("row 2") << Skip;
}

void tst_Counting::testSkipSkip()
{
    helper();
}

void tst_Counting::testSkipFail_data()
{
    QTest::addColumn<TestResult>("result");
    QTest::newRow("row 1") << Skip;
    QTest::newRow("row 2") << Fail;
}

void tst_Counting::testSkipFail()
{
    helper();
}

void tst_Counting::testFailPass_data()
{
    QTest::addColumn<TestResult>("result");
    QTest::newRow("row 1") << Fail;
    QTest::newRow("row 2") << Pass;
}

void tst_Counting::testFailPass()
{
    helper();
}

void tst_Counting::testFailSkip_data()
{
    QTest::addColumn<TestResult>("result");
    QTest::newRow("row 1") << Fail;
    QTest::newRow("row 2") << Skip;
}

void tst_Counting::testFailSkip()
{
    helper();
}

void tst_Counting::testFailFail_data()
{
    QTest::addColumn<TestResult>("result");
    QTest::newRow("row 1") << Fail;
    QTest::newRow("row 2") << Fail;
}

void tst_Counting::testFailFail()
{
    helper();
}

void tst_Counting::init()
{
    if (strcmp(QTest::currentTestFunction(), "testFailInInit") == 0 && strcmp(QTest::currentDataTag(), "fail") == 0)
        QFAIL("Fail in init()");
    else if (strcmp(QTest::currentTestFunction(), "testSkipInInit") == 0 && strcmp(QTest::currentDataTag(), "skip") == 0)
        QSKIP("Skip in init()");
}

void tst_Counting::cleanup()
{
    if (strcmp(QTest::currentTestFunction(), "testFailInCleanup") == 0 && strcmp(QTest::currentDataTag(), "fail") == 0)
        QFAIL("Fail in cleanup()");
    else if (strcmp(QTest::currentTestFunction(), "testSkipInCleanup") == 0 && strcmp(QTest::currentDataTag(), "skip") == 0)
        QSKIP("Skip in cleanup()");
}

void tst_Counting::testFailInInit_data()
{
    QTest::addColumn<bool>("dummy");
    QTest::newRow("before") << true;
    QTest::newRow("fail") << true;
    QTest::newRow("after") << true;
}

void tst_Counting::testFailInInit()
{
    if (strcmp(QTest::currentDataTag(), "fail") == 0)
        QFAIL("This test function should have been skipped due to QFAIL in init()");
}

void tst_Counting::testFailInCleanup_data()
{
    QTest::addColumn<bool>("dummy");
    QTest::newRow("before") << true;
    QTest::newRow("fail") << true;
    QTest::newRow("after") << true;
}

void tst_Counting::testFailInCleanup()
{
    if (strcmp(QTest::currentDataTag(), "fail") == 0)
        qDebug() << "This test function should execute and then QFAIL in cleanup()";
}

void tst_Counting::testSkipInInit_data()
{
    QTest::addColumn<bool>("dummy");
    QTest::newRow("before") << true;
    QTest::newRow("skip") << true;
    QTest::newRow("after") << true;
}

void tst_Counting::testSkipInInit()
{
    if (strcmp(QTest::currentDataTag(), "skip") == 0)
        QFAIL("This test function should have been skipped due to QSKIP in init()");
}

void tst_Counting::testSkipInCleanup_data()
{
    QTest::addColumn<bool>("dummy");
    QTest::newRow("before") << true;
    QTest::newRow("skip") << true;
    QTest::newRow("after") << true;
}

void tst_Counting::testSkipInCleanup()
{
    if (strcmp(QTest::currentDataTag(), "skip") == 0)
        qDebug() << "This test function should execute and then QSKIP in cleanup()";
}

QTEST_MAIN(tst_Counting)
