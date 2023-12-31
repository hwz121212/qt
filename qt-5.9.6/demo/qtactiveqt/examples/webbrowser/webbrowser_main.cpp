#include <QApplication>
#include <QMessageBox>
#include <QProgressBar>
#include <QLineEdit>
#include <QLabel>
#include <QStatusBar>
#include <QMainWindow>
#include <QDesktopWidget>
#include <QAbstractEventDispatcher>
#include <QSignalMapper>
#include <QVariant>
#include <QSettings>

#include "webbrowser_main.h"



static const char qtUrl[] = "qt.io";
static const char iWebBrowser2DocumentationUrl[] = "http://msdn.microsoft.com/en-us/library/aa752127%28v=vs.85%29.aspx";
static const char versionKey[] = "Version";
static const char geometryKey[] = "Geometry";



Q_DECLARE_METATYPE(Location)

static QList<Location> defaultBookmarks()
{
	QList<Location> result;
	result.append(Location(QStringLiteral("Qt"), QLatin1String(qtUrl)));
	result.append(Location(QStringLiteral("Digia"), QStringLiteral("http://qt.digia.com/")));
	result.append(Location(QStringLiteral("IWebBrowser2 MSDN Documentation"), QLatin1String(iWebBrowser2DocumentationUrl)));
	return result;
}

static bool containsAddress(const QList<Location> &locations, const QString &address)
{
	for (const Location &location : locations) {
		if (location.address == address)
			return true;
	}
	return false;
}

static inline Location locationFromAction(const QAction *action)
{
	return action->data().value<Location>();
}

static QList<Location> readBookMarks(QSettings &settings)
{
	QList<Location> result;
	if (const int count = settings.beginReadArray(QStringLiteral("Bookmarks"))) {
		const QString titleKey = QStringLiteral("title");
		const QString addressKey = QStringLiteral("address");
		for (int i = 0; i < count; ++i) {
			settings.setArrayIndex(i);
			result.append(Location(settings.value(titleKey).toString(),
				settings.value(addressKey).toString()));
		}
	}
	settings.endArray();
	return result;
}

static void saveBookMarks(const QList<Location> &bookmarks, QSettings &settings)
{
	const int count = bookmarks.size();
	settings.beginWriteArray(QStringLiteral("Bookmarks"));
	const QString titleKey = QStringLiteral("title");
	const QString addressKey = QStringLiteral("address");
	for (int i = 0; i < count; ++i) {
		settings.setArrayIndex(i);
		settings.setValue(titleKey, bookmarks.at(i).title);
		settings.setValue(addressKey, bookmarks.at(i).address);
	}
	settings.endArray();
}




MainWindow::MainWindow()
{
    setupUi(this);

    m_addressEdit = new QLineEdit;
    tbAddress->insertWidget(actionGo, new QLabel(tr("Address")));
    tbAddress->insertWidget(actionGo, m_addressEdit);

    connect(m_addressEdit, SIGNAL(returnPressed()), actionGo, SLOT(trigger()));

    connect(actionBack, SIGNAL(triggered()), WebBrowser, SLOT(GoBack()));
    connect(actionForward, SIGNAL(triggered()), WebBrowser, SLOT(GoForward()));
    connect(actionStop, SIGNAL(triggered()), WebBrowser, SLOT(Stop()));
    connect(actionRefresh, SIGNAL(triggered()), WebBrowser, SLOT(Refresh()));
    connect(actionHome, SIGNAL(triggered()), WebBrowser, SLOT(GoHome()));
    connect(actionSearch, SIGNAL(triggered()), WebBrowser, SLOT(GoSearch()));

    m_progressBar = new QProgressBar(statusBar());
    m_progressBar->setTextVisible(false);
    m_progressBar->hide();
    statusBar()->addPermanentWidget(m_progressBar);

    connect(&m_locationActionMapper, QOverload<const QString &>::of(&QSignalMapper::mapped), this, &MainWindow::navigate);

    QSettings settings(QSettings::IniFormat, QSettings::UserScope,
                       QCoreApplication::organizationName(), QCoreApplication::applicationName());
    const QByteArray restoredGeometry = settings.value(QLatin1String(geometryKey)).toByteArray();
    if (restoredGeometry.isEmpty() || !restoreGeometry(restoredGeometry)) {
        const QRect availableGeometry = QApplication::desktop()->availableGeometry(this);
        const QSize size = (availableGeometry.size() * 4) / 5;
        resize(size);
        move(availableGeometry.center() - QPoint(size.width(), size.height()) / 2);
    }
    const QString restoredVersion = settings.value(QLatin1String(versionKey)).toString();
    QList<Location> bookmarks = readBookMarks(settings);
    if (bookmarks.isEmpty() || restoredVersion.isEmpty())
        bookmarks = defaultBookmarks();
    for (const Location &bookmark : qAsConst(bookmarks))
        addBookmark(bookmark);
}

