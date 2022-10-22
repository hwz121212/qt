/********************************************************************************
** Form generated from reading UI file 'remoteselector.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTESELECTOR_H
#define UI_REMOTESELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RemoteSelector
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *fileName;
    QPushButton *fileSelectPB;
    QPushButton *sendButton;
    QHBoxLayout *horizontalLayout;
    QLabel *busyWidget;
    QLabel *status;
    QLabel *pairingBusy;
    QPushButton *stopButton;
    QPushButton *refreshPB;
    QTableWidget *remoteDevices;

    void setupUi(QDialog *RemoteSelector)
    {
        if (RemoteSelector->objectName().isEmpty())
            RemoteSelector->setObjectName(QStringLiteral("RemoteSelector"));
        RemoteSelector->resize(681, 394);
        verticalLayout = new QVBoxLayout(RemoteSelector);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        fileName = new QLineEdit(RemoteSelector);
        fileName->setObjectName(QStringLiteral("fileName"));

        gridLayout->addWidget(fileName, 7, 0, 1, 2);

        fileSelectPB = new QPushButton(RemoteSelector);
        fileSelectPB->setObjectName(QStringLiteral("fileSelectPB"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileSelectPB->sizePolicy().hasHeightForWidth());
        fileSelectPB->setSizePolicy(sizePolicy);

        gridLayout->addWidget(fileSelectPB, 7, 2, 1, 1);

        sendButton = new QPushButton(RemoteSelector);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setEnabled(false);

        gridLayout->addWidget(sendButton, 8, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        busyWidget = new QLabel(RemoteSelector);
        busyWidget->setObjectName(QStringLiteral("busyWidget"));
        sizePolicy.setHeightForWidth(busyWidget->sizePolicy().hasHeightForWidth());
        busyWidget->setSizePolicy(sizePolicy);
        busyWidget->setMaximumSize(QSize(16, 16));
        busyWidget->setBaseSize(QSize(16, 16));

        horizontalLayout->addWidget(busyWidget);

        status = new QLabel(RemoteSelector);
        status->setObjectName(QStringLiteral("status"));

        horizontalLayout->addWidget(status);

        pairingBusy = new QLabel(RemoteSelector);
        pairingBusy->setObjectName(QStringLiteral("pairingBusy"));

        horizontalLayout->addWidget(pairingBusy);

        stopButton = new QPushButton(RemoteSelector);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setEnabled(false);
        sizePolicy.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(stopButton);

        refreshPB = new QPushButton(RemoteSelector);
        refreshPB->setObjectName(QStringLiteral("refreshPB"));
        sizePolicy.setHeightForWidth(refreshPB->sizePolicy().hasHeightForWidth());
        refreshPB->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(refreshPB);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 3);

        remoteDevices = new QTableWidget(RemoteSelector);
        if (remoteDevices->columnCount() < 5)
            remoteDevices->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        remoteDevices->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        remoteDevices->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        remoteDevices->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        remoteDevices->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        remoteDevices->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (remoteDevices->rowCount() < 1)
            remoteDevices->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        remoteDevices->setVerticalHeaderItem(0, __qtablewidgetitem5);
        remoteDevices->setObjectName(QStringLiteral("remoteDevices"));
        remoteDevices->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        remoteDevices->setEditTriggers(QAbstractItemView::NoEditTriggers);
        remoteDevices->setProperty("showDropIndicator", QVariant(false));
        remoteDevices->setAlternatingRowColors(true);
        remoteDevices->setSelectionMode(QAbstractItemView::SingleSelection);
        remoteDevices->setSelectionBehavior(QAbstractItemView::SelectRows);
        remoteDevices->setShowGrid(false);
        remoteDevices->setWordWrap(false);
        remoteDevices->setRowCount(1);
        remoteDevices->horizontalHeader()->setCascadingSectionResizes(true);
        remoteDevices->horizontalHeader()->setDefaultSectionSize(150);
        remoteDevices->horizontalHeader()->setStretchLastSection(true);
        remoteDevices->verticalHeader()->setVisible(false);
        remoteDevices->verticalHeader()->setCascadingSectionResizes(false);

        gridLayout->addWidget(remoteDevices, 6, 0, 1, 3);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(RemoteSelector);

        QMetaObject::connectSlotsByName(RemoteSelector);
    } // setupUi

    void retranslateUi(QDialog *RemoteSelector)
    {
        RemoteSelector->setWindowTitle(QApplication::translate("RemoteSelector", "Available file transfer services", Q_NULLPTR));
        fileSelectPB->setText(QApplication::translate("RemoteSelector", "Select File", Q_NULLPTR));
        sendButton->setText(QApplication::translate("RemoteSelector", "Send", Q_NULLPTR));
        busyWidget->setText(QApplication::translate("RemoteSelector", "TextLabel", Q_NULLPTR));
        status->setText(QApplication::translate("RemoteSelector", "Scanning...", Q_NULLPTR));
        pairingBusy->setText(QApplication::translate("RemoteSelector", "TextLabel", Q_NULLPTR));
        stopButton->setText(QApplication::translate("RemoteSelector", "Stop", Q_NULLPTR));
        refreshPB->setText(QApplication::translate("RemoteSelector", "Refresh", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = remoteDevices->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("RemoteSelector", "MAC Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = remoteDevices->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("RemoteSelector", "Device Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = remoteDevices->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("RemoteSelector", "Device Service", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = remoteDevices->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("RemoteSelector", "Paired", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = remoteDevices->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("RemoteSelector", "Authorized", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = remoteDevices->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("RemoteSelector", "Test", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RemoteSelector: public Ui_RemoteSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTESELECTOR_H
