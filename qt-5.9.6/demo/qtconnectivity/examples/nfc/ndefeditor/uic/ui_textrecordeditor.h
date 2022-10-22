/********************************************************************************
** Form generated from reading UI file 'textrecordeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTRECORDEDITOR_H
#define UI_TEXTRECORDEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextRecordEditor
{
public:
    QFormLayout *formLayout;
    QLabel *label_5;
    QLabel *label_7;
    QLineEdit *text;
    QLabel *label_6;
    QLineEdit *locale;
    QLabel *label;
    QComboBox *encoding;

    void setupUi(QWidget *TextRecordEditor)
    {
        if (TextRecordEditor->objectName().isEmpty())
            TextRecordEditor->setObjectName(QStringLiteral("TextRecordEditor"));
        TextRecordEditor->resize(344, 115);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextRecordEditor->sizePolicy().hasHeightForWidth());
        TextRecordEditor->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(TextRecordEditor);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setRowWrapPolicy(QFormLayout::WrapLongRows);
        label_5 = new QLabel(TextRecordEditor);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_5);

        label_7 = new QLabel(TextRecordEditor);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        text = new QLineEdit(TextRecordEditor);
        text->setObjectName(QStringLiteral("text"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(text->sizePolicy().hasHeightForWidth());
        text->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::FieldRole, text);

        label_6 = new QLabel(TextRecordEditor);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        locale = new QLineEdit(TextRecordEditor);
        locale->setObjectName(QStringLiteral("locale"));
        sizePolicy1.setHeightForWidth(locale->sizePolicy().hasHeightForWidth());
        locale->setSizePolicy(sizePolicy1);

        formLayout->setWidget(2, QFormLayout::FieldRole, locale);

        label = new QLabel(TextRecordEditor);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        encoding = new QComboBox(TextRecordEditor);
        encoding->setObjectName(QStringLiteral("encoding"));
        sizePolicy1.setHeightForWidth(encoding->sizePolicy().hasHeightForWidth());
        encoding->setSizePolicy(sizePolicy1);

        formLayout->setWidget(3, QFormLayout::FieldRole, encoding);


        retranslateUi(TextRecordEditor);

        QMetaObject::connectSlotsByName(TextRecordEditor);
    } // setupUi

    void retranslateUi(QWidget *TextRecordEditor)
    {
        TextRecordEditor->setWindowTitle(QApplication::translate("TextRecordEditor", "Form", Q_NULLPTR));
        label_5->setText(QApplication::translate("TextRecordEditor", "NFC Text Record", Q_NULLPTR));
        label_7->setText(QApplication::translate("TextRecordEditor", "Text:", Q_NULLPTR));
        label_6->setText(QApplication::translate("TextRecordEditor", "Locale:", Q_NULLPTR));
        locale->setText(QString());
        label->setText(QApplication::translate("TextRecordEditor", "Encoding:", Q_NULLPTR));
        encoding->clear();
        encoding->insertItems(0, QStringList()
         << QApplication::translate("TextRecordEditor", "UTF-8", Q_NULLPTR)
         << QApplication::translate("TextRecordEditor", "UTF-16", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class TextRecordEditor: public Ui_TextRecordEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTRECORDEDITOR_H
