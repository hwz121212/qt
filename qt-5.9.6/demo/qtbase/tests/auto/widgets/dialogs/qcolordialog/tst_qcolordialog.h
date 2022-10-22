#pragma once

#define QT_GUI_LIB
#define QT_WIDGETS_LIB
#include <QtTest/QtTest>
#include <QtGui/QtGui>
#include <QtWidgets/QColorDialog>

QT_FORWARD_DECLARE_CLASS(QtTestEventThread)

class tst_QColorDialog : public QObject
{
    Q_OBJECT
public:
    tst_QColorDialog();
    virtual ~tst_QColorDialog();

public slots:
    void postKeyReturn();
    void testGetRgba();
    void testNativeActiveModalWidget();

private slots:
    void defaultOkButton();
    void native_activeModalWidget();
    void task247349_alpha();
    void QTBUG_43548_initialColor();
};

class TestNativeDialog : public QColorDialog
{
    Q_OBJECT
public:
    QWidget *m_activeModalWidget;

    TestNativeDialog(QWidget *parent = 0)
        : QColorDialog(parent), m_activeModalWidget(0)
    {
        QTimer::singleShot(1, this, SLOT(test_activeModalWidgetSignal()));
    }

public slots:
    void test_activeModalWidgetSignal()
    {
        m_activeModalWidget = qApp->activeModalWidget();
    }
};
