#include "tst_qsignalspy.h"




QtTestObject::QtTestObject()
{
}

void tst_QSignalSpy::spyWithoutArgs()
{
    QtTestObject obj;

    QSignalSpy spy(&obj, SIGNAL(sig0()));
    QCOMPARE(spy.count(), 0);

    emit obj.sig0();
    QCOMPARE(spy.count(), 1);
    emit obj.sig0();
    QCOMPARE(spy.count(), 2);

    QList<QVariant> args = spy.takeFirst();
    QCOMPARE(args.count(), 0);
}

void tst_QSignalSpy::spyWithBasicArgs()
{
    QtTestObject obj;
    QSignalSpy spy(&obj, SIGNAL(sig1(int,int)));

    emit obj.sig1(1, 2);
    QCOMPARE(spy.count(), 1);

    QList<QVariant> args = spy.takeFirst();
    QCOMPARE(args.count(), 2);
    QCOMPARE(args.at(0).toInt(), 1);
    QCOMPARE(args.at(1).toInt(), 2);

    QSignalSpy spyl(&obj, SIGNAL(sigLong(long,long)));

    emit obj.sigLong(1l, 2l);
    args = spyl.takeFirst();
    QCOMPARE(args.count(), 2);
    QCOMPARE(qvariant_cast<long>(args.at(0)), 1l);
    QCOMPARE(qvariant_cast<long>(args.at(1)), 2l);
}


void tst_QSignalSpy::spyWithPointers()
{
    qRegisterMetaType<int *>("int*");

    QtTestObject obj;
    QSignalSpy spy(&obj, SIGNAL(sig2(int*,int*)));

    int i1 = 1;
    int i2 = 2;

    emit obj.sig2(&i1, &i2);
    QCOMPARE(spy.count(), 1);

    QList<QVariant> args = spy.takeFirst();
    QCOMPARE(args.count(), 2);
    QCOMPARE(*static_cast<int * const *>(args.at(0).constData()), &i1);
    QCOMPARE(*static_cast<int * const *>(args.at(1).constData()), &i2);
}


void tst_QSignalSpy::spyWithBasicQtClasses()
{
    QtTestObject2 obj;

    QSignalSpy spy(&obj, SIGNAL(sig(QString)));
    emit obj.sig(QString("bubu"));
    QCOMPARE(spy.count(), 1);
    QCOMPARE(spy.at(0).count(), 1);
    QCOMPARE(spy.at(0).at(0).toString(), QString("bubu"));

    QSignalSpy spy2(&obj, SIGNAL(sig5(QVariant)));
    QVariant val(45);
    emit obj.sig5(val);
    QCOMPARE(spy2.count(), 1);
    QCOMPARE(spy2.at(0).count(), 1);
    QCOMPARE(spy2.at(0).at(0), val);
    QCOMPARE(qvariant_cast<QVariant>(spy2.at(0).at(0)), val);
}

void tst_QSignalSpy::spyWithQtClasses()
{
    QtTestObject2 obj;


    QSignalSpy spy(&obj, SIGNAL(sig2(QDateTime)));
    QDateTime dt = QDateTime::currentDateTime();
    emit obj.sig2(dt);
    QCOMPARE(spy.count(), 1);
    QCOMPARE(spy.at(0).count(), 1);
    QCOMPARE(spy.at(0).at(0).typeName(), "QDateTime");
    QCOMPARE(*static_cast<const QDateTime *>(spy.at(0).at(0).constData()), dt);
    QCOMPARE(spy.at(0).at(0).toDateTime(), dt);

    QSignalSpy spy2(&obj, SIGNAL(sig3(QObject*)));
    emit obj.sig3(this);
    QCOMPARE(*static_cast<QObject * const *>(spy2.value(0).value(0).constData()),
            (QObject *)this);
    QCOMPARE(qvariant_cast<QObject *>(spy2.value(0).value(0)), (QObject*)this);

    QSignalSpy spy3(&obj, SIGNAL(sig4(QChar)));
    emit obj.sig4(QChar('A'));
    QCOMPARE(qvariant_cast<QChar>(spy3.value(0).value(0)), QChar('A'));
}

