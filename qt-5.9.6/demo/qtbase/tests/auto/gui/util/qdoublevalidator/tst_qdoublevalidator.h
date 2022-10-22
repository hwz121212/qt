#pragma once


#include <QtTest/QtTest>


#include <qvalidator.h>

class tst_QDoubleValidator : public QObject
{
    Q_OBJECT
private slots:
    void validate_data();
    void validate();
    void zeroPaddedExponent_data();
    void zeroPaddedExponent();
    void validateThouSep_data();
    void validateThouSep();
    void validateIntEquiv_data();
    void validateIntEquiv();
    void notifySignals();
};
