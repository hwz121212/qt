/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the test suite of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL-EXCEPT$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef TST_QGRAPHICSVIEW_H
#define TST_QGRAPHICSVIEW_H





#include <QtTest/QtTest>

#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicsview.h>
#include <qgraphicswidget.h>
#include <qgraphicsproxywidget.h>

#include <math.h>

#include <QtWidgets/QLabel>
#include <QtWidgets/QStyleFactory>
#include <QtWidgets/QCommonStyle>
#include <QtGui/QPainterPath>
#include <QtWidgets/QRubberBand>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStyleOption>
#include <QtWidgets/QBoxLayout>
#include <QtWidgets/QStyle>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QDesktopWidget>
#ifndef QT_NO_OPENGL
#include <QtWidgets/QOpenGLWidget>
#endif
#include <private/qgraphicsscene_p.h>
#include <private/qgraphicsview_p.h>

#include <private/qinputmethod_p.h>
#include <private/qguiapplication_p.h>
#include <qpa/qplatformintegration.h>

#include "tst_qgraphicsview.h"

#include <QtTest/private/qtesthelpers_p.h>

using namespace QTestPrivate;




// This file contains structs used in tst_qgraphicsview::scrollBarRanges.
// Whenever these mention scrollbars or spacing it is about the number of
// scrollbars or spacings to use as these are style dependent so that the real
// value to add/remove has to be obtained in test run using the actual style.

struct ExpectedValueDescription {
    Q_DECL_CONSTEXPR ExpectedValueDescription(int v = 0, int sbeta = 0, int sta = 0)
        : value(v)
        , scrollBarExtentsToAdd(sbeta)
        , spacingsToAdd(sta)
    {
    }

    int value;
    // Describes how often the scrollbar widht/height has to be added to or
    // removed from the value.
    int scrollBarExtentsToAdd;

    // Describes how often the scrollbar spacing has to be added to or removed
    // from the value if the used style has SH_ScrollView_FrameOnlyAroundContents
    // set
    int spacingsToAdd;
};

// Describes how often the scroll bar width/height has to be added to/removed
// from the according side of the sceneRect.
struct ScrollBarCount {
    Q_DECL_CONSTEXPR ScrollBarCount(int l = 0, int t = 0, int r = 0, int b = 0 )
        : left(l)
        , top(t)
        , right(r)
        , bottom(b)
    {
    }

    int left;
    int top;
    int right;
    int bottom;
};




class EventSpy : public QObject
{
	Q_OBJECT
public:
	EventSpy(QObject *watched, QEvent::Type type)
		: _count(0), spied(type)
	{
		watched->installEventFilter(this);
	}

	int count() const { return _count; }
	void reset() { _count = 0; }

protected:
	bool eventFilter(QObject *watched, QEvent *event)
	{
		Q_UNUSED(watched);
		if (event->type() == spied)
			++_count;
		return false;
	}

	int _count;
	QEvent::Type spied;
};


