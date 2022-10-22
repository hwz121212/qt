#include "tst_qactiongroup.h"



void tst_QActionGroup::enabledPropagation()
{
    QActionGroup testActionGroup( 0 );

    QAction* childAction = new QAction( &testActionGroup );
    QAction* anotherChildAction = new QAction( &testActionGroup );
    QAction* freeAction = new QAction(0);

    QVERIFY( testActionGroup.isEnabled() );
    QVERIFY( childAction->isEnabled() );

    testActionGroup.setEnabled( false );
    QVERIFY( !testActionGroup.isEnabled() );
    QVERIFY( !childAction->isEnabled() );
    QVERIFY( !anotherChildAction->isEnabled() );

    childAction->setEnabled(true);
    QVERIFY( !childAction->isEnabled());

    anotherChildAction->setEnabled( false );

    testActionGroup.setEnabled( true );
    QVERIFY( testActionGroup.isEnabled() );
    QVERIFY( childAction->isEnabled() );
    QVERIFY( !anotherChildAction->isEnabled() );

    testActionGroup.setEnabled( false );
    QAction *lastChildAction = new QAction(&testActionGroup);

    QVERIFY(!lastChildAction->isEnabled());
    testActionGroup.setEnabled( true );
    QVERIFY(lastChildAction->isEnabled());

    freeAction->setEnabled(false);
    testActionGroup.addAction(freeAction);
    QVERIFY(!freeAction->isEnabled());
    delete freeAction;
}

void tst_QActionGroup::visiblePropagation()
{
    QActionGroup testActionGroup( 0 );

    QAction* childAction = new QAction( &testActionGroup );
    QAction* anotherChildAction = new QAction( &testActionGroup );
    QAction* freeAction = new QAction(0);

    QVERIFY( testActionGroup.isVisible() );
    QVERIFY( childAction->isVisible() );

    testActionGroup.setVisible( false );
    QVERIFY( !testActionGroup.isVisible() );
    QVERIFY( !childAction->isVisible() );
    QVERIFY( !anotherChildAction->isVisible() );

    anotherChildAction->setVisible(false);

    testActionGroup.setVisible( true );
    QVERIFY( testActionGroup.isVisible() );
    QVERIFY( childAction->isVisible() );

    QVERIFY( !anotherChildAction->isVisible() );

    testActionGroup.setVisible( false );
    QAction *lastChildAction = new QAction(&testActionGroup);

    QVERIFY(!lastChildAction->isVisible());
    testActionGroup.setVisible( true );
    QVERIFY(lastChildAction->isVisible());

    freeAction->setVisible(false);
    testActionGroup.addAction(freeAction);
    QVERIFY(!freeAction->isVisible());
    delete freeAction;
}

void tst_QActionGroup::exclusive()
{
    QActionGroup group(0);
    group.setExclusive(false);
    QVERIFY( !group.isExclusive() );

    QAction* actOne = new QAction( &group );
    actOne->setCheckable( true );
    QAction* actTwo = new QAction( &group );
    actTwo->setCheckable( true );
    QAction* actThree = new QAction( &group );
    actThree->setCheckable( true );

    group.setExclusive( true );
    QVERIFY( !actOne->isChecked() );
    QVERIFY( !actTwo->isChecked() );
    QVERIFY( !actThree->isChecked() );

    actOne->setChecked( true );
    QVERIFY( actOne->isChecked() );
    QVERIFY( !actTwo->isChecked() );
    QVERIFY( !actThree->isChecked() );

    actTwo->setChecked( true );
    QVERIFY( !actOne->isChecked() );
    QVERIFY( actTwo->isChecked() );
    QVERIFY( !actThree->isChecked() );
}

void tst_QActionGroup::separators()
{
    QMainWindow mw;
    QMenu menu(&mw);
    QActionGroup actGroup(&mw);

    mw.show();

    QAction *action = new QAction(&actGroup);
    action->setText("test one");

    QAction *separator = new QAction(&actGroup);
    separator->setSeparator(true);
    actGroup.addAction(separator);

    QListIterator<QAction*> it(actGroup.actions());
    while (it.hasNext())
        menu.addAction(it.next());

    QCOMPARE((int)menu.actions().size(), 2);

    it = QListIterator<QAction*>(actGroup.actions());
    while (it.hasNext())
        menu.removeAction(it.next());

    QCOMPARE((int)menu.actions().size(), 0);

    action = new QAction(&actGroup);
    action->setText("test two");

    it = QListIterator<QAction*>(actGroup.actions());
    while (it.hasNext())
        menu.addAction(it.next());

    QCOMPARE((int)menu.actions().size(), 3);
}

void tst_QActionGroup::testActionInTwoQActionGroup()
{
    QAction action1("Action 1", this);

    QActionGroup group1(this);
    QActionGroup group2(this);

    group1.addAction(&action1);
    group2.addAction(&action1);

    QCOMPARE(action1.actionGroup(), &group2);
    QCOMPARE(group2.actions().first(), &action1);
    QCOMPARE(group1.actions().isEmpty(), true);
}

void tst_QActionGroup::unCheckCurrentAction()
{
    QActionGroup group(0);
    QAction action1(&group) ,action2(&group);
    action1.setCheckable(true);
    action2.setCheckable(true);
    QVERIFY(!action1.isChecked());
    QVERIFY(!action2.isChecked());
    action1.setChecked(true);
    QVERIFY(action1.isChecked());
    QVERIFY(!action2.isChecked());
    QAction *current = group.checkedAction();
    QCOMPARE(current, &action1);
    current->setChecked(false);
    QVERIFY(!action1.isChecked());
    QVERIFY(!action2.isChecked());
    QVERIFY(!group.checkedAction());
}


QTEST_MAIN(tst_QActionGroup)

