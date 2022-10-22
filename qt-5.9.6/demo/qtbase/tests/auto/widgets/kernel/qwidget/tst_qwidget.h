#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <qboxlayout.h>
#include <qapplication.h>
#include <qbitmap.h>
#include <qdebug.h>
#include <qeventloop.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qlineedit.h>
#include <qlistview.h>
#include <qmessagebox.h>
#include <qpainter.h>
#include <qpoint.h>
#include <qpushbutton.h>
#include <qstyle.h>
#include <qwidget.h>
#include <qstylefactory.h>
#include <qdesktopwidget.h>
#include <private/qwidget_p.h>
#include <private/qapplication_p.h>
#include <private/qhighdpiscaling_p.h>
#include <qcalendarwidget.h>
#include <qmainwindow.h>
#include <qdockwidget.h>
#include <qtoolbar.h>
#include <qtoolbutton.h>
#include <QtGui/qpaintengine.h>
#include <QtGui/qbackingstore.h>
#include <QtGui/qguiapplication.h>
#include <QtGui/qscreen.h>
#include <qmenubar.h>
#include <qcompleter.h>
#include <qtableview.h>
#include <qtreewidget.h>
#include <qabstractnativeeventfilter.h>
#include <qproxystyle.h>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGraphicsProxyWidget>
#include <QtGui/qwindow.h>
#include <qtimer.h>

#if defined(Q_OS_OSX)
#include "tst_qwidget_mac_helpers.h"  // Abstract the ObjC stuff out so not everyone must run an ObjC++ compile.
#endif

#include <QtTest/QTest>
#include <QtTest/private/qtesthelpers_p.h>

using namespace QTestPrivate;

class tst_QWidget : public QObject
{
    Q_OBJECT

public:
    tst_QWidget();
    virtual ~tst_QWidget();

public slots:
    void initTestCase();
    void cleanup();
private slots:
    void getSetCheck();
    void fontPropagation();
    void fontPropagation2();
    void palettePropagation();
    void palettePropagation2();
    void enabledPropagation();
    void ignoreKeyEventsWhenDisabled_QTBUG27417();
    void properTabHandlingWhenDisabled_QTBUG27417();
#ifndef QT_NO_DRAGANDDROP
    void acceptDropsPropagation();
#endif
    void isEnabledTo();
    void visible();
    void visible_setWindowOpacity();
    void isVisibleTo();
    void isHidden();
    void fonts();
    void mapFromAndTo_data();
    void mapFromAndTo();
    void focusChainOnHide();
    void focusChainOnReparent();
    void setTabOrder();
#ifdef Q_OS_WIN
    void activation();
#endif
    void reparent();
    void windowState();
    void showMaximized();
    void showFullScreen();
    void showMinimized();
    void showMinimizedKeepsFocus();
    void icon();
    void hideWhenFocusWidgetIsChild();
    void normalGeometry();
    void setGeometry();
    void windowOpacity();
    void raise();
    void lower();
    void stackUnder();
    void testContentsPropagation();
    void saveRestoreGeometry();
    void restoreVersion1Geometry_data();
    void restoreVersion1Geometry();

    void widgetAt();
#ifdef Q_OS_OSX
    void setMask();
#endif
    void optimizedResizeMove();
    void optimizedResize_topLevel();
    void resizeEvent();
    void task110173();

    void testDeletionInEventHandlers();

    void childDeletesItsSibling();

    void setMinimumSize();
    void setMaximumSize();
    void setFixedSize();

    void ensureCreated();
    void winIdChangeEvent();
    void persistentWinId();
    void showNativeChild();
    void transientParent();
    void qobject_castInDestroyedSlot();

    void showHideEvent_data();
    void showHideEvent();
    void showHideEventWhileMinimize();
    void showHideChildrenWhileMinimize_QTBUG50589();

    void lostUpdatesOnHide();

    void update();
    void isOpaque();

#ifndef Q_OS_OSX
    void scroll();
    void scrollNativeChildren();
#endif

    // tests QWidget::setGeometry()
    void setWindowGeometry_data();
    void setWindowGeometry();

