#include "tst_silent.h"



void tst_Silent::pass()
{
    QVERIFY(true);
}

void tst_Silent::skip()
{
    QSKIP("This test should skip");
}

void tst_Silent::fail()
{
    QVERIFY2(false, "This test should fail");
}

void tst_Silent::xfail()
{
    QEXPECT_FAIL("", "This test should XFAIL", Abort);
    QVERIFY(false);
}

void tst_Silent::xpass()
{
    QEXPECT_FAIL("", "This test should XPASS", Abort);
    QVERIFY2(true, "This test should XPASS");
}

void tst_Silent::messages()
{
    qWarning("This is a warning that should not appear in silent test output");
    QWARN("This is an internal testlib warning that should not appear in silent test output");
    qDebug("This is a debug message that should not appear in silent test output");
    qCritical("This is a critical message that should not appear in silent test output");
    qInfo("This is an info message that should not appear in silent test output");
    QTestLog::info("This is an internal testlib info message that should not appear in silent test output", __FILE__, __LINE__);
    qFatal("This is a fatal error message that should still appear in silent test output");
}

QTEST_MAIN(tst_Silent)
