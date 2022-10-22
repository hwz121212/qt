#include "tst_qcolordialog.h"


tst_QColorDialog::tst_QColorDialog()
{
}

tst_QColorDialog::~tst_QColorDialog()
{
}

void tst_QColorDialog::testNativeActiveModalWidget()
{
    // Check that QApplication::activeModalWidget retruns the
    // color dialog when it is executing, even when using a native
    // dialog:
    TestNativeDialog d;
    QTimer::singleShot(1000, &d, SLOT(hide()));
    d.exec();
    QCOMPARE(&d, d.m_activeModalWidget);
}

void tst_QColorDialog::native_activeModalWidget()
{
    QTimer::singleShot(3000, qApp, SLOT(quit()));
    QTimer::singleShot(0, this, SLOT(testNativeActiveModalWidget()));
    qApp->exec();
}

void tst_QColorDialog::postKeyReturn() {
    QWidgetList list = QApplication::topLevelWidgets();
    for (int i=0; i<list.count(); ++i) {
        QColorDialog *dialog = qobject_cast<QColorDialog *>(list[i]);
        if (dialog) {
            QTest::keyClick( list[i], Qt::Key_Return, Qt::NoModifier );
            return;
        }
    }
}

void tst_QColorDialog::testGetRgba()
{
#ifdef Q_OS_MAC
    QEXPECT_FAIL("", "Sending QTest::keyClick to OSX color dialog helper fails, see QTBUG-24320", Continue);
#endif
    bool ok = false;
    QTimer::singleShot(500, this, SLOT(postKeyReturn()));
    QColorDialog::getRgba(0xffffffff, &ok);
    QVERIFY(ok);
}

void tst_QColorDialog::defaultOkButton()
{
    QTimer::singleShot(4000, qApp, SLOT(quit()));
    QTimer::singleShot(0, this, SLOT(testGetRgba()));
    qApp->exec();
}

void tst_QColorDialog::task247349_alpha()
{
    QColorDialog dialog;
    dialog.setOption(QColorDialog::ShowAlphaChannel, true);
    int alpha = 0x17;
    dialog.setCurrentColor(QColor(0x01, 0x02, 0x03, alpha));
    QCOMPARE(alpha, dialog.currentColor().alpha());
    QCOMPARE(alpha, qAlpha(dialog.currentColor().rgba()));
}

void tst_QColorDialog::QTBUG_43548_initialColor()
{
    QColorDialog dialog;
    dialog.setOption(QColorDialog::DontUseNativeDialog);
    dialog.setCurrentColor(QColor(Qt::red));
    QColor a(Qt::red);
    QCOMPARE(a, dialog.currentColor());
}

QTEST_MAIN(tst_QColorDialog)

