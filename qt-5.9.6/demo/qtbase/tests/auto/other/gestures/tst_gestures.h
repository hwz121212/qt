#pragma once

#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <QtTest/qtesttouch.h>

#include <qevent.h>
#include <qtouchdevice.h>
#include <qwidget.h>
#include <qlayout.h>
#include <qgesture.h>
#include <qgesturerecognizer.h>
#include <qgraphicsitem.h>
#include <qgraphicswidget.h>
#include <qgraphicsview.h>
#include <qmainwindow.h>

#include <qdebug.h>



class CustomGesture : public QGesture
{
    Q_OBJECT
public:
    static Qt::GestureType GestureType;

    CustomGesture(QObject *parent = 0)
        : QGesture(parent), serial(0)
    {
    }

    int serial;

    static const int SerialMaybeThreshold;
    static const int SerialStartedThreshold;
    static const int SerialFinishedThreshold;
};



class CustomEvent : public QEvent
{
public:
	static int EventType;

	explicit CustomEvent(int serial_ = 0)
		: QEvent(QEvent::Type(CustomEvent::EventType)),
		serial(serial_), hasHotSpot(false)
	{
	}

	int serial;
	QPointF hotSpot;
	bool hasHotSpot;
};


class GestureWidget : public QWidget
{
	Q_OBJECT
public:
	GestureWidget(const char *name = 0, QWidget *parent = 0)
		: QWidget(parent)
	{
		if (name)
			setObjectName(QLatin1String(name));
		reset();
		acceptGestureOverride = false;
	}
	void reset()
	{
		customEventsReceived = 0;
		gestureEventsReceived = 0;
		gestureOverrideEventsReceived = 0;
		events.clear();
		overrideEvents.clear();
		ignoredGestures.clear();
	}

	int customEventsReceived;
	int gestureEventsReceived;
	int gestureOverrideEventsReceived;
	struct Events
	{
		QList<Qt::GestureType> all;
		QList<Qt::GestureType> started;
		QList<Qt::GestureType> updated;
		QList<Qt::GestureType> finished;
		QList<Qt::GestureType> canceled;

		void clear()
		{
			all.clear();
			started.clear();
			updated.clear();
			finished.clear();
			canceled.clear();
		}
	} events, overrideEvents;

	bool acceptGestureOverride;
	QSet<Qt::GestureType> ignoredGestures;

protected:
	bool event(QEvent *event)
	{
		Events *eventsPtr = 0;
		if (event->type() == QEvent::Gesture) {
			QGestureEvent *e = static_cast<QGestureEvent*>(event);
			++gestureEventsReceived;
			eventsPtr = &events;
			foreach(Qt::GestureType type, ignoredGestures)
				e->ignore(e->gesture(type));
		}
		else if (event->type() == QEvent::GestureOverride) {
			++gestureOverrideEventsReceived;
			eventsPtr = &overrideEvents;
			if (acceptGestureOverride)
				event->accept();
		}
		if (eventsPtr) {
			QGestureEvent *e = static_cast<QGestureEvent*>(event);
			QList<QGesture*> gestures = e->gestures();
			foreach(QGesture *g, gestures) {
				eventsPtr->all << g->gestureType();
				switch (g->state()) {
				case Qt::GestureStarted:
					emit gestureStarted(e->type(), g);
					eventsPtr->started << g->gestureType();
					break;
				case Qt::GestureUpdated:
					emit gestureUpdated(e->type(), g);
					eventsPtr->updated << g->gestureType();
					break;
				case Qt::GestureFinished:
					emit gestureFinished(e->type(), g);
					eventsPtr->finished << g->gestureType();
					break;
				case Qt::GestureCanceled:
					emit gestureCanceled(e->type(), g);
					eventsPtr->canceled << g->gestureType();
					break;
				default:
					qWarning() << "Unknown GestureState enum value:" << static_cast<int>(g->state());
				}
			}
		}
		else if (event->type() == CustomEvent::EventType) {
			++customEventsReceived;
		}
		else {
			return QWidget::event(event);
		}
		return true;
	}

Q_SIGNALS:
	void gestureStarted(QEvent::Type, QGesture *);
	void gestureUpdated(QEvent::Type, QGesture *);
	void gestureFinished(QEvent::Type, QGesture *);
	void gestureCanceled(QEvent::Type, QGesture *);

public Q_SLOTS:
	void deleteThis() { delete this; }
};



class tst_Gestures : public QObject
{
	Q_OBJECT

private slots:
	void initTestCase();
	void cleanupTestCase();
	void customGesture();
	void autoCancelingGestures();
	void gestureOverChild();
	void multipleWidgetOnlyGestureInTree();
	void conflictingGestures();
	void conflictingGesturesInGraphicsView();
	void finishedWithoutStarted();
	void unknownGesture();
	void graphicsItemGesture();
	void graphicsView();
	void graphicsItemTreeGesture();
	void explicitGraphicsObjectTarget();
	void gestureOverChildGraphicsItem();
	void twoGesturesOnDifferentLevel();
	void multipleGesturesInTree();
	void multipleGesturesInComplexTree();
	void testMapToScene();
	void ungrabGesture();
	void consumeEventHint();
	void unregisterRecognizer();
	void autoCancelGestures();
	void autoCancelGestures2();
	void graphicsViewParentPropagation();
	void panelPropagation();
	void panelStacksBehindParent();
	void deleteGestureTargetWidget();
	void deleteGestureTargetItem_data();
	void deleteGestureTargetItem();
	void viewportCoordinates();
	void partialGesturePropagation();
	void testQGestureRecognizerCleanup();
	void testReuseCanceledGestures();
	void bug_13501_gesture_not_accepted();
};


