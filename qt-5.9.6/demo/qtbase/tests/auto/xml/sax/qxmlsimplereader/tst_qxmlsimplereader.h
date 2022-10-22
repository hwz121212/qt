#pragma once

#include <QDomDocument>
#include <qthread.h>
#include <qtcpserver.h>
#include <qtcpsocket.h>
#include <QtTest/QtTest>
#include <QtCore/qatomic.h>
#include <QtCore/qsemaphore.h>
#include <qfile.h>
#include <qstring.h>
#include <qdir.h>
#include <qbuffer.h>
#include "parser/parser.h"


class XmlServer : public QThread
{
    Q_OBJECT
public:
    XmlServer(QObject *parent = 0) : QThread(parent) {}

    QSemaphore threadStarted;
    bool listening = false;
    QAtomicInt quitSoon;

protected:
    virtual void run();
};



class tst_QXmlSimpleReader : public QObject
{
	Q_OBJECT

public:
	tst_QXmlSimpleReader();
	~tst_QXmlSimpleReader();

private slots:
	void initTestCase();
	void testGoodXmlFile();
	void testGoodXmlFile_data();
	void testBadXmlFile();
	void testBadXmlFile_data();
	void testIncrementalParsing();
	void testIncrementalParsing_data();
	void setDataQString();
	void inputFromQIODevice();
	void inputFromString();
	void inputFromSocket_data();
	void inputFromSocket();

	void idsInParseException1();
	void idsInParseException2();
	void preserveCharacterReferences() const;
	void reportNamespace() const;
	void reportNamespace_data() const;
	void roundtripWithNamespaces() const;
	void dtdRecursionLimit();

private:
	static QDomDocument fromByteArray(const QString &title, const QByteArray &ba, bool *ok);
	XmlServer *server;
	QString prefix;
};
