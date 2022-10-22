#pragma once


#include <QtTest/QtTest>

#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtextlist.h>
#include <qabstracttextdocumentlayout.h>
#include <qtextcursor.h>
#include "../qtextdocument/common.h"

class tst_QTextList : public QObject
{
    Q_OBJECT

private slots:
    void init();
    void cleanup();
    void item();
    void autoNumbering();
    void autoNumberingRTL();
    void autoNumberingPrefixAndSuffix();
    void autoNumberingPrefixAndSuffixRTL();
    void autoNumberingPrefixAndSuffixHtmlExportImport();
    void romanNumbering();
    void romanNumberingLimit();
    void formatChange();
    void cursorNavigation();
    void partialRemoval();
    void formatReferenceChange();
    void ensureItemOrder();
    void add();
    void defaultIndent();
    void blockUpdate();
    void numbering_data();
    void numbering();

private:
    QTextDocument *doc;
    QTextCursor cursor;
    QTestDocumentLayout *layout;
};
