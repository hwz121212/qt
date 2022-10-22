#include "tst_benchliboptions.h"




void tst_BenchlibOptions::threeEvents()
{
    QAbstractEventDispatcher* ed = QAbstractEventDispatcher::instance();
    QBENCHMARK {
        ed->filterNativeEvent("", 0, 0);
        ed->filterNativeEvent("", 0, 0);
        ed->filterNativeEvent("", 0, 0);
    }
}

int main(int argc, char** argv)
{
    int ret = 0;

    TestEventDispatcher dispatcher;
    QCoreApplication app(argc, argv);

    /* Run with no special arguments. */
    {
        tst_BenchlibOptions test;
        ret += QTest::qExec(&test, argc, argv);
    }

    /* Run with an exact number of iterations. */
    {
        QVector<char const*> args;
        for (int i = 0; i < argc; ++i) args << argv[i];
        args << "-iterations";
        args << "15";
        tst_BenchlibFifteenIterations test;
        ret += QTest::qExec(&test, args.count(), const_cast<char**>(args.data()));
    }

    /*
        Run until getting a value of at least 100.
    */
    {
        QVector<char const*> args;
        for (int i = 0; i < argc; ++i) args << argv[i];
        args << "-minimumvalue";
        args << "100";
        tst_BenchlibOneHundredMinimum test;
        ret += QTest::qExec(&test, args.count(), const_cast<char**>(args.data()));
    }

    return ret;
}

