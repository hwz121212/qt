/********************************************************************************
** Form generated from reading UI file 'testwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWIDGET_H
#define UI_TESTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *btnPeekDisallow;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *btnPeekExclude;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioFlipDefault;
    QRadioButton *radioFlipAbove;
    QRadioButton *radioFlipBelow;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnFrameReset;
    QSpacerItem *horizontalSpacer_6;
    QSpinBox *frameLeft;
    QSpinBox *frameRight;
    QSpinBox *frameTop;
    QSpinBox *frameBottom;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TestWidget)
    {
        if (TestWidget->objectName().isEmpty())
            TestWidget->setObjectName(QStringLiteral("TestWidget"));
        TestWidget->resize(569, 331);
        horizontalLayout = new QHBoxLayout(TestWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_2 = new QGroupBox(TestWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(150, 0));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(3);
        verticalLayout_4->setContentsMargins(4, 4, 4, 4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        btnPeekDisallow = new QPushButton(groupBox_2);
        btnPeekDisallow->setObjectName(QStringLiteral("btnPeekDisallow"));
        btnPeekDisallow->setMinimumSize(QSize(100, 0));
        btnPeekDisallow->setCheckable(true);

        horizontalLayout_7->addWidget(btnPeekDisallow);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);

        btnPeekExclude = new QPushButton(groupBox_2);
        btnPeekExclude->setObjectName(QStringLiteral("btnPeekExclude"));
        btnPeekExclude->setMinimumSize(QSize(100, 0));
        btnPeekExclude->setCheckable(true);

        horizontalLayout_8->addWidget(btnPeekExclude);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_14);


        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_4 = new QGroupBox(TestWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setSpacing(3);
        verticalLayout_5->setContentsMargins(4, 4, 4, 4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        radioFlipDefault = new QRadioButton(groupBox_4);
        radioFlipDefault->setObjectName(QStringLiteral("radioFlipDefault"));
        radioFlipDefault->setChecked(true);

        verticalLayout_5->addWidget(radioFlipDefault);

        radioFlipAbove = new QRadioButton(groupBox_4);
        radioFlipAbove->setObjectName(QStringLiteral("radioFlipAbove"));

        verticalLayout_5->addWidget(radioFlipAbove);

        radioFlipBelow = new QRadioButton(groupBox_4);
        radioFlipBelow->setObjectName(QStringLiteral("radioFlipBelow"));

        verticalLayout_5->addWidget(radioFlipBelow);


        verticalLayout->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(TestWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        formLayout_2 = new QFormLayout(groupBox_3);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(4, 4, 4, 4);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setHorizontalSpacing(3);
        formLayout_2->setVerticalSpacing(3);
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        btnFrameReset = new QPushButton(groupBox_3);
        btnFrameReset->setObjectName(QStringLiteral("btnFrameReset"));

        horizontalLayout_4->addWidget(btnFrameReset);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        formLayout_2->setLayout(4, QFormLayout::SpanningRole, horizontalLayout_4);

        frameLeft = new QSpinBox(groupBox_3);
        frameLeft->setObjectName(QStringLiteral("frameLeft"));
        frameLeft->setMinimum(-1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, frameLeft);

        frameRight = new QSpinBox(groupBox_3);
        frameRight->setObjectName(QStringLiteral("frameRight"));
        frameRight->setMinimum(-1);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, frameRight);

        frameTop = new QSpinBox(groupBox_3);
        frameTop->setObjectName(QStringLiteral("frameTop"));
        frameTop->setMinimum(-1);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, frameTop);

        frameBottom = new QSpinBox(groupBox_3);
        frameBottom->setObjectName(QStringLiteral("frameBottom"));
        frameBottom->setMinimum(-1);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, frameBottom);


        verticalLayout->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(TestWidget);

        QMetaObject::connectSlotsByName(TestWidget);
    } // setupUi

    void retranslateUi(QWidget *TestWidget)
    {
        TestWidget->setWindowTitle(QApplication::translate("TestWidget", "QtWinExtras DWM Features", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("TestWidget", "Aero Peek", Q_NULLPTR));
        btnPeekDisallow->setText(QApplication::translate("TestWidget", "Disallow peek", Q_NULLPTR));
        btnPeekExclude->setText(QApplication::translate("TestWidget", "Exclude from peek", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("TestWidget", "Flip3D", Q_NULLPTR));
        radioFlipDefault->setText(QApplication::translate("TestWidget", "Default", Q_NULLPTR));
        radioFlipAbove->setText(QApplication::translate("TestWidget", "Exclude above", Q_NULLPTR));
        radioFlipBelow->setText(QApplication::translate("TestWidget", "Exclude below", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("TestWidget", "Glass frame", Q_NULLPTR));
        label_5->setText(QApplication::translate("TestWidget", "Left", Q_NULLPTR));
        label_6->setText(QApplication::translate("TestWidget", "Right", Q_NULLPTR));
        label_7->setText(QApplication::translate("TestWidget", "Top", Q_NULLPTR));
        label_8->setText(QApplication::translate("TestWidget", "Bottom", Q_NULLPTR));
        btnFrameReset->setText(QApplication::translate("TestWidget", "Reset", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TestWidget: public Ui_TestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWIDGET_H
