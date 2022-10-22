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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "chartview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    ChartView *chartView;
    QGroupBox *settingsBox;
    QComboBox *angularShadesComboBox;
    QComboBox *radialShadesComboBox;
    QComboBox *animationsComboBox;
    QComboBox *labelComboBox;
    QComboBox *titleComboBox;
    QComboBox *gridComboBox;
    QComboBox *arrowComboBox;
    QComboBox *angularAxisComboBox;
    QComboBox *radialAxisComboBox;
    QComboBox *themeComboBox;
    QLabel *hoverLabel;
    QComboBox *backgroundComboBox;
    QComboBox *plotAreaComboBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *radialMinSpin;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_5;
    QDoubleSpinBox *angularMinSpin;
    QLabel *label_4;
    QDoubleSpinBox *radialMaxSpin;
    QDoubleSpinBox *angularMaxSpin;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QLabel *label_13;
    QLineEdit *labelFormatEdit;
    QLabel *label_14;
    QSpinBox *labelFontSizeSpin;
    QFontComboBox *labelFontComboBox;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_4;
    QLabel *label_15;
    QSpinBox *titleFontSizeSpin;
    QFontComboBox *titleFontComboBox;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_16;
    QDoubleSpinBox *logBaseSpin;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_6;
    QCheckBox *moreCategoriesCheckBox;
    QCheckBox *niceNumbersCheckBox;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_17;
    QLineEdit *dateFormatEdit;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_5;
    QCheckBox *series1checkBox;
    QCheckBox *series2checkBox;
    QCheckBox *series3checkBox;
    QCheckBox *series7checkBox;
    QCheckBox *series4checkBox;
    QCheckBox *series5checkBox;
    QCheckBox *series6checkBox;
    QWidget *layoutWidget7;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *anglesSpin;
    QSpinBox *radialMinorTicksSpin;
    QLabel *label;
    QLabel *label_7;
    QSpinBox *radialTicksSpin;
    QSpinBox *angularMinorTicksSpin;
    QLabel *label_6;
    QSpinBox *angularTicksSpin;
    QLabel *label_3;
    QComboBox *minorGridComboBox;
    QCheckBox *categoryLabelLocationCheckBox;
    QComboBox *gridLineColorComboBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1193, 1004);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        chartView = new ChartView(centralWidget);
        chartView->setObjectName(QStringLiteral("chartView"));

        horizontalLayout->addWidget(chartView);

        settingsBox = new QGroupBox(centralWidget);
        settingsBox->setObjectName(QStringLiteral("settingsBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(settingsBox->sizePolicy().hasHeightForWidth());
        settingsBox->setSizePolicy(sizePolicy);
        settingsBox->setMinimumSize(QSize(200, 0));
        angularShadesComboBox = new QComboBox(settingsBox);
        angularShadesComboBox->setObjectName(QStringLiteral("angularShadesComboBox"));
        angularShadesComboBox->setGeometry(QRect(10, 313, 187, 20));
        radialShadesComboBox = new QComboBox(settingsBox);
        radialShadesComboBox->setObjectName(QStringLiteral("radialShadesComboBox"));
        radialShadesComboBox->setGeometry(QRect(10, 339, 175, 20));
        animationsComboBox = new QComboBox(settingsBox);
        animationsComboBox->setObjectName(QStringLiteral("animationsComboBox"));
        animationsComboBox->setGeometry(QRect(10, 471, 104, 20));
        labelComboBox = new QComboBox(settingsBox);
        labelComboBox->setObjectName(QStringLiteral("labelComboBox"));
        labelComboBox->setGeometry(QRect(10, 445, 134, 20));
        titleComboBox = new QComboBox(settingsBox);
        titleComboBox->setObjectName(QStringLiteral("titleComboBox"));
        titleComboBox->setGeometry(QRect(10, 551, 130, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(titleComboBox->sizePolicy().hasHeightForWidth());
        titleComboBox->setSizePolicy(sizePolicy1);
        gridComboBox = new QComboBox(settingsBox);
        gridComboBox->setObjectName(QStringLiteral("gridComboBox"));
        gridComboBox->setGeometry(QRect(10, 577, 104, 20));
        sizePolicy1.setHeightForWidth(gridComboBox->sizePolicy().hasHeightForWidth());
        gridComboBox->setSizePolicy(sizePolicy1);
        arrowComboBox = new QComboBox(settingsBox);
        arrowComboBox->setObjectName(QStringLiteral("arrowComboBox"));
        arrowComboBox->setGeometry(QRect(10, 603, 114, 20));
        sizePolicy1.setHeightForWidth(arrowComboBox->sizePolicy().hasHeightForWidth());
        arrowComboBox->setSizePolicy(sizePolicy1);
        angularAxisComboBox = new QComboBox(settingsBox);
        angularAxisComboBox->setObjectName(QStringLiteral("angularAxisComboBox"));
        angularAxisComboBox->setGeometry(QRect(10, 23, 134, 20));
        radialAxisComboBox = new QComboBox(settingsBox);
        radialAxisComboBox->setObjectName(QStringLiteral("radialAxisComboBox"));
        radialAxisComboBox->setGeometry(QRect(10, 49, 126, 20));
        themeComboBox = new QComboBox(settingsBox);
        themeComboBox->setObjectName(QStringLiteral("themeComboBox"));
        themeComboBox->setGeometry(QRect(10, 810, 131, 20));
        sizePolicy1.setHeightForWidth(themeComboBox->sizePolicy().hasHeightForWidth());
        themeComboBox->setSizePolicy(sizePolicy1);
        hoverLabel = new QLabel(settingsBox);
        hoverLabel->setObjectName(QStringLiteral("hoverLabel"));
        hoverLabel->setGeometry(QRect(10, 830, 117, 16));
        backgroundComboBox = new QComboBox(settingsBox);
        backgroundComboBox->setObjectName(QStringLiteral("backgroundComboBox"));
        backgroundComboBox->setGeometry(QRect(10, 877, 195, 20));
        sizePolicy1.setHeightForWidth(backgroundComboBox->sizePolicy().hasHeightForWidth());
        backgroundComboBox->setSizePolicy(sizePolicy1);
        plotAreaComboBox = new QComboBox(settingsBox);
        plotAreaComboBox->setObjectName(QStringLiteral("plotAreaComboBox"));
        plotAreaComboBox->setGeometry(QRect(10, 903, 165, 20));
        sizePolicy1.setHeightForWidth(plotAreaComboBox->sizePolicy().hasHeightForWidth());
        plotAreaComboBox->setSizePolicy(sizePolicy1);
        layoutWidget = new QWidget(settingsBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 207, 185, 100));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        radialMinSpin = new QDoubleSpinBox(layoutWidget);
        radialMinSpin->setObjectName(QStringLiteral("radialMinSpin"));
        radialMinSpin->setDecimals(5);
        radialMinSpin->setMinimum(-1e+9);
        radialMinSpin->setMaximum(1e+9);
        radialMinSpin->setSingleStep(10);

        gridLayout_2->addWidget(radialMinSpin, 2, 1, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        angularMinSpin = new QDoubleSpinBox(layoutWidget);
        angularMinSpin->setObjectName(QStringLiteral("angularMinSpin"));
        angularMinSpin->setDecimals(5);
        angularMinSpin->setMinimum(-1e+9);
        angularMinSpin->setMaximum(1e+9);
        angularMinSpin->setSingleStep(10);

        gridLayout_2->addWidget(angularMinSpin, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        radialMaxSpin = new QDoubleSpinBox(layoutWidget);
        radialMaxSpin->setObjectName(QStringLiteral("radialMaxSpin"));
        radialMaxSpin->setDecimals(5);
        radialMaxSpin->setMinimum(-1e+9);
        radialMaxSpin->setMaximum(1e+9);
        radialMaxSpin->setSingleStep(10);

        gridLayout_2->addWidget(radialMaxSpin, 3, 1, 1, 1);

        angularMaxSpin = new QDoubleSpinBox(layoutWidget);
        angularMaxSpin->setObjectName(QStringLiteral("angularMaxSpin"));
        angularMaxSpin->setDecimals(5);
        angularMaxSpin->setMinimum(-1e+9);
        angularMaxSpin->setMaximum(1e+9);
        angularMaxSpin->setSingleStep(10);

        gridLayout_2->addWidget(angularMaxSpin, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(settingsBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 365, 210, 74));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        labelFormatEdit = new QLineEdit(layoutWidget1);
        labelFormatEdit->setObjectName(QStringLiteral("labelFormatEdit"));

        gridLayout_3->addWidget(labelFormatEdit, 0, 1, 1, 1);

        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 1, 0, 1, 1);

        labelFontSizeSpin = new QSpinBox(layoutWidget1);
        labelFontSizeSpin->setObjectName(QStringLiteral("labelFontSizeSpin"));
        labelFontSizeSpin->setMinimum(-100000);
        labelFontSizeSpin->setMaximum(100000);

        gridLayout_3->addWidget(labelFontSizeSpin, 1, 1, 1, 1);

        labelFontComboBox = new QFontComboBox(layoutWidget1);
        labelFontComboBox->setObjectName(QStringLiteral("labelFontComboBox"));

        gridLayout_3->addWidget(labelFontComboBox, 2, 0, 1, 2);

        layoutWidget2 = new QWidget(settingsBox);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 497, 190, 48));
        gridLayout_4 = new QGridLayout(layoutWidget2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget2);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_4->addWidget(label_15, 0, 0, 1, 1);

        titleFontSizeSpin = new QSpinBox(layoutWidget2);
        titleFontSizeSpin->setObjectName(QStringLiteral("titleFontSizeSpin"));
        titleFontSizeSpin->setMinimum(-100000);
        titleFontSizeSpin->setMaximum(100000);

        gridLayout_4->addWidget(titleFontSizeSpin, 0, 1, 1, 1);

        titleFontComboBox = new QFontComboBox(layoutWidget2);
        titleFontComboBox->setObjectName(QStringLiteral("titleFontComboBox"));

        gridLayout_4->addWidget(titleFontComboBox, 1, 0, 1, 2);

        layoutWidget3 = new QWidget(settingsBox);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 655, 168, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget3);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_2->addWidget(label_16);

        logBaseSpin = new QDoubleSpinBox(layoutWidget3);
        logBaseSpin->setObjectName(QStringLiteral("logBaseSpin"));
        logBaseSpin->setDecimals(5);
        logBaseSpin->setMinimum(-1e+9);
        logBaseSpin->setMaximum(1e+9);
        logBaseSpin->setValue(8);

        horizontalLayout_2->addWidget(logBaseSpin);

        layoutWidget4 = new QWidget(settingsBox);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 680, 198, 31));
        gridLayout_6 = new QGridLayout(layoutWidget4);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        moreCategoriesCheckBox = new QCheckBox(layoutWidget4);
        moreCategoriesCheckBox->setObjectName(QStringLiteral("moreCategoriesCheckBox"));

        gridLayout_6->addWidget(moreCategoriesCheckBox, 0, 1, 1, 1);

        niceNumbersCheckBox = new QCheckBox(layoutWidget4);
        niceNumbersCheckBox->setObjectName(QStringLiteral("niceNumbersCheckBox"));

        gridLayout_6->addWidget(niceNumbersCheckBox, 0, 0, 1, 1);

        layoutWidget5 = new QWidget(settingsBox);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 730, 221, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget5);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_4->addWidget(label_17);

        dateFormatEdit = new QLineEdit(layoutWidget5);
        dateFormatEdit->setObjectName(QStringLiteral("dateFormatEdit"));

        horizontalLayout_4->addWidget(dateFormatEdit);

        layoutWidget6 = new QWidget(settingsBox);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 760, 136, 42));
        gridLayout_5 = new QGridLayout(layoutWidget6);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        series1checkBox = new QCheckBox(layoutWidget6);
        series1checkBox->setObjectName(QStringLiteral("series1checkBox"));

        gridLayout_5->addWidget(series1checkBox, 0, 0, 1, 1);

        series2checkBox = new QCheckBox(layoutWidget6);
        series2checkBox->setObjectName(QStringLiteral("series2checkBox"));

        gridLayout_5->addWidget(series2checkBox, 0, 1, 1, 1);

        series3checkBox = new QCheckBox(layoutWidget6);
        series3checkBox->setObjectName(QStringLiteral("series3checkBox"));

        gridLayout_5->addWidget(series3checkBox, 0, 2, 1, 1);

        series7checkBox = new QCheckBox(layoutWidget6);
        series7checkBox->setObjectName(QStringLiteral("series7checkBox"));

        gridLayout_5->addWidget(series7checkBox, 0, 3, 2, 1);

        series4checkBox = new QCheckBox(layoutWidget6);
        series4checkBox->setObjectName(QStringLiteral("series4checkBox"));

        gridLayout_5->addWidget(series4checkBox, 1, 0, 1, 1);

        series5checkBox = new QCheckBox(layoutWidget6);
        series5checkBox->setObjectName(QStringLiteral("series5checkBox"));

        gridLayout_5->addWidget(series5checkBox, 1, 1, 1, 1);

        series6checkBox = new QCheckBox(layoutWidget6);
        series6checkBox->setObjectName(QStringLiteral("series6checkBox"));

        gridLayout_5->addWidget(series6checkBox, 1, 2, 1, 1);

        layoutWidget7 = new QWidget(settingsBox);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(10, 75, 178, 126));
        gridLayout = new QGridLayout(layoutWidget7);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget7);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        anglesSpin = new QSpinBox(layoutWidget7);
        anglesSpin->setObjectName(QStringLiteral("anglesSpin"));
        anglesSpin->setMinimum(-9999);
        anglesSpin->setMaximum(9999);
        anglesSpin->setSingleStep(5);

        gridLayout->addWidget(anglesSpin, 2, 1, 1, 1);

        radialMinorTicksSpin = new QSpinBox(layoutWidget7);
        radialMinorTicksSpin->setObjectName(QStringLiteral("radialMinorTicksSpin"));

        gridLayout->addWidget(radialMinorTicksSpin, 3, 1, 1, 1);

        label = new QLabel(layoutWidget7);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_7 = new QLabel(layoutWidget7);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        radialTicksSpin = new QSpinBox(layoutWidget7);
        radialTicksSpin->setObjectName(QStringLiteral("radialTicksSpin"));

        gridLayout->addWidget(radialTicksSpin, 0, 1, 1, 1);

        angularMinorTicksSpin = new QSpinBox(layoutWidget7);
        angularMinorTicksSpin->setObjectName(QStringLiteral("angularMinorTicksSpin"));

        gridLayout->addWidget(angularMinorTicksSpin, 4, 1, 1, 1);

        label_6 = new QLabel(layoutWidget7);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        angularTicksSpin = new QSpinBox(layoutWidget7);
        angularTicksSpin->setObjectName(QStringLiteral("angularTicksSpin"));

        gridLayout->addWidget(angularTicksSpin, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget7);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        minorGridComboBox = new QComboBox(settingsBox);
        minorGridComboBox->setObjectName(QStringLiteral("minorGridComboBox"));
        minorGridComboBox->setGeometry(QRect(10, 630, 141, 20));
        sizePolicy1.setHeightForWidth(minorGridComboBox->sizePolicy().hasHeightForWidth());
        minorGridComboBox->setSizePolicy(sizePolicy1);
        categoryLabelLocationCheckBox = new QCheckBox(settingsBox);
        categoryLabelLocationCheckBox->setObjectName(QStringLiteral("categoryLabelLocationCheckBox"));
        categoryLabelLocationCheckBox->setGeometry(QRect(10, 710, 142, 17));
        gridLineColorComboBox = new QComboBox(settingsBox);
        gridLineColorComboBox->setObjectName(QStringLiteral("gridLineColorComboBox"));
        gridLineColorComboBox->setGeometry(QRect(10, 850, 133, 20));
        sizePolicy1.setHeightForWidth(gridLineColorComboBox->sizePolicy().hasHeightForWidth());
        gridLineColorComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(settingsBox);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1193, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        labelComboBox->setCurrentIndex(1);
        titleComboBox->setCurrentIndex(3);
        gridComboBox->setCurrentIndex(1);
        arrowComboBox->setCurrentIndex(1);
        angularAxisComboBox->setCurrentIndex(1);
        radialAxisComboBox->setCurrentIndex(1);
        themeComboBox->setCurrentIndex(0);
        backgroundComboBox->setCurrentIndex(0);
        plotAreaComboBox->setCurrentIndex(0);
        minorGridComboBox->setCurrentIndex(1);
        gridLineColorComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        settingsBox->setTitle(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
        angularShadesComboBox->clear();
        angularShadesComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "No angular shades", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Gray angular shades", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Yellow ang. shades + custom pen", Q_NULLPTR)
        );
        radialShadesComboBox->clear();
        radialShadesComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "No radial shades", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Green radial shades", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Blue rad. shades + custom pen", Q_NULLPTR)
        );
        animationsComboBox->clear();
        animationsComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "No animations", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Series animation", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Grid animation", Q_NULLPTR)
         << QApplication::translate("MainWindow", "All animations", Q_NULLPTR)
        );
        labelComboBox->clear();
        labelComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "No labels", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Black label", Q_NULLPTR)
         << QApplication::translate("MainWindow", "White label + blue pen", Q_NULLPTR)
        );
        titleComboBox->clear();
        titleComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Invisible empty title", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Visible empty title", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Invisible title", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Black title", Q_NULLPTR)
         << QApplication::translate("MainWindow", "White title + blue pen", Q_NULLPTR)
        );
        gridComboBox->clear();
        gridComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Invisible grid", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Black grid", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Custom grid pen", Q_NULLPTR)
        );
        arrowComboBox->clear();
        arrowComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Invisible arrow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Black arrow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Custom arrow pen", Q_NULLPTR)
        );
        angularAxisComboBox->clear();
        angularAxisComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "No Angular Axis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Angular Value Axis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Angular Log Axis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Angular DateTime Axis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Angular Category Axis", Q_NULLPTR)
        );
        radialAxisComboBox->clear();
        radialAxisComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "No Radial Axis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Radial Value Axis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Radial Log Axis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Radial DateTime Axis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Radial Category Axis", Q_NULLPTR)
        );
        themeComboBox->clear();
        themeComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Theme: Light", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Theme: Blue Cerulean", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Theme: Dark", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Theme: Brown Sand", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Theme: Blue Ncs", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Theme: High Contrast", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Theme: Blue Icy", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Theme: Qt", Q_NULLPTR)
        );
        hoverLabel->setText(QApplication::translate("MainWindow", "Hover coordinates here!", Q_NULLPTR));
        backgroundComboBox->clear();
        backgroundComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Background: White", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Background: Blue", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Background:  Yellow + Black Border", Q_NULLPTR)
        );
        plotAreaComboBox->clear();
        plotAreaComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "PlotArea: Transparent", Q_NULLPTR)
         << QApplication::translate("MainWindow", "PlotArea: Magenta", Q_NULLPTR)
         << QApplication::translate("MainWindow", "PlotArea: Gray + Red Border", Q_NULLPTR)
        );
        label_11->setText(QApplication::translate("MainWindow", "Radial max", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Radial min", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Angular max", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Angular min", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Label format", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Label font size", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Title font size", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Log Base", Q_NULLPTR));
        moreCategoriesCheckBox->setText(QApplication::translate("MainWindow", "More Categories", Q_NULLPTR));
        niceNumbersCheckBox->setText(QApplication::translate("MainWindow", "Nice Numbers", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "DateTime format", Q_NULLPTR));
        series1checkBox->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        series2checkBox->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        series3checkBox->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        series7checkBox->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        series4checkBox->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        series5checkBox->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        series6checkBox->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Angular Tick count", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Radial Tick count", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Angular Minor Tick count", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Radial Minor Tick count", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Label angles", Q_NULLPTR));
        minorGridComboBox->clear();
        minorGridComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Invisible minor grid", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Black minor grid", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Custom minor grid pen", Q_NULLPTR)
        );
        categoryLabelLocationCheckBox->setText(QApplication::translate("MainWindow", "Category Label On Tick", Q_NULLPTR));
        gridLineColorComboBox->clear();
        gridLineColorComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Black grid line", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Green grid line", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Red grid line", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
