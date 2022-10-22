#include "tst_qsslerror.h"



int tst_QSslError::loopLevel = 0;

#ifndef QT_NO_SSL

void tst_QSslError::constructing()
{
    QSslError error;
}

void tst_QSslError::hash()
{
    // mostly a compile-only test, to check that qHash(QSslError) is found
    QSet<QSslError> errors;
    errors << QSslError();
    QCOMPARE(errors.size(), 1);
}

#endif // QT_NO_SSL

QTEST_MAIN(tst_QSslError)
