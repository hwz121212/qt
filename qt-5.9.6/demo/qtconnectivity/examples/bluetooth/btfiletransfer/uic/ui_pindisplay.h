/********************************************************************************
** Form generated from reading UI file 'pindisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINDISPLAY_H
#define UI_PINDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pinDisplay
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *pin;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pinDisplay)
    {
        if (pinDisplay->objectName().isEmpty())
            pinDisplay->setObjectName(QStringLiteral("pinDisplay"));
        pinDisplay->resize(240, 153);
        verticalLayout = new QVBoxLayout(pinDisplay);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pin = new QLabel(pinDisplay);
        pin->setObjectName(QStringLiteral("pin"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        pin->setFont(font);
        pin->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(pin);

        label = new QLabel(pinDisplay);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        buttonBox = new QDialogButtonBox(pinDisplay);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(pinDisplay);
        QObject::connect(buttonBox, SIGNAL(accepted()), pinDisplay, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pinDisplay, SLOT(reject()));

        QMetaObject::connectSlotsByName(pinDisplay);
    } // setupUi

    void retranslateUi(QDialog *pinDisplay)
    {
        pinDisplay->setWindowTitle(QApplication::translate("pinDisplay", "Enter Pin Code", Q_NULLPTR));
        pin->setText(QApplication::translate("pinDisplay", "012345", Q_NULLPTR));
        label->setText(QApplication::translate("pinDisplay", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pinDisplay: public Ui_pinDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINDISPLAY_H
