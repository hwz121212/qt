#pragma once


#define QT_GUI_LIB

#define QT_WIDGETS_LIB
#include <QtTest/QtTest>
#include <QSizeGrip>
#include <QEvent>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QLabel>
#include <QMainWindow>
#include <QStatusBar>
#include <QMdiArea>
#include <QMdiSubWindow>


Q_DECLARE_METATYPE(Qt::WindowType);

class tst_QSizeGrip : public QObject
{
    Q_OBJECT
public slots:
    void initTestCase();
    void cleanupTestCase();

private slots:
    void hideAndShowOnWindowStateChange_data();
    void hideAndShowOnWindowStateChange();
    void orientation();
    void dontCrashOnTLWChange();

private:
    QLineEdit *dummyWidget;
};

class TestWidget : public QWidget
{
public:
    TestWidget(QWidget *parent = 0, Qt::WindowFlags flags = 0) : QWidget(parent, flags) {}
    QSize sizeHint() const { return QSize(300, 200); }
    void changeEvent(QEvent *event)
    {
        QWidget::changeEvent(event);
        if (isWindow() && event->type() == QEvent::WindowStateChange)
            QVERIFY(QTest::qWaitForWindowExposed(this));
    }
};

