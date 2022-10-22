#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB
#include <QtTest/QtTest>
#ifdef QT_BUILD_INTERNAL
#include <private/qfilesystemmodel_p.h>
#endif
#include <QFileSystemModel>
#include <QFileIconProvider>
#include <QTreeView>
#include <QHeaderView>
#include <QStandardPaths>
#include <QTime>
#include <QStyle>
#include <QtGlobal>
#include <QTemporaryDir>
#if defined(Q_OS_WIN)
# include <qt_windows.h> // for SetFileAttributes
#endif
#include <private/qfilesystemengine_p.h>

#include <algorithm>


class tst_QFileSystemModel : public QObject {
  Q_OBJECT

public:
    tst_QFileSystemModel();

public Q_SLOTS:
    void init();
    void cleanup();

private slots:
    void initTestCase();
    void indexPath();

    void rootPath();
    void readOnly();
    void iconProvider();

    void rowCount();

    void rowsInserted_data();
    void rowsInserted();

    void rowsRemoved_data();
    void rowsRemoved();

    void dataChanged_data();
    void dataChanged();

    void filters_data();
    void filters();

    void nameFilters();

    void setData_data();
    void setData();

    void sortPersistentIndex();
    void sort_data();
    void sort();

    void mkdir();
    void deleteFile();

    void caseSensitivity();

    void drives_data();
    void drives();
    void dirsBeforeFiles();

    void roleNames_data();
    void roleNames();

    void permissions_data();
    void permissions();

    void doNotUnwatchOnFailedRmdir();
    void specialFiles();

    void fileInfo();

protected:
    bool createFiles(const QString &test_path, const QStringList &initial_files, int existingFileCount = 0, const QStringList &intial_dirs = QStringList());

private:
    QFileSystemModel *model;
    QString flatDirTestPath;
    QTemporaryDir m_tempDir;
};
