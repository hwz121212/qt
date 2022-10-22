#include "tst_qabstractprintdialog.h"


#if !QT_CONFIG(printdialog)

#else
// Testing get/set functions
void tst_QAbstractPrintDialog::getSetCheck()
{
    QPrinter printer;
    MyAbstractPrintDialog obj1(&printer);
    QCOMPARE(obj1.printer(), &printer);
    // PrintDialogOptions QAbstractPrintDialog::enabledOptions()
    // void QAbstractPrintDialog::setEnabledOptions(PrintDialogOptions)
    obj1.setEnabledOptions(QAbstractPrintDialog::PrintDialogOptions(QAbstractPrintDialog::None));
    QCOMPARE(QAbstractPrintDialog::PrintDialogOptions(QAbstractPrintDialog::None), obj1.enabledOptions());
    obj1.setEnabledOptions(QAbstractPrintDialog::PrintDialogOptions(QAbstractPrintDialog::PrintToFile));
    QCOMPARE(QAbstractPrintDialog::PrintDialogOptions(QAbstractPrintDialog::PrintToFile), obj1.enabledOptions());
    obj1.setEnabledOptions(QAbstractPrintDialog::PrintDialogOptions(QAbstractPrintDialog::PrintSelection));
    QCOMPARE(QAbstractPrintDialog::PrintDialogOptions(QAbstractPrintDialog::PrintSelection), obj1.enabledOptions());
    obj1.setEnabledOptions(QAbstractPrintDialog::PrintDialogOptions(QAbstractPrintDialog::PrintPageRange));
    QCOMPARE(QAbstractPrintDialog::PrintDialogOptions(QAbstractPrintDialog::PrintPageRange), obj1.enabledOptions());
    obj1.setEnabledOptions(QAbstractPrintDialog::PrintDialogOptions(QAbstractPrintDialog::PrintCollateCopies));
    QCOMPARE(QAbstractPrintDialog::PrintDialogOptions(QAbstractPrintDialog::PrintCollateCopies), obj1.enabledOptions());

    // PrintRange QAbstractPrintDialog::printRange()
    // void QAbstractPrintDialog::setPrintRange(PrintRange)
    obj1.setPrintRange(QAbstractPrintDialog::PrintRange(QAbstractPrintDialog::AllPages));
    QCOMPARE(QAbstractPrintDialog::PrintRange(QAbstractPrintDialog::AllPages), obj1.printRange());
    obj1.setPrintRange(QAbstractPrintDialog::PrintRange(QAbstractPrintDialog::Selection));
    QCOMPARE(QAbstractPrintDialog::PrintRange(QAbstractPrintDialog::Selection), obj1.printRange());
    obj1.setPrintRange(QAbstractPrintDialog::PrintRange(QAbstractPrintDialog::PageRange));
    QCOMPARE(QAbstractPrintDialog::PrintRange(QAbstractPrintDialog::PageRange), obj1.printRange());
}

void tst_QAbstractPrintDialog::setMinMax()
{
    QPrinter printer;
    MyAbstractPrintDialog obj1(&printer);
    obj1.setEnabledOptions(QAbstractPrintDialog::PrintDialogOptions(QAbstractPrintDialog::None));
    QEXPECT_FAIL("", "QTBUG-22637", Abort);
    QCOMPARE(obj1.minPage(), 1);
    QCOMPARE(obj1.maxPage(), INT_MAX);
    QVERIFY(!obj1.isOptionEnabled(QAbstractPrintDialog::PrintPageRange));
    obj1.setMinMax(2,5);
    QCOMPARE(obj1.minPage(), 2);
    QCOMPARE(obj1.maxPage(), 5);
    QVERIFY(obj1.enabledOptions() & QAbstractPrintDialog::PrintPageRange);
    QVERIFY(obj1.isOptionEnabled(QAbstractPrintDialog::PrintPageRange));
}

void tst_QAbstractPrintDialog::setFromTo()
{
    QPrinter printer;
    MyAbstractPrintDialog obj1(&printer);
    QCOMPARE(obj1.fromPage(), 0);
    QCOMPARE(obj1.toPage(), 0);
    obj1.setMinMax(0,0);
    QCOMPARE(obj1.minPage(), 0);
    QCOMPARE(obj1.maxPage(), 0);
    obj1.setFromTo(20,50);
    QCOMPARE(obj1.fromPage(), 20);
    QCOMPARE(obj1.toPage(), 50);
    QCOMPARE(obj1.minPage(), 1);
    QCOMPARE(obj1.maxPage(), 50);
}

#endif

QTEST_MAIN(tst_QAbstractPrintDialog)

