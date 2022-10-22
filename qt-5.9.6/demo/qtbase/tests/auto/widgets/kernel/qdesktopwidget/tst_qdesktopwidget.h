#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <QtWidgets/QDesktopWidget>
#include <QtGui/QWindow>
#include <QDebug>

class tst_QDesktopWidget : public QObject
{
    Q_OBJECT

private slots:
    void cleanup();

    void numScreens();
    void primaryScreen();
    void screenNumberForQWidget();
    void screenNumberForQPoint();
    void availableGeometry();
    void screenGeometry();
    void topLevels();
};