    // tests QWidget::move() and resize()
    void windowMoveResize_data();
    void windowMoveResize();

    void moveChild_data();
    void moveChild();
    void showAndMoveChild();

    void subtractOpaqueSiblings();

#if defined (Q_OS_WIN) && !defined(Q_OS_WINRT)
    void setGeometry_win();
#endif

    void setLocale();
    void propagateLocale();
    void deleteStyle();
    void multipleToplevelFocusCheck();
    void setFocus();
#ifndef QT_NO_CURSOR
    void setCursor();
#endif
    void setToolTip();
    void testWindowIconChangeEventPropagation();

    void minAndMaxSizeWithX11BypassWindowManagerHint();
    void showHideShowX11();
    void clean_qt_x11_enforce_cursor();

    void childEvents();
    void render();
    void renderInvisible();
    void renderWithPainter();
    void render_task188133();
    void render_task211796();
    void render_task217815();
    void render_windowOpacity();
    void render_systemClip();
    void render_systemClip2_data();
    void render_systemClip2();
    void render_systemClip3_data();
    void render_systemClip3();
    void render_task252837();
    void render_worldTransform();

    void setContentsMargins();

    void moveWindowInShowEvent_data();
    void moveWindowInShowEvent();

    void repaintWhenChildDeleted();
    void hideOpaqueChildWhileHidden();
    void updateWhileMinimized();
    void alienWidgets();
    void adjustSize();
    void adjustSize_data();
    void updateGeometry();
    void updateGeometry_data();
    void sendUpdateRequestImmediately();
    void doubleRepaint();
    void resizeInPaintEvent();
    void opaqueChildren();

    void setMaskInResizeEvent();
    void moveInResizeEvent();

    void immediateRepaintAfterInvalidateBuffer();

    void effectiveWinId();
    void effectiveWinId2();
    void customDpi();
    void customDpiProperty();

    void quitOnCloseAttribute();
    void moveRect();

#if defined (Q_OS_WIN) && !defined(Q_OS_WINRT)
    void gdiPainting();
    void paintOnScreenPossible();
#endif
    void reparentStaticWidget();
    void QTBUG6883_reparentStaticWidget2();

    void translucentWidget();

    void setClearAndResizeMask();
    void maskedUpdate();
#ifndef QT_NO_CURSOR
    void syntheticEnterLeave();
    void taskQTBUG_4055_sendSyntheticEnterLeave();
    void underMouse();
    void taskQTBUG_27643_enterEvents();
#endif
    void windowFlags();
    void initialPosForDontShowOnScreenWidgets();
    void updateOnDestroyedSignal();
    void toplevelLineEditFocus();

    void focusWidget_task254563();
    void rectOutsideCoordinatesLimit_task144779();
    void setGraphicsEffect();

#ifdef QT_BUILD_INTERNAL
    void destroyBackingStore();
#endif

    void activateWindow();

    void openModal_taskQTBUG_5804();

    void focusProxyAndInputMethods();
#ifdef QT_BUILD_INTERNAL
    void scrollWithoutBackingStore();
#endif

    void taskQTBUG_7532_tabOrderWithFocusProxy();
    void movedAndResizedAttributes();
    void childAt();
#ifdef Q_OS_OSX
    void taskQTBUG_11373();
#endif
    void taskQTBUG_17333_ResizeInfiniteRecursion();

    void nativeChildFocus();
    void grab();
    void grabMouse();
    void grabKeyboard();

    void touchEventSynthesizedMouseEvent();
    void touchUpdateOnNewTouch();
    void touchEventsForGesturePendingWidgets();

    void styleSheetPropagation();

    void destroyedSignal();

    void keyboardModifiers();
    void mouseDoubleClickBubbling_QTBUG29680();
    void largerThanScreen_QTBUG30142();

    void resizeStaticContentsChildWidget_QTBUG35282();

    void qmlSetParentHelper();

    void testForOutsideWSRangeFlag();

    void tabletTracking();

private:
    bool ensureScreenSize(int width, int height);