//! [1]

MainWindow::~MainWindow()
{
    QSettings settings(QSettings::IniFormat, QSettings::UserScope,
                       QCoreApplication::organizationName(), QCoreApplication::applicationName());
    saveBookMarks(bookmarks(), settings);
    settings.setValue(QLatin1String(versionKey), QLatin1String(QT_VERSION_STR));
    settings.setValue(QLatin1String(geometryKey), saveGeometry());
}

QAction *MainWindow::addLocation(const Location &location, QMenu *menu)
{
    QAction *action = menu->addAction(location.title);
    action->setData(QVariant::fromValue(location));
    m_locationActionMapper.setMapping(action, location.address);
    connect(action, &QAction::triggered, &m_locationActionMapper, QOverload<>::of(&QSignalMapper::map));
    return action;
}

QList<Location> MainWindow::bookmarks() const
{
    QList<Location> result;
    for (const QAction *action : qAsConst(m_bookmarkActions))
        result.append(locationFromAction(action));
    return result;
}

void MainWindow::on_actionAddBookmark_triggered()
{
    if (!m_historyActions.isEmpty()) {
        const Location location = locationFromAction(m_historyActions.last());
        if (!containsAddress(bookmarks(), location.address))
            addBookmark(location);
    }
}

//! [2]
void MainWindow::on_WebBrowser_TitleChange(const QString &title)
{
    // This is called multiple times after NavigateComplete().
    // Add new URLs to history here.
    setWindowTitle(tr("Qt WebBrowser - ") + title);
    const QString currentAddress = address();
    const QString historyAddress = m_historyActions.isEmpty() ?
        QString() : locationFromAction(m_historyActions.last()).address;
    if (currentAddress.isEmpty() || currentAddress == QStringLiteral("about:blank") || currentAddress == historyAddress)
        return;
    m_historyActions << addLocation(Location(title, currentAddress), HistoryMenu);
    if (m_historyActions.size() > 10)
        delete m_historyActions.takeFirst();
}

void MainWindow::on_WebBrowser_ProgressChange(int a, int b)
{
    if (a <= 0 || b <= 0) {
        m_progressBar->hide();
        return;
    }
    m_progressBar->setRange(0, b);
    m_progressBar->setValue(a);
    m_progressBar->show();
}

void MainWindow::on_WebBrowser_CommandStateChange(int cmd, bool on)
{
    switch (cmd) {
    case 1:
        actionForward->setEnabled(on);
        break;
    case 2:
        actionBack->setEnabled(on);
        break;
    }
}

void MainWindow::on_WebBrowser_BeforeNavigate()
{
    actionStop->setEnabled(true);
}

void MainWindow::on_WebBrowser_NavigateComplete(const QString &url)
{
    QSignalBlocker blocker(m_addressEdit);
    actionStop->setEnabled(false);
    m_addressEdit->setText(url);
}

//! [3]
void MainWindow::on_actionGo_triggered()
{
    navigate(address());
}

//! [2]

void MainWindow::navigate(const QString &url)
{
    WebBrowser->dynamicCall("Navigate(const QString&)", url);
}

void MainWindow::on_actionNewWindow_triggered()
{
    MainWindow *window = new MainWindow;
    window->show();
    if (m_addressEdit->text().isEmpty())
        return;
    window->m_addressEdit->setText(m_addressEdit->text());
    window->actionStop->setEnabled(true);
    window->on_actionGo_triggered();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this, tr("About WebBrowser"),
                       tr("This Example has been created using the ActiveQt integration into Qt Designer.\n"
                       "It demonstrates the use of QAxWidget to embed the Internet Explorer ActiveX\n"
                       "control into a Qt application."));
}

void MainWindow::on_actionAboutQt_triggered()
{
    QMessageBox::aboutQt(this, tr("About Qt"));
}

void MainWindow::on_actionFileClose_triggered()
{
    close();
}


//! [3] //! [4]
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCoreApplication::setApplicationVersion(QT_VERSION_STR);
    QCoreApplication::setApplicationName(QStringLiteral("Active Qt Web Browser"));
    QCoreApplication::setOrganizationName(QStringLiteral("QtProject"));
    MainWindow w;
    const auto &arguments = QCoreApplication::arguments();
    const QString url = arguments.value(1, QString::fromLatin1(qtUrl));
    w.navigate(url);
    w.show();
    return a.exec();
}
//! [4]
