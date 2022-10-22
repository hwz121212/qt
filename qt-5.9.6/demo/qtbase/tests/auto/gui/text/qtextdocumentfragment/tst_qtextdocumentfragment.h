#pragma once


#include <QtTest/QtTest>

#include <qguiapplication.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtexttable.h>
#include <qtextlist.h>
#include <qdebug.h>
#include <private/qtextdocument_p.h>


#include <qtextcursor.h>

QT_FORWARD_DECLARE_CLASS(QTextDocument)

class tst_QTextDocumentFragment : public QObject
{
    Q_OBJECT

public:
    tst_QTextDocumentFragment();
    ~tst_QTextDocumentFragment();

public slots:
    void init();
    void cleanup();
private slots:
    void listCopying();
    void listZeroCopying();
    void listCopying2();
    void tableCopying();
    void tableCopyingWithColSpans();
    void tableColSpanAndWidth();
    void tableImport();
    void tableImport2();
    void tableImport3();
    void tableImport4();
    void tableImport5();
    void textCopy();
    void copyWholeDocument();
    void title();
    void html_listIndents1();
    void html_listIndents2();
    void html_listIndents3();
    void html_listIndents4();
    void html_listIndents5();
    void html_listIndents6();
    void html_listIndents7();
    void blockCharFormat();
    void blockCharFormatCopied();
    void initialBlock();
    void clone();
    void dontRemoveInitialBlockIfItHoldsObjectIndexedCharFormat();
    void dosLineFeed();
    void unorderedListEnumeration();
    void resetHasBlockAfterClosedBlockTags();
    void ignoreStyleTags();
    void hrefAnchor();
    void namedAnchorFragments();
    void namedAnchorFragments2();
    void namedAnchorFragments3();
    void dontInheritAlignmentInTables();
    void cellBlockCount();
    void cellBlockCount2();
    void emptyTable();
    void emptyTable2();
    void emptyTable3();
    void doubleRowClose();
    void mayNotHaveChildren();
    void inheritAlignment();
    void dontEmitEmptyNodeWhenEmptyTagIsFollowedByCloseTag();
    void toPlainText();
    void copyTableRow();
    void copyTableColumn();
    void copySubTable();
    void html_textDecoration();
    void html_infiniteLoop();
    void html_blockIndent();
    void html_listIndent();
    void html_whitespace();
    void html_whitespace_data();
    void html_qt3Whitespace();
    void html_qt3WhitespaceWithFragments();
    void html_qt3WhitespaceAfterTags();
    void html_listStart1();
    void html_listStart2();
    void html_cssMargin();
    void html_hexEntities();
    void html_decEntities();
    void html_thCentered();
    void orderedListNumbering();
    void html_blockAfterList();
    void html_subAndSuperScript();
    void html_cssColors();
    void obeyFragmentMarkersInImport();
    void whitespaceWithFragmentMarkers();
    void html_emptyParapgraphs1();
    void html_emptyParapgraphs2();
    void html_emptyParagraphs3();
    void html_emptyParagraphs4();
    void html_font();
    void html_fontSize();
    void html_fontSizeAdjustment();
    void html_cssFontSize();
    void html_cssShorthandFont();
    void html_bodyBgColor();
    void html_qtBgColor();
    void html_blockLevelDiv();
    void html_spanNesting();
    void html_nestedLists();
    void noSpecialCharactersInPlainText();
    void html_doNotInheritBackground();
    void html_inheritBackgroundToInlineElements();
    void html_doNotInheritBackgroundFromBlockElements();
    void html_nobr();
    void fromPlainText();
    void fromPlainText2();
    void html_closingImageTag();
    void html_emptyDocument();
    void html_closingTag();
    void html_anchorAroundImage();
    void html_floatBorder();
    void html_frameImport();
    void html_frameImport2();
    void html_dontAddMarginsAcrossTableCells();
    void html_dontMergeCenterBlocks();
    void html_tableCellBgColor();
    void html_tableCellBgColor2();
    void html_cellSkip();
    void nonZeroMarginOnImport();
    void html_charFormatPropertiesUnset();
    void html_headings();
    void html_quotedFontFamily();
    void html_spanBackgroundColor();
    void defaultFont();
    void html_brokenTitle_data();
    void html_brokenTitle();
    void html_blockVsInline();
    void html_tbody();
    void html_nestedTables();
    void html_rowSpans();
    void html_rowSpans2();
    void html_implicitParagraphs();
    void html_missingCloseTag();
    void html_anchorColor();
    void html_lastParagraphClosing();
    void html_tableHeaderBodyFootParent();
    void html_columnWidths();
    void html_bodyBackground();
    void html_tableCellBackground();
    void css_bodyBackground();
    void css_tableCellBackground();
    void css_fontWeight();
    void css_float();
    void css_textIndent();
    void css_inline();
    void css_external();
    void css_import();
    void css_selectors_data();
    void css_selectors();
    void css_nodeNameCaseInsensitivity();
    void css_textUnderlineStyle_data();
    void css_textUnderlineStyle();
    void css_textUnderlineStyleAndDecoration();
    void css_listStyleType();
    void css_linkPseudo();
    void css_pageBreaks();
    void css_cellPaddings();
    void universalSelectors_data();
    void universalSelectors();
    void screenMedia();
    void htmlResourceLoading();
    void someCaseInsensitiveAttributeValues();
    void backgroundImage();
    void dontMergePreAndNonPre();
    void leftMarginInsideHtml();
    void html_margins();
    void newlineInsidePreShouldBecomeNewParagraph();
    void invalidColspan();
    void html_brokenTableWithJustTr();
    void html_brokenTableWithJustTd();
    void html_preNewlineHandling_data();
    void html_preNewlineHandling();
    void html_br();
    void html_dl();
    void html_tableStrangeNewline();
    void html_tableStrangeNewline2();
    void html_tableStrangeNewline3();
    void html_caption();
    void html_windowsEntities();
    void html_eatenText();
    void html_hr();
    void html_hrMargins();
    void html_blockQuoteMargins();
    void html_definitionListMargins();
    void html_listMargins();
    void html_titleAttribute();
    void html_compressDivs();
    void completeToPlainText();
    void copyContents();
    void html_textAfterHr();
    void blockTagClosing();
    void isEmpty();
    void html_alignmentInheritance();
    void html_ignoreEmptyDivs();
    void html_dontInheritAlignmentForFloatingImages();
    void html_verticalImageAlignment();
    void html_verticalCellAlignment();
    void html_borderColor();
    void html_borderStyle();
    void html_borderWidth();
    void html_userState();
    void html_rootFrameProperties();
    void html_alignmentPropertySet();
    void html_appendList();
    void html_appendList2();
    void html_qt3RichtextWhitespaceMode();
    void html_brAfterHr();
    void html_unclosedHead();
    void html_entities();
    void html_entities_data();
    void html_ignore_script();
    void html_directionWithHtml();
    void html_directionWithRichText();
    void html_metaInBody();
    void html_importImageWithoutAspectRatio();
    void html_fromFirefox();
    void html_emptyInlineInsideBlock();

private:
    inline void setHtml(const QString &html)
    // don't take the shortcut in QTextDocument::setHtml
    { doc->clear(); QTextCursor(doc).insertFragment(QTextDocumentFragment::fromHtml(html)); }

    inline void appendHtml(const QString &html)
    {
        QTextCursor cursor(doc);
        cursor.movePosition(QTextCursor::End);
        cursor.insertHtml(html);
    }

    QTextDocument *doc;
    QTextCursor cursor;
};
