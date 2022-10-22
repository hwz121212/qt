#include "tst_qfocusframe.h"





tst_QFocusFrame::tst_QFocusFrame()
{
}

tst_QFocusFrame::~tst_QFocusFrame()
{
}

// Testing get/set functions
void tst_QFocusFrame::getSetCheck()
{
    QFocusFrame *obj1 = new QFocusFrame();
    // QWidget * QFocusFrame::widget()
    // void QFocusFrame::setWidget(QWidget *)
    QWidget var1;
    QWidget *var2 = new QWidget(&var1);
    obj1->setWidget(var2);
    QCOMPARE(var2, obj1->widget());
    obj1->setWidget((QWidget *)0);
    QCOMPARE((QWidget *)0, obj1->widget());
    delete obj1;
}

QTEST_MAIN(tst_QFocusFrame)