    const QString m_platform;
    QSize m_testWidgetSize;
    QPoint m_availableTopLeft;
    QPoint m_safeCursorPos;
    const bool m_windowsAnimationsEnabled;
    QTouchDevice *m_touchScreen;
};



class QPropagationTestWidget : public QWidget
{
	Q_OBJECT
public:
	QPropagationTestWidget(QWidget *parent = 0)
		: QWidget(parent)
	{ }
};


void drawPolygon(QPaintDevice *dev, int w, int h);

class ContentsPropagationWidget : public QWidget
{
	Q_OBJECT
public:
	ContentsPropagationWidget(QWidget *parent = 0) : QWidget(parent)
	{
		setObjectName(QLatin1String("ContentsPropagationWidget"));
		setWindowTitle(objectName());
		QWidget *child = this;
		for (int i = 0; i < 32; ++i) {
			child = new QWidget(child);
			child->setGeometry(i, i, 400 - i * 2, 400 - i * 2);
		}
	}

	void setContentsPropagation(bool enable) {
		foreach(QObject *child, children())
			qobject_cast<QWidget *>(child)->setAutoFillBackground(!enable);
	}

protected:
	void paintEvent(QPaintEvent *)
	{
		int w = width(), h = height();
		drawPolygon(this, w, h);
	}

	QSize sizeHint() const { return QSize(500, 500); }
};



class StaticWidget : public QWidget
{
	Q_OBJECT
public:
	bool partial;
	bool gotPaintEvent;
	QRegion paintedRegion;

	StaticWidget(QWidget *parent = 0)
		:QWidget(parent)
	{
		setAttribute(Qt::WA_StaticContents);
		setAttribute(Qt::WA_OpaquePaintEvent);
		setPalette(Qt::red); // Make sure we have an opaque palette.
		setAutoFillBackground(true);
		gotPaintEvent = false;
	}

	void paintEvent(QPaintEvent *e)
	{
		paintedRegion += e->region();
		gotPaintEvent = true;
		//        qDebug() << "paint" << e->region();
				// Look for a full update, set partial to false if found.
		foreach(QRect r, e->region().rects()) {
			partial = (r != rect());
			if (partial == false)
				break;
		}
	}
};



class DestroyedSlotChecker : public QObject
{
	Q_OBJECT

public:
	bool wasQWidget;

	DestroyedSlotChecker()
		: wasQWidget(false)
	{
	}

public slots:
	void destroyedSlot(QObject *object)
	{
		wasQWidget = (qobject_cast<QWidget *>(object) != 0 || object->isWidgetType());
	}
};



class TopLevelFocusCheck : public QWidget
{
	Q_OBJECT
public:
	QLineEdit* edit;
	TopLevelFocusCheck(QWidget* parent = 0) : QWidget(parent)
	{
		edit = new QLineEdit(this);
		edit->hide();
		edit->installEventFilter(this);
	}

public slots:
	void mouseDoubleClickEvent(QMouseEvent * /*event*/)
	{
		edit->show();
		edit->setFocus(Qt::OtherFocusReason);
		qApp->processEvents();
	}
	bool eventFilter(QObject *obj, QEvent *event)
	{
		if (obj == edit && event->type() == QEvent::FocusOut) {
			edit->hide();
			return true;
		}
		return false;
	}
};



class ShowHideShowWidget : public QWidget, public QAbstractNativeEventFilter
{
	Q_OBJECT

		int state;
public:
	bool gotExpectedMapNotify;
	bool gotExpectedGlobalEvent;

	ShowHideShowWidget()
		: state(0), gotExpectedMapNotify(false), gotExpectedGlobalEvent(false)
	{
		startTimer(1000);
	}

	void timerEvent(QTimerEvent *) Q_DECL_OVERRIDE
	{
		switch (state++) {
		case 0:
			show();
			break;
		case 1:
			emit done();
			break;
		}
	}

	bool isMapNotify(const QByteArray &eventType, void *message)
	{
		enum { XCB_MAP_NOTIFY = 19 };
		if (state == 1 && eventType == QByteArrayLiteral("xcb_generic_event_t")) {
			// XCB events have a uint8 response_type member at the beginning.
			const unsigned char responseType = *(const unsigned char *)(message);
			return ((responseType & ~0x80) == XCB_MAP_NOTIFY);
		}
		return false;
	}

