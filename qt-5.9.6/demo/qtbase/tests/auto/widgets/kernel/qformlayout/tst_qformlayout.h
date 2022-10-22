#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qlayout.h>
#include <qapplication.h>
#include <qwidget.h>
#include <qproxystyle.h>
#include <qsizepolicy.h>

#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QStyleFactory>
#include <QSharedPointer>

#include <QtTest/private/qtesthelpers_p.h>

using namespace QTestPrivate;

#include <qformlayout.h>


class tst_QFormLayout : public QObject
{
    Q_OBJECT

private slots:
    void cleanup();
    void rowCount();
    void buddies();
    void getItemPosition();
    void wrapping();
    void spacing();
    void contentsRect();

    void setFormStyle();
    void setFieldGrowthPolicy();
    void setRowWrapPolicy();
    void setLabelAlignment();
    void setFormAlignment();

/*
    void setHorizontalSpacing(int spacing);
    int horizontalSpacing() const;
    void setVerticalSpacing(int spacing);
    int verticalSpacing() const;
*/

    void addRow();
    void insertRow_QWidget_QWidget();
    void insertRow_QWidget_QLayout();
    void insertRow_QString_QWidget();
    void insertRow_QString_QLayout();
    void insertRow_QWidget();
    void insertRow_QLayout();
    void removeRow();
    void removeRow_QWidget();
    void removeRow_QLayout();
    void takeRow();
    void takeRow_QWidget();
    void takeRow_QLayout();
    void setWidget();
    void setLayout();

/*
    QLayoutItem *itemAt(int row, ItemRole role) const;
    void getItemPosition(int index, int *rowPtr, ItemRole *rolePtr) const;
    void getLayoutPosition(QWidget *widget, int *rowPtr, ItemRole *rolePtr) const;
    void getItemPosition(QLayoutItem *item, int *rowPtr, ItemRole *rolePtr) const;
    QWidget *labelForField(QWidget *widget) const;
    QWidget *labelForField(QLayoutItem *item) const;

    void addItem(QLayoutItem *item);
*/

    void itemAt();
    void takeAt();
    void layoutAlone();
    void replaceWidget();
/*
    void setGeometry(const QRect &rect);
    QSize minimumSize() const;
    QSize sizeHint() const;

    bool hasHeightForWidth() const;
    int heightForWidth(int width) const;
    Qt::Orientations expandingDirections() const;
*/

    void taskQTBUG_27420_takeAtShouldUnparentLayout();
    void taskQTBUG_40609_addingWidgetToItsOwnLayout();
    void taskQTBUG_40609_addingLayoutToItself();

};



class CustomLayoutStyle : public QProxyStyle
{
	Q_OBJECT
public:
	CustomLayoutStyle() : QProxyStyle(QStyleFactory::create("windows"))
	{
		hspacing = 5;
		vspacing = 10;
	}

	virtual int pixelMetric(PixelMetric metric, const QStyleOption * option = 0,
		const QWidget * widget = 0) const;

	int hspacing;
	int vspacing;
};
