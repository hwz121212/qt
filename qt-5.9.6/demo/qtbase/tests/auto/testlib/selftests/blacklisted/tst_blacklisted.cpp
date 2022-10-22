#include "tst_blacklisted.h"


// All the tests below have been blacklisted in blacklisted/BLACKLIST

void tst_Blacklisted::pass()
{
    QVERIFY(true);
}

void tst_Blacklisted::skip()
{
    QSKIP("This test should SKIP");
}

void tst_Blacklisted::fail()
{
    QVERIFY2(false, "This test should BFAIL");
}

void tst_Blacklisted::xfail()
{
    QEXPECT_FAIL("", "This test should XFAIL then BFAIL", Abort);
    QVERIFY(false);
}

void tst_Blacklisted::xpass()
{
    QEXPECT_FAIL("", "This test should XPASS", Abort);
    QVERIFY2(true, "This test should XPASS, blacklist ignored for XPASS");
}

void tst_Blacklisted::messages()
{
    qWarning("This is a warning that should not appear in silent test output");
    QWARN("This is an internal testlib warning that should not appear in silent test output");
    qDebug("This is a debug message that should not appear in silent test output");
    qCritical("This is a critical message that should not appear in silent test output");
    qInfo("This is an info message that should not appear in silent test output");
    QTestLog::info("This is an internal testlib info message that should not appear in silent test output", __FILE__, __LINE__);
    qFatal("This is a fatal error message that should still appear in silent test output");
}

QTEST_MAIN(tst_Blacklisted)
