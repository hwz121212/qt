#pragma once

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
#include <QList>



#include "ui_mainwindow.h"


struct Location 
{
	Location(const QString &t = QString(), const QString &a = QString()) : title(t), address(a) {}

	QString title;
	QString address;
};

//! [0]
class MainWindow : public QMainWindow, public Ui::MainWindow
{
    Q_OBJECT
public:
    explicit MainWindow();
    virtual ~MainWindow();

public slots:
    void navigate(const QString &address);
    void on_WebBrowser_TitleChange(const QString &title);
    void on_WebBrowser_ProgressChange(int a, int b);
    void on_WebBrowser_CommandStateChange(int cmd, bool on);
    void on_WebBrowser_BeforeNavigate();
    void on_WebBrowser_NavigateComplete(const QString &address);

    void on_actionGo_triggered();
    void on_actionNewWindow_triggered();
    void on_actionAddBookmark_triggered();
    void on_actionAbout_triggered();
    void on_actionAboutQt_triggered();
    void on_actionFileClose_triggered();

private:
    inline const QString address() const
        { return m_addressEdit->text().trimmed(); }
    QList<Location> bookmarks() const;
    QAction *addLocation(const Location &location, QMenu *menu);
    inline void addBookmark(const Location &location)
        { m_bookmarkActions << addLocation(location, BookmarksMenu); }

    QProgressBar *m_progressBar;
    QLineEdit *m_addressEdit;
    QList<QAction *> m_bookmarkActions;
    QList<QAction *> m_historyActions;
    QSignalMapper m_locationActionMapper;
};
//! [0] //! [1]
