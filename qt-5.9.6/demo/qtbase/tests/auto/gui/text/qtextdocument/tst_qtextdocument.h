#pragma once


#include <QtTest/QtTest>


#include <qtextdocument.h>
#include <qdebug.h>

#include <qtextcursor.h>
#include <qtextdocumentfragment.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qtexttable.h>
#include <qabstracttextdocumentlayout.h>
#include <qtextlist.h>
#include <qtextcodec.h>
#include <qguiapplication.h>
#include <qurl.h>
#include <qpainter.h>
#include <qfontmetrics.h>
#include <qimage.h>
#include <qtextlayout.h>
#include <QDomDocument>
#include "common.h"


QT_FORWARD_DECLARE_CLASS(QTextDocument)

class tst_QTextDocument : public QObject
{
    Q_OBJECT

public:
    tst_QTextDocument();

private slots:
    void init();
    void cleanup();
    void cleanupTestCase();
    void getSetCheck();
    void isEmpty();
    void find_data();
    void find();
    void find2();
    void findWithRegExp_data();
    void findWithRegExp();
    void findWithRegularExpression_data();
    void findWithRegularExpression();
    void findMultiple();
    void basicIsModifiedChecks();
    void moreIsModified();
    void isModified2();
    void isModified3();
    void isModified4();
    void noundo_basicIsModifiedChecks();
    void noundo_moreIsModified();
    void noundo_isModified2();
    void noundo_isModified3();
    void mightBeRichText();
    void mightBeRichText_data();

    void task240325();

    void preFont();

    void stylesheetFont_data();
    void stylesheetFont();

    void toHtml_data();
    void toHtml();
    void toHtml2();

    void setFragmentMarkersInHtmlExport();

    void toHtmlBodyBgColor();
    void toHtmlBodyBgColorRgba();
    void toHtmlBodyBgColorTransparent();
    void toHtmlRootFrameProperties();
    void toHtmlLineHeightProperties();
    void capitalizationHtmlInExport();
    void wordspacingHtmlExport();

    void cursorPositionChanged();
    void cursorPositionChangedOnSetText();

    void textFrameIterator();

    void codecForHtml();

    void markContentsDirty();

    void clonePreservesMetaInformation();
    void clonePreservesPageSize();
    void clonePreservesPageBreakPolicies();
    void clonePreservesDefaultFont();
    void clonePreservesRootFrameFormat();
    void clonePreservesResources();
    void clonePreservesUserStates();
    void clonePreservesIndentWidth();
    void blockCount();
    void defaultStyleSheet();

    void resolvedFontInEmptyFormat();

    void defaultRootFrameMargin();

    void clearResources();

    void setPlainText();
    void toPlainText_data();
    void toPlainText();
    void toRawText();

    void deleteTextObjectsOnClear();

    void maximumBlockCount();
    void adjustSize();
    void initialUserData();

    void html_defaultFont();

    void blockCountChanged();

    void nonZeroDocumentLengthOnClear();

    void setTextPreservesUndoRedoEnabled();

    void firstLast();

    void backgroundImage_toHtml();
    void backgroundImage_toHtml2();
    void backgroundImage_clone();
    void backgroundImage_copy();

    void documentCleanup();

    void characterAt();
    void revisions();
    void revisionWithUndoCompressionAndUndo();

    void testUndoCommandAdded();

    void testUndoBlocks();

    void receiveCursorPositionChangedAfterContentsChange();

    void copiedFontSize();

    void QTBUG25778_pixelSizeFromHtml();

    void htmlExportImportBlockCount();

    void QTBUG27354_spaceAndSoftSpace();
    void baseUrl_data();
    void baseUrl();

    void QTBUG28998_linkColor();

    void textCursorUsageWithinContentsChange();
    void cssInheritance();

    void lineHeightType();
private:
    void backgroundImage_checkExpectedHtml(const QTextDocument &doc);
    void buildRegExpData();
    static QString cssFontSizeString(const QFont &font);

    QTextDocument *doc;
    QTextCursor cursor;
    QFont defaultFont;
    QString htmlHead;
    QString htmlTail;
};



class CursorPosSignalSpy : public QObject
{
	Q_OBJECT
public:
	CursorPosSignalSpy(QTextDocument *doc)
	{
		calls = 0;
		connect(doc, SIGNAL(cursorPositionChanged(QTextCursor)),
			this, SLOT(cursorPositionChanged(QTextCursor)));
	}

	int calls;

private slots:
	void cursorPositionChanged(const QTextCursor &)
	{
		++calls;
	}
};


class Receiver : public QObject
{
	Q_OBJECT
public:
	QString first;
public slots:
	void cursorPositionChanged() {
		if (first.isEmpty())
			first = QLatin1String("cursorPositionChanged");
	}

	void contentsChange() {
		if (first.isEmpty())
			first = QLatin1String("contentsChanged");
	}
};


class ContentsChangeHandler : public QObject
{
	Q_OBJECT
public:
	ContentsChangeHandler(QTextDocument *doc)
		: verticalMovementX(-1)
		, doc(doc)
	{
		connect(doc, SIGNAL(contentsChange(int, int, int)),
			this, SLOT(saveModifiedText(int, int, int)));
	}

private slots:
	void saveModifiedText(int from, int /*charsRemoved*/, int charsAdded)
	{
		QTextCursor tmp(doc);
		tmp.setPosition(from);
		tmp.setPosition(from + charsAdded, QTextCursor::KeepAnchor);
		text = tmp.selectedText();
		verticalMovementX = tmp.verticalMovementX();
	}

public:
	QString text;
	int verticalMovementX;
private:
	QTextDocument *doc;
};


class TestSyntaxHighlighter : public QObject
{
	Q_OBJECT
public:
	inline TestSyntaxHighlighter(QTextDocument *doc) : QObject(doc), ok(false) {}

	bool ok;

private slots:
	inline void markBlockDirty(int from, int charsRemoved, int charsAdded)
	{
		Q_UNUSED(charsRemoved);
		Q_UNUSED(charsAdded);
		QTextDocument *doc = static_cast<QTextDocument *>(parent());
		QTextBlock block = doc->findBlock(from);

		QTestDocumentLayout *lout = qobject_cast<QTestDocumentLayout *>(doc->documentLayout());
		lout->called = false;

		doc->markContentsDirty(block.position(), block.length());

		ok = (lout->called == false);
	}

	inline void modifyBlockAgain(int from, int charsRemoved, int charsAdded)
	{
		Q_UNUSED(charsRemoved);
		Q_UNUSED(charsAdded);
		QTextDocument *doc = static_cast<QTextDocument *>(parent());
		QTextBlock block = doc->findBlock(from);
		QTextCursor cursor(block);

		QTestDocumentLayout *lout = qobject_cast<QTestDocumentLayout *>(doc->documentLayout());
		lout->called = false;

		cursor.insertText("Foo");

		ok = (lout->called == true);
	}
};
