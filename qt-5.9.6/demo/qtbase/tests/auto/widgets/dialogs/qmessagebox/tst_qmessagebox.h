#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <QMessageBox>
#include <QDebug>
#include <QPair>
#include <QList>
#include <QPointer>
#include <QTimer>
#include <QApplication>
#include <QPushButton>
#include <QDialogButtonBox>
#include <qpa/qplatformtheme.h>
#include <private/qguiapplication_p.h>


class tst_QMessageBox : public QObject
{
    Q_OBJECT

private slots:
    void sanityTest();
    void defaultButton();
    void escapeButton();
    void button();
    void statics();
    void about();
    void detailsText();
    void detailsButtonText();
    void expandDetails_QTBUG_32473();

#ifndef Q_OS_MAC
    void shortcut();
#endif

    void staticSourceCompat();
    void instanceSourceCompat();

    void testSymbols();
    void incorrectDefaultButton();
    void updateSize();

    void setInformativeText();
    void iconPixmap();

    void cleanup();
};