static const QColor InstanceColors[] = {
	Qt::blue, Qt::red, Qt::green, Qt::gray, Qt::yellow
};

class GestureItem : public QGraphicsObject
{
	Q_OBJECT
		static int InstanceCount;
public:
	GestureItem(const char *name = 0)
	{
		instanceNumber = InstanceCount++;
		if (name) {
			setObjectName(QLatin1String(name));
			setToolTip(name);
		}
		size = QRectF(0, 0, 100, 100);
		customEventsReceived = 0;
		gestureEventsReceived = 0;
		gestureOverrideEventsReceived = 0;
		events.clear();
		overrideEvents.clear();
		acceptGestureOverride = false;

		scene = 0;
	}
	~GestureItem()
	{
		--InstanceCount;
	}

	int customEventsReceived;
	int gestureEventsReceived;
	int gestureOverrideEventsReceived;
	struct Events
	{
		QList<Qt::GestureType> all;
		QList<Qt::GestureType> started;
		QList<Qt::GestureType> updated;
		QList<Qt::GestureType> finished;
		QList<Qt::GestureType> canceled;

		void clear()
		{
			all.clear();
			started.clear();
			updated.clear();
			finished.clear();
			canceled.clear();
		}
	} events, overrideEvents;

	bool acceptGestureOverride;
	QSet<Qt::GestureType> ignoredGestures;
	QSet<Qt::GestureType> ignoredStartedGestures;
	QSet<Qt::GestureType> ignoredUpdatedGestures;
	QSet<Qt::GestureType> ignoredFinishedGestures;

	QRectF size;
	int instanceNumber;

	void reset()
	{
		customEventsReceived = 0;
		gestureEventsReceived = 0;
		gestureOverrideEventsReceived = 0;
		events.clear();
		overrideEvents.clear();
		ignoredGestures.clear();
		ignoredStartedGestures.clear();
		ignoredUpdatedGestures.clear();
		ignoredFinishedGestures.clear();
	}

	QRectF boundingRect() const
	{
		return size;
	}
	void paint(QPainter *p, const QStyleOptionGraphicsItem *, QWidget *)
	{
		QColor color = InstanceColors[instanceNumber % (sizeof(InstanceColors) / sizeof(InstanceColors[0]))];
		p->fillRect(boundingRect(), color);
	}

	bool event(QEvent *event)
	{
		Events *eventsPtr = 0;
		if (event->type() == QEvent::Gesture) {
			++gestureEventsReceived;
			eventsPtr = &events;
			QGestureEvent *e = static_cast<QGestureEvent *>(event);
			foreach(Qt::GestureType type, ignoredGestures)
				e->ignore(e->gesture(type));
			foreach(QGesture *g, e->gestures()) {
				switch (g->state()) {
				case Qt::GestureStarted:
					if (ignoredStartedGestures.contains(g->gestureType()))
						e->ignore(g);
					break;
				case Qt::GestureUpdated:
					if (ignoredUpdatedGestures.contains(g->gestureType()))
						e->ignore(g);
					break;
				case Qt::GestureFinished:
					if (ignoredFinishedGestures.contains(g->gestureType()))
						e->ignore(g);
					break;
				default:
					break;
				}
			}
		}
		else if (event->type() == QEvent::GestureOverride) {
			++gestureOverrideEventsReceived;
			eventsPtr = &overrideEvents;
			if (acceptGestureOverride)
				event->accept();
		}
		if (eventsPtr) {
			QGestureEvent *e = static_cast<QGestureEvent*>(event);
			QList<QGesture*> gestures = e->gestures();
			foreach(QGesture *g, gestures) {
				eventsPtr->all << g->gestureType();
				switch (g->state()) {
				case Qt::GestureStarted:
					eventsPtr->started << g->gestureType();
					emit gestureStarted(e->type(), g);
					break;
				case Qt::GestureUpdated:
					eventsPtr->updated << g->gestureType();
					emit gestureUpdated(e->type(), g);
					break;
				case Qt::GestureFinished:
					eventsPtr->finished << g->gestureType();
					emit gestureFinished(e->type(), g);
					break;
				case Qt::GestureCanceled:
					eventsPtr->canceled << g->gestureType();
					emit gestureCanceled(e->type(), g);
					break;
				default:
					qWarning() << "Unknown GestureState enum value:" << static_cast<int>(g->state());
				}
			}
		}
		else if (event->type() == CustomEvent::EventType) {
			++customEventsReceived;
		}
		else {
			return QGraphicsObject::event(event);
		}
		return true;
	}

Q_SIGNALS:
	void gestureStarted(QEvent::Type, QGesture *);
	void gestureUpdated(QEvent::Type, QGesture *);
	void gestureFinished(QEvent::Type, QGesture *);
	void gestureCanceled(QEvent::Type, QGesture *);

public:
	// some arguments for the slots below:
	QGraphicsScene *scene;

public Q_SLOTS:
	void deleteThis() { delete this; }
	void addSelfToScene(QEvent::Type eventType, QGesture *)
	{
		if (eventType == QEvent::Gesture) {
			disconnect(sender(), 0, this, SLOT(addSelfToScene(QEvent::Type, QGesture*)));
			scene->addItem(this);
		}
	}
};



class NoConsumeWidgetBug13501 :public QWidget
{
	Q_OBJECT
protected:
	bool event(QEvent *e) {
		if (e->type() == QEvent::Gesture) {
			return false;
		}
		return QWidget::event(e);
	}
};
