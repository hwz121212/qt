#include "tst_verifyexceptionthrown.h"




#ifndef QT_NO_EXCEPTIONS

void tst_VerifyExceptionThrown::testCorrectStdTypes() const
{
    QVERIFY_EXCEPTION_THROWN(throw int(5), int);
    QVERIFY_EXCEPTION_THROWN(throw float(9.8), float);
    QVERIFY_EXCEPTION_THROWN(throw bool(true), bool);
    QVERIFY_EXCEPTION_THROWN(throw std::string("some string"), std::string);
}

void tst_VerifyExceptionThrown::testCorrectStdExceptions() const
{
    // same type
    QVERIFY_EXCEPTION_THROWN(throw std::exception(), std::exception);
    QVERIFY_EXCEPTION_THROWN(throw std::runtime_error("runtime error"), std::runtime_error);
    QVERIFY_EXCEPTION_THROWN(throw std::overflow_error("overflow error"), std::overflow_error);

    // inheritance
    QVERIFY_EXCEPTION_THROWN(throw std::overflow_error("overflow error"), std::runtime_error);
    QVERIFY_EXCEPTION_THROWN(throw std::overflow_error("overflow error"), std::exception);
}

void tst_VerifyExceptionThrown::testCorrectMyExceptions() const
{
    // same type
    QVERIFY_EXCEPTION_THROWN(throw MyBaseException(), MyBaseException);
    QVERIFY_EXCEPTION_THROWN(throw MyDerivedException(), MyDerivedException);

    // inheritance
    QVERIFY_EXCEPTION_THROWN(throw MyDerivedException(), MyBaseException);
    QVERIFY_EXCEPTION_THROWN(throw MyDerivedException(), std::domain_error);
}

void tst_VerifyExceptionThrown::testFailInt() const
{
    QVERIFY_EXCEPTION_THROWN(throw int(5), double);
}

void tst_VerifyExceptionThrown::testFailStdString() const
{
    QVERIFY_EXCEPTION_THROWN(throw std::string("some string"), char*);
}

void tst_VerifyExceptionThrown::testFailStdRuntimeError() const
{
    QVERIFY_EXCEPTION_THROWN(throw std::logic_error("logic error"), std::runtime_error);
}

void tst_VerifyExceptionThrown::testFailMyException() const
{
    QVERIFY_EXCEPTION_THROWN(throw std::logic_error("logic error"), MyBaseException);
}

void tst_VerifyExceptionThrown::testFailMyDerivedException() const
{
    QVERIFY_EXCEPTION_THROWN(throw MyDerivedException(), std::runtime_error);
}

void tst_VerifyExceptionThrown::testFailNoException() const
{
    QVERIFY_EXCEPTION_THROWN(doSomething(), std::exception);
}

#endif // !QT_NO_EXCEPTIONS



QTEST_MAIN(tst_VerifyExceptionThrown)
