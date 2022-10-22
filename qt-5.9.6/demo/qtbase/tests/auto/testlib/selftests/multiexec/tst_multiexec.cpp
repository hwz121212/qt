#include "tst_multiexec.h"




int main(int argc, char *argv[])
{
    tst_Nothing nada;
    for (int i = 0; i < 5; ++i)
        QTest::qExec(&nada, argc, argv);
    return 0;
}
