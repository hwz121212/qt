#include "tst_lancelot.h"


tst_Lancelot::tst_Lancelot()
{
}

void tst_Lancelot::initTestCase()
{
    // Check and setup the environment. We treat failures because of test environment
    // (e.g. script files not found) as just warnings, and not QFAILs, to avoid false negatives
    // caused by environment or server instability

    QByteArray msg;
    if (!QBaselineTest::connectToBaselineServer(&msg))
        QSKIP(msg);

    QString baseDir = QFINDTESTDATA("scripts/text.qps");
    scriptsDir = baseDir.left(baseDir.lastIndexOf('/')) + '/';
    QDir qpsDir(scriptsDir);
    qpsFiles = qpsDir.entryList(QStringList() << QLatin1String("*.qps"), QDir::Files | QDir::Readable);
    if (qpsFiles.isEmpty()) {
        QWARN("No qps script files found in " + qpsDir.path().toLatin1());
        QSKIP("Aborted due to errors.");
    }

    std::sort(qpsFiles.begin(), qpsFiles.end());
    foreach (const QString& fileName, qpsFiles) {
        QFile file(scriptsDir + fileName);
        file.open(QFile::ReadOnly);
        QByteArray cont = file.readAll();
        scripts.insert(fileName, QString::fromUtf8(cont).split(QLatin1Char('\n'), QString::SkipEmptyParts));
        scriptChecksums.insert(fileName, qChecksum(cont.constData(), cont.size()));
    }
}


void tst_Lancelot::testRasterARGB32PM_data()
{
    setupTestSuite();
}


void tst_Lancelot::testRasterARGB32PM()
{
    runTestSuite(Raster, QImage::Format_ARGB32_Premultiplied);
}


void tst_Lancelot::testRasterARGB32_data()
{
    setupTestSuite();
}

void tst_Lancelot::testRasterARGB32()
{
    runTestSuite(Raster, QImage::Format_ARGB32);
}


void tst_Lancelot::testRasterRGB32_data()
{
    setupTestSuite();
}


void tst_Lancelot::testRasterRGB32()
{
    runTestSuite(Raster, QImage::Format_RGB32);
}


void tst_Lancelot::testRasterRGB16_data()
{
    setupTestSuite();
}


void tst_Lancelot::testRasterRGB16()
{
    runTestSuite(Raster, QImage::Format_RGB16);
}


void tst_Lancelot::testRasterA2RGB30PM_data()
{
    setupTestSuite();
}


void tst_Lancelot::testRasterA2RGB30PM()
{
    runTestSuite(Raster, QImage::Format_A2RGB30_Premultiplied);
}


void tst_Lancelot::testRasterBGR30_data()
{
    setupTestSuite();
}


void tst_Lancelot::testRasterBGR30()
{
    runTestSuite(Raster, QImage::Format_BGR30);
}


void tst_Lancelot::testRasterARGB8565PM_data()
{
    setupTestSuite();
}

void tst_Lancelot::testRasterARGB8565PM()
{
    runTestSuite(Raster, QImage::Format_ARGB8565_Premultiplied);
}


void tst_Lancelot::testRasterGrayscale8_data()
{
    setupTestSuite();
}

void tst_Lancelot::testRasterGrayscale8()
{
    runTestSuite(Raster, QImage::Format_Grayscale8);
}


#ifndef QT_NO_OPENGL
bool tst_Lancelot::checkSystemGLSupport()
{
    QWindow win;
    win.setSurfaceType(QSurface::OpenGLSurface);
    win.create();
    QOpenGLFramebufferObjectFormat fmt;
    fmt.setAttachment(QOpenGLFramebufferObject::CombinedDepthStencil);
    fmt.setSamples(4);
    QOpenGLContext ctx;
    if (!ctx.create() || !ctx.makeCurrent(&win))
        return false;
    QOpenGLFramebufferObject fbo(800, 800, fmt);
    if (!fbo.isValid() || !fbo.bind())
        return false;

    return true;
}

