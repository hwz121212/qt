#include "tst_qopenglwidget.h"




void tst_QOpenGLWidget::initTestCase()
{
    // See QOpenGLWidget constructor
    if (!QGuiApplicationPrivate::platformIntegration()->hasCapability(QPlatformIntegration::RasterGLSurface))
        QSKIP("QOpenGLWidget is not supported on this platform.");
}

void tst_QOpenGLWidget::create()
{
    QScopedPointer<QOpenGLWidget> w(new QOpenGLWidget);
    QVERIFY(!w->isValid());
    QSignalSpy frameSwappedSpy(w.data(), SIGNAL(frameSwapped()));
    w->show();
    QTest::qWaitForWindowExposed(w.data());
    QVERIFY(frameSwappedSpy.count() > 0);

    QVERIFY(w->isValid());
    QVERIFY(w->context());
    QCOMPARE(w->context()->format(), w->format());
    QVERIFY(w->defaultFramebufferObject() != 0);
}

class ClearWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
public:
    ClearWidget(QWidget *parent, int expectedWidth, int expectedHeight)
        : QOpenGLWidget(parent),
          m_initCalled(false), m_paintCalled(false), m_resizeCalled(false),
          m_resizeOk(false),
          m_w(expectedWidth), m_h(expectedHeight),
          r(1.0f), g(0.0f), b(0.0f) { }

    void initializeGL() Q_DECL_OVERRIDE {
        m_initCalled = true;
        initializeOpenGLFunctions();
    }
    void paintGL() Q_DECL_OVERRIDE {
        m_paintCalled = true;
        glClearColor(r, g, b, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
    }
    void resizeGL(int w, int h) Q_DECL_OVERRIDE {
        m_resizeCalled = true;
        m_resizeOk = w == m_w && h == m_h;
    }
    void setClearColor(float r, float g, float b) {
        this->r = r; this->g = g; this->b = b;
    }

    bool m_initCalled;
    bool m_paintCalled;
    bool m_resizeCalled;
    bool m_resizeOk;
    int m_w;
    int m_h;
    float r, g, b;
};

void tst_QOpenGLWidget::clearAndGrab()
{
    QScopedPointer<ClearWidget> w(new ClearWidget(0, 800, 600));
    w->resize(800, 600);
    w->show();
    QTest::qWaitForWindowExposed(w.data());
    QVERIFY(w->m_initCalled);
    QVERIFY(w->m_resizeCalled);
    QVERIFY(w->m_resizeOk);
    QVERIFY(w->m_paintCalled);

    QImage image = w->grabFramebuffer();
    QVERIFY(!image.isNull());
    QCOMPARE(image.width(), w->width());
    QCOMPARE(image.height(), w->height());
    QVERIFY(image.pixel(30, 40) == qRgb(255, 0, 0));
}

void tst_QOpenGLWidget::clearAndResizeAndGrab()
{
    QScopedPointer<QOpenGLWidget> w(new ClearWidget(0, 640, 480));
    w->resize(640, 480);
    w->show();
    QTest::qWaitForWindowExposed(w.data());

    QImage image = w->grabFramebuffer();
    QVERIFY(!image.isNull());
    QCOMPARE(image.width(), w->width());
    QCOMPARE(image.height(), w->height());
    w->resize(800, 600);
    image = w->grabFramebuffer();
    QVERIFY(!image.isNull());
    QCOMPARE(image.width(), 800);
    QCOMPARE(image.height(), 600);
    QCOMPARE(image.width(), w->width());
    QCOMPARE(image.height(), w->height());
    QVERIFY(image.pixel(30, 40) == qRgb(255, 0, 0));
}

void tst_QOpenGLWidget::createNonTopLevel()
{
    QWidget w;
    ClearWidget *glw = new ClearWidget(&w, 600, 700);
    QSignalSpy frameSwappedSpy(glw, SIGNAL(frameSwapped()));
    w.resize(400, 400);
    w.show();
    QTest::qWaitForWindowExposed(&w);
    QVERIFY(frameSwappedSpy.count() > 0);

    QVERIFY(glw->m_resizeCalled);
    glw->m_resizeCalled = false;
    QVERIFY(!glw->m_resizeOk);
    glw->resize(600, 700);

    QVERIFY(glw->m_initCalled);
    QVERIFY(glw->m_resizeCalled);
    QVERIFY(glw->m_resizeOk);
    QVERIFY(glw->m_paintCalled);

    QImage image = glw->grabFramebuffer();
    QVERIFY(!image.isNull());
    QCOMPARE(image.width(), glw->width());
    QCOMPARE(image.height(), glw->height());
    QVERIFY(image.pixel(30, 40) == qRgb(255, 0, 0));

    glw->doneCurrent();
    QVERIFY(!QOpenGLContext::currentContext());
    glw->makeCurrent();
    QVERIFY(QOpenGLContext::currentContext() == glw->context() && glw->context());
}

class PainterWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
public:
    PainterWidget(QWidget *parent)
        : QOpenGLWidget(parent), m_clear(false) { }

    void initializeGL() Q_DECL_OVERRIDE {
        initializeOpenGLFunctions();
    }
    void paintGL() Q_DECL_OVERRIDE {
        QPainter p(this);
        QCOMPARE(p.device()->width(), width());
        QCOMPARE(p.device()->height(), height());
        p.fillRect(QRect(QPoint(0, 0), QSize(width(), height())), Qt::blue);
        if (m_clear) {
            p.beginNativePainting();
            glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);
            p.endNativePainting();
        }
    }
    bool m_clear;
};

void tst_QOpenGLWidget::painter()
{
    QWidget w;
    PainterWidget *glw = new PainterWidget(&w);
    w.resize(640, 480);
    glw->resize(320, 200);
    w.show();
    QTest::qWaitForWindowExposed(&w);

    QImage image = glw->grabFramebuffer();
    QCOMPARE(image.width(), glw->width());
    QCOMPARE(image.height(), glw->height());
    QVERIFY(image.pixel(20, 10) == qRgb(0, 0, 255));

    glw->m_clear = true;
    image = glw->grabFramebuffer();
    QVERIFY(image.pixel(20, 10) == qRgb(0, 255, 0));

    QPixmap pix = glw->grab(); // QTBUG-61036
}

void tst_QOpenGLWidget::reparentToAlreadyCreated()
{
    QWidget w1;
    PainterWidget *glw = new PainterWidget(&w1);
    w1.resize(640, 480);
    glw->resize(320, 200);
    w1.show();
    QTest::qWaitForWindowExposed(&w1);

    QWidget w2;
    w2.show();
    QTest::qWaitForWindowExposed(&w2);

    glw->setParent(&w2);
    glw->show();

    QImage image = glw->grabFramebuffer();
    QCOMPARE(image.width(), 320);
    QCOMPARE(image.height(), 200);
    QVERIFY(image.pixel(20, 10) == qRgb(0, 0, 255));
}

void tst_QOpenGLWidget::reparentToNotYetCreated()
{
    QWidget w1;
    PainterWidget *glw = new PainterWidget(&w1);
    w1.resize(640, 480);
    glw->resize(320, 200);
    w1.show();
    QTest::qWaitForWindowExposed(&w1);

    QWidget w2;
    glw->setParent(&w2);
    w2.show();
    QTest::qWaitForWindowExposed(&w2);

    QImage image = glw->grabFramebuffer();
    QCOMPARE(image.width(), 320);
    QCOMPARE(image.height(), 200);
    QVERIFY(image.pixel(20, 10) == qRgb(0, 0, 255));
}

void tst_QOpenGLWidget::reparentHidden()
{
    // Tests QTBUG-60896
    QWidget topLevel1;

    QWidget *container = new QWidget(&topLevel1);
    PainterWidget *glw = new PainterWidget(container);
    topLevel1.resize(640, 480);
    glw->resize(320, 200);
    topLevel1.show();

    glw->hide(); // Explicitly hidden

    QTest::qWaitForWindowExposed(&topLevel1);

    QWidget topLevel2;
    topLevel2.resize(640, 480);
    topLevel2.show();
    QTest::qWaitForWindowExposed(&topLevel2);

    QOpenGLContext *originalContext = glw->context();
    QVERIFY(originalContext);

    container->setParent(&topLevel2);
    glw->show(); // Should get a new context now

    QOpenGLContext *newContext = glw->context();
    QVERIFY(originalContext != newContext);
}

class CountingGraphicsView : public QGraphicsView
{
public:
    CountingGraphicsView(): m_count(0) { }
    int paintCount() const { return m_count; }
    void resetPaintCount() { m_count = 0; }

protected:
    void drawForeground(QPainter *, const QRectF &) Q_DECL_OVERRIDE;
    int m_count;
};

void CountingGraphicsView::drawForeground(QPainter *, const QRectF &)
{
    ++m_count;

    // QTBUG-59318: verify that the context's internal default fbo redirection
    // is active also when using the QOpenGLWidget as a viewport.
    GLint currentFbo = -1;
    QOpenGLContext::currentContext()->functions()->glGetIntegerv(GL_FRAMEBUFFER_BINDING, &currentFbo);
    GLuint defFbo = QOpenGLContext::currentContext()->defaultFramebufferObject();
    QCOMPARE(GLuint(currentFbo), defFbo);
}

