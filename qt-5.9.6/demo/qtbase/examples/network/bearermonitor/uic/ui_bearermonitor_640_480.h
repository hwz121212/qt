/********************************************************************************
** Form generated from reading UI file 'bearermonitor_640_480.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEARERMONITOR_640_480_H
#define UI_BEARERMONITOR_640_480_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BearerMonitor
{
public:
    QGridLayout *gridLayout;
    QGroupBox *systemState;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *onlineStateLayout;
    QLabel *onlineStateLabel;
    QLabel *onlineState;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_9;
    QTreeWidget *treeWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *configurationNameLayout;
    QLabel *configurationNameLabel;
    QLabel *configurationName;
    QHBoxLayout *configurationStateLayout;
    QLabel *configurationStateLabel;
    QLabel *configurationState;
    QHBoxLayout *configurationTypeLayout;
    QLabel *configurationTypeLabel;
    QLabel *configurationType;
    QHBoxLayout *configurationPurposeLayout;
    QLabel *configurationPurposeLabel;
    QLabel *configurationPurpose;
    QHBoxLayout *configurationIdentifierLayout;
    QLabel *configurationIdentifierLabel;
    QLabel *configurationIdentifier;
    QHBoxLayout *configurationRoamingLayout;
    QLabel *configurationRoamingLabel;
    QLabel *configurationRoaming;
    QHBoxLayout *configurationChildrenLayout;
    QLabel *configurationChildrenLabel;
    QLabel *configurationChildren;
    QGroupBox *nlaGroup;
    QHBoxLayout *horizontalLayout;
    QPushButton *registerButton;
    QPushButton *unregisterButton;
    QPushButton *newSessionButton;
    QPushButton *deleteSessionButton;
    QPushButton *scanButton;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;
    QGroupBox *sessionGroup;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;

    void setupUi(QWidget *BearerMonitor)
    {
        if (BearerMonitor->objectName().isEmpty())
            BearerMonitor->setObjectName(QStringLiteral("BearerMonitor"));
        BearerMonitor->resize(640, 515);
        gridLayout = new QGridLayout(BearerMonitor);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        systemState = new QGroupBox(BearerMonitor);
        systemState->setObjectName(QStringLiteral("systemState"));
        systemState->setFlat(true);
        verticalLayout_4 = new QVBoxLayout(systemState);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, -1, 0, 0);
        onlineStateLayout = new QHBoxLayout();
        onlineStateLayout->setObjectName(QStringLiteral("onlineStateLayout"));
        onlineStateLabel = new QLabel(systemState);
        onlineStateLabel->setObjectName(QStringLiteral("onlineStateLabel"));

        onlineStateLayout->addWidget(onlineStateLabel);

        onlineState = new QLabel(systemState);
        onlineState->setObjectName(QStringLiteral("onlineState"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(onlineState->sizePolicy().hasHeightForWidth());
        onlineState->setSizePolicy(sizePolicy);

        onlineStateLayout->addWidget(onlineState);


        verticalLayout_4->addLayout(onlineStateLayout);


        gridLayout->addWidget(systemState, 0, 0, 1, 1);

        groupBox = new QGroupBox(BearerMonitor);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFlat(true);
        horizontalLayout_9 = new QHBoxLayout(groupBox);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, -1, 0, 0);
        treeWidget = new QTreeWidget(groupBox);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->header()->setVisible(false);

        horizontalLayout_9->addWidget(treeWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        configurationNameLayout = new QHBoxLayout();
        configurationNameLayout->setObjectName(QStringLiteral("configurationNameLayout"));
        configurationNameLabel = new QLabel(groupBox);
        configurationNameLabel->setObjectName(QStringLiteral("configurationNameLabel"));

        configurationNameLayout->addWidget(configurationNameLabel);

        configurationName = new QLabel(groupBox);
        configurationName->setObjectName(QStringLiteral("configurationName"));
        sizePolicy.setHeightForWidth(configurationName->sizePolicy().hasHeightForWidth());
        configurationName->setSizePolicy(sizePolicy);

        configurationNameLayout->addWidget(configurationName);


        verticalLayout->addLayout(configurationNameLayout);

        configurationStateLayout = new QHBoxLayout();
        configurationStateLayout->setObjectName(QStringLiteral("configurationStateLayout"));
        configurationStateLabel = new QLabel(groupBox);
        configurationStateLabel->setObjectName(QStringLiteral("configurationStateLabel"));

        configurationStateLayout->addWidget(configurationStateLabel);

        configurationState = new QLabel(groupBox);
        configurationState->setObjectName(QStringLiteral("configurationState"));
        sizePolicy.setHeightForWidth(configurationState->sizePolicy().hasHeightForWidth());
        configurationState->setSizePolicy(sizePolicy);

        configurationStateLayout->addWidget(configurationState);


        verticalLayout->addLayout(configurationStateLayout);

        configurationTypeLayout = new QHBoxLayout();
        configurationTypeLayout->setObjectName(QStringLiteral("configurationTypeLayout"));
        configurationTypeLabel = new QLabel(groupBox);
        configurationTypeLabel->setObjectName(QStringLiteral("configurationTypeLabel"));

        configurationTypeLayout->addWidget(configurationTypeLabel);

        configurationType = new QLabel(groupBox);
        configurationType->setObjectName(QStringLiteral("configurationType"));
        sizePolicy.setHeightForWidth(configurationType->sizePolicy().hasHeightForWidth());
        configurationType->setSizePolicy(sizePolicy);

        configurationTypeLayout->addWidget(configurationType);


        verticalLayout->addLayout(configurationTypeLayout);

        configurationPurposeLayout = new QHBoxLayout();
        configurationPurposeLayout->setObjectName(QStringLiteral("configurationPurposeLayout"));
        configurationPurposeLabel = new QLabel(groupBox);
        configurationPurposeLabel->setObjectName(QStringLiteral("configurationPurposeLabel"));

        configurationPurposeLayout->addWidget(configurationPurposeLabel);

        configurationPurpose = new QLabel(groupBox);
        configurationPurpose->setObjectName(QStringLiteral("configurationPurpose"));
        sizePolicy.setHeightForWidth(configurationPurpose->sizePolicy().hasHeightForWidth());
        configurationPurpose->setSizePolicy(sizePolicy);

        configurationPurposeLayout->addWidget(configurationPurpose);


        verticalLayout->addLayout(configurationPurposeLayout);

        configurationIdentifierLayout = new QHBoxLayout();
        configurationIdentifierLayout->setObjectName(QStringLiteral("configurationIdentifierLayout"));
        configurationIdentifierLabel = new QLabel(groupBox);
        configurationIdentifierLabel->setObjectName(QStringLiteral("configurationIdentifierLabel"));

        configurationIdentifierLayout->addWidget(configurationIdentifierLabel);

        configurationIdentifier = new QLabel(groupBox);
        configurationIdentifier->setObjectName(QStringLiteral("configurationIdentifier"));
        sizePolicy.setHeightForWidth(configurationIdentifier->sizePolicy().hasHeightForWidth());
        configurationIdentifier->setSizePolicy(sizePolicy);

        configurationIdentifierLayout->addWidget(configurationIdentifier);


        verticalLayout->addLayout(configurationIdentifierLayout);

        configurationRoamingLayout = new QHBoxLayout();
        configurationRoamingLayout->setObjectName(QStringLiteral("configurationRoamingLayout"));
        configurationRoamingLabel = new QLabel(groupBox);
        configurationRoamingLabel->setObjectName(QStringLiteral("configurationRoamingLabel"));

        configurationRoamingLayout->addWidget(configurationRoamingLabel);

        configurationRoaming = new QLabel(groupBox);
        configurationRoaming->setObjectName(QStringLiteral("configurationRoaming"));
        sizePolicy.setHeightForWidth(configurationRoaming->sizePolicy().hasHeightForWidth());
        configurationRoaming->setSizePolicy(sizePolicy);

        configurationRoamingLayout->addWidget(configurationRoaming);


        verticalLayout->addLayout(configurationRoamingLayout);

        configurationChildrenLayout = new QHBoxLayout();
        configurationChildrenLayout->setObjectName(QStringLiteral("configurationChildrenLayout"));
        configurationChildrenLabel = new QLabel(groupBox);
        configurationChildrenLabel->setObjectName(QStringLiteral("configurationChildrenLabel"));

        configurationChildrenLayout->addWidget(configurationChildrenLabel);

        configurationChildren = new QLabel(groupBox);
        configurationChildren->setObjectName(QStringLiteral("configurationChildren"));
        sizePolicy.setHeightForWidth(configurationChildren->sizePolicy().hasHeightForWidth());
        configurationChildren->setSizePolicy(sizePolicy);

        configurationChildrenLayout->addWidget(configurationChildren);


        verticalLayout->addLayout(configurationChildrenLayout);

        nlaGroup = new QGroupBox(groupBox);
        nlaGroup->setObjectName(QStringLiteral("nlaGroup"));
        horizontalLayout = new QHBoxLayout(nlaGroup);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        registerButton = new QPushButton(nlaGroup);
        registerButton->setObjectName(QStringLiteral("registerButton"));

        horizontalLayout->addWidget(registerButton);

        unregisterButton = new QPushButton(nlaGroup);
        unregisterButton->setObjectName(QStringLiteral("unregisterButton"));

        horizontalLayout->addWidget(unregisterButton);


        verticalLayout->addWidget(nlaGroup);

        newSessionButton = new QPushButton(groupBox);
        newSessionButton->setObjectName(QStringLiteral("newSessionButton"));

        verticalLayout->addWidget(newSessionButton);

        deleteSessionButton = new QPushButton(groupBox);
        deleteSessionButton->setObjectName(QStringLiteral("deleteSessionButton"));

        verticalLayout->addWidget(deleteSessionButton);

        scanButton = new QPushButton(groupBox);
        scanButton->setObjectName(QStringLiteral("scanButton"));

        verticalLayout->addWidget(scanButton);

        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximum(0);
        progressBar->setValue(-1);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);

        verticalLayout->addWidget(progressBar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_9->addLayout(verticalLayout);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        sessionGroup = new QGroupBox(BearerMonitor);
        sessionGroup->setObjectName(QStringLiteral("sessionGroup"));
        sessionGroup->setFlat(true);
        verticalLayout_3 = new QVBoxLayout(sessionGroup);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, -1, 0, 0);
        tabWidget = new QTabWidget(sessionGroup);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());

        verticalLayout_3->addWidget(tabWidget);


        gridLayout->addWidget(sessionGroup, 2, 0, 1, 1);


        retranslateUi(BearerMonitor);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BearerMonitor);
    } // setupUi

    void retranslateUi(QWidget *BearerMonitor)
    {
        BearerMonitor->setWindowTitle(QApplication::translate("BearerMonitor", "BearerMonitor", Q_NULLPTR));
        systemState->setTitle(QApplication::translate("BearerMonitor", "System State", Q_NULLPTR));
        onlineStateLabel->setText(QApplication::translate("BearerMonitor", "Online State:", Q_NULLPTR));
        onlineState->setText(QString());
        groupBox->setTitle(QApplication::translate("BearerMonitor", "Configurations", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("BearerMonitor", "1", Q_NULLPTR));
        configurationNameLabel->setText(QApplication::translate("BearerMonitor", "Name:", Q_NULLPTR));
        configurationName->setText(QString());
        configurationStateLabel->setText(QApplication::translate("BearerMonitor", "State:", Q_NULLPTR));
        configurationState->setText(QString());
        configurationTypeLabel->setText(QApplication::translate("BearerMonitor", "Type:", Q_NULLPTR));
        configurationType->setText(QApplication::translate("BearerMonitor", "Invalid", Q_NULLPTR));
        configurationPurposeLabel->setText(QApplication::translate("BearerMonitor", "Purpose:", Q_NULLPTR));
        configurationPurpose->setText(QApplication::translate("BearerMonitor", "Unknown", Q_NULLPTR));
        configurationIdentifierLabel->setText(QApplication::translate("BearerMonitor", "Identifier:", Q_NULLPTR));
        configurationIdentifier->setText(QString());
        configurationRoamingLabel->setText(QApplication::translate("BearerMonitor", "Roaming:", Q_NULLPTR));
        configurationRoaming->setText(QString());
        configurationChildrenLabel->setText(QApplication::translate("BearerMonitor", "Children:", Q_NULLPTR));
        configurationChildren->setText(QString());
        nlaGroup->setTitle(QApplication::translate("BearerMonitor", "Network Location Awareness", Q_NULLPTR));
        registerButton->setText(QApplication::translate("BearerMonitor", "Register", Q_NULLPTR));
        unregisterButton->setText(QApplication::translate("BearerMonitor", "Unregister", Q_NULLPTR));
        newSessionButton->setText(QApplication::translate("BearerMonitor", "New Session", Q_NULLPTR));
        deleteSessionButton->setText(QApplication::translate("BearerMonitor", "Delete Session", Q_NULLPTR));
        scanButton->setText(QApplication::translate("BearerMonitor", "Scan", Q_NULLPTR));
        progressBar->setFormat(QApplication::translate("BearerMonitor", "%p%", Q_NULLPTR));
        sessionGroup->setTitle(QApplication::translate("BearerMonitor", "Sessions", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("BearerMonitor", "Session 1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BearerMonitor: public Ui_BearerMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEARERMONITOR_640_480_H
