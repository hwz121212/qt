#pragma once

#include "paintcommands.h"
#include <qbaselinetest.h>
#include <QDir>
#include <QPainter>
#include <QWindow>

#ifndef QT_NO_OPENGL
#include <QOpenGLFramebufferObjectFormat>
#include <QOpenGLContext>
#include <QOpenGLPaintDevice>
#endif

#include <algorithm>

class tst_Lancelot : public QObject
{
Q_OBJECT

public:
    tst_Lancelot();

private:
    enum GraphicsEngine {
        Raster = 0,
        OpenGL = 1
    };

    void setupTestSuite(const QStringList& blacklist = QStringList());
    void runTestSuite(GraphicsEngine engine, QImage::Format format, const QSurfaceFormat &contextFormat = QSurfaceFormat());
    void paint(QPaintDevice *device, GraphicsEngine engine, QImage::Format format, const QStringList &script, const QString &filePath);

    QStringList qpsFiles;
    QHash<QString, QStringList> scripts;
    QHash<QString, quint16> scriptChecksums;
    QString scriptsDir;

private slots:
    void initTestCase();
    void cleanupTestCase() {}

    void testRasterARGB32PM_data();
    void testRasterARGB32PM();
    void testRasterRGB32_data();
    void testRasterRGB32();
    void testRasterARGB32_data();
    void testRasterARGB32();
    void testRasterRGB16_data();
    void testRasterRGB16();
    void testRasterA2RGB30PM_data();
    void testRasterA2RGB30PM();
    void testRasterBGR30_data();
    void testRasterBGR30();
    void testRasterARGB8565PM_data();
    void testRasterARGB8565PM();
    void testRasterGrayscale8_data();
    void testRasterGrayscale8();

#ifndef QT_NO_OPENGL
    void testOpenGL_data();
    void testOpenGL();
    void testCoreOpenGL_data();
    void testCoreOpenGL();
private:
    bool checkSystemGLSupport();
    bool checkSystemCoreGLSupport();
#endif
};

