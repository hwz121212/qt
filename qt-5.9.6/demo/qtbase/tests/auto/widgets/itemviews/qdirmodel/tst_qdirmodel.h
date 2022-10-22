#pragma once


#include <QtTest/QtTest>
#include <qdirmodel.h>
#include <qapplication.h>
#include <qtreeview.h>
#include <qdir.h>
#include <qdebug.h>
#include "emulationdetector.h"

class tst_QDirModel : public QObject
{
    Q_OBJECT
public slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
private slots:
    void getSetCheck();
    void unreadable();
    /*
    void construct();
    void rowCount();
    void columnCount();
    void t_data();
    void setData();
    void hasChildren();
    void isEditable();
    void isDragEnabled();
    void isDropEnabled();
    void sort();
    */
    bool rowsAboutToBeRemoved_init(const QString &test_path, const QStringList &initial_files);
    bool rowsAboutToBeRemoved_cleanup(const QString &test_path);
    void rowsAboutToBeRemoved_data();
    void rowsAboutToBeRemoved();

    void mkdir_data();
    void mkdir();

    void rmdir_data();
    void rmdir();

    void filePath();

    void hidden();

    void fileName();
    void fileName_data();
    void task196768_sorting();
    void filter();

    void task244669_remove();

    void roleNames_data();
    void roleNames();
};
