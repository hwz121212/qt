#include "tst_benchlibcallgrind.h"



#ifdef QT_BUG236484
void tst_BenchlibCallgrind::failInChildProcess()
{
    static double f = 1.0;
    QBENCHMARK {
        for (int i = 0; i < 1000000; ++i) {
            f *= 1.1;
            if (RUNNING_ON_VALGRIND) QFAIL("Running under valgrind!");
        }
    }
}
#endif

void tst_BenchlibCallgrind::twoHundredMillionInstructions()
{
#if !defined(__GNUC__) || !defined(__i386)
    QSKIP("This test is only defined for gcc and x86.");
#else
    QBENCHMARK {
        __asm__ __volatile__(
            "mov $100000000,%%eax   \n"
            "LOOPTOP:               \n"
            "dec %%eax              \n"
            "jnz LOOPTOP            \n"
            : /* no output */
            : /* no input */
            : /* clobber */ "eax"
        );
    }
#endif
}

QTEST_MAIN(tst_BenchlibCallgrind)
