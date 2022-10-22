#include "tst_qradiobutton.h"




void tst_QRadioButton::task190739_focus()
{
    QWidget widget;
    QPushButton button1(&widget);
    button1.setText("button1");
    QLineEdit edit(&widget);
    edit.setFocus();

    QRadioButton radio1(&widget);
    radio1.setText("radio1");
    radio1.setFocusPolicy(Qt::TabFocus);
    radio1.setShortcut(QKeySequence("Ctrl+O"));

    QVBoxLayout layout(&widget);
    layout.addWidget(&button1);
    layout.addWidget(&edit);
    layout.addWidget(&radio1);

    widget.show();
    widget.activateWindow();
    QApplication::setActiveWindow(&widget);
    QTest::qWait(100);

    QVERIFY(edit.hasFocus());
    QVERIFY(!radio1.isChecked());

    QTest::keyClick(&edit, Qt::Key_O, Qt::ControlModifier, 20);
    QTest::qWait(200);
    QVERIFY(radio1.isChecked());
    QVERIFY(edit.hasFocus());
    QVERIFY(!radio1.hasFocus());
}


void tst_QRadioButton::minimumSizeHint()
{
    QRadioButton button(tr("QRadioButtons sizeHint is the same as it's minimumSizeHint"));
    QCOMPARE(button.sizeHint(), button.minimumSizeHint());
}


QTEST_MAIN(tst_QRadioButton)

