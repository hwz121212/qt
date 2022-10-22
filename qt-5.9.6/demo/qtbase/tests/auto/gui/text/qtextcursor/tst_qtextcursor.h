#pragma once


#include <QtTest/QtTest>

#include <qtextdocument.h>
#include <qtexttable.h>
#include <qvariant.h>
#include <qtextdocumentfragment.h>
#include <qabstracttextdocumentlayout.h>
#include <qtextlayout.h>
#include <qtextcursor.h>
#include <qtextobject.h>
#include <qdebug.h>

#include <private/qtextcursor_p.h>

QT_FORWARD_DECLARE_CLASS(QTextDocument)

class tst_QTextCursor : public QObject
{
    Q_OBJECT

private slots:
    void init();
    void cleanup();
    void navigation1();
    void navigation2_data();
    void navigation2();
    void navigation3();
    void navigation4();
    void navigation5();
    void navigation6();
    void navigation7();
    void navigation8();
    void navigation9();
    void navigation10();
    void movePositionEndOfLine();
    void insertBlock();
    void insertWithBlockSeparator1();
    void insertWithBlockSeparator2();
    void insertWithBlockSeparator3();
    void insertWithBlockSeparator4();
    void clearObjectType1();
    void clearObjectType2();
    void clearObjectType3();
    void comparisonOperators1();
    void comparisonOperators2();
    void selection1();
    void dontCopyTableAttributes();

    void checkFrame1();
    void checkFrame2();

    void tableMovement();
    void selectionsInTable();

    void insertBlockToUseCharFormat();

    void selectedText();

    void insertBlockShouldRemoveSelection();
    void insertBlockShouldRemoveSelection2();
    void mergeCellShouldUpdateSelection();

    void joinPreviousEditBlock();

    void setBlockFormatInTable();

    void blockCharFormat();
    void blockCharFormat2();
    void blockCharFormat3();
    void blockCharFormatOnSelection();

    void anchorInitialized1();
    void anchorInitialized2();
    void anchorInitialized3();

    void selectWord();
    void selectWordWithSeparators_data();
    void selectWordWithSeparators();
    void startOfWord();
    void selectBlock();
    void selectVisually();

    void insertText();

    void insertFragmentShouldUseCurrentCharFormat();

    void endOfLine();

    void editBlocksDuringRemove();
    void selectAllDuringRemove();

    void update_data();
    void update();

    void disallowSettingObjectIndicesOnCharFormats();

    void blockAndColumnNumber();

    void clearCells();

    void task244408_wordUnderCursor_data();
    void task244408_wordUnderCursor();

    void adjustCursorsOnInsert();

    void cursorPositionWithBlockUndoAndRedo();
    void cursorPositionWithBlockUndoAndRedo2();
    void cursorPositionWithBlockUndoAndRedo3();

    void joinNonEmptyRemovedBlockUserState();

private:
    int blockCount();

    QTextDocument *doc;
    QTextCursor cursor;
};




class CursorListener : public QObject
{
	Q_OBJECT
public:
	CursorListener(QTextCursor *_cursor) : lastRecordedPosition(-1), lastRecordedAnchor(-1), recordingCount(0), cursor(_cursor) {}

	int lastRecordedPosition;
	int lastRecordedAnchor;
	int recordingCount;

public slots:
	void recordCursorPosition()
	{
		lastRecordedPosition = cursor->position();
		lastRecordedAnchor = cursor->anchor();
		++recordingCount;
	}

	void selectAllContents()
	{
		// Only test the first time
		if (!recordingCount) {
			recordingCount++;
			cursor->select(QTextCursor::Document);
			lastRecordedPosition = cursor->position();
			lastRecordedAnchor = cursor->anchor();
		}
	}

private:
	QTextCursor *cursor;
};

