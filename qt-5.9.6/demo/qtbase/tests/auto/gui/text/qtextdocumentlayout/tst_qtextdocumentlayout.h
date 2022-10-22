#pragma once

#include <QtTest/QtTest>

#include <qtextdocument.h>
#include <qabstracttextdocumentlayout.h>
#include <qdebug.h>
#include <qpainter.h>
#include <qtexttable.h>
#ifndef QT_NO_WIDGETS
#include <qtextedit.h>
#include <qscrollbar.h>
#endif

class tst_QTextDocumentLayout : public QObject
{
    Q_OBJECT

private slots:
    void init();
    void cleanup();
    void cleanupTestCase();
    void defaultPageSizeHandling();
    void idealWidth();
    void lineSeparatorFollowingTable();
#ifndef QT_NO_WIDGETS
    void wrapAtWordBoundaryOrAnywhere();
#endif
    void inlineImage();
    void clippedTableCell();
    void floatingTablePageBreak();
    void imageAtRightAlignedTab();
    void blockVisibility();

private:
    QTextDocument *doc;
};
