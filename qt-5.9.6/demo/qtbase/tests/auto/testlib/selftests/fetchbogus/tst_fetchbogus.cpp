#include "tst_fetchbogus.h"




void tst_FetchBogus::fetchBogus_data()
{
    QTest::addColumn<QString>("string");
    QTest::newRow("foo") << QString("blah");
}

void tst_FetchBogus::fetchBogus()
{
    QFETCH(QString, bubu);
}

QTEST_MAIN(tst_FetchBogus)
