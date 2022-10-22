#pragma once

#define QT_GUI_LIB
#define QT_WIDGETS_LIB
#include <QtTest/QtTest>

#include <qcoreapplication.h>
#include <qdebug.h>
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
#include <qmenu.h>
#include "qsidebar_p.h"
#include "qfilesystemmodel_p.h"
#include "qfiledialog_p.h"

#include <qpa/qplatformdialoghelper.h>

#if defined(Q_OS_WIN)
#include "../../../network-settings.h"
#endif

#if defined QT_BUILD_INTERNAL
QT_BEGIN_NAMESPACE
Q_GUI_EXPORT bool qt_test_isFetchedRoot();
Q_GUI_EXPORT void qt_test_resetFetchedRoot();
QT_END_NAMESPACE
#endif


class tst_QFileDialog2 : public QObject
{
Q_OBJECT

public:
    tst_QFileDialog2();

private slots:
    void initTestCase();
    void init();
    void cleanup();

#ifdef QT_BUILD_INTERNAL
    void deleteDirAndFiles();
    void listRoot();
    void task227304_proxyOnFileDialog();
    void task236402_dontWatchDeletedDir();
    void task251321_sideBarHiddenEntries();
    void task251341_sideBarRemoveEntries();
    void task257579_sideBarWithNonCleanUrls();
#endif
    void heapCorruption();
    void filter();
    void showNameFilterDetails();
    void unc();
    void emptyUncPath();

#if !defined(QT_NO_CONTEXTMENU) && !defined(QT_NO_MENU)
    void task143519_deleteAndRenameActionBehavior();
#endif
    void task178897_minimumSize();
    void task180459_lastDirectory_data();
    void task180459_lastDirectory();
#ifndef Q_OS_MAC
    void task227930_correctNavigationKeyboardBehavior();
#endif
#if defined(Q_OS_WIN)
    void task226366_lowerCaseHardDriveWindows();
#endif
    void completionOnLevelAfterRoot();
    void task233037_selectingDirectory();
    void task235069_hideOnEscape_data();
    void task235069_hideOnEscape();
    void task203703_returnProperSeparator();
    void task228844_ensurePreviousSorting();
    void task239706_editableFilterCombo();
    void task218353_relativePaths();
    void task254490_selectFileMultipleTimes();
    void task259105_filtersCornerCases();

    void QTBUG4419_lineEditSelectAll();
    void QTBUG6558_showDirsOnly();
    void QTBUG4842_selectFilterWithHideNameFilterDetails();
    void dontShowCompleterOnRoot();
    void nameFilterParsing_data();
    void nameFilterParsing();

private:
    void cleanupSettingsFile();

    QTemporaryDir tempDir;
};



class sortProxy : public QSortFilterProxyModel
{
public:
	sortProxy(QObject *parent) : QSortFilterProxyModel(parent)
	{
	}
protected:
	virtual bool lessThan(const QModelIndex &left, const QModelIndex &right) const
	{
		QFileSystemModel * const model = qobject_cast<QFileSystemModel *>(sourceModel());
		const QFileInfo leftInfo(model->fileInfo(left));
		const QFileInfo rightInfo(model->fileInfo(right));

		if (leftInfo.isDir() == rightInfo.isDir())
			return(leftInfo.filePath().compare(rightInfo.filePath(), Qt::CaseInsensitive) < 0);
		else if (leftInfo.isDir())
			return(false);
		else
			return(true);
	}
};

class CrashDialog : public QFileDialog
{
	Q_OBJECT

public:
	CrashDialog(QWidget *parent, const QString &caption, const
		QString &dir, const QString &filter)
		: QFileDialog(parent, caption, dir, filter)
	{
		sortProxy *proxyModel = new sortProxy(this);
		setProxyModel(proxyModel);
	}
};
