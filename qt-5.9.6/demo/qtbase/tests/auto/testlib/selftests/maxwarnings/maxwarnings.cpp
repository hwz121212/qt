#include "maxwarnings.h"



void MaxWarnings::warn()
{
    for (int i = 0; i < 10000; ++i)
        qWarning("%d", i);
}

QTEST_MAIN(MaxWarnings)