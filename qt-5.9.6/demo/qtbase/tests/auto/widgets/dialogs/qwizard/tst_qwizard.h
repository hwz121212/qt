#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QFont>
#include <QtTest/QtTest>
#include <QCheckBox>
#include <QLabel>
#include <QLineEdit>
#include <QList>
#include <QPushButton>
#include <QToolButton>
#include <QVBoxLayout>
#include <QWizard>
#include <QTreeWidget>
#include <QScreen>

Q_DECLARE_METATYPE(QWizard::WizardButton);

class tst_QWizard : public QObject
{
    Q_OBJECT

private slots:
    void cleanup();
    void buttonText();
    void setButtonLayout();
    void setButton();
    void setTitleFormatEtc();
    void setPixmap();
    void setDefaultProperty();
    void addPage();
    void setPage();
    void setStartId();
    void setOption_IndependentPages();
    void setOption_IgnoreSubTitles();
    void setOption_ExtendedWatermarkPixmap();
    void setOption_NoDefaultButton();
    void setOption_NoBackButtonOnStartPage();
    void setOption_NoBackButtonOnLastPage();
    void setOption_DisabledBackButtonOnLastPage();
    void setOption_HaveNextButtonOnLastPage();
    void setOption_HaveFinishButtonOnEarlyPages();
    void setOption_NoCancelButton();
    void setOption_NoCancelButtonOnLastPage();
    void setOption_CancelButtonOnLeft();
    void setOption_HaveHelpButton();
    void setOption_HelpButtonOnRight();
    void setOption_HaveCustomButtonX();
    void combinations_data();
    void combinations();
    void showCurrentPageOnly();
    void setButtonText();
    void setCommitPage();
    void setWizardStyle();
    void removePage();
    void sideWidget();
    void objectNames_data();
    void objectNames();

    // task-specific tests below me:
    void task177716_disableCommitButton();
    void task183550_stretchFactor();
    void task161658_alignments();
    void task177022_setFixedSize();
    void task248107_backButton();
    void task255350_fieldObjectDestroyed();
    void taskQTBUG_25691_fieldObjectDestroyed2();
    void taskQTBUG_46894_nextButtonShortcut();

    /*
        Things that could be added:

        1. Test virtual functions that are called, signals that are
           emitted, etc.

        2. Test QWizardPage more thorougly.

        3. Test the look and field a bit more (especially the
           different wizard styles, and how they interact with
           pixmaps, titles, subtitles, etc.).

        4. Test minimum sizes, sizes, maximum sizes, resizing, etc.

        5. Try setting various options and wizard styles in various
           orders and check that the results are the same every time,
           no matter the order in which the properties were set.

           -> Initial version done (tst_QWizard::combinations())

        6. Test done() and restart().

        7. Test default properties of built-in widgets.

        8. Test mutual exclusiveness of Next and Commit buttons.
    */
};


class Operation
{
public:
	virtual void apply(QWizard *) const = 0;
	virtual QString describe() const = 0;
protected:
	virtual ~Operation() {}
};

class SetPage : public Operation
{
	void apply(QWizard *wizard) const
	{
		wizard->restart();
		for (int j = 0; j < page; ++j)
			wizard->next();
	}
	QString describe() const { return QLatin1String("set page ") + QString::number(page); }
	int page;
public:
	static QSharedPointer<SetPage> create(int page)
	{
		QSharedPointer<SetPage> o = QSharedPointer<SetPage>::create();
		o->page = page;
		return o;
	}
};

class SetStyle : public Operation
{
	void apply(QWizard *wizard) const { wizard->setWizardStyle(style); }
	QString describe() const { return QLatin1String("set style ") + QString::number(style); }
	QWizard::WizardStyle style;
public:
	static QSharedPointer<SetStyle> create(QWizard::WizardStyle style)
	{
		QSharedPointer<SetStyle> o = QSharedPointer<SetStyle>::create();
		o->style = style;
		return o;
	}
};