	bool nativeEvent(const QByteArray &eventType, void *message, long *) Q_DECL_OVERRIDE
	{
		if (isMapNotify(eventType, message))
			gotExpectedMapNotify = true;
		return false;
	}

	// QAbstractNativeEventFilter interface
	bool nativeEventFilter(const QByteArray &eventType, void *message, long *) Q_DECL_OVERRIDE
	{
		if (isMapNotify(eventType, message))
			gotExpectedGlobalEvent = true;
		return false;
	}

signals:
	void done();
};




class EventRecorder : public QObject
{
	Q_OBJECT

public:
	typedef QPair<QWidget *, QEvent::Type> WidgetEventTypePair;
	typedef QList<WidgetEventTypePair> EventList;

	EventRecorder(QObject *parent = 0)
		: QObject(parent)
	{ }

	EventList eventList()
	{
		return events;
	}

	void clear()
	{
		events.clear();
	}

	bool eventFilter(QObject *object, QEvent *event)
	{
		QWidget *widget = qobject_cast<QWidget *>(object);
		if (widget && !event->spontaneous())
			events.append(qMakePair(widget, event->type()));
		return false;
	}

	static QByteArray msgEventListMismatch(const EventList &expected, const EventList &actual);
	static QByteArray msgExpectFailQtBug26424(const EventList &expected, const EventList &actual)
	{
		return QByteArrayLiteral("QTBUG-26424: ") + msgEventListMismatch(expected, actual);
	}

private:
	static inline void formatEventList(const EventList &l, QDebug &d);

	EventList events;
};



class TestLayout : public QVBoxLayout
{
	Q_OBJECT
public:
	TestLayout(QWidget *w = 0) : QVBoxLayout(w)
	{
		invalidated = false;
	}

	void invalidate()
	{
		invalidated = true;
	}

	bool invalidated;
};



class MaskSetWidget : public QWidget
{
	Q_OBJECT
public:
	MaskSetWidget(QWidget* p = 0)
		: QWidget(p) {}

	void paintEvent(QPaintEvent* event) {
		QPainter p(this);

		paintedRegion += event->region();
		foreach(QRect r, event->region().rects())
			p.fillRect(r, Qt::red);
	}

	void resizeEvent(QResizeEvent*) {
		setMask(QRegion(QRect(0, 0, width(), 10).normalized()));
	}

	QRegion paintedRegion;

public slots:
	void resizeDown() {
		setGeometry(QRect(0, 50, 50, 50));
	}

	void resizeUp() {
		setGeometry(QRect(0, 50, 150, 50));
	}

};



class MoveInResizeWidget : public QWidget
{
	Q_OBJECT
public:
	MoveInResizeWidget(QWidget* p = 0)
		: QWidget(p)
	{
		setWindowFlags(Qt::FramelessWindowHint);
	}

	void resizeEvent(QResizeEvent*) {

		move(QPoint(100, 100));

		static bool firstTime = true;
		if (firstTime)
			QTimer::singleShot(250, this, SLOT(resizeMe()));

		firstTime = false;
	}

public slots:
	void resizeMe() {
		resize(100, 100);
	}
};



#if defined(Q_OS_WIN) && !defined(Q_OS_WINRT)
class GDIWidget : public QDialog
{
	Q_OBJECT
public:
	GDIWidget() {
		setAttribute(Qt::WA_PaintOnScreen);
		timer.setSingleShot(true);
		timer.setInterval(0);
	}
	QPaintEngine *paintEngine() const { return 0; }

	void paintEvent(QPaintEvent *) {
		QPlatformNativeInterface *ni = QGuiApplication::platformNativeInterface();
		const HDC hdc = (HDC)ni->nativeResourceForWindow(QByteArrayLiteral("getDC"), windowHandle());
		if (hdc) {
			const HBRUSH brush = CreateSolidBrush(RGB(255, 0, 0));
			SelectObject(hdc, brush);
			Rectangle(hdc, 0, 0, 10, 10);
			DeleteObject(brush);
			ni->nativeResourceForWindow(QByteArrayLiteral("releaseDC"), windowHandle());
		}
		else {
			qWarning("%s: Unable to obtain native DC.", Q_FUNC_INFO);
		}
		if (!timer.isActive()) {
			connect(&timer, &QTimer::timeout, this,
				hdc ? &GDIWidget::slotTimer : &QDialog::reject);
			timer.start();
		}
	}

