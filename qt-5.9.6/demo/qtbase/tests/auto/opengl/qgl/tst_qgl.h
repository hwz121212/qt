#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>

#include <qcoreapplication.h>
#include <qdebug.h>
#include <qgl.h>
#include <qglpixelbuffer.h>
#include <qglframebufferobject.h>
#include <qglcolormap.h>
#include <qpaintengine.h>
#include <qopenglfunctions.h>
#include <qopenglframebufferobject.h>
#include <qopenglpaintdevice.h>

#include <QGraphicsView>
#include <QGraphicsProxyWidget>
#include <QVBoxLayout>

#ifdef QT_BUILD_INTERNAL
#include <qpa/qplatformpixmap.h>
#include <QtOpenGL/private/qgl_p.h>
#include <QtGui/private/qimage_p.h>
#include <QtGui/private/qimagepixmapcleanuphooks_p.h>
#include <QtGui/private/qopenglextensions_p.h>
#endif

class tst_QGL : public QObject
{
Q_OBJECT

public:
    tst_QGL();
    virtual ~tst_QGL();

private slots:
    void initTestCase();
    void getSetCheck();
#ifdef QT_BUILD_INTERNAL
    void qglContextDefaultBindTexture();
    void openGLVersionCheck();
    void shareRegister();
    void textureCleanup();
#endif
    void partialGLWidgetUpdates_data();
    void partialGLWidgetUpdates();
    void glWidgetWithAlpha();
    void glWidgetRendering();
    void glFBOSimpleRendering();
    void glFBORendering();
    void currentFboSync();
    void multipleFBOInterleavedRendering();
    void glFBOUseInGLWidget();
    void glPBufferRendering();
    void glWidgetReparent();
    void glWidgetRenderPixmap();
    void colormap();
    void fboFormat();
    void testDontCrashOnDanglingResources();
    void replaceClipping();
    void clipTest();
    void destroyFBOAfterContext();
    void threadImages();
    void nullRectCrash();
    void graphicsViewClipping();
    void extensions();
};

namespace ThreadImages {

	class Producer : public QObject
	{
		Q_OBJECT
	public:
		Producer()
		{
			startTimer(20);

			QThread *thread = new QThread;
			thread->start();

			connect(this, SIGNAL(destroyed()), thread, SLOT(quit()));

			moveToThread(thread);
			connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
		}

	signals:
		void imageReady(const QImage &image);

	protected:
		void timerEvent(QTimerEvent *)
		{
			QImage image(256, 256, QImage::Format_RGB32);
			QLinearGradient g(0, 0, 0, 256);
			g.setColorAt(0, QColor(255, 180, 180));
			g.setColorAt(1, Qt::white);
			g.setSpread(QGradient::ReflectSpread);

			QBrush brush(g);
			brush.setTransform(QTransform::fromTranslate(0, delta));
			delta += 10;

			QPainter p(&image);
			p.fillRect(image.rect(), brush);

			if (images.size() > 10)
				images.removeFirst();

			images.append(image);

			emit imageReady(image);
		}

	private:
		QList<QImage> images;
		int delta;
	};


	class DisplayWidget : public QGLWidget
	{
		Q_OBJECT
	public:
		DisplayWidget(QWidget *parent) : QGLWidget(parent) {}
		void paintEvent(QPaintEvent *)
		{
			QPainter p(this);
			p.drawImage(rect(), m_image);
		}

	public slots:
		void setImage(const QImage &image)
		{
			m_image = image;
			update();
		}

	private:
		QImage m_image;
	};

	class Widget : public QWidget
	{
		Q_OBJECT
	public:
		Widget()
			: iterations(0)
			, display(0)
			, producer(new Producer)
		{
			startTimer(400);
			connect(this, SIGNAL(destroyed()), producer, SLOT(deleteLater()));
		}

		int iterations;

	protected:
		void timerEvent(QTimerEvent *)
		{
			++iterations;

			delete display;
			display = new DisplayWidget(this);
			connect(producer, SIGNAL(imageReady(QImage)), display, SLOT(setImage(QImage)));

			display->setGeometry(rect());
			display->show();
		}

	private:
		DisplayWidget *display;
		Producer *producer;
	};

}