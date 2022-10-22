#pragma once

#include <QtTest/QtTest>
#include <QAxObject>
#include <QByteArray>

class tst_QAxObject : public QObject
{
    Q_OBJECT

private slots:
    void propertyByRefWritable();
    void setPropertyByRef();
    void multiplePropertiesDuplicateName();
};
