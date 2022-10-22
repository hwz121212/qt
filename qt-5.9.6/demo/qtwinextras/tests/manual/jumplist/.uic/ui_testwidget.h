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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestWidget
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionUpdate;
    QAction *actionShow_in_Explorer;
    QAction *actionRun_JumpListView;
    QAction *actionUse_Native_File_Dialog;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *cbShowFrequent;
    QCheckBox *cbShowRecent;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *cbRunFullscreen;
    QCheckBox *cbRunFusion;
    QCheckBox *cbRunText;
    QSpacerItem *verticalSpacer;
    QTextEdit *text;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuJumplist;
    QMenu *menuSettings;

    void setupUi(QMainWindow *TestWidget)
    {
        if (TestWidget->objectName().isEmpty())
            TestWidget->setObjectName(QStringLiteral("TestWidget"));
        TestWidget->resize(800, 600);
        actionOpen = new QAction(TestWidget);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionExit = new QAction(TestWidget);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionUpdate = new QAction(TestWidget);
        actionUpdate->setObjectName(QStringLiteral("actionUpdate"));
        actionShow_in_Explorer = new QAction(TestWidget);
        actionShow_in_Explorer->setObjectName(QStringLiteral("actionShow_in_Explorer"));
        actionRun_JumpListView = new QAction(TestWidget);
        actionRun_JumpListView->setObjectName(QStringLiteral("actionRun_JumpListView"));
        actionUse_Native_File_Dialog = new QAction(TestWidget);
        actionUse_Native_File_Dialog->setObjectName(QStringLiteral("actionUse_Native_File_Dialog"));
        actionUse_Native_File_Dialog->setCheckable(true);
        actionUse_Native_File_Dialog->setChecked(true);
        centralwidget = new QWidget(TestWidget);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        cbShowFrequent = new QCheckBox(groupBox);
        cbShowFrequent->setObjectName(QStringLiteral("cbShowFrequent"));
        cbShowFrequent->setChecked(true);

        verticalLayout->addWidget(cbShowFrequent);

        cbShowRecent = new QCheckBox(groupBox);
        cbShowRecent->setObjectName(QStringLiteral("cbShowRecent"));
        cbShowRecent->setChecked(true);

        verticalLayout->addWidget(cbShowRecent);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(3, 3, 3, 3);
        cbRunFullscreen = new QCheckBox(groupBox_2);
        cbRunFullscreen->setObjectName(QStringLiteral("cbRunFullscreen"));
        cbRunFullscreen->setChecked(true);

        verticalLayout_3->addWidget(cbRunFullscreen);

        cbRunFusion = new QCheckBox(groupBox_2);
        cbRunFusion->setObjectName(QStringLiteral("cbRunFusion"));
        cbRunFusion->setChecked(true);

        verticalLayout_3->addWidget(cbRunFusion);

        cbRunText = new QCheckBox(groupBox_2);
        cbRunText->setObjectName(QStringLiteral("cbRunText"));
        cbRunText->setChecked(true);

        verticalLayout_3->addWidget(cbRunText);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        text = new QTextEdit(centralwidget);
        text->setObjectName(QStringLiteral("text"));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(10);
        text->setFont(font);
        text->setReadOnly(true);

        horizontalLayout->addWidget(text);

        TestWidget->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(TestWidget);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuJumplist = new QMenu(menuBar);
        menuJumplist->setObjectName(QStringLiteral("menuJumplist"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        TestWidget->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuJumplist->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionExit);
        menuJumplist->addAction(actionUpdate);
        menuJumplist->addAction(actionShow_in_Explorer);
        menuJumplist->addAction(actionRun_JumpListView);
        menuSettings->addAction(actionUse_Native_File_Dialog);

        retranslateUi(TestWidget);

        QMetaObject::connectSlotsByName(TestWidget);
    } // setupUi

    void retranslateUi(QMainWindow *TestWidget)
    {
        actionOpen->setText(QApplication::translate("TestWidget", "Open", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("TestWidget", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("TestWidget", "Exit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("TestWidget", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionUpdate->setText(QApplication::translate("TestWidget", "Update", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionUpdate->setShortcut(QApplication::translate("TestWidget", "Ctrl+U", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShow_in_Explorer->setText(QApplication::translate("TestWidget", "Show in Explorer", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionShow_in_Explorer->setShortcut(QApplication::translate("TestWidget", "Ctrl+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRun_JumpListView->setText(QApplication::translate("TestWidget", "Run JumpListView", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRun_JumpListView->setToolTip(QApplication::translate("TestWidget", "Run JumpListView utility", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionUse_Native_File_Dialog->setText(QApplication::translate("TestWidget", "Use Native File Dialog", Q_NULLPTR));
        centralwidget->setWindowTitle(QApplication::translate("TestWidget", "QtWinExtras JumpList", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("TestWidget", "Known categories", Q_NULLPTR));
        cbShowFrequent->setText(QApplication::translate("TestWidget", "Frequent", Q_NULLPTR));
        cbShowRecent->setText(QApplication::translate("TestWidget", "Recent", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("TestWidget", "Tasks", Q_NULLPTR));
        cbRunFullscreen->setText(QApplication::translate("TestWidget", "Run in fullscreen", Q_NULLPTR));
        cbRunFusion->setText(QApplication::translate("TestWidget", "Run with Fusion style", Q_NULLPTR));
        cbRunText->setText(QApplication::translate("TestWidget", "Run with some text displayed", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("TestWidget", "File", Q_NULLPTR));
        menuJumplist->setTitle(QApplication::translate("TestWidget", "Jumplist", Q_NULLPTR));
        menuSettings->setTitle(QApplication::translate("TestWidget", "Settings", Q_NULLPTR));
        Q_UNUSED(TestWidget);
    } // retranslateUi

};

namespace Ui {
    class TestWidget: public Ui_TestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWIDGET_H
