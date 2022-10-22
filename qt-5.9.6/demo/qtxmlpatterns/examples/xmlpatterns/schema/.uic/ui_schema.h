/********************************************************************************
** Form generated from reading UI file 'schema.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEMA_H
#define UI_SCHEMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SchemaMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *schemaLabel;
    QComboBox *schemaSelection;
    QTextBrowser *schemaView;
    QLabel *instanceLabel;
    QComboBox *instanceSelection;
    QTextEdit *instanceEdit;
    QLabel *label;
    QLabel *validationStatus;
    QPushButton *validateButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SchemaMainWindow)
    {
        if (SchemaMainWindow->objectName().isEmpty())
            SchemaMainWindow->setObjectName(QStringLiteral("SchemaMainWindow"));
        SchemaMainWindow->resize(417, 594);
        centralwidget = new QWidget(SchemaMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        schemaLabel = new QLabel(centralwidget);
        schemaLabel->setObjectName(QStringLiteral("schemaLabel"));

        gridLayout->addWidget(schemaLabel, 0, 0, 1, 2);

        schemaSelection = new QComboBox(centralwidget);
        schemaSelection->setObjectName(QStringLiteral("schemaSelection"));

        gridLayout->addWidget(schemaSelection, 0, 2, 1, 2);

        schemaView = new QTextBrowser(centralwidget);
        schemaView->setObjectName(QStringLiteral("schemaView"));

        gridLayout->addWidget(schemaView, 1, 0, 1, 4);

        instanceLabel = new QLabel(centralwidget);
        instanceLabel->setObjectName(QStringLiteral("instanceLabel"));

        gridLayout->addWidget(instanceLabel, 2, 0, 1, 2);

        instanceSelection = new QComboBox(centralwidget);
        instanceSelection->setObjectName(QStringLiteral("instanceSelection"));

        gridLayout->addWidget(instanceSelection, 2, 2, 1, 2);

        instanceEdit = new QTextEdit(centralwidget);
        instanceEdit->setObjectName(QStringLiteral("instanceEdit"));

        gridLayout->addWidget(instanceEdit, 3, 0, 1, 4);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        validationStatus = new QLabel(centralwidget);
        validationStatus->setObjectName(QStringLiteral("validationStatus"));

        gridLayout->addWidget(validationStatus, 4, 1, 1, 2);

        validateButton = new QPushButton(centralwidget);
        validateButton->setObjectName(QStringLiteral("validateButton"));

        gridLayout->addWidget(validateButton, 4, 3, 1, 1);

        SchemaMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SchemaMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SchemaMainWindow->setStatusBar(statusbar);

        retranslateUi(SchemaMainWindow);

        QMetaObject::connectSlotsByName(SchemaMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SchemaMainWindow)
    {
        SchemaMainWindow->setWindowTitle(QApplication::translate("SchemaMainWindow", "XML Schema Validation", Q_NULLPTR));
        schemaLabel->setText(QApplication::translate("SchemaMainWindow", "XML Schema Document:", Q_NULLPTR));
        instanceLabel->setText(QApplication::translate("SchemaMainWindow", "XML Instance Document:", Q_NULLPTR));
        label->setText(QApplication::translate("SchemaMainWindow", "Status:", Q_NULLPTR));
        validationStatus->setText(QApplication::translate("SchemaMainWindow", "not validated", Q_NULLPTR));
        validateButton->setText(QApplication::translate("SchemaMainWindow", "Validate", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SchemaMainWindow: public Ui_SchemaMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEMA_H
