#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QComboBox>
#include <QDebug>
#include <QLineEdit>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QWizard>
#include <QWizardPage>

#include <QtTest/QtTest>

class taskQTBUG_25691 : public QWizard
{
    Q_OBJECT
public:
    taskQTBUG_25691( QWidget * parent = 0 );

    ~taskQTBUG_25691(void);
};

class taskQTBUG_25691Page1 : public QWizardPage
{
    Q_OBJECT
public:
    taskQTBUG_25691Page1( QWidget * parent = 0 );

    ~taskQTBUG_25691Page1(void);
};

class taskQTBUG_25691Page2 : public QWizardPage
{
    Q_OBJECT
public:
    taskQTBUG_25691Page2( QWidget * parent = 0 );

    virtual void initializePage(void);

    ~taskQTBUG_25691Page2(void);

private:
    QVBoxLayout * layout;
    QLineEdit * field0_value;
    QLineEdit * field1_value;
    QLineEdit * field2_value;
};

