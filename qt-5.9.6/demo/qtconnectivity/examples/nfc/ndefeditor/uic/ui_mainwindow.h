/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QWidget *status;
    QPushButton *touchRetrieve;
    QPushButton *touchStore;
    QPushButton *loadMessage;
    QPushButton *saveMessage;
    QPushButton *clearMessage;
    QPushButton *addRecord;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(553, 397);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, -1, 9, -1);
        status = new QWidget(centralWidget);
        status->setObjectName(QStringLiteral("status"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(status->sizePolicy().hasHeightForWidth());
        status->setSizePolicy(sizePolicy);
        status->setMinimumSize(QSize(25, 25));
        status->setMaximumSize(QSize(25, 25));

        horizontalLayout->addWidget(status);

        touchRetrieve = new QPushButton(centralWidget);
        touchRetrieve->setObjectName(QStringLiteral("touchRetrieve"));

        horizontalLayout->addWidget(touchRetrieve);

        touchStore = new QPushButton(centralWidget);
        touchStore->setObjectName(QStringLiteral("touchStore"));

        horizontalLayout->addWidget(touchStore);

        loadMessage = new QPushButton(centralWidget);
        loadMessage->setObjectName(QStringLiteral("loadMessage"));

        horizontalLayout->addWidget(loadMessage);

        saveMessage = new QPushButton(centralWidget);
        saveMessage->setObjectName(QStringLiteral("saveMessage"));

        horizontalLayout->addWidget(saveMessage);

        clearMessage = new QPushButton(centralWidget);
        clearMessage->setObjectName(QStringLiteral("clearMessage"));

        horizontalLayout->addWidget(clearMessage);

        addRecord = new QPushButton(centralWidget);
        addRecord->setObjectName(QStringLiteral("addRecord"));

        horizontalLayout->addWidget(addRecord);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 553, 335));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(saveMessage, SIGNAL(clicked()), MainWindow, SLOT(saveMessage()));
        QObject::connect(touchRetrieve, SIGNAL(clicked()), MainWindow, SLOT(touchReceive()));
        QObject::connect(touchStore, SIGNAL(clicked()), MainWindow, SLOT(touchStore()));
        QObject::connect(loadMessage, SIGNAL(clicked()), MainWindow, SLOT(loadMessage()));
        QObject::connect(clearMessage, SIGNAL(clicked()), MainWindow, SLOT(clearMessage()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "NDEF Message Editor", Q_NULLPTR));
        touchRetrieve->setText(QApplication::translate("MainWindow", "Retrieve", Q_NULLPTR));
        touchStore->setText(QApplication::translate("MainWindow", "Store", Q_NULLPTR));
        loadMessage->setText(QApplication::translate("MainWindow", "Load", Q_NULLPTR));
        saveMessage->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        clearMessage->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        addRecord->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
