/********************************************************************************
** Form generated from reading UI file 'querywidget_mobiles.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYWIDGET_MOBILES_H
#define UI_QUERYWIDGET_MOBILES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueryWidget
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QVBoxLayout *verticalLayout;
    QTextBrowser *inputTextEdit;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QComboBox *defaultQueries;
    QTextBrowser *queryTextEdit;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *outputTextEdit;

    void setupUi(QMainWindow *QueryWidget)
    {
        if (QueryWidget->objectName().isEmpty())
            QueryWidget->setObjectName(QStringLiteral("QueryWidget"));
        QueryWidget->resize(453, 583);
        centralwidget = new QWidget(QueryWidget);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabsClosable(false);
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        verticalLayout = new QVBoxLayout(tab_1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        inputTextEdit = new QTextBrowser(tab_1);
        inputTextEdit->setObjectName(QStringLiteral("inputTextEdit"));
        inputTextEdit->setTextInteractionFlags(Qt::NoTextInteraction);
        inputTextEdit->setOpenLinks(false);

        verticalLayout->addWidget(inputTextEdit);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        defaultQueries = new QComboBox(tab_2);
        defaultQueries->setObjectName(QStringLiteral("defaultQueries"));

        verticalLayout_3->addWidget(defaultQueries);

        queryTextEdit = new QTextBrowser(tab_2);
        queryTextEdit->setObjectName(QStringLiteral("queryTextEdit"));
        queryTextEdit->setTextInteractionFlags(Qt::NoTextInteraction);
        queryTextEdit->setOpenLinks(false);

        verticalLayout_3->addWidget(queryTextEdit);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        outputTextEdit = new QTextBrowser(tab_3);
        outputTextEdit->setObjectName(QStringLiteral("outputTextEdit"));
        outputTextEdit->setTextInteractionFlags(Qt::NoTextInteraction);
        outputTextEdit->setOpenLinks(false);

        verticalLayout_4->addWidget(outputTextEdit);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_2->addWidget(tabWidget);

        QueryWidget->setCentralWidget(centralwidget);

        retranslateUi(QueryWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QueryWidget);
    } // setupUi

    void retranslateUi(QMainWindow *QueryWidget)
    {
        QueryWidget->setWindowTitle(QApplication::translate("QueryWidget", "Recipes XQuery Example", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("QueryWidget", "Input Document", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QueryWidget", "Query selection", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("QueryWidget", "Output Document", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QueryWidget: public Ui_QueryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYWIDGET_MOBILES_H