bool tst_Lancelot::checkSystemCoreGLSupport()
{
    if (QOpenGLContext::openGLModuleType() != QOpenGLContext::LibGL)
        return false;

    QSurfaceFormat coreFormat;
    coreFormat.setVersion(3, 2);
    coreFormat.setProfile(QSurfaceFormat::CoreProfile);
    QWindow win;
    win.setSurfaceType(QSurface::OpenGLSurface);
    win.setFormat(coreFormat);
    win.create();
    QOpenGLFramebufferObjectFormat fmt;
    fmt.setAttachment(QOpenGLFramebufferObject::CombinedDepthStencil);
    fmt.setSamples(4);
    QOpenGLContext ctx;
    ctx.setFormat(coreFormat);
    if (!ctx.create() || !ctx.makeCurrent(&win))
        return false;
    QOpenGLFramebufferObject fbo(800, 800, fmt);
    if (!fbo.isValid() || !fbo.bind())
        return false;

    return true;
}

void tst_Lancelot::testOpenGL_data()
{
    if (!checkSystemGLSupport())
        QSKIP("System under test does not meet preconditions for GL testing. Skipping.");
    QStringList localBlacklist = QStringList() << QLatin1String("rasterops.qps");
    setupTestSuite(localBlacklist);
}


void tst_Lancelot::testOpenGL()
{
    runTestSuite(OpenGL, QImage::Format_RGB32);
}

void tst_Lancelot::testCoreOpenGL_data()
{
    if (!checkSystemCoreGLSupport())
        QSKIP("System under test does not meet preconditions for Core Profile GL testing. Skipping.");
    QStringList localBlacklist = QStringList() << QLatin1String("rasterops.qps");
    setupTestSuite(localBlacklist);
}

void tst_Lancelot::testCoreOpenGL()
{
    QSurfaceFormat coreFormat;
    coreFormat.setVersion(3, 2);
    coreFormat.setProfile(QSurfaceFormat::CoreProfile);
    runTestSuite(OpenGL, QImage::Format_RGB32, coreFormat);
}
#endif


void tst_Lancelot::setupTestSuite(const QStringList& blacklist)
{
    QTest::addColumn<QString>("qpsFile");
    foreach (const QString &fileName, qpsFiles) {
        if (blacklist.contains(fileName))
            continue;
        QBaselineTest::newRow(fileName.toLatin1(), scriptChecksums.value(fileName)) << fileName;
    }
}


void tst_Lancelot::runTestSuite(GraphicsEngine engine, QImage::Format format, const QSurfaceFormat &contextFormat)
{
    QFETCH(QString, qpsFile);

    QString filePath = scriptsDir + qpsFile;
    QStringList script = scripts.value(qpsFile);
    QImage rendered;

    if (engine == Raster) {
        QImage img(800, 800, format);
        paint(&img, engine, format, script, QFileInfo(filePath).absoluteFilePath());
        rendered = img;
#ifndef QT_NO_OPENGL
    } else if (engine == OpenGL) {
        QWindow win;
        win.setSurfaceType(QSurface::OpenGLSurface);
        win.setFormat(contextFormat);
        win.create();
        QOpenGLFramebufferObjectFormat fmt;
        fmt.setAttachment(QOpenGLFramebufferObject::CombinedDepthStencil);
        fmt.setSamples(4);
        QOpenGLContext ctx;
        ctx.setFormat(contextFormat);
        QVERIFY(ctx.create());
        QVERIFY(ctx.makeCurrent(&win));
        QOpenGLFramebufferObject fbo(800, 800, fmt);
        fbo.bind();
        QOpenGLPaintDevice pdv(800, 800);
        paint(&pdv, engine, format, script, QFileInfo(filePath).absoluteFilePath());
        rendered = fbo.toImage().convertToFormat(format);
#endif
    }

    QBASELINE_TEST(rendered);
}

void tst_Lancelot::paint(QPaintDevice *device, GraphicsEngine engine, QImage::Format format, const QStringList &script, const QString &filePath)
{
    QPainter p(device);
    PaintCommands pcmd(script, 800, 800, format);
    //pcmd.setShouldDrawText(false);
    switch (engine) {
    case OpenGL:
        pcmd.setType(OpenGLBufferType); // version/profile is communicated through the context's format()
        break;
    case Raster:  // fallthrough
    default:
        pcmd.setType(ImageType);
        break;
    }
    pcmd.setPainter(&p);
    pcmd.setFilePath(filePath);
    pcmd.runCommands();
    p.end();
}

#define main _realmain
QTEST_MAIN(tst_Lancelot)
#undef main

int main(int argc, char *argv[])
{
    qSetGlobalQHashSeed(0);   // Avoid rendering variations caused by QHash randomization

    QBaselineTest::handleCmdLineArgs(&argc, &argv);
    return _realmain(argc, argv);
}


