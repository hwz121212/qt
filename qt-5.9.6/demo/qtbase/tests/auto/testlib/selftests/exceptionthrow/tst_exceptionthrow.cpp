#include "tst_exceptionthrow.h"




/*!
 \internal

 We simply throw an exception to check that we get sane output/reporting.
 */
void tst_Exception::throwException() const
{
    /* When exceptions are disabled, some compilers, at least linux-g++, treat
     * exception clauses as hard errors. */
#ifndef QT_NO_EXCEPTIONS
    throw 3;
#endif
}

QTEST_MAIN(tst_Exception)


