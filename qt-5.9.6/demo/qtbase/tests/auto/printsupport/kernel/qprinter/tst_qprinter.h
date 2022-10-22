#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>

#include <qprinter.h>
#include <qpagesetupdialog.h>
#include <qpainter.h>
#include <qprintdialog.h>
#include <qprintpreviewdialog.h>
#include <qprintpreviewwidget.h>
#include <qprinterinfo.h>
#include <qvariant.h>
#include <qpainter.h>
#include <qprintengine.h>
#include <qpagelayout.h>
#include <qsharedpointer.h>
#include <qtemporarydir.h>

#include <math.h>

#ifdef Q_OS_WIN
#include <windows.h>
#endif

#if QT_CONFIG(printer)
typedef QSharedPointer<QPrinter> PrinterPtr;

Q_DECLARE_METATYPE(PrinterPtr)
Q_DECLARE_METATYPE(QPrinter::Orientation)
Q_DECLARE_METATYPE(QPrinter::PageSize)
#endif // printer

static int fileNumber = 0;

class tst_QPrinter : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
#if QT_CONFIG(printer)
    void testPageRectAndPaperRect();
    void testPageRectAndPaperRect_data();
    void testSetOptions();
    void testMargins_data();
    void testMargins();
    void testPageSetupDialog();
    void testPrintPreviewDialog();
    void testMulitpleSets_data();
    void testMulitpleSets();
    void testPageMargins_data();
    void testPageMargins();
    void outputFormatFromSuffix();
    void errorReporting();
    void testCustomPageSizes();
    void customPaperSizeAndMargins_data();
    void customPaperSizeAndMargins();
    void customPaperNameSettingBySize();
    void customPaperNameSettingByName();
#if QT_CONFIG(completer) && QT_CONFIG(filedialog)
    void printDialogCompleter();
#endif
    void testCurrentPage();
    void taskQTBUG4497_reusePrinterOnDifferentFiles();
    void testPdfTitle();

    // Test QPrintEngine keys and their QPrinter setters/getters
    void testMultipleKeys();
    void collateCopies();
    void colorMode();
    void copyCount();
    void creator();
    void docName();
    void doubleSidedPrinting();
    void duplex();
    void fontEmbedding();
    void fullPage();
    void orientation();
    void outputFileName();
    void pageOrder();
    void pageSize();
    void paperSize();
    void paperSource();
    void printerName();
    void printerSelectionOption();
    void printProgram();
    void printRange();
    void resolution();
    void supportedPaperSources();
    void supportedResolutions();
    void windowsPageSize();

    // Test QPrinter setters/getters for non-QPrintEngine options
    void outputFormat();
    void fromToPage();

    void testPageMetrics_data();
    void testPageMetrics();
#endif
private:
    QString testFileName(const QString &prefix, const QString &suffix);
    QString testPdfFileName(const QString &prefix) { return testFileName(prefix, QStringLiteral("pdf")); }

    QTemporaryDir m_tempDir;
};


#if QT_CONFIG(printer)


void testPageSetupDialog();

// A preview dialog showing 4 pages for testPrintPreviewDialog().

class MyPreviewDialog : public QPrintPreviewDialog {
	Q_OBJECT
public:
	MyPreviewDialog(QPrinter *p) : QPrintPreviewDialog(p)
	{
		connect(this, SIGNAL(paintRequested(QPrinter*)), this, SLOT(slotPaintRequested(QPrinter*)));
	}

public slots:
	void slotPaintRequested(QPrinter *p);
};

#endif // QT_CONFIG(printer)