#include "tst_benchlibwalltime.h"



void tst_BenchlibWalltime::waitForOneThousand()
{
    QBENCHMARK {
        QTest::qWait(1000);
    }
}

void tst_BenchlibWalltime::waitForFourThousand()
{
    QBENCHMARK {
        QTest::qWait(4000);
    }
}

void tst_BenchlibWalltime::qbenchmark_once()
{
    int iterations = 0;
    QBENCHMARK_ONCE {
        ++iterations;
    }
    QCOMPARE(iterations, 1);
}


QTEST_MAIN(tst_BenchlibWalltime)

