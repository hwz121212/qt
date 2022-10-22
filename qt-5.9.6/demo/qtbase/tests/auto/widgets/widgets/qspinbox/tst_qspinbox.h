#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qdebug.h>
#include <qapplication.h>
#include <limits.h>

#include <qspinbox.h>
#include <qlocale.h>
#include <qlineedit.h>
#include <qlayout.h>
#include <QSpinBox>
#include <QWidget>
#include <QString>
#include <QValidator>
#include <QLineEdit>
#include <QObject>
#include <QStringList>
#include <QList>
#include <QLocale>
#include <QDoubleSpinBox>
#include <QVBoxLayout>
#include <QKeySequence>
#include <QStackedWidget>
#include <QDebug>

class SpinBox : public QSpinBox
{
public:
    SpinBox(QWidget *parent = 0)
        : QSpinBox(parent)
    {}
    QString textFromValue(int v) const
    {
        return QSpinBox::textFromValue(v);
    }
    QValidator::State validate(QString &text, int &pos) const
    {
        return QSpinBox::validate(text, pos);
    }
    int valueFromText(const QString &text) const
    {
        return QSpinBox::valueFromText(text);
    }
#if QT_CONFIG(wheelevent)
    void wheelEvent(QWheelEvent *event)
    {
        QSpinBox::wheelEvent(event);
    }
#endif

    QLineEdit *lineEdit() const { return QSpinBox::lineEdit(); }
};

class tst_QSpinBox : public QObject
{
    Q_OBJECT
public:
    tst_QSpinBox();
public slots:
    void init();
private slots:
    void getSetCheck();
    void setValue_data();
    void setValue();

    void setDisplayIntegerBase_data();
    void setDisplayIntegerBase();

    void setPrefixSuffix_data();
    void setPrefixSuffix();

    void setReadOnly();

    void setTracking_data();
    void setTracking();

    void locale_data();
    void locale();

    void setWrapping_data();
    void setWrapping();

    void setSpecialValueText_data();
    void setSpecialValueText();

    void setSingleStep_data();
    void setSingleStep();

    void setMinMax_data();
    void setMinMax();

    void editingFinished();

    void valueFromTextAndValidate_data();
    void valueFromTextAndValidate();

    void removeAll();
    void startWithDash();
    void undoRedo();

    void specialValue();
    void textFromValue();

    void sizeHint();

    void integerOverflow();

    void taskQTBUG_5008_textFromValueAndValidate();
    void lineEditReturnPressed();

    void positiveSign();

    void interpretOnLosingFocus();

    void setGroupSeparatorShown_data();
    void setGroupSeparatorShown();

    void wheelEvents();

public slots:
    void valueChangedHelper(const QString &);
    void valueChangedHelper(int);
private:
    QStringList actualTexts;
    QList<int> actualValues;
};

