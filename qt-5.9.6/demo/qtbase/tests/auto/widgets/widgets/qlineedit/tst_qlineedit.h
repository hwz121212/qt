#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <QtTest/private/qtesthelpers_p.h>
#include "qlineedit.h"
#include "qapplication.h"
#include "qstringlist.h"
#include "qstyle.h"
#include "qvalidator.h"
#include "qwidgetaction.h"
#include "qimage.h"
#include "qicon.h"
#include "qcompleter.h"
#include "qstandarditemmodel.h"
#include <qpa/qplatformtheme.h>
#include "qstylehints.h"
#include <private/qapplication_p.h>
#include "qclipboard.h"

#ifdef Q_OS_MAC
#include <cstdlib> // For the random function.
#endif

#include <qlineedit.h>
#include <private/qlineedit_p.h>
#include <private/qwidgetlinecontrol_p.h>
#include <qmenu.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qspinbox.h>
#include <qlistview.h>
#include <qstringlistmodel.h>
#include <qsortfilterproxymodel.h>
#include <qdebug.h>
#include <qscreen.h>
#include <qshortcut.h>

#include "qcommonstyle.h"
#include "qstyleoption.h"

#include "qplatformdefs.h"

#include "../../../shared/platformclipboard.h"
#include "../../../shared/platforminputcontext.h"
#include <private/qinputmethod_p.h>

QT_BEGIN_NAMESPACE
class QPainter;
QT_END_NAMESPACE

using namespace QTestPrivate;

class StyleOptionTestStyle : public QCommonStyle
{
private:
    bool readOnly;

public:
    inline StyleOptionTestStyle() : QCommonStyle(), readOnly(false)
    {
    }

    inline void setReadOnly(bool readOnly)
    {
        this->readOnly = readOnly;
    }

    inline void drawPrimitive(PrimitiveElement pe, const QStyleOption *opt, QPainter *,
                                 const QWidget *) const
    {
        switch (pe) {
            case PE_PanelLineEdit:
            if (readOnly)
                QVERIFY(opt->state & QStyle::State_ReadOnly);
            else
                QVERIFY(!(opt->state & QStyle::State_ReadOnly));
            break;

            default:
            break;
        }
    }
};

class tst_QLineEdit : public QObject
{
Q_OBJECT

public:
    enum EventStates { Press, Release, Click };

    tst_QLineEdit();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();

    void getSetCheck();
    void experimental();

    void upperAndLowercase();

    void setInputMask_data();
    void setInputMask();

    void inputMask_data();
    void inputMask();

    void clearInputMask();

    void keypress_inputMask_data();
    void keypress_inputMask();
    void keypress_inputMethod_inputMask();

    void inputMaskAndValidator_data();
    void inputMaskAndValidator();

    void hasAcceptableInputMask_data();
    void hasAcceptableInputMask();

    void hasAcceptableInputValidator();


    void redo_data();
    void redo();

    void undo_data();
    void undo();

    void undo_keypressevents_data();
    void undo_keypressevents();

#ifndef QT_NO_CLIPBOARD
    void QTBUG5786_undoPaste();
#endif

    void clear();

    void text_data();
    void text();
    void textMask_data();
    void textMask();
    void maskCharacter();
    void maskCharacter_data();
    void setText();

    void displayText_data();
    void displayText();
    void passwordEchoOnEdit();
    void passwordEchoDelay();

    void maxLength_mask_data();
    void maxLength_mask();

    void maxLength_data();
    void maxLength();

    void isReadOnly();

    void noCursorBlinkWhenReadOnly();

    void cursorPosition();

    void cursorPositionChanged_data();
    void cursorPositionChanged();

    void selectedText();
    void deleteSelectedText();

    void textChangedAndTextEdited();
    void returnPressed();
    void returnPressed_maskvalidator_data();
    void returnPressed_maskvalidator();

    void setValidator();
    void setValidator_QIntValidator_data();
    void setValidator_QIntValidator();

    void frame_data();
    void frame();

    void leftKeyOnSelectedText();

    void setAlignment_data();
    void setAlignment();

    void isModified();
    void edited();
    void fixupDoesNotModify_QTBUG_49295();

    void insert();
    void setSelection_data();
    void setSelection();

#ifndef QT_NO_CLIPBOARD
    void cut();
    void cutWithoutSelection();
#endif
    void maxLengthAndInputMask();
    void returnPressedKeyEvent();

