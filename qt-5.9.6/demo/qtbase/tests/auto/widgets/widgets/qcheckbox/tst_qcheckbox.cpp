#include "tst_qcheckbox.h"


void tst_QCheckBox::initTestCase()
{
    // Create the test class
    testWidget = new QCheckBox(0);
    testWidget->setObjectName("testObject");
    testWidget->resize( 200, 200 );
    testWidget->show();
}

void tst_QCheckBox::cleanupTestCase()
{
    delete testWidget;
    testWidget = 0;
}

void tst_QCheckBox::init()
{
    testWidget->setTristate( false );
    testWidget->setChecked( false );
    testWidget->setAutoRepeat( false );
}

void tst_QCheckBox::cleanup()
{
    disconnect(testWidget, SIGNAL(pressed()), this, SLOT(onPressed()));
    disconnect(testWidget, SIGNAL(released()), this, SLOT(onReleased()));
    disconnect(testWidget, SIGNAL(clicked()), this, SLOT(onClicked()));
    disconnect(testWidget, SIGNAL(toggled(bool)), this, SLOT(onToggled(bool)));
}

void tst_QCheckBox::onClicked()
{
    click_count++;
}

void tst_QCheckBox::onPressed()
{
    press_count++;
}

void tst_QCheckBox::onReleased()
{
    release_count++;
}

void tst_QCheckBox::onToggled( bool /*on*/ )
{
    toggle_count++;
}

// ***************************************************

void tst_QCheckBox::setChecked()
{
    testWidget->setChecked( true );
    QVERIFY( testWidget->isChecked() );
    QVERIFY( testWidget->isChecked() );
    QVERIFY( testWidget->checkState() == Qt::Checked );

    testWidget->setChecked( false );
    QVERIFY( !testWidget->isChecked() );
    QVERIFY( !testWidget->isChecked() );
    QVERIFY( testWidget->checkState() == Qt::Unchecked );

    testWidget->setChecked( false );
    QTest::keyClick( testWidget, ' ' );
    QVERIFY( testWidget->isChecked() );

    QTest::keyClick( testWidget, ' ' );
    QVERIFY( !testWidget->isChecked() );
}

void tst_QCheckBox::setTriState()
{
    testWidget->setTristate( true );
    QVERIFY( testWidget->isTristate() );
    QVERIFY( testWidget->checkState() == Qt::Unchecked );

    testWidget->setCheckState(Qt::PartiallyChecked);
    QVERIFY( testWidget->checkState() == Qt::PartiallyChecked );

    testWidget->setChecked( true );
    QVERIFY( testWidget->isChecked() );
    QVERIFY( testWidget->checkState() == Qt::Checked );

    testWidget->setChecked( false );
    QVERIFY( !testWidget->isChecked() );
    QVERIFY( testWidget->checkState() == Qt::Unchecked );

    testWidget->setCheckState(Qt::PartiallyChecked);
    QVERIFY( testWidget->checkState() == Qt::PartiallyChecked );

    testWidget->setTristate( false );
    QVERIFY( !testWidget->isTristate() );

    testWidget->setCheckState(Qt::PartiallyChecked);
    QVERIFY( testWidget->checkState() == Qt::PartiallyChecked );

    testWidget->setChecked( true );
    QVERIFY( testWidget->checkState() == Qt::Checked );

    testWidget->setChecked( false );
    QVERIFY( testWidget->checkState() == Qt::Unchecked );
}

void tst_QCheckBox::setText_data()
{
    QTest::addColumn<QString>("s1");

    QTest::newRow( "data0" ) << QString("This is a text");
    QTest::newRow( "data1" ) << QString("A");
    QTest::newRow( "data2" ) << QString("ABCDEFG ");
    QTest::newRow( "data3" ) << QString("Text\nwith a cr-lf");
    QTest::newRow( "data4" ) << QString("");
}

