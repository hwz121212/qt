#pragma once


#include <QtTest/QtTest>
#include <qvalidator.h>

class tst_QIntValidator : public QObject
{
    Q_OBJECT
private slots:
    void validate_data();
    void validate();
    void validateArabic();
    void validateFrench();
    void notifySignals();
};
