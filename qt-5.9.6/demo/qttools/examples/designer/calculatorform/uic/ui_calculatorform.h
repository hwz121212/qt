/********************************************************************************
** Form generated from reading UI file 'calculatorform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORFORM_H
#define UI_CALCULATORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorForm
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QLabel *label_3_2;
    QVBoxLayout *vboxLayout;
    QLabel *label_2_2_2;
    QLabel *outputWidget;
    QSpacerItem *spacerItem1;
    QVBoxLayout *vboxLayout1;
    QLabel *label_2;
    QSpinBox *inputSpinBox2;
    QLabel *label_3;
    QVBoxLayout *vboxLayout2;
    QLabel *label;
    QSpinBox *inputSpinBox1;

    void setupUi(QWidget *CalculatorForm)
    {
        if (CalculatorForm->objectName().isEmpty())
            CalculatorForm->setObjectName(QStringLiteral("CalculatorForm"));
        CalculatorForm->resize(400, 300);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalculatorForm->sizePolicy().hasHeightForWidth());
        CalculatorForm->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(CalculatorForm);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setObjectName(QStringLiteral(""));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 6, 1, 1);

        label_3_2 = new QLabel(CalculatorForm);
        label_3_2->setObjectName(QStringLiteral("label_3_2"));
        label_3_2->setGeometry(QRect(169, 9, 20, 52));
        label_3_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3_2, 0, 4, 1, 1);

        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(1, 1, 1, 1);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setObjectName(QStringLiteral(""));
        label_2_2_2 = new QLabel(CalculatorForm);
        label_2_2_2->setObjectName(QStringLiteral("label_2_2_2"));
        label_2_2_2->setGeometry(QRect(1, 1, 36, 17));

        vboxLayout->addWidget(label_2_2_2);

        outputWidget = new QLabel(CalculatorForm);
        outputWidget->setObjectName(QStringLiteral("outputWidget"));
        outputWidget->setGeometry(QRect(1, 24, 36, 27));
        outputWidget->setFrameShape(QFrame::Box);
        outputWidget->setFrameShadow(QFrame::Sunken);
        outputWidget->setAlignment(Qt::AlignAbsolute|Qt::AlignBottom|Qt::AlignCenter|Qt::AlignHCenter|Qt::AlignHorizontal_Mask|Qt::AlignJustify|Qt::AlignLeading|Qt::AlignLeft|Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing|Qt::AlignVCenter|Qt::AlignVertical_Mask);

        vboxLayout->addWidget(outputWidget);


        gridLayout->addLayout(vboxLayout, 0, 5, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 1, 2, 1, 1);

        vboxLayout1 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(1, 1, 1, 1);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        vboxLayout1->setObjectName(QStringLiteral(""));
        label_2 = new QLabel(CalculatorForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1, 1, 46, 19));

        vboxLayout1->addWidget(label_2);

        inputSpinBox2 = new QSpinBox(CalculatorForm);
        inputSpinBox2->setObjectName(QStringLiteral("inputSpinBox2"));
        inputSpinBox2->setGeometry(QRect(1, 26, 46, 25));

        vboxLayout1->addWidget(inputSpinBox2);


        gridLayout->addLayout(vboxLayout1, 0, 3, 1, 1);

        label_3 = new QLabel(CalculatorForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(63, 9, 20, 52));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(1, 1, 1, 1);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        vboxLayout2->setObjectName(QStringLiteral(""));
        label = new QLabel(CalculatorForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1, 1, 46, 19));

        vboxLayout2->addWidget(label);

        inputSpinBox1 = new QSpinBox(CalculatorForm);
        inputSpinBox1->setObjectName(QStringLiteral("inputSpinBox1"));
        inputSpinBox1->setGeometry(QRect(1, 26, 46, 25));

        vboxLayout2->addWidget(inputSpinBox1);


        gridLayout->addLayout(vboxLayout2, 0, 0, 1, 1);


        retranslateUi(CalculatorForm);

        QMetaObject::connectSlotsByName(CalculatorForm);
    } // setupUi

    void retranslateUi(QWidget *CalculatorForm)
    {
        CalculatorForm->setWindowTitle(QApplication::translate("CalculatorForm", "Calculator Form", Q_NULLPTR));
        label_3_2->setText(QApplication::translate("CalculatorForm", "=", Q_NULLPTR));
        label_2_2_2->setText(QApplication::translate("CalculatorForm", "Output", Q_NULLPTR));
        outputWidget->setText(QApplication::translate("CalculatorForm", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("CalculatorForm", "Input 2", Q_NULLPTR));
        label_3->setText(QApplication::translate("CalculatorForm", "+", Q_NULLPTR));
        label->setText(QApplication::translate("CalculatorForm", "Input 1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CalculatorForm: public Ui_CalculatorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORFORM_H
