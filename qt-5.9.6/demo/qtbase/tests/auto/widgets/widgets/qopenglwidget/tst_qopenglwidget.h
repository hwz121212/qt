#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB


#include <QtWidgets/QOpenGLWidget>
#include <QtGui/QOpenGLFunctions>
#include <QtGui/QPainter>
#include <QtGui/QScreen>
#include <QtWidgets/QDesktopWidget>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGraphicsScene>
#include <QtWidgets/QGraphicsRectItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtTest/QtTest>
#include <QSignalSpy>
#include <private/qguiapplication_p.h>
#include <qpa/qplatformintegration.h>

class tst_QOpenGLWidget : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void create();
    void clearAndGrab();
    void clearAndResizeAndGrab();
    void createNonTopLevel();
    void painter();
    void reparentToAlreadyCreated();
    void reparentToNotYetCreated();
    void reparentHidden();
    void asViewport();
    void requestUpdate();
    void fboRedirect();
    void showHide();
    void nativeWindow();
    void stackWidgetOpaqueChildIsVisible();
};

