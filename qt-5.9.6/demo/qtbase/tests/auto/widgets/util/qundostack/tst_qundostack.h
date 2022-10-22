#pragma once


#include <QtTest/QtTest>
#include <QAction>
#include <QUndoStack>

/******************************************************************************
** Commands
*/

class InsertCommand : public QUndoCommand
{
public:
    InsertCommand(QString *str, int idx, const QString &text,
                    QUndoCommand *parent = 0);

    virtual void undo();
    virtual void redo();

private:
    QString *m_str;
    int m_idx;
    QString m_text;
};

class RemoveCommand : public QUndoCommand
{
public:
    RemoveCommand(QString *str, int idx, int len, QUndoCommand *parent = 0);

    virtual void undo();
    virtual void redo();

private:
    QString *m_str;
    int m_idx;
    QString m_text;
};

class AppendCommand : public QUndoCommand
{
public:
    AppendCommand(QString *str, const QString &text, bool _fail_merge = false,
                    QUndoCommand *parent = 0);
    ~AppendCommand();

    virtual void undo();
    virtual void redo();
    virtual int id() const;
    virtual bool mergeWith(const QUndoCommand *other);

    bool merged;
    bool fail_merge;
    static int delete_cnt;

private:
    QString *m_str;
    QString m_text;
};

class IdleCommand : public QUndoCommand
{
public:
    IdleCommand(QUndoCommand *parent = 0);
    ~IdleCommand();

    virtual void undo();
    virtual void redo();
};

class MoveMouseCommand : public QUndoCommand
{
public:
    MoveMouseCommand(QPoint *mouse, QPoint oldPoint, QPoint newPoint, QUndoCommand *parent = 0);
    ~MoveMouseCommand();

    virtual void undo();
    virtual void redo();
    virtual int id() const;
    virtual bool mergeWith(const QUndoCommand *other);

private:
    QPoint *m_mouse;
    QPoint m_oldPoint;
    QPoint m_newPoint;
};




class tst_QUndoStack : public QObject
{
	Q_OBJECT
public:
	tst_QUndoStack();

private slots:
	void undoRedo();
	void setIndex();
	void setClean();
	void clear();
	void childCommand();
	void macroBeginEnd();
	void compression();
	void obsolete();
	void undoLimit();
	void commandTextFormat();
	void separateUndoText();
};