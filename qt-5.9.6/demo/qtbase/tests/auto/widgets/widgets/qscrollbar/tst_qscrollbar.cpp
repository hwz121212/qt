#include "tst_qscrollbar.h"



// Check that the scrollbar doesn't scroll after calling hide and show
// from a slot connected to the scrollbar's actionTriggered signal.
void tst_QScrollBar::scrollSingleStep()
{
    SingleStepTestScrollBar testWidget(Qt::Horizontal);
    connect(&testWidget, &QAbstractSlider::actionTriggered, &testWidget, &SingleStepTestScrollBar::hideAndShow);
    testWidget.resize(100, testWidget.height());
    centerOnScreen(&testWidget);
    testWidget.show();
    QTest::qWaitForWindowExposed(&testWidget);

    testWidget.setValue(testWidget.minimum());
    QCOMPARE(testWidget.value(), testWidget.minimum());

    // Get rect for the area to click on
    const QStyleOptionSlider opt = qt_qscrollbarStyleOption(&testWidget);
    QRect sr = testWidget.style()->subControlRect(QStyle::CC_ScrollBar, &opt,
                                                  QStyle::SC_ScrollBarAddLine, &testWidget);

    if (!sr.isValid())
        QSKIP("SC_ScrollBarAddLine not valid");

    QTest::mouseClick(&testWidget, Qt::LeftButton, Qt::NoModifier, QPoint(sr.x(), sr.y()));
    QTest::qWait(510); // initial delay is 500 for setRepeatAction
    disconnect(&testWidget, &QAbstractSlider::actionTriggered, &testWidget, &SingleStepTestScrollBar::hideAndShow);
#ifdef Q_OS_MAC
    QEXPECT_FAIL("", "This test fails on OS X, see QTBUG-25272", Abort);
#endif
    QCOMPARE(testWidget.value(), testWidget.singleStep());
}

void tst_QScrollBar::task_209492()
{
    class MyScrollArea : public QScrollArea
    {
    public:
        int scrollCount;
        MyScrollArea(QWidget *parent = 0) : QScrollArea(parent), scrollCount(0) {}
    protected:
        void paintEvent(QPaintEvent *) { QTest::qSleep(600); }
        void scrollContentsBy(int, int) { ++scrollCount; viewport()->update(); }
    };

    MyScrollArea scrollArea;
    QScrollBar *verticalScrollBar = scrollArea.verticalScrollBar();
    verticalScrollBar->setRange(0, 1000);
    centerOnScreen(&scrollArea);
    scrollArea.show();
    QTest::qWaitForWindowExposed(&scrollArea);

    QSignalSpy spy(verticalScrollBar, SIGNAL(actionTriggered(int)));
    QCOMPARE(scrollArea.scrollCount, 0);
    QCOMPARE(spy.count(), 0);

    // Simulate a mouse click on the "scroll down button".
    const QPoint pressPoint(verticalScrollBar->width() / 2, verticalScrollBar->height() - 10);
    const QPoint globalPressPoint = verticalScrollBar->mapToGlobal(globalPressPoint);
    QMouseEvent mousePressEvent(QEvent::MouseButtonPress, pressPoint, globalPressPoint,
                                Qt::LeftButton, Qt::LeftButton, 0);
    QApplication::sendEvent(verticalScrollBar, &mousePressEvent);
    QTest::qWait(1);
    QMouseEvent mouseReleaseEvent(QEvent::MouseButtonRelease, pressPoint, globalPressPoint,
                                  Qt::LeftButton, Qt::LeftButton, 0);
    QApplication::sendEvent(verticalScrollBar, &mouseReleaseEvent);

    // Check that the action was triggered once.

#ifdef Q_OS_MAC
    QSKIP("The result depends on system setting and is not relevant on Mac");
#endif
    QCOMPARE(scrollArea.scrollCount, 1);
    QCOMPARE(spy.count(), 1);
}

#if QT_CONFIG(wheelevent)
#define WHEEL_DELTA 120 // copied from tst_QAbstractSlider / tst_QComboBox
void tst_QScrollBar::QTBUG_27308()
{
    // QTBUG-27308
    // Check that a disabled scrollbar doesn't react on wheel events anymore

    QScrollBar testWidget(Qt::Horizontal);
    testWidget.resize(100, testWidget.height());
    centerOnScreen(&testWidget);
    testWidget.show();
    QTest::qWaitForWindowExposed(&testWidget);

    testWidget.setValue(testWidget.minimum());
    testWidget.setEnabled(false);
    QWheelEvent event(testWidget.rect().center(),
                      -WHEEL_DELTA, Qt::NoButton, Qt::NoModifier, testWidget.orientation());
    qApp->sendEvent(&testWidget, &event);
    QCOMPARE(testWidget.value(), testWidget.minimum());
}
#endif


void tst_QScrollBar::QTBUG_42871()
{
    QTBUG_42871_Handler myHandler;
    QScrollBar scrollBarWidget(Qt::Vertical);
    bool connection = connect(&scrollBarWidget, SIGNAL(valueChanged(int)), &myHandler, SLOT(valueUpdated(int)));
    QVERIFY(connection);
    scrollBarWidget.resize(100, scrollBarWidget.height());
    centerOnScreen(&scrollBarWidget);
    scrollBarWidget.show();
    QTest::qWaitForWindowExposed(&scrollBarWidget);
    QSignalSpy spy(&scrollBarWidget, SIGNAL(actionTriggered(int)));
    QVERIFY(spy.isValid());
    QCOMPARE(myHandler.updatesCount, 0);
    QCOMPARE(spy.count(), 0);

    // Simulate a mouse click on the "scroll down button".
    const QPoint pressPoint(scrollBarWidget.width() / 2, scrollBarWidget.height() - 10);
    const QPoint globalPressPoint = scrollBarWidget.mapToGlobal(pressPoint);
    QMouseEvent mousePressEvent(QEvent::MouseButtonPress, pressPoint, globalPressPoint,
                                Qt::LeftButton, Qt::LeftButton, 0);
    QApplication::sendEvent(&scrollBarWidget, &mousePressEvent);
    QTest::qWait(1);
    QMouseEvent mouseReleaseEvent(QEvent::MouseButtonRelease, pressPoint, globalPressPoint,
                                  Qt::LeftButton, Qt::LeftButton, 0);
    QApplication::sendEvent(&scrollBarWidget, &mouseReleaseEvent);
    // Check that the action was triggered once.
    QCOMPARE(myHandler.updatesCount, 1);
    QCOMPARE(spy.count(), 1);
}

QTEST_MAIN(tst_QScrollBar)