void tst_QCheckBox::setText()
{
    QFETCH( QString, s1 );
    testWidget->setText( s1 );
    QCOMPARE( testWidget->text(), s1 );
}

void tst_QCheckBox::setDown()
{
    testWidget->setDown( true );
    QVERIFY( testWidget->isDown() );

    testWidget->setDown( false );
    QVERIFY( !testWidget->isDown() );
}

void tst_QCheckBox::setAutoRepeat()
{
    // setAutoRepeat has no effect on toggle buttons
    QVERIFY( testWidget->isCheckable() );
}

void tst_QCheckBox::toggle()
{
    bool cur_state;
    cur_state = testWidget->isChecked();
    testWidget->toggle();
    QVERIFY( cur_state != testWidget->isChecked() );

    cur_state = testWidget->isChecked();
    testWidget->toggle();
    QVERIFY( cur_state != testWidget->isChecked() );

    cur_state = testWidget->isChecked();
    testWidget->toggle();
    QVERIFY( cur_state != testWidget->isChecked() );
}

void tst_QCheckBox::pressed()
{
    connect(testWidget, SIGNAL(pressed()), this, SLOT(onPressed()));
    connect(testWidget, SIGNAL(released()), this, SLOT(onReleased()));
    press_count = 0;
    release_count = 0;
    testWidget->setDown(false);
    QVERIFY( !testWidget->isChecked() );

    QTest::keyPress( testWidget, Qt::Key_Space );
    QTest::qWait(100);
    QVERIFY( press_count == 1 );
    QVERIFY( release_count == 0 );
    QVERIFY( !testWidget->isChecked() );

    QTest::keyRelease( testWidget, Qt::Key_Space );
    QTest::qWait(100);
    QVERIFY( press_count == 1 );
    QVERIFY( release_count == 1 );
    QVERIFY( testWidget->isChecked() );
}

void tst_QCheckBox::toggled()
{
    connect(testWidget, SIGNAL(toggled(bool)), this, SLOT(onToggled(bool)));
    click_count = 0;
    toggle_count = 0;
    testWidget->toggle();
    QCOMPARE( toggle_count, (uint)1 );

    testWidget->toggle();
    QCOMPARE( toggle_count, (uint)2 );

    testWidget->toggle();
    QCOMPARE( toggle_count, (uint)3 );

    QCOMPARE( click_count, (uint)0 );
}

void tst_QCheckBox::onStateChanged( int state )
{
    cur_state = state;
}

void tst_QCheckBox::stateChanged()
{
    QSignalSpy stateChangedSpy(testWidget, SIGNAL(stateChanged(int)));
    connect(testWidget, SIGNAL(stateChanged(int)), this, SLOT(onStateChanged(int)));
    cur_state = -1;
    testWidget->setChecked( true );
    qApp->processEvents();
    QCOMPARE( cur_state, (int)2 );

    cur_state = -1;
    testWidget->setChecked( false );
    qApp->processEvents();
    QCOMPARE( cur_state, (int)0 );

    cur_state = -1;
    testWidget->setCheckState(Qt::PartiallyChecked);
    qApp->processEvents();
    QCOMPARE( cur_state, (int)1 );

    QCOMPARE(stateChangedSpy.count(), 3);
    testWidget->setCheckState(Qt::PartiallyChecked);
    qApp->processEvents();
    QCOMPARE(stateChangedSpy.count(), 3);
}

void tst_QCheckBox::isToggleButton()
{
    QVERIFY( testWidget->isCheckable() );
}

void tst_QCheckBox::foregroundRole()
{
    QCOMPARE(testWidget->foregroundRole(), QPalette::WindowText);
}

void tst_QCheckBox::minimumSizeHint()
{
    QCheckBox box(tr("CheckBox's sizeHint is the same as it's minimumSizeHint"));
    QCOMPARE(box.sizeHint(), box.minimumSizeHint());
}

QTEST_MAIN(tst_QCheckBox)