class SetOption : public Operation
{
	void apply(QWizard *wizard) const { wizard->setOption(option, on); }
	QString describe() const;
	QWizard::WizardOption option;
	bool on;
public:
	static QSharedPointer<SetOption> create(QWizard::WizardOption option, bool on)
	{
		QSharedPointer<SetOption> o = QSharedPointer<SetOption>::create();
		o->option = option;
		o->on = on;
		return o;
	}
};



class IntroPage : public QWizardPage
{
	Q_OBJECT
public:
	IntroPage()
	{
		setTitle(tr("Intro"));
		setSubTitle(tr("Intro Subtitle"));
		QVBoxLayout *layout = new QVBoxLayout;
		layout->addWidget(new QLabel(tr("Intro Label")));
		setLayout(layout);
	}
};

class MiddlePage : public QWizardPage
{
	Q_OBJECT
public:
	MiddlePage()
	{
		setTitle(tr("Middle"));
		setSubTitle(tr("Middle Subtitle"));
		QVBoxLayout *layout = new QVBoxLayout;
		layout->addWidget(new QLabel(tr("Middle Label")));
		setLayout(layout);
	}
};

class ConclusionPage : public QWizardPage
{
	Q_OBJECT
public:
	ConclusionPage()
	{
		setTitle(tr("Conclusion"));
		setSubTitle(tr("Conclusion Subtitle"));
		QVBoxLayout *layout = new QVBoxLayout;
		layout->addWidget(new QLabel(tr("Conclusion Label")));
		setLayout(layout);
	}
};

class TestWizard : public QWizard
{
	Q_OBJECT
		QList<int> pageIds;
	QString opsDescr;
public:
	TestWizard()
	{
		setPixmap(QWizard::BannerPixmap, QPixmap(":/images/banner.png"));
		setPixmap(QWizard::BackgroundPixmap, QPixmap(":/images/background.png"));
		setPixmap(QWizard::WatermarkPixmap, QPixmap(":/images/watermark.png"));
		setPixmap(QWizard::LogoPixmap, QPixmap(":/images/logo.png"));
		setButtonText(QWizard::CustomButton1, "custom 1");
		setButtonText(QWizard::CustomButton2, "custom 2");
		setButtonText(QWizard::CustomButton3, "custom 3");
		pageIds << addPage(new IntroPage);
		pageIds << addPage(new MiddlePage);
		pageIds << addPage(new ConclusionPage);

		// Disable antialiased font rendering since this may sometimes result in tiny
		// and (apparent) non-deterministic pixel variations between images expected to be
		// identical. This may only be a problem on X11.
		QFont f = font();
		f.setStyleStrategy(QFont::NoAntialias);
		setFont(f);

		// ### Required to work with a deficiency(?) in QWizard:
//        setFixedSize(800, 600);
	}

	~TestWizard()
	{
		foreach(int id, pageIds) {
			QWizardPage *page_to_delete = page(id);
			removePage(id);
			delete page_to_delete;
		}
	}

	void applyOperations(const QVector<QSharedPointer<Operation> > &operations)
	{
		foreach(const QSharedPointer<Operation> &op, operations) {
			if (op) {
				op->apply(this);
				opsDescr += QLatin1Char('(') + op->describe() + QLatin1String(") ");
			}
		}
	}

	QImage createImage() const
	{
		return const_cast<TestWizard *>(this)->grab()
			.toImage().convertToFormat(QImage::Format_ARGB32);
	}

	QString operationsDescription() const { return opsDescr; }
};



class WizardPage : public QWizardPage
{
	Q_OBJECT
		bool shown_;
	void showEvent(QShowEvent *) { shown_ = true; }
	void hideEvent(QHideEvent *) { shown_ = false; }
public:
	WizardPage() : shown_(false) {}
	bool shown() const { return shown_; }
};



class task177716_CommitPage : public QWizardPage
{
	Q_OBJECT
public:
	task177716_CommitPage()
	{
		setCommitPage(true);
		QVBoxLayout *layout = new QVBoxLayout;
		ledit = new QLineEdit(this);
		registerField("foo*", ledit);
		layout->addWidget(ledit);
		setLayout(layout);
	}
	QLineEdit *ledit;
};
