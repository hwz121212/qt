#pragma once


#include <QtTest/QtTest>
#include <QTextDocument>
#include <QTextLayout>
#include <QDebug>
#include <QAbstractTextDocumentLayout>
#include <QSyntaxHighlighter>

#ifndef QT_NO_WIDGETS
#include <QTextEdit>
#endif

class QTestDocumentLayout : public QAbstractTextDocumentLayout
{
    Q_OBJECT
public:
    inline QTestDocumentLayout(QTextDocument *doc)
        : QAbstractTextDocumentLayout(doc), documentChangedCalled(false) {}

        virtual void draw(QPainter *, const QAbstractTextDocumentLayout::PaintContext &)  {}

        virtual int hitTest(const QPointF &, Qt::HitTestAccuracy ) const { return 0; }

        virtual void documentChanged(int, int, int) { documentChangedCalled = true; }

        virtual int pageCount() const { return 1; }

        virtual QSizeF documentSize() const { return QSize(); }

        virtual QRectF frameBoundingRect(QTextFrame *) const { return QRectF(); }
        virtual QRectF blockBoundingRect(const QTextBlock &) const { return QRectF(); }

        bool documentChangedCalled;
};

class tst_QSyntaxHighlighter : public QObject
{
    Q_OBJECT

private slots:
    void init();
    void cleanup();
    void basic();
    void basicTwo();
    void removeFormatsOnDelete();
    void emptyBlocks();
    void setCharFormat();
    void highlightOnInit();
    void stopHighlightingWhenStateDoesNotChange();
    void unindent();
    void highlightToEndOfDocument();
    void highlightToEndOfDocument2();
    void preservePreeditArea();
    void task108530();
    void avoidUnnecessaryRehighlight();
    void noContentsChangedDuringHighlight();
    void rehighlight();
    void rehighlightBlock();
#ifndef QT_NO_WIDGETS
    void textEditParent();
#endif

private:
    QTextDocument *doc;
    QTestDocumentLayout *lout;
    QTextCursor cursor;
};
