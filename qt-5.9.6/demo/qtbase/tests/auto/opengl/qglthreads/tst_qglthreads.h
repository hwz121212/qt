#pragma once

#define QT_GUI_LIB
#define QT_WIDGETS_LIB


#define RUNNING_TIME 5000

#include <QObject>

#include <QtTest/QtTest>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <private/qguiapplication_p.h>
#include <qpa/qplatformintegration.h>
#include <QtWidgets/QApplication>
#include <QtOpenGL/QtOpenGL>
#include "tst_qglthreads.h"

#ifndef QT_OPENGL_ES_2
#include <QtGui/QOpenGLFunctions_1_0>
#endif

class tst_QGLThreads : public QObject
{
Q_OBJECT
public:
    explicit tst_QGLThreads(QObject *parent = 0);

private slots:
    void swapInThread();
    void textureUploadInThread();

    void renderInThread_data();
    void renderInThread();
    void painterOnGLWidgetInThread();
    void painterOnPixmapInThread();
    void painterOnPboInThread();
    void painterOnFboInThread();
};


class SwapThread : public QThread
{
	Q_OBJECT
public:
	SwapThread(QGLWidget *widget)
		: m_context(widget->context())
		, m_swapTriggered(false)
	{
		moveToThread(this);
	}

	void run() {
		QTime time;
		time.start();
		while (time.elapsed() < RUNNING_TIME) {
			lock();
			waitForReadyToSwap();

			m_context->makeCurrent();
			m_context->swapBuffers();
			m_context->doneCurrent();

			m_context->moveToThread(qApp->thread());

			signalSwapDone();
			unlock();
		}

		m_swapTriggered = false;
	}

	void lock() { m_mutex.lock(); }
	void unlock() { m_mutex.unlock(); }

	void waitForSwapDone() { if (m_swapTriggered) m_swapDone.wait(&m_mutex); }
	void waitForReadyToSwap() { if (!m_swapTriggered) m_readyToSwap.wait(&m_mutex); }

	void signalReadyToSwap()
	{
		if (!isRunning())
			return;
		m_readyToSwap.wakeAll();
		m_swapTriggered = true;
	}

	void signalSwapDone()
	{
		m_swapTriggered = false;
		m_swapDone.wakeAll();
	}

private:
	QGLContext *m_context;
	QMutex m_mutex;
	QWaitCondition m_readyToSwap;
	QWaitCondition m_swapDone;

	bool m_swapTriggered;
};



class Device
{
public:
	virtual ~Device() {}
	virtual QPaintDevice *realPaintDevice() = 0;
	virtual void prepareDevice() {}
	virtual void moveToThread(QThread *) {}
};



class ThreadSafeGLWidget : public QGLWidget
{
public:
	ThreadSafeGLWidget(QWidget *parent = 0) : QGLWidget(parent) {}
	void paintEvent(QPaintEvent *)
	{
		// ignored as we're anyway swapping as fast as we can
	};

	void resizeEvent(QResizeEvent *e)
	{
		mutex.lock();
		newSize = e->size();
		mutex.unlock();
	};

	QMutex mutex;
	QSize newSize;
};



class GLWidgetWrapper : public Device
{
public:
	GLWidgetWrapper() {
		widget.resize(150, 150);
		widget.show();
		QTest::qWaitForWindowExposed(&widget);
		widget.doneCurrent();
	}
	QPaintDevice *realPaintDevice() { return &widget; }
	void moveToThread(QThread *thread) { widget.context()->moveToThread(thread); }

	ThreadSafeGLWidget widget;
};

class PixmapWrapper : public Device
{
public:
	PixmapWrapper() { pixmap = new QPixmap(512, 512); }
	~PixmapWrapper() { delete pixmap; }
	QPaintDevice *realPaintDevice() { return pixmap; }

	QPixmap *pixmap;
};

class PixelBufferWrapper : public Device
{
public:
	PixelBufferWrapper() { pbuffer = new QGLPixelBuffer(512, 512); }
	~PixelBufferWrapper() { delete pbuffer; }
	QPaintDevice *realPaintDevice() { return pbuffer; }
	void moveToThread(QThread *thread) { pbuffer->context()->moveToThread(thread); }

	QGLPixelBuffer *pbuffer;
};


class FrameBufferObjectWrapper : public Device
{
public:
	FrameBufferObjectWrapper() {
		widget.makeCurrent();
		fbo = new QGLFramebufferObject(512, 512);
		widget.doneCurrent();
	}
	~FrameBufferObjectWrapper() { delete fbo; }
	QPaintDevice *realPaintDevice() { return fbo; }
	void prepareDevice() { widget.makeCurrent(); }
	void moveToThread(QThread *thread) { widget.context()->moveToThread(thread); }

	ThreadSafeGLWidget widget;
	QGLFramebufferObject *fbo;
};



/*
   textureUploadInThread

   The purpose of this testcase is to verify that doing texture uploads in a background
   thread is possible and that it works.
 */

