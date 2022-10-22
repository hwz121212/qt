#pragma once


#include <QtTest/QtTest>
#include <qregexp.h>


#include <qvalidator.h>

class tst_QRegExpValidator : public QObject
{
    Q_OBJECT

private slots:
    void validate_data();
    void validate();
};

