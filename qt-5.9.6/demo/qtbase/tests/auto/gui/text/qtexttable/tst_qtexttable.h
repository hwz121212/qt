#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB
#include <QtTest/QtTest>


#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtexttable.h>
#include <qdebug.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#ifndef QT_NO_WIDGETS
#include <qtextedit.h>
#endif
#ifndef QT_NO_PRINTER
#include <QPagedPaintDevice>
#include <QPainter>
#include <QPaintEngine>
#endif

typedef QList<int> IntList;

QT_FORWARD_DECLARE_CLASS(QTextDocument)

class tst_QTextTable : public QObject
{
    Q_OBJECT

private slots:
    void init();
    void cleanup();
    void cursorPositioning();
    void variousTableModifications();
    void tableShrinking();
    void spans();
    void variousModifications2();
    void tableManager_undo();
    void tableManager_removeCell();
    void rowAt();
    void rowAtWithSpans();
    void multiBlockCells();
    void insertRows();
    void deleteInTable();
    void mergeCells();
    void mergeAndInsert();
    void splitCells();
    void blocksForTableShouldHaveEmptyFormat();
    void removeTableByRemoveRows();
    void removeTableByRemoveColumns();
    void setCellFormat();
    void removeRows1();
    void removeRows2();
    void removeRows3();
    void removeRows4();
    void removeRows5();
    void removeColumns1();
    void removeColumns2();
    void removeColumns3();
    void removeColumns4();
    void removeColumns5();
    void removeColumnsInTableWithMergedRows();
#ifndef QT_NO_WIDGETS
    void QTBUG11282_insertBeforeMergedEnding_data();
    void QTBUG11282_insertBeforeMergedEnding();
#endif
    void QTBUG22011_insertBeforeRowSpan();
#ifndef QT_NO_PRINTER
    void QTBUG31330_renderBackground();
#endif

private:
    QTextTable *create2x2Table();
    QTextTable *create4x4Table();

    QTextTable *createTable(int rows, int cols);

    QTextDocument *doc;
    QTextCursor cursor;
};