void tst_QSignalSpy::spyWithQtTypedefs()
{
    QtTestObject3 obj;

//    QSignalSpy spy1(&obj, SIGNAL(sig1(quint16)));
//    emit obj.sig1(42);
//    QCOMPARE(spy1.value(0).value(0).toInt(), 42);

    QSignalSpy spy2(&obj, SIGNAL(sig2(qlonglong,qulonglong)));
    emit obj.sig2(42, 43);
    QCOMPARE(spy2.value(0).value(0).toInt(), 42);
    QCOMPARE(spy2.value(0).value(1).toInt(), 43);

//    QSignalSpy spy3(&obj, SIGNAL(sig3(qint64,quint64)));
//    emit obj.sig3(44, 45);
//    QCOMPARE(spy3.value(0).value(0).toInt(), 44);
//    QCOMPARE(spy3.value(0).value(1).toInt(), 45);
}

void tst_QSignalSpy::wait_signalEmitted()
{
    QTimer::singleShot(0, this, SIGNAL(sigFoo()));
    QSignalSpy spy(this, SIGNAL(sigFoo()));
    QVERIFY(spy.wait(1));
}

void tst_QSignalSpy::wait_timeout()
{
    QSignalSpy spy(this, SIGNAL(sigFoo()));
    QVERIFY(!spy.wait(1));
}

void tst_QSignalSpy::wait_signalEmittedLater()
{
    QTimer::singleShot(500, this, SIGNAL(sigFoo()));
    QSignalSpy spy(this, SIGNAL(sigFoo()));
    QVERIFY(spy.wait(1000));
}

void tst_QSignalSpy::wait_signalEmittedTooLate()
{
    QTimer::singleShot(500, this, SIGNAL(sigFoo()));
    QSignalSpy spy(this, SIGNAL(sigFoo()));
    QVERIFY(!spy.wait(200));
    QTest::qWait(400);
    QCOMPARE(spy.count(), 1);
}

void tst_QSignalSpy::wait_signalEmittedMultipleTimes()
{
    QTimer::singleShot(100, this, SIGNAL(sigFoo()));
    QTimer::singleShot(800, this, SIGNAL(sigFoo()));
    QSignalSpy spy(this, SIGNAL(sigFoo()));
    QVERIFY(spy.wait());
    QCOMPARE(spy.count(), 1); // we don't wait for the second signal...
    QVERIFY(spy.wait());
    QCOMPARE(spy.count(), 2);
    QVERIFY(!spy.wait(1));
    QTimer::singleShot(10, this, SIGNAL(sigFoo()));
    QVERIFY(spy.wait());
    QCOMPARE(spy.count(), 3);
}

void tst_QSignalSpy::spyFunctionPointerWithoutArgs()
{
    QtTestObject obj;

    QSignalSpy spy(&obj, &QtTestObject::sig0);
    QCOMPARE(spy.count(), 0);

    emit obj.sig0();
    QCOMPARE(spy.count(), 1);
    emit obj.sig0();
    QCOMPARE(spy.count(), 2);

    QList<QVariant> args = spy.takeFirst();
    QCOMPARE(args.count(), 0);
}

void tst_QSignalSpy::spyFunctionPointerWithBasicArgs()
{
    QtTestObject obj;
    QSignalSpy spy(&obj, &QtTestObject::sig1);

    emit obj.sig1(1, 2);
    QCOMPARE(spy.count(), 1);

    QList<QVariant> args = spy.takeFirst();
    QCOMPARE(args.count(), 2);
    QCOMPARE(args.at(0).toInt(), 1);
    QCOMPARE(args.at(1).toInt(), 2);

    QSignalSpy spyl(&obj, &QtTestObject::sigLong);

    emit obj.sigLong(1l, 2l);
    args = spyl.takeFirst();
    QCOMPARE(args.count(), 2);
    QCOMPARE(qvariant_cast<long>(args.at(0)), 1l);
    QCOMPARE(qvariant_cast<long>(args.at(1)), 2l);
}


void tst_QSignalSpy::spyFunctionPointerWithPointers()
{
    qRegisterMetaType<int *>("int*");

    QtTestObject obj;
    QSignalSpy spy(&obj, &QtTestObject::sig2);

    int i1 = 1;
    int i2 = 2;

    emit obj.sig2(&i1, &i2);
    QCOMPARE(spy.count(), 1);

    QList<QVariant> args = spy.takeFirst();
    QCOMPARE(args.count(), 2);
    QCOMPARE(*static_cast<int * const *>(args.at(0).constData()), &i1);
    QCOMPARE(*static_cast<int * const *>(args.at(1).constData()), &i2);
}