void tst_QOpenGLWidget::asViewport()
{
    // Have a QGraphicsView with a QOpenGLWidget as its viewport.
    QGraphicsScene scene;
    scene.addItem(new QGraphicsRectItem(10, 10, 100, 100));
    CountingGraphicsView *view = new CountingGraphicsView;
    view->setScene(&scene);
    view->setViewport(new QOpenGLWidget);
    QWidget widget;
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(view);
    QPushButton *btn = new QPushButton("Test");
    layout->addWidget(btn);
    widget.setLayout(layout);
    widget.show();
    QTest::qWaitForWindowExposed(&widget);

    QVERIFY(view->paintCount() > 0);
    view->resetPaintCount();

    // And now trigger a repaint on the push button. We must not
    // receive paint events for the graphics view. If we do, that's a
    // side effect of QOpenGLWidget's special behavior and handling in
    // the widget stack.
    btn->update();
    qApp->processEvents();
    QCOMPARE(view->paintCount(), 0);
}

class PaintCountWidget : public QOpenGLWidget
{
public:
    PaintCountWidget() : m_count(0) { }
    void reset() { m_count = 0; }
    void paintGL() Q_DECL_OVERRIDE { ++m_count; }
    int m_count;
};

void tst_QOpenGLWidget::requestUpdate()
{
    PaintCountWidget w;
    w.resize(640, 480);
    w.show();
    QTest::qWaitForWindowExposed(&w);

    w.reset();
    QCOMPARE(w.m_count, 0);

    w.windowHandle()->requestUpdate();
    QTRY_VERIFY(w.m_count > 0);
}

class FboCheckWidget : public QOpenGLWidget
{
public:
    void paintGL() Q_DECL_OVERRIDE {
        GLuint reportedDefaultFbo = QOpenGLContext::currentContext()->defaultFramebufferObject();
        GLuint expectedDefaultFbo = defaultFramebufferObject();
        QCOMPARE(reportedDefaultFbo, expectedDefaultFbo);
    }
};

void tst_QOpenGLWidget::fboRedirect()
{
    FboCheckWidget w;
    w.resize(640, 480);
    w.show();
    QTest::qWaitForWindowExposed(&w);

    // Unlike in paintGL(), the default fbo reported by the context is not affected by the widget,
    // so we get the real default fbo: either 0 or (on iOS) the fbo associated with the window.
    w.makeCurrent();
    GLuint reportedDefaultFbo = QOpenGLContext::currentContext()->defaultFramebufferObject();
    GLuint widgetFbo = w.defaultFramebufferObject();
    QVERIFY(reportedDefaultFbo != widgetFbo);
}

void tst_QOpenGLWidget::showHide()
{
    QScopedPointer<ClearWidget> w(new ClearWidget(0, 800, 600));
    w->resize(800, 600);
    w->show();
    QTest::qWaitForWindowExposed(w.data());

    w->hide();

    QImage image = w->grabFramebuffer();
    QVERIFY(!image.isNull());
    QCOMPARE(image.width(), w->width());
    QCOMPARE(image.height(), w->height());
    QVERIFY(image.pixel(30, 40) == qRgb(255, 0, 0));

    w->setClearColor(0, 0, 1);
    w->show();
    QTest::qWaitForWindowExposed(w.data());

    image = w->grabFramebuffer();
    QVERIFY(!image.isNull());
    QCOMPARE(image.width(), w->width());
    QCOMPARE(image.height(), w->height());
    QVERIFY(image.pixel(30, 40) == qRgb(0, 0, 255));
}

void tst_QOpenGLWidget::nativeWindow()
{
    QScopedPointer<ClearWidget> w(new ClearWidget(0, 800, 600));
    w->resize(800, 600);
    w->show();
    w->winId();
    QTest::qWaitForWindowExposed(w.data());

    QImage image = w->grabFramebuffer();
    QVERIFY(!image.isNull());
    QCOMPARE(image.width(), w->width());
    QCOMPARE(image.height(), w->height());
    QVERIFY(image.pixel(30, 40) == qRgb(255, 0, 0));
    QVERIFY(w->internalWinId());

    // Now as a native child.
    QWidget nativeParent;
    nativeParent.resize(800, 600);
    nativeParent.setAttribute(Qt::WA_NativeWindow);
    ClearWidget *child = new ClearWidget(0, 800, 600);
    child->setClearColor(0, 1, 0);
    child->setParent(&nativeParent);
    child->resize(400, 400);
    child->move(23, 34);
    nativeParent.show();
    QTest::qWaitForWindowExposed(&nativeParent);

    QVERIFY(nativeParent.internalWinId());
    QVERIFY(!child->internalWinId());

    image = child->grabFramebuffer();
    QVERIFY(!image.isNull());
    QCOMPARE(image.width(), child->width());
    QCOMPARE(image.height(), child->height());
    QVERIFY(image.pixel(30, 40) == qRgb(0, 255, 0));
}

static inline QString msgRgbMismatch(unsigned actual, unsigned expected)
{
    return QString::asprintf("Color mismatch, %#010x != %#010x", actual, expected);
}

