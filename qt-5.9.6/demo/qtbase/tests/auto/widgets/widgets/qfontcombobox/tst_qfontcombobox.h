#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qfontcombobox.h>

class tst_QFontComboBox : public QObject
{
    Q_OBJECT

private slots:
    void qfontcombobox_data();
    void qfontcombobox();
    void currentFont_data();
    void currentFont();
    void fontFilters_data();
    void fontFilters();
    void sizeHint();
    void writingSystem_data();
    void writingSystem();
    void currentFontChanged();
};

