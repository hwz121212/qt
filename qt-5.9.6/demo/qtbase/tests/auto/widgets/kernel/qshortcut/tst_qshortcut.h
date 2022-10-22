#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qapplication.h>
#include <qtextedit.h>
#include <qpushbutton.h>
#include <qmainwindow.h>
#include <qstatusbar.h>
#include <qboxlayout.h>
#include <qdebug.h>
#include <qstring.h>
#include <qshortcut.h>
#include <qscreen.h>

class AccelForm;
QT_BEGIN_NAMESPACE
class QMainWindow;
class QTextEdit;
QT_END_NAMESPACE

class tst_QShortcut : public QObject
{
    Q_OBJECT
public:
    tst_QShortcut();
    virtual ~tst_QShortcut();


    enum Action {
        SetupAccel,
        TestAccel,
        ClearAll
    } currentAction;

    enum Widget {
        NoWidget,
        TriggerSlot1,
        TriggerSlot2,
        TriggerSlot3,
        TriggerSlot4,
        TriggerSlot5,
        TriggerSlot6,
        TriggerSlot7,
        SendKeyEvent
    };

    enum Result {
        NoResult,
        Slot1Triggered,
        Slot2Triggered,
        Slot3Triggered,
        Slot4Triggered,
        Slot5Triggered,
        Slot6Triggered,
        Slot7Triggered,
        SentKeyEvent,
        Ambiguous
    } currentResult;

public slots:
    void slotTrig1() { currentResult = Slot1Triggered; }
    void slotTrig2() { currentResult = Slot2Triggered; }
    void slotTrig3() { currentResult = Slot3Triggered; }
    void slotTrig4() { currentResult = Slot4Triggered; }
    void slotTrig5() { currentResult = Slot5Triggered; }
    void slotTrig6() { currentResult = Slot6Triggered; }
    void slotTrig7() { currentResult = Slot7Triggered; }
    void ambigSlot1() { currentResult = Ambiguous; ambigResult = Slot1Triggered; }
    void ambigSlot2() { currentResult = Ambiguous; ambigResult = Slot2Triggered; }
    void ambigSlot3() { currentResult = Ambiguous; ambigResult = Slot3Triggered; }
    void ambigSlot4() { currentResult = Ambiguous; ambigResult = Slot4Triggered; }
    void ambigSlot5() { currentResult = Ambiguous; ambigResult = Slot5Triggered; }
    void ambigSlot6() { currentResult = Ambiguous; ambigResult = Slot6Triggered; }
    void ambigSlot7() { currentResult = Ambiguous; ambigResult = Slot7Triggered; }
    void statusMessage( const QString& message ) { sbText = message; }
    void shortcutDestroyed(QObject* obj);
    void sendKeyEvent() { sendKeyEvents(edit, Qt::CTRL + Qt::Key_B, 0); currentResult = SentKeyEvent; }

public slots:
    void initTestCase();
    void cleanupTestCase();
    void cleanup() { QCOMPARE(QApplication::topLevelWidgets().size(), 1); }

private slots:
    void number_data();
    void number();
    void text_data();
    void text();
    void disabledItems();
    void ambiguousItems();
    void ambiguousRotation();
    void keypressConsumption();
    void unicodeCompare();
    void context();
    void duplicatedShortcutOverride();

protected:
    static Qt::KeyboardModifiers toButtons( int key );
    void defElements();

    void clearAllShortcuts();
    QShortcut *setupShortcut(int testWidget, const QKeySequence &ks);
    QShortcut *setupShortcut(int testWidget, const QString &txt, int k1 = 0, int k2 = 0, int k3 = 0, int k4 = 0);

    QShortcut *setupShortcut(QWidget *parent, const char *name, int testWidget, const QString &txt, int k1 = 0, int k2 = 0, int k3 = 0, int k4 = 0);
    QShortcut *setupShortcut(QWidget *parent, const char *name, int testWidget, const QKeySequence &ks, Qt::ShortcutContext context = Qt::WindowShortcut);

    void sendKeyEvents(QWidget *w, int k1, QChar c1 = 0, int k2 = 0, QChar c2 = 0, int k3 = 0, QChar c3 = 0, int k4 = 0, QChar c4 = 0);
    void sendKeyEvents(int k1, QChar c1 = 0, int k2 = 0, QChar c2 = 0, int k3 = 0, QChar c3 = 0, int k4 = 0, QChar c4 = 0);

    void testElement();

    QMainWindow *mainW;
    QList<QShortcut*> shortcuts;
    QTextEdit *edit;
    QString sbText;
    Result ambigResult;
};

Q_DECLARE_METATYPE(tst_QShortcut::Widget);
Q_DECLARE_METATYPE(tst_QShortcut::Result);
Q_DECLARE_METATYPE(tst_QShortcut::Action);

class TestEdit : public QTextEdit
{
    Q_OBJECT
public:
    TestEdit(QWidget *parent, const char *name)
        : QTextEdit(parent)
    {
        setObjectName(name);
    }

protected:
    bool event(QEvent *e) {
        // Make testedit allow any Ctrl+Key as shortcut
        if (e->type() == QEvent::ShortcutOverride) {
            QKeyEvent *ke = static_cast<QKeyEvent*>(e);
            if (ke->modifiers() == Qt::ControlModifier
                && ke->key() > Qt::Key_Any
                && ke->key() < Qt::Key_ydiaeresis) {
                ke->ignore();
                return true;
            }
        }

        // If keypress not processed as normal, check for
        // Ctrl+Key event, and input custom string for
        // result comparison.
        if (e->type() == QEvent::KeyPress) {
            QKeyEvent *ke = static_cast<QKeyEvent*>(e);
            if (ke->modifiers() && ke->key() > Qt::Key_Any
                && ke->key() < Qt::Key_ydiaeresis) {
                const QChar c = QLatin1Char(char(ke->key()));
                if (ke->modifiers() == Qt::ControlModifier)
                    insertPlainText(QLatin1String("<Ctrl+") + c + QLatin1Char('>'));
                else if (ke->modifiers() == Qt::AltModifier)
                    insertPlainText(QLatin1String("<Alt+") + c + QLatin1Char('>'));
                else if (ke->modifiers() == Qt::ShiftModifier)
                    insertPlainText(QLatin1String("<Shift+") + c + QLatin1Char('>'));
                return true;
            }
        }
        return QTextEdit::event(e);
    }
};

