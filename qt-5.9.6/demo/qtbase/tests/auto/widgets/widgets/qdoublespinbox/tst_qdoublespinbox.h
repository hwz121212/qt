#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qapplication.h>
#include <limits.h>

#include <float.h>

#include <qspinbox.h>
#include <qlocale.h>
#include <qlayout.h>

#include <qlineedit.h>
#include <qdebug.h>

class DoubleSpinBox : public QDoubleSpinBox
{
    Q_OBJECT
public:
    DoubleSpinBox(QWidget *parent = 0)
        : QDoubleSpinBox(parent)
    { /*connect(this, SIGNAL(valueChanged(double)), this, SLOT(foo(double)));*/ }
    QString textFromValue(double v) const
    {
        return QDoubleSpinBox::textFromValue(v);
    }
    QValidator::State validate(QString &text, int &pos) const
    {
        return QDoubleSpinBox::validate(text, pos);
    }
    double valueFromText(const QString &text) const
    {
        return QDoubleSpinBox::valueFromText(text);
    }

    QLineEdit* lineEdit() const { return QDoubleSpinBox::lineEdit(); }
public slots:
    void foo(double vla)
    {
        qDebug() << vla;
    }
};


class tst_QDoubleSpinBox : public QObject
{
    Q_OBJECT
public:
    tst_QDoubleSpinBox();
    virtual ~tst_QDoubleSpinBox();
public slots:
    void initTestCase();
    void cleanupTestCase();
    void init();

private slots:
    void germanTest();

    void task54433();

    void setValue_data();
    void setValue();

    void setPrefixSuffix_data();
    void setPrefixSuffix();

    void setTracking_data();
    void setTracking();

    void setWrapping_data();
    void setWrapping();

    void setSpecialValueText_data();
    void setSpecialValueText();

    void setSingleStep_data();
    void setSingleStep();

    void setMinMax_data();
    void setMinMax();

    void setDecimals_data();
    void setDecimals();

    void doubleDot();

    void undoRedo();

    void valueFromTextAndValidate_data();
    void valueFromTextAndValidate();

    void setReadOnly();

    void editingFinished();

    void removeAll();

    void task199226_stateAfterEnter();
    void task224497_fltMax();

    void task221221();
    void task255471_decimalsValidation();

    void taskQTBUG_5008_textFromValueAndValidate();
    void taskQTBUG_6670_selectAllWithPrefix();
    void taskQTBUG_6496_fiddlingWithPrecision();

    void setGroupSeparatorShown_data();
    void setGroupSeparatorShown();

public slots:
    void valueChangedHelper(const QString &);
    void valueChangedHelper(double);
private:
    QStringList actualTexts;
    QList<double> actualValues;
    QWidget *testFocusWidget;
};

