#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>

#include <qapplication.h>
#include <qwindow.h>
#include <qwidget.h>

#include <qdockwidget.h>
#include <qmainwindow.h>
#include <qscreen.h>
#include <qscopedpointer.h>
#include <qevent.h>


class Window : public QWindow
{
public:
    Window()
        : numberOfExposes(0)
        , numberOfObscures(0)
    {
    }

    void exposeEvent(QExposeEvent *) {
        if (isExposed())
            ++numberOfExposes;
        else
            ++numberOfObscures;
    }

    int numberOfExposes;
    int numberOfObscures;
};

class tst_QWindowContainer: public QObject
{
    Q_OBJECT

public:
    tst_QWindowContainer() : m_availableGeometry(QGuiApplication::primaryScreen()->availableGeometry()) {}

private slots:
    void testShow();
    void testPositionAndSize();
    void testExposeObscure();
    void testOwnership();
    void testBehindTheScenesDeletion();
    void testUnparenting();
    void testUnparentReparent();
    void testActivation();
    void testAncestorChange();
    void testDockWidget();
    void testNativeContainerParent();
    void testPlatformSurfaceEvent();
    void cleanup();

private:
    const QRect m_availableGeometry;
};

