#include "tst_differentexec.h"





int main()
{
    char *argv[] = { const_cast<char *>("appName"), const_cast<char *>("slotName") };
    int argc = 2;

    tst_TestA testA;
    QTest::qExec(&testA, argc, argv);
    QTest::qExec(&testA, argc, argv);

    tst_TestB testB;
    QTest::qExec(&testB, argc, argv);

    return 0;
}
