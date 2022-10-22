#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QDataWidgetMapper>
#include <QStandardItemModel>
#include <QLineEdit>
#include <QComboBox>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QTest>
#include <QSignalSpy>
#include <QMetaType>
#include  <QApplication>

class tst_QDataWidgetMapper: public QObject
{
    Q_OBJECT
private slots:
    void initTestCase();

    void setModel();
    void navigate();
    void addMapping();
    void currentIndexChanged();
    void changingValues();
    void setData();
    void mappedWidgetAt();

    void comboBox();

    void textEditDoesntChangeFocusOnTab_qtbug3305();
};
