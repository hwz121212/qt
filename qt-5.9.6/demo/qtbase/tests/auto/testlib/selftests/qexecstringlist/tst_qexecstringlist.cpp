#include "tst_qexecstringlist.h"



void tst_QExecStringList::testA() const
{
}

void tst_QExecStringList::testB() const
{
    QFETCH(bool, dummy);
    Q_UNUSED(dummy);
}

void tst_QExecStringList::testB_data() const
{
    QTest::addColumn<bool>("dummy");

    QTest::newRow("Data1") << false;
    QTest::newRow("Data2") << false;
    QTest::newRow("Data3") << false;
}

void tst_QExecStringList::testC() const
{
}

int main(int argc,char *argv[])
{
    QCoreApplication app(argc, argv);

    tst_QExecStringList test;

    QTest::qExec(&test, app.arguments());
    QTest::qExec(&test, QStringList("appName"));
    QTest::qExec(&test, QStringList("appName") << "testA");
    QTest::qExec(&test, QStringList("appName") << "testB");
    QTest::qExec(&test, QStringList("appName") << "testB:Data2");
    QTest::qExec(&test, QStringList("appName") << "testC");

    return 0;
}

