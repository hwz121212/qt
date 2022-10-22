#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>


#include <qtextedit.h>
#include <qtextcursor.h>
#include <qtextlist.h>
#include <qdebug.h>
#include <qapplication.h>
#include <qclipboard.h>
#include <qtextbrowser.h>
#include <private/qwidgettextcontrol_p.h>
#include <qscrollbar.h>
#include <qtextobject.h>
#include <qmenu.h>

#include <qabstracttextdocumentlayout.h>
#include <qtextdocumentfragment.h>

#include "qplaintextedit.h"
#include "../../../shared/platformclipboard.h"

//Used in copyAvailable
typedef QPair<Qt::Key, Qt::KeyboardModifier> keyPairType;
typedef QList<keyPairType> pairListType;
Q_DECLARE_METATYPE(keyPairType);

QT_FORWARD_DECLARE_CLASS(QPlainTextEdit)

class tst_QPlainTextEdit : public QObject
{
    Q_OBJECT
public:
    tst_QPlainTextEdit();

public slots:
    void init();
    void cleanup();
private slots:
    void getSetCheck();
#ifndef QT_NO_CLIPBOARD
    void clearMustNotChangeClipboard();
#endif
    void clearMustNotResetRootFrameMarginToDefault();
    void paragSeparatorOnPlaintextAppend();
#ifndef QT_NO_CLIPBOARD
    void selectAllSetsNotSelection();
#endif
    void asciiTab();
    void setDocument();
    void emptyAppend();
    void appendOnEmptyDocumentShouldReuseInitialParagraph();
    void cursorPositionChanged();
    void setTextCursor();
#ifndef QT_NO_CLIPBOARD
    void undoAvailableAfterPaste();
#endif
    void undoRedoAvailableRepetition();
    void appendShouldNotTouchTheSelection();
    void backspace();
    void shiftBackspace();
    void undoRedo();
    void preserveCharFormatInAppend();
#ifndef QT_NO_CLIPBOARD
    void copyAndSelectAllInReadonly();
#endif
    void charWithAltOrCtrlModifier_data();
    void charWithAltOrCtrlModifier();
    void noPropertiesOnDefaultTextEditCharFormat();
    void setPlainTextShouldEmitTextChangedOnce();
    void overwriteMode();
    void shiftDownInLineLastShouldSelectToEnd_data();
    void shiftDownInLineLastShouldSelectToEnd();
    void undoRedoShouldRepositionTextEditCursor();
    void lineWrapModes();
#ifndef QT_NO_CURSOR
    void mouseCursorShape();
#endif
    void implicitClear();
    void undoRedoAfterSetContent();
    void numPadKeyNavigation();
    void moveCursor();
#ifndef QT_NO_CLIPBOARD
    void mimeDataReimplementations();
#endif
    void shiftEnterShouldInsertLineSeparator();
    void selectWordsFromStringsContainingSeparators_data();
    void selectWordsFromStringsContainingSeparators();
#ifndef QT_NO_CLIPBOARD
    void canPaste();
    void copyAvailable_data();
    void copyAvailable();
#endif
    void ensureCursorVisibleOnInitialShow();
    void setTextInsideResizeEvent();
    void colorfulAppend();
    void ensureVisibleWithRtl();
    void preserveCharFormatAfterSetPlainText();
    void extraSelections();
    void adjustScrollbars();
    void textObscuredByScrollbars();
    void setTextPreservesUndoRedoEnabled();
    void wordWrapProperty();
    void lineWrapProperty();
    void selectionChanged();
    void blockCountChanged();
    void insertAndScrollToBottom();
    void inputMethodQueryImHints_data();
    void inputMethodQueryImHints();
#ifndef QT_NO_REGEXP
    void findWithRegExp();
    void findBackwardWithRegExp();
    void findWithRegExpReturnsFalseIfNoMoreResults();
#endif
    void layoutAfterMultiLineRemove();
    void undoCommandRemovesAndReinsertsBlock();
    void taskQTBUG_43562_lineCountCrash();
#ifndef QT_NO_CONTEXTMENU
    void contextMenu();
#endif
    void inputMethodCursorRect();

private:
    void createSelection();
    int blockCount() const;
    int lineCount() const;

    QPlainTextEdit *ed;
    qreal rootFrameMargin;
};



class QtTestDocumentLayout : public QAbstractTextDocumentLayout
{
	Q_OBJECT
public:
	inline QtTestDocumentLayout(QPlainTextEdit *edit, QTextDocument *doc, int &itCount)
		: QAbstractTextDocumentLayout(doc), useBiggerSize(false), ed(edit), iterationCounter(itCount) {}

	virtual void draw(QPainter *, const QAbstractTextDocumentLayout::PaintContext &) {}

	virtual int hitTest(const QPointF &, Qt::HitTestAccuracy) const { return 0; }

	virtual void documentChanged(int, int, int) {}

	virtual int pageCount() const { return 1; }

	virtual QSizeF documentSize() const { return usedSize; }

	virtual QRectF frameBoundingRect(QTextFrame *) const { return QRectF(); }
	virtual QRectF blockBoundingRect(const QTextBlock &) const { return QRectF(); }

	bool useBiggerSize;
	QSize usedSize;

	QPlainTextEdit *ed;

	int &iterationCounter;
};


class CursorPositionChangedRecorder : public QObject
{
	Q_OBJECT
public:
	inline CursorPositionChangedRecorder(QPlainTextEdit *ed)
		: editor(ed)
	{
		connect(editor, SIGNAL(cursorPositionChanged()), this, SLOT(recordCursorPos()));
	}

	QList<int> cursorPositions;

private slots:
	void recordCursorPos()
	{
		cursorPositions.append(editor->textCursor().position());
	}

private:
	QPlainTextEdit *editor;
};



class UndoRedoRecorder : public QObject
{
	Q_OBJECT
public:
	UndoRedoRecorder(QTextDocument *doc)
		: undoRepetitions(false)
		, redoRepetitions(false)
		, undoCount(0)
		, redoCount(0)
	{
		connect(doc, SIGNAL(undoAvailable(bool)), this, SLOT(undoAvailable(bool)));
		connect(doc, SIGNAL(redoAvailable(bool)), this, SLOT(redoAvailable(bool)));
	}

	bool undoRepetitions;
	bool redoRepetitions;

private slots:
	void undoAvailable(bool enabled) {
		if (undoCount > 0 && enabled == lastUndoEnabled)
			undoRepetitions = true;

		++undoCount;
		lastUndoEnabled = enabled;
	}

	void redoAvailable(bool enabled) {
		if (redoCount > 0 && enabled == lastRedoEnabled)
			redoRepetitions = true;

		++redoCount;
		lastRedoEnabled = enabled;
	}

private:
	bool lastUndoEnabled;
	bool lastRedoEnabled;

	int undoCount;
	int redoCount;
};



class SignalReceiver : public QObject
{
	Q_OBJECT
public:
	SignalReceiver() : received(0) {}

	int receivedSignals() const { return received; }
	QTextCharFormat charFormat() const { return format; }

public slots:
	void charFormatChanged(const QTextCharFormat &tcf) { ++received; format = tcf; }

private:
	QTextCharFormat format;
	int received;
};
