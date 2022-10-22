#pragma once

#include <QtTest/QTest>

#include <qtextdocument.h>
#include <qdebug.h>
#ifndef Q_OS_WIN
#  include <private/qtextdocument_p.h>
#endif

#include <qtextobject.h>
#include <qtextcursor.h>

QT_FORWARD_DECLARE_CLASS(QTextDocument)

class tst_QTextBlock : public QObject
{
    Q_OBJECT

private slots:
    void init();
    void cleanup();
    void fragmentOverBlockBoundaries();
    void excludeParagraphSeparatorFragment();
    void backwardsBlockIterator();
    void previousBlock_qtbug18026();
    void removedBlock_qtbug18500();

private:
    QTextDocument *doc;
    QTextCursor cursor;
};