class tst_QGraphicsView : public QObject
{
	Q_OBJECT

public:
	tst_QGraphicsView()
		: platformName(QGuiApplication::platformName().toLower())
	{ }
private slots:
	void cleanup();
	void construction();
	void renderHints();
	void alignment();
	void interactive();
	void scene();
	void setScene();
	void deleteScene();
	void sceneRect();
	void sceneRect_growing();
	void setSceneRect();
	void viewport();
#ifndef QT_NO_OPENGL
	void openGLViewport();
#endif
	void dragMode_scrollHand();
	void dragMode_rubberBand();
	void rubberBandSelectionMode();
	void rubberBandExtendSelection();
	void rotated_rubberBand();
	void backgroundBrush();
	void foregroundBrush();
	void matrix();
	void matrix_convenience();
	void matrix_combine();
	void centerOnPoint();
	void centerOnItem();
	void ensureVisibleRect();
	void fitInView();
	void itemsAtPoint();
#if defined QT_BUILD_INTERNAL
	void itemsAtPosition_data();
	void itemsAtPosition();
#endif
	void itemsInRect();
	void itemsInRect_cosmeticAdjust_data();
	void itemsInRect_cosmeticAdjust();
	void itemsInPoly();
	void itemsInPath();
	void itemAt();
	void itemAt2();
	void mapToScene();
	void mapToScenePoint();
	void mapToSceneRect_data();
	void mapToSceneRect();
	void mapToScenePoly();
	void mapToScenePath();
	void mapFromScenePoint();
	void mapFromSceneRect();
	void mapFromScenePoly();
	void mapFromScenePath();
	void sendEvent();
#if QT_CONFIG(wheelevent)
	void wheelEvent();
#endif
#ifndef QT_NO_CURSOR
	void cursor();
	void cursor2();
#endif
	void transformationAnchor();
	void resizeAnchor();
	void viewportUpdateMode();
	void viewportUpdateMode2();
#ifndef QT_NO_DRAGANDDROP
	void acceptDrops();
#endif
	void optimizationFlags();
	void optimizationFlags_dontSavePainterState();
	void optimizationFlags_dontSavePainterState2_data();
	void optimizationFlags_dontSavePainterState2();
	void levelOfDetail_data();
	void levelOfDetail();
	void scrollBarRanges_data();
	void scrollBarRanges();
	void acceptMousePressEvent();
	void acceptMouseDoubleClickEvent();
	void forwardMousePress();
	void forwardMouseDoubleClick();
	void replayMouseMove();
	void itemsUnderMouse();
	void embeddedViews();
	void scrollAfterResize_data();
	void scrollAfterResize();
	void moveItemWhileScrolling_data();
	void moveItemWhileScrolling();
	void centerOnDirtyItem();
	void mouseTracking();
	void mouseTracking2();
	void mouseTracking3();
	void render();
	void exposeRegion();
	void update_data();
	void update();
	void update2_data();
	void update2();
	void update_ancestorClipsChildrenToShape();
	void update_ancestorClipsChildrenToShape2();
	void inputMethodSensitivity();
	void inputContextReset();
	void indirectPainting();
	void compositionModeInDrawBackground();

	// task specific tests below me
	void task172231_untransformableItems();
	void task180429_mouseReleaseDragMode();
	void task187791_setSceneCausesUpdate();
	void task186827_deleteReplayedItem();
	void task207546_focusCrash();
	void task210599_unsetDragWhileDragging();
	void task239729_noViewUpdate_data();
	void task239729_noViewUpdate();
	void task239047_fitInViewSmallViewport();
	void task245469_itemsAtPointWithClip();
	void task253415_reconnectUpdateSceneOnSceneChanged();
	void task255529_transformationAnchorMouseAndViewportMargins();
	void task259503_scrollingArtifacts();
	void QTBUG_4151_clipAndIgnore_data();
	void QTBUG_4151_clipAndIgnore();
	void QTBUG_5859_exposedRect();
#ifndef QT_NO_CURSOR
	void QTBUG_7438_cursor();
#endif
	void hoverLeave();
	void QTBUG_16063_microFocusRect();

public slots:
	void dummySlot() {}

private:
	QString platformName;
};




class CustomView : public QGraphicsView
{
	Q_OBJECT
public:
	CustomView(QGraphicsScene *s = 0) : QGraphicsView(s) {}
	CustomView(QGraphicsScene *s, QWidget *parent)
		: QGraphicsView(s, parent) {}
	QList<QRegion> lastUpdateRegions;
	bool painted;

protected:
	void paintEvent(QPaintEvent *event)
	{
		lastUpdateRegions << event->region();
		painted = true;
		QGraphicsView::paintEvent(event);
	}
};



class ChangedListener : public QObject
{
	Q_OBJECT
public:
	QList<QList<QRectF> > changes;

public slots:
	void changed(const QList<QRectF> &dirty)
	{
		changes << dirty;
	}
};


#endif // TST_QGRAPHICSVIEW_H
