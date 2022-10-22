#pragma once


#include <QtCore/QCoreApplication>
#include <QtCore/QStringList>
#include <QtTest/QtTest>
#include <private/qmetaobjectbuilder_p.h>

/*
    This test makes a testlog containing lots of characters which have a special meaning in
    XML, with the purpose of exposing bugs in testlib's XML output code.
*/
class tst_BadXml : public QObject
{
    Q_OBJECT

private slots:
    void badDataTag() const;
    void badDataTag_data() const;

    void badMessage() const;
    void badMessage_data() const;

    void failWithNoFile() const;

    void encoding();

public:
    static QList<QByteArray> const& badStrings();
};

/*
    Custom metaobject to make it possible to change class name at runtime.
*/
class EmptyClass : public tst_BadXml
{ Q_OBJECT };

class tst_BadXmlSub : public tst_BadXml
{
public:
    tst_BadXmlSub()
        : className("tst_BadXml"), mo(0) {}
    ~tst_BadXmlSub() { free(mo); }

    const QMetaObject* metaObject() const;

    QByteArray className;
private:
    QMetaObject *mo;
};

