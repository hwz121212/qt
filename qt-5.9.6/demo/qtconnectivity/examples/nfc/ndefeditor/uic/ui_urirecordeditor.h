/********************************************************************************
** Form generated from reading UI file 'urirecordeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_URIRECORDEDITOR_H
#define UI_URIRECORDEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UriRecordEditor
{
public:
    QFormLayout *formLayout;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *uri;

    void setupUi(QWidget *UriRecordEditor)
    {
        if (UriRecordEditor->objectName().isEmpty())
            UriRecordEditor->setObjectName(QStringLiteral("UriRecordEditor"));
        UriRecordEditor->resize(439, 59);
        formLayout = new QFormLayout(UriRecordEditor);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_8 = new QLabel(UriRecordEditor);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_8);

        label_9 = new QLabel(UriRecordEditor);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_9);

        uri = new QLineEdit(UriRecordEditor);
        uri->setObjectName(QStringLiteral("uri"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(uri->sizePolicy().hasHeightForWidth());
        uri->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, uri);


        retranslateUi(UriRecordEditor);

        QMetaObject::connectSlotsByName(UriRecordEditor);
    } // setupUi

    void retranslateUi(QWidget *UriRecordEditor)
    {
        UriRecordEditor->setWindowTitle(QApplication::translate("UriRecordEditor", "Form", Q_NULLPTR));
        label_8->setText(QApplication::translate("UriRecordEditor", "NFC URI Record", Q_NULLPTR));
        label_9->setText(QApplication::translate("UriRecordEditor", "Uri:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UriRecordEditor: public Ui_UriRecordEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_URIRECORDEDITOR_H
