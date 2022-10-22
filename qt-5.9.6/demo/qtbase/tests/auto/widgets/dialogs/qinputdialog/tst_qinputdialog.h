#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <QString>
#include <QSpinBox>
#include <QPushButton>
#include <QLineEdit>
#include <QComboBox>
#include <QDialogButtonBox>
#include <qinputdialog.h>
#include <QtWidgets/private/qdialog_p.h>

class tst_QInputDialog : public QObject
{
    Q_OBJECT
    QWidget *parent;
    QDialog::DialogCode doneCode;
    void (*testFunc)(QInputDialog *);
    static void testFuncGetInt(QInputDialog *dialog);
    static void testFuncGetDouble(QInputDialog *dialog);
    static void testFuncGetText(QInputDialog *dialog);
    static void testFuncGetItem(QInputDialog *dialog);
    void timerEvent(QTimerEvent *event);
private slots:
    void getInt_data();
    void getInt();
    void getDouble_data();
    void getDouble();
    void taskQTBUG_54693_crashWhenParentIsDeletedWhileDialogIsOpen();
    void task255502getDouble();
    void getText_data();
    void getText();
    void getItem_data();
    void getItem();
    void task256299_getTextReturnNullStringOnRejected();
    void inputMethodHintsOfChildWidget();
};




class SelfDestructParent : public QWidget
{
	Q_OBJECT
public:
	explicit SelfDestructParent(int delay = 100)
		: QWidget(Q_NULLPTR)
	{
		QTimer::singleShot(delay, this, SLOT(deleteLater()));
	}
};
