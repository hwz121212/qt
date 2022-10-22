#include "tst_float.h"



void tst_float::floatComparisons() const
{
    QFETCH(float, operandLeft);
    QFETCH(float, operandRight);

    QCOMPARE(operandLeft, operandRight);
}

void tst_float::floatComparisons_data() const
{
    QTest::addColumn<float>("operandLeft");
    QTest::addColumn<float>("operandRight");

    QTest::newRow("should SUCCEED 1")
        << float(0)
        << float(0);

    QTest::newRow("should FAIL 1")
        << float(1.00000)
        << float(3.00000);

    QTest::newRow("should FAIL 2")
        << float(1.00000e-7f)
        << float(3.00000e-7f);

    // QCOMPARE for floats uses qFuzzyCompare(), which succeeds if the numbers
    // differ by no more than 1/100,000th of the smaller value.  Thus
    // QCOMPARE(99998, 99999) should fail, while QCOMPARE(100001, 100002)
    // should pass.

    QTest::newRow("should FAIL 3")
        << float(99998)
        << float(99999);

    QTest::newRow("should SUCCEED 2")
        << float(100001)
        << float(100002);
}

void tst_float::compareFloatTests() const
{
    QFETCH(float, t1);

    // Create two more values
    // t2 differs from t1 by 1 ppm (part per million)
    // t3 differs from t1 by 200%
    // we should consider that t1 == t2 and t1 != t3
    const float t2 = t1 + (t1 / 1e6);
    const float t3 = 3 * t1;

    QCOMPARE(t1, t2);

    /* Should FAIL. */
    QCOMPARE(t1, t3);
}

void tst_float::compareFloatTests_data() const
{
    QTest::addColumn<float>("t1");
    QTest::newRow("1e0") << 1e0f;
    QTest::newRow("1e-7") << 1e-7f;
    QTest::newRow("1e+7") << 1e+7f;
}

QTEST_MAIN(tst_float)
