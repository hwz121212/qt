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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *highScoreTextLabel;
    QLabel *highScoreLabel;
    QLabel *scoreTextLabel;
    QLabel *scoreLabel;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QToolButton *startButton;
    QLabel *gameOverLabel;
    QLabel *jackpotLabel;
    QLabel *hurryLabel;
    QLabel *cLabel;
    QLabel *rLabel;
    QLabel *aLabel;
    QLabel *zLabel;
    QLabel *yLabel;
    QPushButton *cButton;
    QPushButton *rButton;
    QPushButton *aButton;
    QPushButton *zButton;
    QPushButton *yButton;
    QPushButton *ballOutButton;
    QLabel *offStateLabel;
    QLabel *normalStateLabel;
    QLabel *hurryStateLabel;
    QLabel *jackpotStateLabel;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(476, 458);
        gridLayout = new QGridLayout(MainWindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        highScoreTextLabel = new QLabel(MainWindow);
        highScoreTextLabel->setObjectName(QStringLiteral("highScoreTextLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(highScoreTextLabel->sizePolicy().hasHeightForWidth());
        highScoreTextLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(highScoreTextLabel);

        highScoreLabel = new QLabel(MainWindow);
        highScoreLabel->setObjectName(QStringLiteral("highScoreLabel"));
        sizePolicy.setHeightForWidth(highScoreLabel->sizePolicy().hasHeightForWidth());
        highScoreLabel->setSizePolicy(sizePolicy);
        highScoreLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(highScoreLabel);

        scoreTextLabel = new QLabel(MainWindow);
        scoreTextLabel->setObjectName(QStringLiteral("scoreTextLabel"));
        sizePolicy.setHeightForWidth(scoreTextLabel->sizePolicy().hasHeightForWidth());
        scoreTextLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(scoreTextLabel);

        scoreLabel = new QLabel(MainWindow);
        scoreLabel->setObjectName(QStringLiteral("scoreLabel"));
        sizePolicy.setHeightForWidth(scoreLabel->sizePolicy().hasHeightForWidth());
        scoreLabel->setSizePolicy(sizePolicy);
        scoreLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(scoreLabel);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(1, 98, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        startButton = new QToolButton(MainWindow);
        startButton->setObjectName(QStringLiteral("startButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(startButton);


        gridLayout->addLayout(verticalLayout, 0, 5, 7, 1);

        gameOverLabel = new QLabel(MainWindow);
        gameOverLabel->setObjectName(QStringLiteral("gameOverLabel"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 4, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(190, 190, 190, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        gameOverLabel->setPalette(palette);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        gameOverLabel->setFont(font);
        gameOverLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(gameOverLabel, 1, 0, 1, 5);

        jackpotLabel = new QLabel(MainWindow);
        jackpotLabel->setObjectName(QStringLiteral("jackpotLabel"));
        QPalette palette1;
        QBrush brush2(QColor(55, 200, 191, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        jackpotLabel->setPalette(palette1);
        jackpotLabel->setFont(font);
        jackpotLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(jackpotLabel, 2, 0, 1, 5);

        hurryLabel = new QLabel(MainWindow);
        hurryLabel->setObjectName(QStringLiteral("hurryLabel"));
        QPalette palette2;
        QBrush brush3(QColor(67, 24, 97, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        hurryLabel->setPalette(palette2);
        hurryLabel->setFont(font);
        hurryLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(hurryLabel, 3, 0, 1, 5);

        cLabel = new QLabel(MainWindow);
        cLabel->setObjectName(QStringLiteral("cLabel"));
        QPalette palette3;
        QBrush brush4(QColor(7, 0, 222, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        cLabel->setPalette(palette3);
        cLabel->setFont(font);
        cLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(cLabel, 4, 0, 1, 1);

        rLabel = new QLabel(MainWindow);
        rLabel->setObjectName(QStringLiteral("rLabel"));
        QPalette palette4;
        QBrush brush5(QColor(6, 208, 36, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        rLabel->setPalette(palette4);
        rLabel->setFont(font);
        rLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(rLabel, 4, 1, 1, 1);

        aLabel = new QLabel(MainWindow);
        aLabel->setObjectName(QStringLiteral("aLabel"));
        QPalette palette5;
        QBrush brush6(QColor(238, 17, 1, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        aLabel->setPalette(palette5);
        aLabel->setFont(font);
        aLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(aLabel, 4, 2, 1, 1);

        zLabel = new QLabel(MainWindow);
        zLabel->setObjectName(QStringLiteral("zLabel"));
        zLabel->setEnabled(true);
        QPalette palette6;
        QBrush brush7(QColor(230, 10, 230, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        zLabel->setPalette(palette6);
        zLabel->setFont(font);
        zLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(zLabel, 4, 3, 1, 1);

        yLabel = new QLabel(MainWindow);
        yLabel->setObjectName(QStringLiteral("yLabel"));
        QPalette palette7;
        QBrush brush8(QColor(239, 224, 9, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        yLabel->setPalette(palette7);
        yLabel->setFont(font);
        yLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(yLabel, 4, 4, 1, 1);

        cButton = new QPushButton(MainWindow);
        cButton->setObjectName(QStringLiteral("cButton"));

        gridLayout->addWidget(cButton, 5, 0, 1, 1);

        rButton = new QPushButton(MainWindow);
        rButton->setObjectName(QStringLiteral("rButton"));

        gridLayout->addWidget(rButton, 5, 1, 1, 1);

        aButton = new QPushButton(MainWindow);
        aButton->setObjectName(QStringLiteral("aButton"));

        gridLayout->addWidget(aButton, 5, 2, 1, 1);

        zButton = new QPushButton(MainWindow);
        zButton->setObjectName(QStringLiteral("zButton"));

        gridLayout->addWidget(zButton, 5, 3, 1, 1);

        yButton = new QPushButton(MainWindow);
        yButton->setObjectName(QStringLiteral("yButton"));

        gridLayout->addWidget(yButton, 5, 4, 1, 1);

        ballOutButton = new QPushButton(MainWindow);
        ballOutButton->setObjectName(QStringLiteral("ballOutButton"));

        gridLayout->addWidget(ballOutButton, 6, 0, 1, 5);

        offStateLabel = new QLabel(MainWindow);
        offStateLabel->setObjectName(QStringLiteral("offStateLabel"));
        sizePolicy.setHeightForWidth(offStateLabel->sizePolicy().hasHeightForWidth());
        offStateLabel->setSizePolicy(sizePolicy);
        offStateLabel->setWordWrap(true);

        gridLayout->addWidget(offStateLabel, 7, 0, 1, 6);

        normalStateLabel = new QLabel(MainWindow);
        normalStateLabel->setObjectName(QStringLiteral("normalStateLabel"));
        sizePolicy.setHeightForWidth(normalStateLabel->sizePolicy().hasHeightForWidth());
        normalStateLabel->setSizePolicy(sizePolicy);
        normalStateLabel->setWordWrap(true);

        gridLayout->addWidget(normalStateLabel, 8, 0, 1, 6);

        hurryStateLabel = new QLabel(MainWindow);
        hurryStateLabel->setObjectName(QStringLiteral("hurryStateLabel"));
        sizePolicy.setHeightForWidth(hurryStateLabel->sizePolicy().hasHeightForWidth());
        hurryStateLabel->setSizePolicy(sizePolicy);
        hurryStateLabel->setWordWrap(true);

        gridLayout->addWidget(hurryStateLabel, 9, 0, 1, 6);

        jackpotStateLabel = new QLabel(MainWindow);
        jackpotStateLabel->setObjectName(QStringLiteral("jackpotStateLabel"));
        sizePolicy.setHeightForWidth(jackpotStateLabel->sizePolicy().hasHeightForWidth());
        jackpotStateLabel->setSizePolicy(sizePolicy);
        jackpotStateLabel->setWordWrap(true);

        gridLayout->addWidget(jackpotStateLabel, 10, 0, 1, 6);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Pinball", Q_NULLPTR));
        highScoreTextLabel->setText(QApplication::translate("MainWindow", "HIGH SCORE:", Q_NULLPTR));
        highScoreLabel->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        scoreTextLabel->setText(QApplication::translate("MainWindow", "SCORE:", Q_NULLPTR));
        scoreLabel->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        startButton->setText(QApplication::translate("MainWindow", "^\n"
"^\n"
"^\n"
"\n"
"S\n"
"T\n"
"A\n"
"R\n"
"T\n"
"\n"
"^\n"
"^\n"
"^", Q_NULLPTR));
        gameOverLabel->setText(QApplication::translate("MainWindow", "GAME OVER", Q_NULLPTR));
        jackpotLabel->setText(QApplication::translate("MainWindow", "JACKPOT!", Q_NULLPTR));
        hurryLabel->setText(QApplication::translate("MainWindow", "HURRY!", Q_NULLPTR));
        cLabel->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        rLabel->setText(QApplication::translate("MainWindow", "R", Q_NULLPTR));
        aLabel->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        zLabel->setText(QApplication::translate("MainWindow", "Z", Q_NULLPTR));
        yLabel->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        cButton->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        rButton->setText(QApplication::translate("MainWindow", "R", Q_NULLPTR));
        aButton->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        zButton->setText(QApplication::translate("MainWindow", "Z", Q_NULLPTR));
        yButton->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        ballOutButton->setText(QApplication::translate("MainWindow", "BALL OUT", Q_NULLPTR));
        offStateLabel->setText(QApplication::translate("MainWindow", "Press START to release the ball.", Q_NULLPTR));
        normalStateLabel->setText(QApplication::translate("MainWindow", "Try to hit all CRAZY letters. Watch out for ball and avoid BALL OUT since the game will end.", Q_NULLPTR));
        hurryStateLabel->setText(QApplication::translate("MainWindow", "Now you need to hurry. Quickly hit all CRAZY letters again to gather the extra JACKPOT bonus. You have only 5 seconds. Otherwise you will need to start from scratch.", Q_NULLPTR));
        jackpotStateLabel->setText(QApplication::translate("MainWindow", "You did that! You have collected JACKPOT! Congratulations. Now you can continue game until you BALL OUT.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
