#pragma once

#include <QtTest/QtTest>


#ifndef QT_NO_EXCEPTIONS
#  include <stdexcept>
#endif


#ifndef QT_NO_EXCEPTIONS

class MyBaseException
{

};

class MyDerivedException: public MyBaseException, public std::domain_error
{
public:
    MyDerivedException(): std::domain_error("MyDerivedException") {}
};


#endif // !QT_NO_EXCEPTIONS


class tst_VerifyExceptionThrown: public QObject
{
    Q_OBJECT
private:
    void doSomething() const {}

private slots:
// Remove all test cases if exceptions are not available
#ifndef QT_NO_EXCEPTIONS
    void testCorrectStdTypes() const;
    void testCorrectStdExceptions() const;
    void testCorrectMyExceptions() const;

    void testFailInt() const;
    void testFailStdString() const;
    void testFailStdRuntimeError() const;
    void testFailMyException() const;
    void testFailMyDerivedException() const;

    void testFailNoException() const;
#endif // !QT_NO_EXCEPTIONS
};



