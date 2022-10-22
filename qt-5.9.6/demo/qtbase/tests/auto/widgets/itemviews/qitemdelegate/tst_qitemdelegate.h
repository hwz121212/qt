#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>

#include <qabstractitemview.h>
#include <qstandarditemmodel.h>
#include <qapplication.h>
#include <qdatetimeedit.h>
#include <qspinbox.h>
#include <qlistview.h>
#include <qtableview.h>
#include <qtreeview.h>
#include <qheaderview.h>
#include <qitemeditorfactory.h>
#include <qlineedit.h>
#include <qvalidator.h>
#include <qtablewidget.h>
#include <qtreewidget.h>

#include <QItemDelegate>
#include <QComboBox>
#include <QAbstractItemDelegate>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QDialog>

#include <QtWidgets/private/qabstractitemdelegate_p.h>

Q_DECLARE_METATYPE(QAbstractItemDelegate::EndEditHint)

#if defined (Q_OS_WIN) && !defined(Q_OS_WINRT)
#include <windows.h>
#define Q_CHECK_PAINTEVENTS \
    if (::SwitchDesktop(::GetThreadDesktop(::GetCurrentThreadId())) == 0) \
        QSKIP("The widgets don't get the paint events");
#else
#define Q_CHECK_PAINTEVENTS
#endif

//Begin of class definitions

class TestItemDelegate : public QItemDelegate
{
public:
    TestItemDelegate(QObject *parent = 0) : QItemDelegate(parent) {}
    ~TestItemDelegate() {}

    void drawDisplay(QPainter *painter,
                     const QStyleOptionViewItem &option,
                     const QRect &rect, const QString &text) const
    {
        displayText = text;
        displayFont = option.font;
        QItemDelegate::drawDisplay(painter, option, rect, text);
    }

    void drawDecoration(QPainter *painter,
                        const QStyleOptionViewItem &option,
                        const QRect &rect, const QPixmap &pixmap) const
    {
        decorationPixmap = pixmap;
        decorationRect = rect;
        QItemDelegate::drawDecoration(painter, option, rect, pixmap);
    }


    inline QRect textRectangle(QPainter * painter, const QRect &rect,
                               const QFont &font, const QString &text) const
    {
        return QItemDelegate::textRectangle(painter, rect, font, text);
    }

    inline void doLayout(const QStyleOptionViewItem &option,
                         QRect *checkRect, QRect *pixmapRect,
                         QRect *textRect, bool hint) const
    {
        QItemDelegate::doLayout(option, checkRect, pixmapRect, textRect, hint);
    }

    inline QRect rect(const QStyleOptionViewItem &option,
                      const QModelIndex &index, int role) const
    {
        return QItemDelegate::rect(option, index, role);
    }

    inline bool eventFilter(QObject *object, QEvent *event)
    {
        return QItemDelegate::eventFilter(object, event);
    }

    inline bool editorEvent(QEvent *event,
                            QAbstractItemModel *model,
                            const QStyleOptionViewItem &option,
                            const QModelIndex &index)
    {
        return QItemDelegate::editorEvent(event, model, option, index);
    }

    // stored values for testing
    mutable QString displayText;
    mutable QFont displayFont;
    mutable QPixmap decorationPixmap;
    mutable QRect decorationRect;
};

class TestItemModel : public QAbstractTableModel
{
public:

    enum Roles {
        PixmapTestRole,
        ImageTestRole,
        IconTestRole,
        ColorTestRole,
        DoubleTestRole
    };

    TestItemModel(const QSize &size) : size(size) {}

    ~TestItemModel() {}

    int rowCount(const QModelIndex &parent) const
    {
        Q_UNUSED(parent);
        return 1;
    }

    int columnCount(const QModelIndex &parent) const
    {
        Q_UNUSED(parent);
        return 1;
    }

    QVariant data(const QModelIndex& index, int role) const
    {
        Q_UNUSED(index);
        static QPixmap pixmap(size);
        static QImage image(size, QImage::Format_Mono);
        static QIcon icon(pixmap);
        static QColor color(Qt::green);

        switch (role) {
        case PixmapTestRole: return pixmap;
        case ImageTestRole:  return image;
        case IconTestRole:   return icon;
        case ColorTestRole:  return color;
        case DoubleTestRole:  return 10.00000001;
        default: break;
        }

        return QVariant();
    }

private:
    QSize size;
};

class tst_QItemDelegate : public QObject
{
    Q_OBJECT

private slots:
    void getSetCheck();
    void textRectangle_data();
    void textRectangle();
    void sizeHint_data();
    void sizeHint();
    void editorKeyPress_data();
    void editorKeyPress();
    void doubleEditorNegativeInput();
    void font_data();
    void font();
    void doLayout_data();
    void doLayout();
    void rect_data();
    void rect();
    void testEventFilter();
    void dateTimeEditor_data();
    void dateTimeEditor();
    void dateAndTimeEditorTest2();
    void uintEdit();
    void decoration_data();
    void decoration();
    void editorEvent_data();
    void editorEvent();
    void enterKey_data();
    void enterKey();
    void comboBox();
    void testLineEditValidation_data();
    void testLineEditValidation();

    void task257859_finalizeEdit();
    void QTBUG4435_keepSelectionOnCheck();

    void QTBUG16469_textForRole();
};

