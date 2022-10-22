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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *m_title;
    QLabel *m_image;
    QLabel *m_help;
    QLabel *m_url;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(590, 420);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_title = new QLabel(centralWidget);
        m_title->setObjectName(QStringLiteral("m_title"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        m_title->setFont(font);

        gridLayout->addWidget(m_title, 0, 1, 1, 2);

        m_image = new QLabel(centralWidget);
        m_image->setObjectName(QStringLiteral("m_image"));

        gridLayout->addWidget(m_image, 0, 0, 3, 1);

        m_help = new QLabel(centralWidget);
        m_help->setObjectName(QStringLiteral("m_help"));
        m_help->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_help, 1, 1, 1, 1);

        m_url = new QLabel(centralWidget);
        m_url->setObjectName(QStringLiteral("m_url"));

        gridLayout->addWidget(m_url, 2, 1, 1, 2);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(2, 1);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        m_title->setText(QString());
        m_image->setText(QString());
        m_help->setText(QApplication::translate("MainWindow", "Touch a tag", Q_NULLPTR));
        m_url->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
