#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qsizepolicy.h>
#include <QApplication>

Q_DECLARE_METATYPE(Qt::Orientations)
Q_DECLARE_METATYPE(QSizePolicy)
Q_DECLARE_METATYPE(QSizePolicy::Policy)
Q_DECLARE_METATYPE(QSizePolicy::ControlType)

class tst_QSizePolicy : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void cleanup() { QVERIFY(QApplication::topLevelWidgets().isEmpty()); }
    void qtest();
    void constExpr();
    void defaultValues();
    void getSetCheck_data() { data(); }
    void getSetCheck();
    void transposed_data() { data(); }
    void transposed();
    void dataStream();
    void horizontalStretch();
    void verticalStretch();
    void qhash_data() { data(); }
    void qhash();
private:
    void data() const;
};


