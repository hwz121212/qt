#include "tst_qsizegrip.h"



static inline Qt::Corner sizeGripCorner(QWidget *parent, QSizeGrip *sizeGrip)
{
    if (!parent || !sizeGrip)
        return Qt::TopLeftCorner;

    const QPoint sizeGripPos = sizeGrip->mapTo(parent, QPoint(0, 0));
    bool isAtBottom = sizeGripPos.y() >= parent->height() / 2;
    bool isAtLeft = sizeGripPos.x() <= parent->width() / 2;
    if (isAtLeft)
        return isAtBottom ? Qt::BottomLeftCorner : Qt::TopLeftCorner;
    else
        return isAtBottom ? Qt::BottomRightCorner : Qt::TopRightCorner;

}






void tst_QSizeGrip::initTestCase()
{
    dummyWidget = new QLineEdit;
    dummyWidget->show();
}

void tst_QSizeGrip::cleanupTestCase()
{
    delete dummyWidget;
    dummyWidget = 0;
}

void tst_QSizeGrip::hideAndShowOnWindowStateChange_data()
{
    QTest::addColumn<Qt::WindowType>("windowType");
    QTest::newRow("Qt::Window") << Qt::Window;
    QTest::newRow("Qt::SubWindow") << Qt::SubWindow;
}

void tst_QSizeGrip::hideAndShowOnWindowStateChange()
{
    QFETCH(Qt::WindowType, windowType);

    QWidget *parentWidget = windowType == Qt::Window ?  0 : new QWidget;
    TestWidget *widget = new TestWidget(parentWidget, Qt::WindowFlags(windowType));
    QSizeGrip *sizeGrip = new QSizeGrip(widget);

    // Normal.
    if (parentWidget)
        parentWidget->show();
    else
        widget->show();
    QVERIFY(sizeGrip->isVisible());

    widget->showFullScreen();
    QVERIFY(!sizeGrip->isVisible());

    widget->showNormal();
    QVERIFY(sizeGrip->isVisible());

    widget->showMaximized();
#ifndef Q_OS_MAC
    QVERIFY(!sizeGrip->isVisible());
#else
    QEXPECT_FAIL("", "QTBUG-23681", Abort);
    QVERIFY(sizeGrip->isVisible());
#endif

    widget->showNormal();
    QVERIFY(sizeGrip->isVisible());

    sizeGrip->hide();
    QVERIFY(!sizeGrip->isVisible());

    widget->showFullScreen();
    widget->showNormal();
    QVERIFY(!sizeGrip->isVisible());
    widget->showMaximized();
    widget->showNormal();
    QVERIFY(!sizeGrip->isVisible());

    delete widget;
    delete parentWidget;
}

void tst_QSizeGrip::orientation()
{
    TestWidget widget;
    widget.setLayout(new QVBoxLayout);
    QSizeGrip *sizeGrip = new QSizeGrip(&widget);
    sizeGrip->setFixedSize(sizeGrip->sizeHint());
    widget.layout()->addWidget(sizeGrip);
    widget.layout()->setAlignment(sizeGrip, Qt::AlignBottom | Qt::AlignRight);

    widget.show();
    QCOMPARE(sizeGripCorner(&widget, sizeGrip), Qt::BottomRightCorner);

    widget.setLayoutDirection(Qt::RightToLeft);
    qApp->processEvents();
    QCOMPARE(sizeGripCorner(&widget, sizeGrip), Qt::BottomLeftCorner);

    widget.unsetLayoutDirection();
    qApp->processEvents();
    QCOMPARE(sizeGripCorner(&widget, sizeGrip), Qt::BottomRightCorner);

    widget.layout()->setAlignment(sizeGrip, Qt::AlignTop | Qt::AlignRight);
    qApp->processEvents();
    QCOMPARE(sizeGripCorner(&widget, sizeGrip), Qt::TopRightCorner);

    widget.setLayoutDirection(Qt::RightToLeft);
    qApp->processEvents();
    QCOMPARE(sizeGripCorner(&widget, sizeGrip), Qt::TopLeftCorner);

    widget.unsetLayoutDirection();
    qApp->processEvents();
    QCOMPARE(sizeGripCorner(&widget, sizeGrip), Qt::TopRightCorner);
}

void tst_QSizeGrip::dontCrashOnTLWChange()
{
    // QTBUG-22867
    QMdiArea mdiArea;
    mdiArea.show();

    QMainWindow *mw = new QMainWindow();
    QMdiSubWindow *mdi = mdiArea.addSubWindow(mw);
    mw->statusBar()->setSizeGripEnabled(true);
    mdiArea.removeSubWindow(mw);
    delete mdi;
    mw->show();

    // the above setup causes a change of TLW for the size grip,
    // and it must not crash.

    QVERIFY(QTest::qWaitForWindowExposed(&mdiArea));
    QVERIFY(QTest::qWaitForWindowExposed(mw));
}

QTEST_MAIN(tst_QSizeGrip)