void tst_QSignalSpy::spyFunctionPointerWithBasicQtClasses()
{
    QtTestObject2 obj;

    QSignalSpy spy(&obj, &QtTestObject2::sig);
    emit obj.sig(QString("bubu"));
    QCOMPARE(spy.count(), 1);
    QCOMPARE(spy.at(0).count(), 1);
    QCOMPARE(spy.at(0).at(0).toString(), QString("bubu"));

    QSignalSpy spy2(&obj, &QtTestObject2::sig5);
    QVariant val(45);
    emit obj.sig5(val);
    QCOMPARE(spy2.count(), 1);
    QCOMPARE(spy2.at(0).count(), 1);
    QCOMPARE(spy2.at(0).at(0), val);
    QCOMPARE(qvariant_cast<QVariant>(spy2.at(0).at(0)), val);
}

void tst_QSignalSpy::spyFunctionPointerWithQtClasses()
{
    QtTestObject2 obj;

    QSignalSpy spy(&obj, &QtTestObject2::sig2);
    QDateTime dt = QDateTime::currentDateTime();
    emit obj.sig2(dt);
    QCOMPARE(spy.count(), 1);
    QCOMPARE(spy.at(0).count(), 1);
    QCOMPARE(spy.at(0).at(0).typeName(), "QDateTime");
    QCOMPARE(*static_cast<const QDateTime *>(spy.at(0).at(0).constData()), dt);
    QCOMPARE(spy.at(0).at(0).toDateTime(), dt);

    QSignalSpy spy2(&obj, &QtTestObject2::sig3);
    emit obj.sig3(this);
    QCOMPARE(*static_cast<QObject * const *>(spy2.value(0).value(0).constData()),
            (QObject *)this);
    QCOMPARE(qvariant_cast<QObject *>(spy2.value(0).value(0)), (QObject*)this);

    QSignalSpy spy3(&obj, &QtTestObject2::sig4);
    emit obj.sig4(QChar('A'));
    QCOMPARE(qvariant_cast<QChar>(spy3.value(0).value(0)), QChar('A'));
}

void tst_QSignalSpy::spyFunctionPointerWithQtTypedefs()
{
    QtTestObject3 obj;

    QSignalSpy spy2(&obj, &QtTestObject3::sig2);
    emit obj.sig2(42, 43);
    QCOMPARE(spy2.value(0).value(0).toInt(), 42);
    QCOMPARE(spy2.value(0).value(1).toInt(), 43);
}

void tst_QSignalSpy::waitFunctionPointer_signalEmitted()
{
    QTimer::singleShot(0, this, SIGNAL(sigFoo()));
    QSignalSpy spy(this, &tst_QSignalSpy::sigFoo);
    QVERIFY(spy.wait(1));
}

void tst_QSignalSpy::waitFunctionPointer_timeout()
{
    QSignalSpy spy(this, &tst_QSignalSpy::sigFoo);
    QVERIFY(!spy.wait(1));
}

void tst_QSignalSpy::waitFunctionPointer_signalEmittedLater()
{
    QTimer::singleShot(500, this, SIGNAL(sigFoo()));
    QSignalSpy spy(this, &tst_QSignalSpy::sigFoo);
    QVERIFY(spy.wait(1000));
}

void tst_QSignalSpy::waitFunctionPointer_signalEmittedTooLate()
{
    QTimer::singleShot(500, this, SIGNAL(sigFoo()));
    QSignalSpy spy(this, &tst_QSignalSpy::sigFoo);
    QVERIFY(!spy.wait(200));
    QTest::qWait(400);
    QCOMPARE(spy.count(), 1);
}

void tst_QSignalSpy::waitFunctionPointer_signalEmittedMultipleTimes()
{
    QTimer::singleShot(100, this, SIGNAL(sigFoo()));
    QTimer::singleShot(800, this, SIGNAL(sigFoo()));
    QSignalSpy spy(this, &tst_QSignalSpy::sigFoo);
    QVERIFY(spy.wait());
    QCOMPARE(spy.count(), 1); // we don't wait for the second signal...
    QVERIFY(spy.wait());
    QCOMPARE(spy.count(), 2);
    QVERIFY(!spy.wait(1));
    QTimer::singleShot(10, this, SIGNAL(sigFoo()));
    QVERIFY(spy.wait());
    QCOMPARE(spy.count(), 3);
}

QTEST_MAIN(tst_QSignalSpy)