    void keepSelectionOnTabFocusIn();

    void readOnlyStyleOption();

    void validateOnFocusOut();

    void editInvalidText();

    void charWithAltOrCtrlModifier_data();
    void charWithAltOrCtrlModifier();

    void inlineCompletion();

    void noTextEditedOnClear();

#ifndef QT_NO_CURSOR
    void cursor();
#endif

    void textMargin_data();
    void textMargin();

    // task-specific tests:
    void task180999_focus();
    void task174640_editingFinished();
#if QT_CONFIG(completer)
    void task198789_currentCompletion();
    void task210502_caseInsensitiveInlineCompletion();
#endif
    void task229938_dontEmitChangedWhenTextIsNotChanged();
    void task233101_cursorPosAfterInputMethod_data();
    void task233101_cursorPosAfterInputMethod();
    void task241436_passwordEchoOnEditRestoreEchoMode();
    void task248948_redoRemovedSelection();
    void taskQTBUG_4401_enterKeyClearsPassword();
    void taskQTBUG_4679_moveToStartEndOfBlock();
    void taskQTBUG_4679_selectToStartEndOfBlock();
#ifndef QT_NO_CONTEXTMENU
    void taskQTBUG_7902_contextMenuCrash();
#endif
    void taskQTBUG_7395_readOnlyShortcut();
    void QTBUG697_paletteCurrentColorGroup();
    void QTBUG13520_textNotVisible();
    void QTBUG7174_inputMaskCursorBlink();
    void QTBUG16850_setSelection();

    void bidiVisualMovement_data();
    void bidiVisualMovement();

    void bidiLogicalMovement_data();
    void bidiLogicalMovement();

    void selectAndCursorPosition();
    void inputMethod();
    void inputMethodSelection();

    void inputMethodQueryImHints_data();
    void inputMethodQueryImHints();

    void inputMethodUpdate();

    void undoRedoAndEchoModes_data();
    void undoRedoAndEchoModes();

    void clearButton();
    void clearButtonVisibleAfterSettingText_QTBUG_45518();
    void sideWidgets();
    void sideWidgetsActionEvents();

    void shouldShowPlaceholderText_data();
    void shouldShowPlaceholderText();
    void QTBUG1266_setInputMaskEmittingTextEdited();

    void shortcutOverrideOnReadonlyLineEdit_data();
    void shortcutOverrideOnReadonlyLineEdit();
    void QTBUG59957_clearButtonLeftmostAction();

    void QTBUG_60319_setInputMaskCheckImSurroundingText();

protected slots:
    void editingFinished();

    void onTextChanged( const QString &newString );
    void onTextEdited( const QString &newString );
    void onReturnPressed();
    void onSelectionChanged();
    void onCursorPositionChanged(int oldpos, int newpos);

private:
    // keyClicks(..) is moved to QtTestCase
    void psKeyClick(QWidget *target, Qt::Key key, Qt::KeyboardModifiers pressState = 0);
    void psKeyClick(QTestEventList &keys, Qt::Key key, Qt::KeyboardModifiers pressState = 0);
    bool unselectingWithLeftOrRightChangesCursorPosition();
    QLineEdit *ensureTestWidget();

    bool validInput;
    QString changed_string;
    int changed_count;
    int edited_count;
    int return_count;
    int selection_count;
    int lastCursorPos;
    int newCursorPos;
    QLineEdit *m_testWidget;
    int m_keyboardScheme;
    PlatformInputContext m_platformInputContext;
};



#if QT_CONFIG(completer)
class task198789_Widget : public QWidget
{
	Q_OBJECT
public:
	task198789_Widget(QWidget *parent = 0) : QWidget(parent)
	{
		QStringList wordList;
		wordList << "alpha" << "omega" << "omicron" << "zeta";

		lineEdit = new QLineEdit(this);
		completer = new QCompleter(wordList, this);
		lineEdit->setCompleter(completer);

		connect(lineEdit, SIGNAL(textChanged(QString)), this, SLOT(textChanged(QString)));
	}

	QLineEdit *lineEdit;
	QCompleter *completer;
	QString currentCompletion;

private slots:
	void textChanged(const QString &)
	{
		currentCompletion = completer->currentCompletion();
	}
};



#endif // QT_CONFIG(completer)
