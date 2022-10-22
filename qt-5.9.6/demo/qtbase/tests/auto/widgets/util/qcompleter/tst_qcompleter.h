#pragma once



#define QT_GUI_LIB
#define QT_WIDGETS_LIB


#include <QtTest/QtTest>
#include <QtGui>
#include <QtWidgets>
#include <QtDebug>
#include <QPair>
#include <QList>
#include <QPointer>

#include <QtTest/private/qtesthelpers_p.h>

#include "../../../../shared/filesystem.h"

using namespace QTestPrivate;

class CsvCompleter : public QCompleter
{
    Q_OBJECT
public:
    CsvCompleter(QObject *parent = 0) : QCompleter(parent), csv(true) { }

    QString pathFromIndex(const QModelIndex& sourceIndex) const;

    void setCsvCompletion(bool set) { csv = set; }

protected:
    QStringList splitPath(const QString &path) const {
        return csv ? path.split(QLatin1Char(',')) : QCompleter::splitPath(path);
    }

private:
    bool csv;
};



class tst_QCompleter : public QObject
{
	Q_OBJECT
public:
	tst_QCompleter();
	~tst_QCompleter();

private slots:
	void getSetCheck();

	void multipleWidgets();
	void focusIn();

	void csMatchingOnCsSortedModel_data();
	void csMatchingOnCsSortedModel();
	void ciMatchingOnCiSortedModel_data();
	void ciMatchingOnCiSortedModel();

	void ciMatchingOnCsSortedModel_data();
	void ciMatchingOnCsSortedModel();
	void csMatchingOnCiSortedModel_data();
	void csMatchingOnCiSortedModel();

	void directoryModel_data();
	void directoryModel();
	void fileSystemModel_data();
	void fileSystemModel();

	void changingModel_data();
	void changingModel();

	void sortedEngineRowCount_data();
	void sortedEngineRowCount();
	void unsortedEngineRowCount_data();
	void unsortedEngineRowCount();

	void currentRow();
	void sortedEngineMapFromSource();
	void unsortedEngineMapFromSource();

	void historySearch();

	void modelDeletion();
	void setters();

	void dynamicSortOrder();
	void disabledItems();

	// task-specific tests below me
	void task178797_activatedOnReturn();
	void task189564_omitNonSelectableItems();
	void task246056_setCompletionPrefix();
	void task250064_lostFocus();

	void task253125_lineEditCompletion_data();
	void task253125_lineEditCompletion();
	void task247560_keyboardNavigation();
	void QTBUG_14292_filesystem();
	void QTBUG_52028_tabAutoCompletes();
	void QTBUG_51889_activatedSentTwice();

private:
	void filter(bool assync = false);
	void testRowCount();
	enum ModelType {
		CASE_SENSITIVELY_SORTED_MODEL,
		CASE_INSENSITIVELY_SORTED_MODEL,
		DIRECTORY_MODEL,
		HISTORY_MODEL,
		FILESYSTEM_MODEL
	};
	void setSourceModel(ModelType);

	CsvCompleter *completer;
	QTreeWidget *treeWidget;
	const int completionColumn;
	const int columnCount;
};



class task246056_ComboBox : public QComboBox
{
	Q_OBJECT
public:
	task246056_ComboBox()
	{
		setEditable(true);
		setInsertPolicy(NoInsert);
		if (completer()) {
			completer()->setCompletionMode(QCompleter::PopupCompletion);
			completer()->setCompletionRole(Qt::DisplayRole);
			connect(lineEdit(), &QLineEdit::editingFinished, this, &task246056_ComboBox::setCompletionPrefix);
		}
	}
private slots:
	void setCompletionPrefix() { completer()->setCompletionPrefix(lineEdit()->text()); }
};


class task250064_TextEdit : public QTextEdit
{
public:
	QCompleter *completer;

	task250064_TextEdit()
	{
		completer = new QCompleter(this);
		completer->setWidget(this);
	}

	void keyPressEvent(QKeyEvent *e)
	{
		completer->popup();
		QTextEdit::keyPressEvent(e);
	}
};


class task250064_Widget : public QWidget
{
	Q_OBJECT
public:
	task250064_Widget() : m_textEdit(new task250064_TextEdit)
	{
		QTabWidget *tabWidget = new QTabWidget;
		tabWidget->setFocusPolicy(Qt::ClickFocus);
		tabWidget->addTab(m_textEdit, "untitled");

		QVBoxLayout *layout = new QVBoxLayout(this);
		layout->addWidget(tabWidget);

		m_textEdit->setPlainText("bla bla bla");
		m_textEdit->setFocus();
	}

	void setCompletionModel()
	{
		m_textEdit->completer->setModel(0);
	}

	QTextEdit *textEdit() const { return m_textEdit; }

private:
	task250064_TextEdit *m_textEdit;
};
