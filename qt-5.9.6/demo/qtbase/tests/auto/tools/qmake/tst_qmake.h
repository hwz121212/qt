#pragma once

#include <QtTest/QtTest>

#include "testcompiler.h"

#include <QObject>
#include <QStandardPaths>
#include <QDir>

#if defined(DEBUG_BUILD)
#  define DIR_INFIX "debug/"
#elif defined(RELEASE_BUILD)
#  define DIR_INFIX "release/"
#else
#  define DIR_INFIX ""
#endif

class tst_qmake : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void cleanup();
    void simple_app();
    void simple_app_shadowbuild();
    void simple_app_shadowbuild2();
    void simple_lib();
    void simple_dll();
    void subdirs();
    void subdir_via_pro_file_extra_target();
    void duplicateLibraryEntries();
    void export_across_file_boundaries();
    void include_dir();
    void include_pwd();
    void install_files();
    void install_depends();
    void quotedfilenames();
    void prompt();
    void one_space();
    void findMocs();
    void findDeps();
    void rawString();
#if defined(Q_OS_MAC)
    void bundle_spaces();
#endif
    void substitutes();
    void project();
    void proFileCache();
    void resources();

private:
    TestCompiler test_compiler;
    QString base_path;
};

