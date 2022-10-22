#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>


#include "qlabel.h"
#include <qapplication.h>
#include <qboxlayout.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qmovie.h>
#include <qpicture.h>
#include <qmessagebox.h>
#include <private/qlabel_p.h>

class Widget : public QWidget
{
    Q_OBJECT
public:
    QList<QEvent::Type> events;

protected:
    bool event(QEvent *ev) Q_DECL_OVERRIDE {
        events.append(ev->type());
        return QWidget::event(ev);
    }

};

class tst_QLabel : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();

    void getSetCheck();
    void setText_data();
    void setText();
    void setTextFormat();
#ifndef Q_OS_MAC
    void setBuddy();
#endif
    void setNum();
    void clear();
    void wordWrap();
    void eventPropagation_data();
    void eventPropagation();
    void focusPolicy();

    void task190318_sizes();

    void sizeHint();

    void task226479_movieResize();
    void emptyPixmap();

    void unicodeText_data();
    void unicodeText();

    void mnemonic_data();
    void mnemonic();
    void selection();

#ifndef QT_NO_CONTEXTMENU
    void taskQTBUG_7902_contextMenuCrash();
#endif

    void taskQTBUG_48157_dprPixmap();
    void taskQTBUG_48157_dprMovie();

private:
    QLabel *testWidget;
    QPointer<Widget> test_box;
    QPointer<QLabel> test_label;
};

