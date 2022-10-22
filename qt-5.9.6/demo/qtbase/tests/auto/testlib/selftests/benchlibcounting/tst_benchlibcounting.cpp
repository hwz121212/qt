#include "tst_benchlibcounting.h"


void tst_BenchlibCounting::passingBenchmark()
{
    QBENCHMARK {
    }
}

void tst_BenchlibCounting::skippingBenchmark()
{
    QBENCHMARK {
        QSKIP("This is a skipping benchmark");
    }
}

void tst_BenchlibCounting::failingBenchmark()
{
    QBENCHMARK {
        QFAIL("This is a failing benchmark");
    };
}

QTEST_MAIN(tst_BenchlibCounting)
