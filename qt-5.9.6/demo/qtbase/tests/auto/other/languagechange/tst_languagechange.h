#pragma once


#include <QtTest/QtTest>

#include <qapplication.h>
#include <private/qguiapplication_p.h>
#include <QtCore/QSet>
#include <QtCore/QFile>
#include <QtCore/QTranslator>
#include <QtCore/QTemporaryDir>
#include <private/qthread_p.h>
#include <qpa/qplatformtheme.h>
#include <QtWidgets/QInputDialog>
#include <QtWidgets/QColorDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QDesktopWidget>

class tst_languageChange : public QObject
{
    Q_OBJECT
public:
    tst_languageChange();

public slots:
    void initTestCase();
    void cleanupTestCase();
private slots:
    void retranslatability_data();
    void retranslatability();

private:
    QDialogButtonBox::ButtonLayout m_layout;
};


/**
 * Records all calls to translate()
 */
class TransformTranslator : public QTranslator
{
	Q_OBJECT
public:
	TransformTranslator() : QTranslator() {}
	TransformTranslator(QObject *parent) : QTranslator(parent) {}
	QString translate(const char *context, const char *sourceText,
		const char *disambiguation = 0, int = -1) const
	{
		QByteArray total(context);
		total.append("::");
		total.append(sourceText);
		if (disambiguation) {
			total.append("::");
			total.append(disambiguation);
		}
		m_translations.insert(total);
		QString res;
		for (int i = 0; i < int(qstrlen(sourceText)); ++i) {
			QChar ch = QLatin1Char(sourceText[i]);
			if (ch.isLower()) {
				res.append(ch.toUpper());
			}
			else if (ch.isUpper()) {
				res.append(ch.toLower());
			}
			else {
				res.append(ch);
			}
		}
		return res;
	}

	virtual bool isEmpty() const { return false; }

public:
	mutable QSet<QByteArray> m_translations;
};

// Install the translator and close all application windows after a while to
// quit the event loop.
class LanguageTestStateMachine : public QObject
{
	Q_OBJECT
public:
	LanguageTestStateMachine(QTranslator *translator);
	void start() { m_timer.start(); }

private slots:
	void timeout();

private:
	enum State { InstallTranslator, CloseDialog };

	QTimer m_timer;
	QTranslator *m_translator;
	State m_state;
};
