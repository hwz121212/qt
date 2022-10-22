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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QComboBox *animationsComboBox;
    QComboBox *xAxisComboBox;
    QComboBox *yAxisComboBox;
    QComboBox *backgroundComboBox;
    QComboBox *plotAreaComboBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *yMinSpin;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_5;
    QDoubleSpinBox *xMinSpin;
    QLabel *label_4;
    QDoubleSpinBox *yMaxSpin;
    QDoubleSpinBox *xMaxSpin;
    QComboBox *themeComboBox;
    QPushButton *addSeriesButton;
    QPushButton *removeSeriesButton;
    QComboBox *countComboBox;
    QLabel *fpsLabel;
    QPushButton *addGLSeriesButton;
    QComboBox *colorsComboBox;
    QComboBox *widthComboBox;
    QCheckBox *antiAliasCheckBox;
    QLabel *coordinatesLabel;
    QSpinBox *intervalSpinbox;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1047, 643);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        chartView = new ChartView(centralWidget);
        chartView->setObjectName(QStringLiteral("chartView"));
        chartView->setMouseTracking(true);

        horizontalLayout->addWidget(chartView);

        settingsBox = new QGroupBox(centralWidget);
        settingsBox->setObjectName(QStringLiteral("settingsBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(settingsBox->sizePolicy().hasHeightForWidth());
        settingsBox->setSizePolicy(sizePolicy);
        settingsBox->setMinimumSize(QSize(200, 0));
        animationsComboBox = new QComboBox(settingsBox);
        animationsComboBox->setObjectName(QStringLiteral("animationsComboBox"));
        animationsComboBox->setGeometry(QRect(10, 170, 181, 20));
        xAxisComboBox = new QComboBox(settingsBox);
        xAxisComboBox->setObjectName(QStringLiteral("xAxisComboBox"));
        xAxisComboBox->setGeometry(QRect(10, 23, 181, 20));
        xAxisComboBox->setEditable(false);
        yAxisComboBox = new QComboBox(settingsBox);
        yAxisComboBox->setObjectName(QStringLiteral("yAxisComboBox"));
        yAxisComboBox->setGeometry(QRect(10, 49, 181, 20));
        yAxisComboBox->setEditable(false);
        backgroundComboBox = new QComboBox(settingsBox);
        backgroundComboBox->setObjectName(QStringLiteral("backgroundComboBox"));
        backgroundComboBox->setGeometry(QRect(10, 190, 181, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(backgroundComboBox->sizePolicy().hasHeightForWidth());
        backgroundComboBox->setSizePolicy(sizePolicy1);
        plotAreaComboBox = new QComboBox(settingsBox);
        plotAreaComboBox->setObjectName(QStringLiteral("plotAreaComboBox"));
        plotAreaComboBox->setGeometry(QRect(10, 210, 181, 20));
        sizePolicy1.setHeightForWidth(plotAreaComboBox->sizePolicy().hasHeightForWidth());
        plotAreaComboBox->setSizePolicy(sizePolicy1);
        layoutWidget = new QWidget(settingsBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 185, 100));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        yMinSpin = new QDoubleSpinBox(layoutWidget);
        yMinSpin->setObjectName(QStringLiteral("yMinSpin"));
        yMinSpin->setDecimals(5);
        yMinSpin->setMinimum(-1e+9);
        yMinSpin->setMaximum(1e+9);
        yMinSpin->setSingleStep(1);

        gridLayout_2->addWidget(yMinSpin, 2, 1, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        xMinSpin = new QDoubleSpinBox(layoutWidget);
        xMinSpin->setObjectName(QStringLiteral("xMinSpin"));
        xMinSpin->setDecimals(5);
        xMinSpin->setMinimum(-1e+9);
        xMinSpin->setMaximum(1e+9);
        xMinSpin->setSingleStep(1);

        gridLayout_2->addWidget(xMinSpin, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        yMaxSpin = new QDoubleSpinBox(layoutWidget);
        yMaxSpin->setObjectName(QStringLiteral("yMaxSpin"));
        yMaxSpin->setDecimals(5);
        yMaxSpin->setMinimum(-1e+9);
        yMaxSpin->setMaximum(1e+9);
        yMaxSpin->setSingleStep(1);

        gridLayout_2->addWidget(yMaxSpin, 3, 1, 1, 1);

        xMaxSpin = new QDoubleSpinBox(layoutWidget);
        xMaxSpin->setObjectName(QStringLiteral("xMaxSpin"));
        xMaxSpin->setDecimals(5);
        xMaxSpin->setMinimum(-1e+9);
        xMaxSpin->setMaximum(1e+9);
        xMaxSpin->setSingleStep(1);

        gridLayout_2->addWidget(xMaxSpin, 1, 1, 1, 1);

        themeComboBox = new QComboBox(settingsBox);
        themeComboBox->setObjectName(QStringLiteral("themeComboBox"));
        themeComboBox->setGeometry(QRect(10, 230, 181, 20));
        sizePolicy1.setHeightForWidth(themeComboBox->sizePolicy().hasHeightForWidth());
        themeComboBox->setSizePolicy(sizePolicy1);
        addSeriesButton = new QPushButton(settingsBox);
        addSeriesButton->setObjectName(QStringLiteral("addSeriesButton"));
        addSeriesButton->setGeometry(QRect(100, 280, 91, 23));
        removeSeriesButton = new QPushButton(settingsBox);
        removeSeriesButton->setObjectName(QStringLiteral("removeSeriesButton"));
        removeSeriesButton->setGeometry(QRect(50, 300, 91, 23));
        countComboBox = new QComboBox(settingsBox);
        countComboBox->setObjectName(QStringLiteral("countComboBox"));
        countComboBox->setGeometry(QRect(10, 250, 181, 20));
        countComboBox->setEditable(false);
        fpsLabel = new QLabel(settingsBox);
        fpsLabel->setObjectName(QStringLiteral("fpsLabel"));
        fpsLabel->setGeometry(QRect(10, 550, 47, 13));
        addGLSeriesButton = new QPushButton(settingsBox);
        addGLSeriesButton->setObjectName(QStringLiteral("addGLSeriesButton"));
        addGLSeriesButton->setGeometry(QRect(10, 280, 91, 23));
        colorsComboBox = new QComboBox(settingsBox);
        colorsComboBox->setObjectName(QStringLiteral("colorsComboBox"));
        colorsComboBox->setGeometry(QRect(10, 330, 181, 20));
        widthComboBox = new QComboBox(settingsBox);
        widthComboBox->setObjectName(QStringLiteral("widthComboBox"));
        widthComboBox->setGeometry(QRect(10, 350, 181, 20));
        antiAliasCheckBox = new QCheckBox(settingsBox);
        antiAliasCheckBox->setObjectName(QStringLiteral("antiAliasCheckBox"));
        antiAliasCheckBox->setGeometry(QRect(10, 380, 91, 17));
        antiAliasCheckBox->setChecked(true);
        coordinatesLabel = new QLabel(settingsBox);
        coordinatesLabel->setObjectName(QStringLiteral("coordinatesLabel"));
        coordinatesLabel->setGeometry(QRect(10, 400, 181, 16));
        intervalSpinbox = new QSpinBox(settingsBox);
        intervalSpinbox->setObjectName(QStringLiteral("intervalSpinbox"));
        intervalSpinbox->setGeometry(QRect(100, 420, 91, 22));
        intervalSpinbox->setMaximum(10000);
        intervalSpinbox->setSingleStep(5);
        label = new QLabel(settingsBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 420, 91, 16));

        horizontalLayout->addWidget(settingsBox);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1047, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        xAxisComboBox->setCurrentIndex(1);
        yAxisComboBox->setCurrentIndex(1);
        backgroundComboBox->setCurrentIndex(0);
        plotAreaComboBox->setCurrentIndex(0);
        themeComboBox->setCurrentIndex(0);
        countComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        settingsBox->setTitle(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
        animationsComboBox->clear();
        animationsComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "No animations", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Series animation", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Grid animation", Q_NULLPTR)
         << QApplication::translate("MainWindow", "All animations", Q_NULLPTR)
        );
        xAxisComboBox->clear();
        xAxisComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "No X Axis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "X Value Axis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "X Log Axis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "X DateTime Axis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "X Category Axis", Q_NULLPTR)
        );
        xAxisComboBox->setCurrentText(QApplication::translate("MainWindow", "X Value Axis", Q_NULLPTR));
        yAxisComboBox->clear();
        yAxisComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "No Y Axis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Y Value Axis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Y Log Axis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Y DateTime Axis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Y Category Axis", Q_NULLPTR)
        );
        yAxisComboBox->setCurrentText(QApplication::translate("MainWindow", "Y Value Axis", Q_NULLPTR));
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
        label_11->setText(QApplication::translate("MainWindow", "Y max", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Y min", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "X max", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "X min", Q_NULLPTR));
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
        addSeriesButton->setText(QApplication::translate("MainWindow", "Add Series", Q_NULLPTR));
        removeSeriesButton->setText(QApplication::translate("MainWindow", "Remove Series", Q_NULLPTR));
        countComboBox->clear();
        countComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "100", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1000", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10000", Q_NULLPTR)
         << QApplication::translate("MainWindow", "100000", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1000000", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10000000", Q_NULLPTR)
        );
        countComboBox->setCurrentText(QApplication::translate("MainWindow", "100", Q_NULLPTR));
        fpsLabel->setText(QApplication::translate("MainWindow", "FPS:", Q_NULLPTR));
        addGLSeriesButton->setText(QApplication::translate("MainWindow", "Add GL Series", Q_NULLPTR));
        colorsComboBox->clear();
        colorsComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Black", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Red", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Green", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Blue", Q_NULLPTR)
        );
        widthComboBox->clear();
        widthComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
        );
        antiAliasCheckBox->setText(QApplication::translate("MainWindow", "Antialiasing", Q_NULLPTR));
        coordinatesLabel->setText(QApplication::translate("MainWindow", "0 x 0", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Update Interval:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
