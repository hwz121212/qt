#pragma once

#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>

#include <qcoreapplication.h>
#include <qfile.h>
#include <qdebug.h>
#include <qsharedpointer.h>
#include <qfiledialog.h>
#include <qabstractitemdelegate.h>
#include <qdirmodel.h>
#include <qitemdelegate.h>
#include <qlistview.h>
#include <qcombobox.h>
#include <qpushbutton.h>
#include <qtoolbutton.h>
#include <qtreeview.h>
#include <qheaderview.h>
#include <qcompleter.h>
#include <qaction.h>
#include <qdialogbuttonbox.h>
#include <qsortfilterproxymodel.h>
#include <qlineedit.h>
#include <qlayout.h>
#include <private/qfiledialog_p.h>
#if defined QT_BUILD_INTERNAL
#include <private/qsidebar_p.h>
#include <private/qfilesystemmodel_p.h>
#endif
#include <private/qguiapplication_p.h>
#include <qpa/qplatformtheme.h>
#include <QFileDialog>
#include <QFileSystemModel>

#if defined(Q_OS_UNIX)
#include <unistd.h> // for pathconf() on OS X
#ifdef QT_BUILD_INTERNAL
QT_BEGIN_NAMESPACE
extern Q_GUI_EXPORT QString qt_tildeExpansion(const QString &path);
QT_END_NAMESPACE
#endif
#endif


class tst_QFiledialog : public QObject
{
Q_OBJECT

private slots:
    void initTestCase();
    void init();
    void cleanup();
    void currentChangedSignal();
#ifdef QT_BUILD_INTERNAL
    void directoryEnteredSignal();
#endif
    void filesSelectedSignal_data();
    void filesSelectedSignal();
    void filterSelectedSignal();

    void args();
    void directory();
    void completer_data();
    void completer();
    void completer_up();
    void acceptMode();
    void confirmOverwrite();
    void defaultSuffix();
    void fileMode();
    void filters();
    void history();
    void iconProvider();
    void isReadOnly();
    void itemDelegate();
    void labelText();
    void resolveSymlinks();
    void selectFile_data();
    void selectFile();
    void selectFiles();
    void selectFileWrongCaseSaveAs();
    void selectFilter();
    void viewMode();
    void proxymodel();
    void setMimeTypeFilters_data();
    void setMimeTypeFilters();
    void setNameFilter_data();
    void setNameFilter();
    void setEmptyNameFilter();
    void focus();
    void caption();
    void historyBack();
    void historyForward();
    void disableSaveButton_data();
    void disableSaveButton();
    void saveButtonText_data();
    void saveButtonText();
    void clearLineEdit();
    void enableChooseButton();
    void selectedFilesWithoutWidgets();
    void trailingDotsAndSpaces();
#ifdef Q_OS_UNIX
#ifdef QT_BUILD_INTERNAL
    void tildeExpansion_data();
    void tildeExpansion();
#endif // QT_BUILD_INTERNAL
#endif
    void rejectModalDialogs();
    void QTBUG49600_nativeIconProviderCrash();
    void focusObjectDuringDestruction();

    // NOTE: Please keep widgetlessNativeDialog() as the LAST test!
    //
    // widgetlessNativeDialog() is the only test function that creates
    // a native file dialog instance. GTK+ versions prior 3.15.5 have
    // a nasty bug (https://bugzilla.gnome.org/show_bug.cgi?id=725164)
    // in GtkFileChooserWidget, which makes it leak its folder change
    // callback, causing a crash "at some point later". Running the
    // native test last is enough to avoid spinning the event loop after
    // the test, and that way circumvent the crash.
    //
    // The crash has been fixed in GTK+ 3.15.5, but the RHEL 7.2 CI has
    // GTK+ 3.14.13 installed (QTBUG-55276).
    void widgetlessNativeDialog();

private:
    void cleanupSettingsFile();
};



class DialogRejecter : public QObject
{
	Q_OBJECT
public:
	DialogRejecter()
	{
		connect(qApp, &QApplication::focusChanged, this, &DialogRejecter::rejectFileDialog);
	}

public slots:
	virtual void rejectFileDialog()
	{
		if (QWidget *w = QApplication::activeModalWidget())
			if (QDialog *d = qobject_cast<QDialog *>(w))
				QTest::keyClick(d, Qt::Key_Escape);
	}
};

