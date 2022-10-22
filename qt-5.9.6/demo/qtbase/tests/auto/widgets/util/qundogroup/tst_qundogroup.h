#pragma once


#include <QtTest/QtTest>
#include <QUndoGroup>
#include <QUndoStack>
#include <QAction>


// Temporarily disabling IRIX due to build issuues with GCC
#if defined(__sgi) && defined(__GNUC__)

class tst_QUndoGroup : public QObject
{
	Q_OBJECT
public:
	tst_QUndoGroup() {}

private slots:
	void setActive() { QSKIP("Not tested on irix-g++"); }
	void addRemoveStack() { QSKIP("Not tested on irix-g++"); }
	void deleteStack() { QSKIP("Not tested on irix-g++"); }
	void checkSignals() { QSKIP("Not tested on irix-g++"); }
	void addStackAndDie() { QSKIP("Not tested on irix-g++"); }
};
#else

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
	AppendCommand(QString *str, const QString &text, QUndoCommand *parent = 0);

	virtual void undo();
	virtual void redo();
	virtual int id() const;
	virtual bool mergeWith(const QUndoCommand *other);

	bool merged;

private:
	QString *m_str;
	QString m_text;
};


/******************************************************************************
** tst_QUndoStack
*/

class tst_QUndoGroup : public QObject
{
	Q_OBJECT
public:
	tst_QUndoGroup();

private slots:
	void setActive();
	void addRemoveStack();
	void deleteStack();
	void checkSignals();
	void addStackAndDie();
	void commandTextFormat();
};


#endif // !(SGI && GCC)