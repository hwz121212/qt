
#include <QApplication>
#include <QAxFactory>
#include <QTabWidget>
#include <QScopedPointer>
#include <QTimer>

#include "comapp_main.h"

//! [3]
Document::Document(DocumentList *list)
: QObject(list)
{
    QTabWidget *tabs = list->application()->window();
    m_page.reset(new QWidget(tabs));
    m_page->setWindowTitle(tr("Unnamed"));
    tabs->addTab(m_page.data(), m_page->windowTitle());

    m_page->show();
}

Document::~Document()
{
}

Application *Document::application() const
{
    return qobject_cast<DocumentList *>(parent())->application();
}

QString Document::title() const
{
    return m_page->windowTitle();
}

void Document::setTitle(const QString &t)
{
    m_page->setWindowTitle(t);

    QTabWidget *tabs = application()->window();
    int index = tabs->indexOf(m_page.data());
    tabs->setTabText(index, m_page->windowTitle());
}

//! [3] //! [4]
DocumentList::DocumentList(Application *application)
: QObject(application)
{
}

Application *DocumentList::application() const
{
    return qobject_cast<Application *>(parent());
}

int DocumentList::count() const
{
    return m_list.count();
}

Document *DocumentList::item(int index) const
{
    return m_list.value(index, nullptr);
}

Document *DocumentList::addDocument()
{
    Document *document = new Document(this);
    m_list.append(document);

    return document;
}

//! [4] //! [5]
Application::Application(QObject *parent)
: QObject(parent),
  m_ui(new QTabWidget),
  m_docs(new DocumentList(this))
{
    setObjectName(QStringLiteral("From QAxFactory"));
}

DocumentList *Application::documents() const
{
    return m_docs.data();
}

void Application::setVisible(bool on)
{
    m_ui->setVisible(on);
}

bool Application::isVisible() const
{
    return m_ui->isVisible();
}

void Application::quit()
{
    m_docs.reset();
    m_ui.reset();
    QTimer::singleShot(0 /*ms*/, qApp, &QCoreApplication::quit);
}

//#include "main.moc"
//! [5] //! [6]


QAXFACTORY_BEGIN("{edd3e836-f537-4c6f-be7d-6014c155cc7a}", "{b7da3de8-83bb-4bbe-9ab7-99a05819e201}")
   QAXCLASS(Application)
   QAXTYPE(Document)
   QAXTYPE(DocumentList)
QAXFACTORY_END()

//! [6] //! [7]
int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);
    app.setQuitOnLastWindowClosed(false);

    // started by COM - don't do anything
    if (QAxFactory::isServer())
        return app.exec();

    // started by user
    Application appobject;
    appobject.setObjectName(QStringLiteral("From Application"));

    QAxFactory::startServer();
    QAxFactory::registerActiveObject(&appobject);

    appobject.window()->setMinimumSize(300, 100);
    appobject.setVisible(true);

    QObject::connect(&app, &QGuiApplication::lastWindowClosed, &appobject, &Application::quit);

    return app.exec();
}
//! [7]