	QSize sizeHint() const {
		return QSize(400, 300);
	}

private slots:
	void slotTimer() {
		QScreen *screen = windowHandle()->screen();
		const QImage im = screen->grabWindow(internalWinId(), 0, 0, -1, -1).toImage();
		color = im.pixel(1, 1);
		accept();
	}

public:
	QColor color;
	QTimer timer;
};


#endif // Q_OS_WIN && !Q_OS_WINRT



class MaskResizeTestWidget : public QWidget
{
	Q_OBJECT
public:
	MaskResizeTestWidget(QWidget* p = 0)
		: QWidget(p) {
		setMask(QRegion(QRect(0, 0, 100, 100).normalized()));
	}

	void paintEvent(QPaintEvent* event) {
		QPainter p(this);

		paintedRegion += event->region();
		foreach(QRect r, event->region().rects())
			p.fillRect(r, Qt::red);
	}

	QRegion paintedRegion;

public slots:
	void enlargeMask() {
		QRegion newMask(QRect(0, 0, 150, 150).normalized());
		setMask(newMask);
	}

	void shrinkMask() {
		QRegion newMask(QRect(0, 0, 50, 50).normalized());
		setMask(newMask);
	}

};



class MyEvilObject : public QObject
{
	Q_OBJECT
public:
	MyEvilObject(QWidget *widgetToCrash) : QObject(), widget(widgetToCrash)
	{
		connect(widget, SIGNAL(destroyed(QObject*)), this, SLOT(beEvil(QObject*)));
		delete widget;
	}
	QWidget *widget;

private slots:
	void beEvil(QObject *) { widget->update(0, 0, 150, 150); }
};



class DestroyTester : public QObject
{
	Q_OBJECT
public:
	DestroyTester(QObject *parent) : QObject(parent) { parentDestroyed = 0; }
	static int parentDestroyed;
public slots:
	void parentDestroyedSlot() {
		++parentDestroyed;
	}
};


class EnterTestModalDialog : public QDialog
{
	Q_OBJECT
public:
	EnterTestModalDialog() : QDialog(), button(0)
	{
		setGeometry(100, 300, 150, 100);
		button = new QPushButton(this);
		button->setGeometry(10, 10, 50, 30);
	}

	QPushButton *button;
};


class EnterTestMainDialog : public QDialog
{
	Q_OBJECT
public:
	EnterTestMainDialog() : QDialog(), modal(0), enters(0) {}

public slots:
	void buttonPressed()
	{
		qApp->installEventFilter(this);
		modal = new EnterTestModalDialog();
		QTimer::singleShot(2000, modal, SLOT(close())); // Failsafe
		QTimer::singleShot(100, this, SLOT(doMouseMoves()));
		modal->exec();
		delete modal;
		modal = Q_NULLPTR;
	}

	void doMouseMoves()
	{
		QPoint point1(15, 15);
		QPoint point2(15, 20);
		QPoint point3(20, 20);
		QWindow *window = modal->windowHandle();
		const QPoint nativePoint1 = QHighDpi::toNativePixels(point1, window->screen());
		QWindowSystemInterface::handleEnterEvent(window, nativePoint1);
		QTest::mouseMove(window, point1);
		QTest::mouseMove(window, point2);
		QTest::mouseMove(window, point3);
		modal->close();
	}

	bool eventFilter(QObject *o, QEvent *e)
	{
		switch (e->type()) {
		case QEvent::Enter:
			if (modal && modal->button && o == modal->button)
				enters++;
			break;
		default:
			break;
		}
		return QDialog::eventFilter(o, e);
	}

public:
	EnterTestModalDialog *modal;
	int enters;
};
