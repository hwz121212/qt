#pragma once

#include <QtGui/QRegularExpressionValidator>
#include <QtTest/QtTest>

class tst_QRegularExpressionValidator : public QObject
{
    Q_OBJECT

private slots:
    void validate_data();
    void validate();
};
