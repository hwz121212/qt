#pragma once


#include <QtTest/QtTest>

#include <qcoreapplication.h>
#include <qdebug.h>
#include <qsettings.h>
#include <qtextformat.h>
#include <private/qtextformat_p.h>
#include <qtextdocument.h>
#include <qtextcursor.h>
#include <qtextobject.h>
#include <qtextlayout.h>
#include <qabstracttextdocumentlayout.h>

class tst_QTextFormat : public QObject
{
Q_OBJECT

private slots:
    void getSetCheck();
    void defaultAlignment();
    void testQTextCharFormat() const;
    void testUnderlinePropertyPrecedence();
    void toFormat();
    void resolveFont();
    void testLetterSpacing();
    void testFontStretch();
    void getSetTabs();
    void testTabsUsed();
    void testFontStyleSetters();
    void setFont_data();
    void setFont();
    void setFont_collection_data();
    void setFont_collection();
    void clearCollection();
};
