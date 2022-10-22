#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB


#include <QtTest/QtTest>
#include <QtGui>
#include <QtWidgets>
#include <math.h>

class tst_QGraphicsLayout : public QObject
{
Q_OBJECT

public:
    tst_QGraphicsLayout();
    virtual ~tst_QGraphicsLayout();

private slots:
    void sizeHints();
    void compressLayoutRequest();
    void automaticReparenting();
    void verifyActivate();
    void sizeHintOfHiddenLayout();
    void invalidate();
    void constructors();
    void alternativeLayoutItems();
    void ownership();
};




class AnimatedLayout : public QObject, public QGraphicsLinearLayout {
	Q_OBJECT
public:
	AnimatedLayout(QGraphicsWidget *widget) : QGraphicsLinearLayout(widget), m_timeline(500, this)
	{
		connect(&m_timeline, SIGNAL(valueChanged(qreal)), this, SLOT(valueChanged(qreal)));
	}

	void setGeometry(const QRectF &geom) {
		fromGeoms.clear();
		toGeoms.clear();
		for (int i = 0; i < count(); ++i) {
			fromGeoms << itemAt(i)->geometry();
		}

		QGraphicsLinearLayout::setGeometry(geom);

		for (int i = 0; i < count(); ++i) {
			toGeoms << itemAt(i)->geometry();
		}
		m_timeline.start();
	}

private slots:
	void valueChanged(qreal value) {
		for (int i = 0; i < fromGeoms.count(); ++i) {
			QGraphicsLayoutItem *li = itemAt(i);
			QRectF from = fromGeoms.at(i);
			QRectF to = toGeoms.at(i);

			QRectF geom(from.topLeft() + (to.topLeft() - from.topLeft()) * value,
				from.size() + (to.size() - from.size()) * value);
			static_cast<QGraphicsRectItem*>(li->graphicsItem())->setRect(geom);
		}
	}
private:
	QTimeLine m_timeline;
	QVector<QRectF> fromGeoms;
	QVector<QRectF> toGeoms;
};
