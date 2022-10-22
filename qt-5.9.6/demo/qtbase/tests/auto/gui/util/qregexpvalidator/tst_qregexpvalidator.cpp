#include "tst_qregexpvalidator.h"


#include <QtTest/QtTest>
#include <qregexp.h>


#include <qvalidator.h>


void tst_QRegExpValidator::validate_data()
{

    QTest::addColumn<QString>("rx");
    QTest::addColumn<QString>("value");
    QTest::addColumn<int>("state");

    QTest::newRow( "data0" ) << QString("[1-9]\\d{0,3}") << QString("0") << 0;
    QTest::newRow( "data1" ) << QString("[1-9]\\d{0,3}") << QString("12345") << 0;
    QTest::newRow( "data2" ) << QString("[1-9]\\d{0,3}") << QString("1") << 2;

    QTest::newRow( "data3" ) << QString("\\S+") << QString("myfile.txt") << 2;
    QTest::newRow( "data4" ) << QString("\\S+") << QString("my file.txt") << 0;

    QTest::newRow( "data5" ) << QString("[A-C]\\d{5}[W-Z]") << QString("a12345Z") << 0;
    QTest::newRow( "data6" ) << QString("[A-C]\\d{5}[W-Z]") << QString("A12345Z") << 2;
    QTest::newRow( "data7" ) << QString("[A-C]\\d{5}[W-Z]") << QString("B12") << 1;

    QTest::newRow( "data8" ) << QString("read\\S?me(\\.(txt|asc|1st))?") << QString("readme") << 2;
    QTest::newRow( "data9" ) << QString("read\\S?me(\\.(txt|asc|1st))?") << QString("read me.txt") << 0;
    QTest::newRow( "data10" ) << QString("read\\S?me(\\.(txt|asc|1st))?") << QString("readm") << 1;
}

void tst_QRegExpValidator::validate()
{
    QFETCH( QString, rx );
    QFETCH( QString, value );
    QFETCH( int, state );

    QRegExpValidator rv( 0 );
    QSignalSpy spy(&rv, SIGNAL(regExpChanged(QRegExp)));
    QSignalSpy changedSpy(&rv, SIGNAL(changed()));

    rv.setRegExp( QRegExp( rx ) );
    int pos = -1;

    QCOMPARE( (int)rv.validate( value, pos ), state );

    if (state == QValidator::Invalid)
        QCOMPARE(pos, value.length());
    else
        QCOMPARE(pos, -1); // untouched on Acceptable or Intermediate

    QCOMPARE(spy.count(), 1);
    QCOMPARE(changedSpy.count(), 1);
}

QTEST_APPLESS_MAIN(tst_QRegExpValidator)
//#include "tst_qregexpvalidator.moc"
