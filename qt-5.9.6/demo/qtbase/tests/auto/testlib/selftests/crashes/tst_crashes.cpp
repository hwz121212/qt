#include "tst_crashes.h"



void tst_Crashes::crash()
{
#if defined(Q_OS_WIN) && !defined(Q_OS_WINRT)
   //we avoid the error dialogbox to appear on windows
   SetErrorMode( SEM_NOGPFAULTERRORBOX | SEM_FAILCRITICALERRORS | SEM_NOOPENFILEERRORBOX);
#endif
    /*
        We deliberately dereference an invalid but non-zero address;
        it should be non-zero because a few platforms may have special crash behavior
        when dereferencing exactly 0 (e.g. some macs have been observed to generate SIGILL
        rather than SIGSEGV).
    */
    int *i = 0;
    i[1] = 1;
}

QTEST_MAIN(tst_Crashes)
