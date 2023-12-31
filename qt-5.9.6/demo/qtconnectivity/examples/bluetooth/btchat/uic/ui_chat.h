/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *localAdapterBox;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *firstAdapter;
    QRadioButton *secondAdapter;
    QTextEdit *chat;
    QHBoxLayout *horizontalLayout;
    QLineEdit *sendText;
    QPushButton *sendButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *connectButton;
    QPushButton *quitButton;

    void setupUi(QDialog *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName(QStringLiteral("Chat"));
        Chat->resize(400, 300);
        verticalLayout = new QVBoxLayout(Chat);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        localAdapterBox = new QGroupBox(Chat);
        localAdapterBox->setObjectName(QStringLiteral("localAdapterBox"));
        localAdapterBox->setCheckable(false);
        horizontalLayout_3 = new QHBoxLayout(localAdapterBox);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        firstAdapter = new QRadioButton(localAdapterBox);
        firstAdapter->setObjectName(QStringLiteral("firstAdapter"));

        horizontalLayout_3->addWidget(firstAdapter);

        secondAdapter = new QRadioButton(localAdapterBox);
        secondAdapter->setObjectName(QStringLiteral("secondAdapter"));

        horizontalLayout_3->addWidget(secondAdapter);


        verticalLayout->addWidget(localAdapterBox);

        chat = new QTextEdit(Chat);
        chat->setObjectName(QStringLiteral("chat"));
        chat->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(chat);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sendText = new QLineEdit(Chat);
        sendText->setObjectName(QStringLiteral("sendText"));

        horizontalLayout->addWidget(sendText);

        sendButton = new QPushButton(Chat);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        horizontalLayout->addWidget(sendButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        connectButton = new QPushButton(Chat);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        horizontalLayout_2->addWidget(connectButton);


        verticalLayout->addLayout(horizontalLayout_2);

        quitButton = new QPushButton(Chat);
        quitButton->setObjectName(QStringLiteral("quitButton"));

        verticalLayout->addWidget(quitButton);


        retranslateUi(Chat);

        sendButton->setDefault(true);


        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QDialog *Chat)
    {
        Chat->setWindowTitle(QApplication::translate("Chat", "Bluetooth Chat", Q_NULLPTR));
        localAdapterBox->setTitle(QApplication::translate("Chat", "Local Bluetooth Adapter", Q_NULLPTR));
        firstAdapter->setText(QApplication::translate("Chat", "Default", Q_NULLPTR));
        secondAdapter->setText(QString());
        sendButton->setText(QApplication::translate("Chat", "Send", Q_NULLPTR));
        connectButton->setText(QApplication::translate("Chat", "Connect", Q_NULLPTR));
        quitButton->setText(QApplication::translate("Chat", "Quit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
