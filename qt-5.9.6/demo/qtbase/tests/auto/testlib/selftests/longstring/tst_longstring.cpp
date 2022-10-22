#include "tst_longstring.h"



void tst_LongString::failWithLongString() const
{
    QFAIL(lipsum);
}

QTEST_MAIN(tst_LongString)

