#include "tst_benchlibeventcounter.h"



void tst_BenchlibEventCounter::events()
{
    QFETCH(int, eventCount);

    QAbstractEventDispatcher* ed = QAbstractEventDispatcher::instance();
    QBENCHMARK {
        for (int i = 0; i < eventCount; ++i) {
            ed->filterNativeEvent("", 0, 0);
        }
    }
}

void tst_BenchlibEventCounter::events_data()
{
    QTest::addColumn<int>("eventCount");

    QTest::newRow("0")      << 0;
    QTest::newRow("1")      << 1;
    QTest::newRow("10")     << 10;
    QTest::newRow("100")    << 100;
    QTest::newRow("500")    << 500;
    QTest::newRow("5000")   << 5000;
    QTest::newRow("100000") << 100000;
}

int main(int argc, char** argv)
{
    TestEventDispatcher dispatcher;
    QCoreApplication app(argc, argv);
    tst_BenchlibEventCounter test;
    return QTest::qExec(&test, argc, argv);
}