class CreateAndUploadThread : public QThread
{
	Q_OBJECT
public:
	CreateAndUploadThread(QGLWidget *shareWidget, QSemaphore *semaphore)
		: m_semaphore(semaphore)
	{
		m_gl = new QGLWidget(0, shareWidget);
		moveToThread(this);

	}

	void moveContextToThread()
	{
		m_gl->context()->moveToThread(this);
	}

	~CreateAndUploadThread()
	{
		delete m_gl;
	}

	void run() {
		m_gl->makeCurrent();
		QTime time;
		time.start();
		while (time.elapsed() < RUNNING_TIME) {
			int width = 400;
			int height = 300;
			QImage image(width, height, QImage::Format_RGB32);
			QPainter p(&image);
			p.fillRect(image.rect(), QColor(rand() % 256, rand() % 256, rand() % 256));
			p.setPen(Qt::red);
			p.setFont(QFont("SansSerif", 24));
			p.drawText(image.rect(), Qt::AlignCenter, "This is an autotest");
			p.end();
			m_gl->bindTexture(image, GL_TEXTURE_2D, GL_RGBA, QGLContext::InternalBindOption);

			m_semaphore->acquire(1);

			createdAndUploaded(image);
		}
	}

signals:
	void createdAndUploaded(const QImage &image);

private:
	QGLWidget *m_gl;
	QSemaphore *m_semaphore;
};

class TextureDisplay : public QGLWidget
{
	Q_OBJECT
public:
	TextureDisplay(QSemaphore *semaphore)
		: m_semaphore(semaphore)
	{
	}

	void paintEvent(QPaintEvent *) {
		QPainter p(this);
		for (int i = 0; i < m_images.size(); ++i) {
			p.drawImage(m_positions.at(i), m_images.at(i));
			m_positions[i] += QPoint(1, 1);
		}
		update();
	}

public slots:
	void receiveImage(const QImage &image) {
		m_images << image;
		m_positions << QPoint(-rand() % width() / 2, -rand() % height() / 2);

		m_semaphore->release(1);

		if (m_images.size() > 100) {
			m_images.takeFirst();
			m_positions.takeFirst();
		}
	}

private:
	QList <QImage> m_images;
	QList <QPoint> m_positions;

	QSemaphore *m_semaphore;
};

void renderAScene(int w, int h);

class SceneRenderingThread : public QThread
{
	Q_OBJECT
public:
	SceneRenderingThread(ThreadSafeGLWidget *widget)
		: m_widget(widget)
	{
		moveToThread(this);
		m_size = widget->size();
	}

	void run() {
		QTime time;
		time.start();
		failure = false;

		while (time.elapsed() < RUNNING_TIME && !failure) {

			m_widget->makeCurrent();

			m_widget->mutex.lock();
			QSize s = m_widget->newSize;
			m_widget->mutex.unlock();

			QOpenGLFunctions *funcs = QOpenGLContext::currentContext()->functions();
			if (s != m_size) {
				funcs->glViewport(0, 0, s.width(), s.height());
			}

			if (QGLContext::currentContext() != m_widget->context()) {
				failure = true;
				break;
			}

			funcs->glClear(GL_COLOR_BUFFER_BIT);

			int w = m_widget->width();
			int h = m_widget->height();

			renderAScene(w, h);

			int color;
			funcs->glReadPixels(w / 2, h / 2, 1, 1, GL_RGBA, GL_UNSIGNED_BYTE, &color);

			m_widget->swapBuffers();
		}

		m_widget->doneCurrent();
	}

	bool failure;

private:
	ThreadSafeGLWidget *m_widget;
	QSize m_size;
};



class ThreadPainter : public QObject
{
	Q_OBJECT
public:
	ThreadPainter(Device *pd) : device(pd), fail(true) {
		pixmap = QPixmap(40, 40);
		pixmap.fill(Qt::green);
		QPainter p(&pixmap);
		p.drawLine(0, 0, 40, 40);
		p.drawLine(0, 40, 40, 0);
	}

public slots:
	void draw() {
		bool beginFailed = false;
		QTime time;
		time.start();
		int rotAngle = 10;
		device->prepareDevice();
		QPaintDevice *paintDevice = device->realPaintDevice();
		QSize s(paintDevice->width(), paintDevice->height());
		while (time.elapsed() < RUNNING_TIME) {
			QPainter p;
			if (!p.begin(paintDevice)) {
				beginFailed = true;
				break;
			}
			p.translate(s.width() / 2, s.height() / 2);
			p.rotate(rotAngle);
			p.translate(-s.width() / 2, -s.height() / 2);
			p.fillRect(0, 0, s.width(), s.height(), Qt::red);
			QRect rect(QPoint(0, 0), s);
			p.drawPixmap(10, 10, pixmap);
			p.drawTiledPixmap(50, 50, 100, 100, pixmap);
			p.drawText(rect.center(), "This is a piece of text");
			p.end();
			rotAngle += 2;
			QThread::msleep(20);
		}

		device->moveToThread(qApp->thread());

		fail = beginFailed;
		QThread::currentThread()->quit();
	}

	bool failed() { return fail; }

private:
	QPixmap pixmap;
	Device *device;
	bool fail;
};
