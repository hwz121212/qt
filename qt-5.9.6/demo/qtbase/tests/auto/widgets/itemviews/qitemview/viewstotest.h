#pragma once


#include <QtTest/QtTest>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>





/*
	To add a view to be tested add the header file to the includes
	and impliment what is needed in the functions below.

	You can add more then one view, several Qt views are included as examples.

	In tst_qitemview.cpp a new ViewsToTest object is created for each test.

	When you have errors fix the first ones first.  Later tests depend upon them working
*/

class ViewsToTest
{
public:
	ViewsToTest();

	QAbstractItemView *createView(const QString &viewType);
	void hideIndexes(QAbstractItemView *view);

	enum Display { DisplayNone, DisplayRoot };

	struct test {
		test(QString m, Display d) : viewType(m), display(d) {};
		QString viewType;
		Display display;
	};

	QList<test> tests;
};

