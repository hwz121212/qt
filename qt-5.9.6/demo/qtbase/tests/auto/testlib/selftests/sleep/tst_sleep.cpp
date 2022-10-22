#include "tst_sleep.h"




void tst_Sleep::sleep()
{
    QTime t;
    t.start();

    QTest::qSleep(100);
    QVERIFY(t.elapsed() > 90);

    QTest::qSleep(1000);
    QVERIFY(t.elapsed() > 1000);

    QTest::qSleep(1000 * 10); // 10 seconds
    QVERIFY(t.elapsed() > 1000 * 10);
}

QTEST_MAIN(tst_Sleep)

