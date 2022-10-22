#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QTest>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include <QtWidgets/QGestureEvent>
#include <QtGui/QScreen>
#include <QtGui/QTouchDevice>
#include <QtCore/QVector>
#include <QtCore/QString>
#include <QtCore/QHash>
#include <QtCore/QDebug>

class tst_QGestureRecognizer : public QObject
{
    Q_OBJECT
public:
    tst_QGestureRecognizer();

private Q_SLOTS:
    void initTestCase();
#ifndef QT_NO_GESTURES
    void panGesture_data();
    void panGesture();
    void pinchGesture_data();
    void pinchGesture();
    void swipeGesture_data();
    void swipeGesture();
#endif // !QT_NO_GESTURES

private:
    const int m_fingerDistance;
    QTouchDevice *m_touchDevice;
};
