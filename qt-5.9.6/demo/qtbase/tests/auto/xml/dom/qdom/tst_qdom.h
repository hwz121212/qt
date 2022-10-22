#pragma once


#include <QBuffer>
#include <QByteArray>
#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QList>
#include <QRegExp>
#include <QTextStream>
#include <QtTest/QtTest>
#include <QtXml>
#include <QVariant>

QT_FORWARD_DECLARE_CLASS(QDomDocument)
QT_FORWARD_DECLARE_CLASS(QDomNode)

class tst_QDom : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void namespacedAttributes() const;
    void setContent_data();
    void setContent();
    void toString_01_data();
    void toString_01();
    void toString_02_data();
    void toString_02();
    void hasAttributes_data();
    void hasAttributes();
    void save_data();
    void save();
    void saveWithSerialization() const;
    void saveWithSerialization_data() const;
    void cloneNode_data();
    void cloneNode();
    void ownerDocument_data();
    void ownerDocument();
    void ownerDocumentTask27424_data();
    void ownerDocumentTask27424();
    void parentNode_data();
    void parentNode();
    void documentCreationTask27424_data();
    void documentCreationTask27424();
    void browseElements();
    void ownerElementTask45192_data();
    void ownerElementTask45192();
    void domNodeMapAndList();

    void nullDocument();
    void invalidName_data();
    void invalidName();
    void invalidQualifiedName_data();
    void invalidQualifiedName();
    void invalidCharData_data();
    void invalidCharData();

    void roundTripAttributes() const;
    void normalizeEndOfLine() const;
    void normalizeAttributes() const;
    void serializeWeirdEOL() const;
    void reparentAttribute() const;
    void serializeNamespaces() const;
    void flagInvalidNamespaces() const;
    void flagUndeclaredNamespace() const;

    void indentComments() const;
    void checkLiveness() const;
    void reportDuplicateAttributes() const;
    void appendChildFromToDocument() const;
    void iterateCDATA() const;
    void appendDocumentNode() const;
    void germanUmlautToByteArray() const;
    void germanUmlautToFile() const;
    void setInvalidDataPolicy() const;
    void crashInSetContent() const;
    void doubleNamespaceDeclarations() const;
    void setContentQXmlReaderOverload() const;
    void toStringWithoutNewlines() const;
    void checkIntOverflow() const;
    void setContentWhitespace() const;
    void setContentWhitespace_data() const;

    void taskQTBUG4595_dontAssertWhenDocumentSpecifiesUnknownEncoding() const;
    void cloneDTD_QTBUG8398() const;
    void DTDNotationDecl();
    void DTDEntityDecl();
    void QTBUG49113_dontCrashWithNegativeIndex() const;

    void cleanupTestCase() const;

private:
    static QDomDocument generateRequest();
    static int hasAttributesHelper( const QDomNode& node );
    static bool compareDocuments( const QDomDocument &doc1, const QDomDocument &doc2 );
    static bool compareNodes( const QDomNode &node1, const QDomNode &node2, bool deep );
    static QDomNode findDomNode( const QDomDocument &doc, const QList<QVariant> &pathToNode );
    static QString onNullWarning(const char *const functionName);
    static bool isDeepEqual(const QDomNode &n1, const QDomNode &n2);
    static bool isFakeXMLDeclaration(const QDomNode &node);

    QList<QByteArray> m_testCodecs;
};
