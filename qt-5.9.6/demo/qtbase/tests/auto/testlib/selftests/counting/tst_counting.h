#pragma once

#include <QtCore/QCoreApplication>
#include <QtTest/QtTest>

class tst_Counting : public QObject
{
    Q_OBJECT

private slots:
    // The following test functions exercise each possible combination of test
    // results for two data rows.
    void testPassPass_data();
    void testPassPass();

    void testPassSkip_data();
    void testPassSkip();

    void testPassFail_data();
    void testPassFail();

    void testSkipPass_data();
    void testSkipPass();

    void testSkipSkip_data();
    void testSkipSkip();

    void testSkipFail_data();
    void testSkipFail();

    void testFailPass_data();
    void testFailPass();

    void testFailSkip_data();
    void testFailSkip();

    void testFailFail_data();
    void testFailFail();

    // The following test functions test skips and fails in the special
    // init() and cleanup() slots.
    void init();
    void cleanup();
    void testFailInInit_data();
    void testFailInInit();
    void testFailInCleanup_data();
    void testFailInCleanup();
    void testSkipInInit_data();
    void testSkipInInit();
    void testSkipInCleanup_data();
    void testSkipInCleanup();

private:
    void helper();
};

enum TestResult
{
    Pass,
    Fail,
    Skip
};