static QPixmap grabWidgetWithoutRepaint(const QWidget *widget, QRect clipArea)
{
    const QWidget *targetWidget = widget;
#ifdef Q_OS_WIN
    // OpenGL content is not properly grabbed on Windows when passing a top level widget window,
    // because GDI functions can't grab OpenGL layer content.
    // Instead the whole screen should be captured, with an adjusted clip area, which contains
    // the final composited content.
    QDesktopWidget *desktopWidget = QApplication::desktop();
    const QWidget *mainScreenWidget = desktopWidget->screen();
    targetWidget = mainScreenWidget;
    clipArea = QRect(widget->mapToGlobal(clipArea.topLeft()),
                     widget->mapToGlobal(clipArea.bottomRight()));
#endif

    const QWindow *window = targetWidget->window()->windowHandle();
    Q_ASSERT(window);
    WId windowId = window->winId();

    QScreen *screen = window->screen();
    Q_ASSERT(screen);

    const QSize size = clipArea.size();
    const QPixmap result = screen->grabWindow(windowId,
                                              clipArea.x(),
                                              clipArea.y(),
                                              size.width(),
                                              size.height());
    return result;
}

#define VERIFY_COLOR(child, region, color) verifyColor(child, region, color, __LINE__)

bool verifyColor(const QWidget *widget, const QRect &clipArea, const QColor &color, int callerLine)
{
    for (int t = 0; t < 6; t++) {
        const QPixmap pixmap = grabWidgetWithoutRepaint(widget, clipArea);
        if (!QTest::qCompare(pixmap.size(),
                             clipArea.size(),
                             "pixmap.size()",
                             "rect.size()",
                             __FILE__,
                             callerLine))
            return false;


        const QImage image = pixmap.toImage();
        QPixmap expectedPixmap(pixmap); /* ensure equal formats */
        expectedPixmap.detach();
        expectedPixmap.fill(color);

        uint alphaCorrection = image.format() == QImage::Format_RGB32 ? 0xff000000 : 0;
        uint firstPixel = image.pixel(0,0) | alphaCorrection;

        // Retry a couple of times. Some window managers have transparency animation, or are
        // just slow to render.
        if (t < 5) {
            if (firstPixel == QColor(color).rgb()
                && image == expectedPixmap.toImage())
                return true;
            else
                QTest::qWait(200);
        } else {
            if (!QTest::qVerify(firstPixel == QColor(color).rgb(),
                               "firstPixel == QColor(color).rgb()",
                                qPrintable(msgRgbMismatch(firstPixel, QColor(color).rgb())),
                                __FILE__, callerLine)) {
                return false;
            }
            if (!QTest::qVerify(image == expectedPixmap.toImage(),
                                "image == expectedPixmap.toImage()",
                                "grabbed pixmap differs from expected pixmap",
                                __FILE__, callerLine)) {
                return false;
            }
        }
    }

    return false;
}

void tst_QOpenGLWidget::stackWidgetOpaqueChildIsVisible()
{
#ifdef Q_OS_OSX
    QSKIP("QScreen::grabWindow() doesn't work properly on OSX HighDPI screen: QTBUG-46803");
    return;
#endif

    QStackedWidget stack;

    QWidget* emptyWidget = new QWidget(&stack);
    stack.addWidget(emptyWidget);

    // Create an opaque red QOpenGLWidget.
    const int dimensionSize = 400;
    ClearWidget* clearWidget = new ClearWidget(&stack, dimensionSize, dimensionSize);
    clearWidget->setAttribute(Qt::WA_OpaquePaintEvent);
    stack.addWidget(clearWidget);

    // Show initial QWidget.
    stack.setCurrentIndex(0);
    stack.resize(dimensionSize, dimensionSize);
    stack.show();
    QTest::qWaitForWindowExposed(&stack);
    QTest::qWaitForWindowActive(&stack);

    // Switch to the QOpenGLWidget.
    stack.setCurrentIndex(1);
    QTRY_COMPARE(clearWidget->m_paintCalled, true);

    // Resize the tested region to be half size in the middle, because some OSes make the widget
    // have rounded corners (e.g. OSX), and the grabbed window pixmap will not coincide perfectly
    // with what was actually painted.
    QRect clipArea = stack.rect();
    clipArea.setSize(clipArea.size() / 2);
    const int translationOffsetToMiddle = dimensionSize / 4;
    clipArea.translate(translationOffsetToMiddle, translationOffsetToMiddle);

    // Verify that the QOpenGLWidget was actually painted AND displayed.
    const QColor red(255, 0, 0, 255);
    VERIFY_COLOR(&stack, clipArea, red);
    #undef VERIFY_COLOR
}

QTEST_MAIN(tst_QOpenGLWidget)


