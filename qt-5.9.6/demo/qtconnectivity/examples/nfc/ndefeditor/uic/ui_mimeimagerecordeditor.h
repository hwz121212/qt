/********************************************************************************
** Form generated from reading UI file 'mimeimagerecordeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIMEIMAGERECORDEDITOR_H
#define UI_MIMEIMAGERECORDEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MimeImageRecordEditor
{
public:
    QFormLayout *formLayout;
    QLabel *label_4;
    QLabel *label_11;
    QLabel *mimeImageType;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mimeImageFile;
    QToolButton *mimeImageOpen;
    QLabel *mimeImageImage;

    void setupUi(QWidget *MimeImageRecordEditor)
    {
        if (MimeImageRecordEditor->objectName().isEmpty())
            MimeImageRecordEditor->setObjectName(QStringLiteral("MimeImageRecordEditor"));
        MimeImageRecordEditor->resize(403, 106);
        formLayout = new QFormLayout(MimeImageRecordEditor);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_4 = new QLabel(MimeImageRecordEditor);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_4);

        label_11 = new QLabel(MimeImageRecordEditor);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_11);

        mimeImageType = new QLabel(MimeImageRecordEditor);
        mimeImageType->setObjectName(QStringLiteral("mimeImageType"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mimeImageType->sizePolicy().hasHeightForWidth());
        mimeImageType->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, mimeImageType);

        label_12 = new QLabel(MimeImageRecordEditor);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_12);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mimeImageFile = new QLineEdit(MimeImageRecordEditor);
        mimeImageFile->setObjectName(QStringLiteral("mimeImageFile"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mimeImageFile->sizePolicy().hasHeightForWidth());
        mimeImageFile->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mimeImageFile);

        mimeImageOpen = new QToolButton(MimeImageRecordEditor);
        mimeImageOpen->setObjectName(QStringLiteral("mimeImageOpen"));

        horizontalLayout->addWidget(mimeImageOpen);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        mimeImageImage = new QLabel(MimeImageRecordEditor);
        mimeImageImage->setObjectName(QStringLiteral("mimeImageImage"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mimeImageImage);


        retranslateUi(MimeImageRecordEditor);

        QMetaObject::connectSlotsByName(MimeImageRecordEditor);
    } // setupUi

    void retranslateUi(QWidget *MimeImageRecordEditor)
    {
        MimeImageRecordEditor->setWindowTitle(QApplication::translate("MimeImageRecordEditor", "Form", Q_NULLPTR));
        label_4->setText(QApplication::translate("MimeImageRecordEditor", "MIME Record <image/*>", Q_NULLPTR));
        label_11->setText(QApplication::translate("MimeImageRecordEditor", "Type:", Q_NULLPTR));
        mimeImageType->setText(QApplication::translate("MimeImageRecordEditor", "image/", Q_NULLPTR));
        label_12->setText(QApplication::translate("MimeImageRecordEditor", "File:", Q_NULLPTR));
        mimeImageOpen->setText(QApplication::translate("MimeImageRecordEditor", "...", Q_NULLPTR));
        mimeImageImage->setText(QApplication::translate("MimeImageRecordEditor", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MimeImageRecordEditor: public Ui_MimeImageRecordEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIMEIMAGERECORDEDITOR_H
