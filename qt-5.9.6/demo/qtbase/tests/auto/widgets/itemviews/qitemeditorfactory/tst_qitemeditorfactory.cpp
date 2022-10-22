#include "tst_qitemeditorfactory.h"



void tst_QItemEditorFactory::createEditor()
{
    const QItemEditorFactory *factory = QItemEditorFactory::defaultFactory();

    QWidget parent;

    QWidget *w = factory->createEditor(QVariant::String, &parent);
    QCOMPARE(w->metaObject()->className(), "QExpandingLineEdit");
}

//we make it inherit from QObject so that we can use QPointer
class MyEditor : public QObject, public QStandardItemEditorCreator<QDoubleSpinBox>
{
};

void tst_QItemEditorFactory::createCustomEditor()
{
    QPointer<MyEditor> creator = new MyEditor;
    QPointer<MyEditor> creator2 = new MyEditor;

    {
        QItemEditorFactory editorFactory;

        editorFactory.registerEditor(QVariant::Rect, creator);
        editorFactory.registerEditor(QVariant::RectF, creator);

        //creator should not be deleted as a result of calling the next line
        editorFactory.registerEditor(QVariant::Rect, creator2);
        QVERIFY(creator);

        //this should erase creator2
        editorFactory.registerEditor(QVariant::Rect, creator);
        QVERIFY(creator2.isNull());


        QWidget parent;

        QWidget *w = editorFactory.createEditor(QVariant::Rect, &parent);
        QCOMPARE(w->metaObject()->className(), "QDoubleSpinBox");
        QCOMPARE(w->metaObject()->userProperty().type(), QVariant::Double);
    }

    //editorFactory has been deleted, so should be creator
    //because editorFActory has the ownership
    QVERIFY(creator.isNull());
    QVERIFY(creator2.isNull());

    delete creator;
}

void tst_QItemEditorFactory::uintValues()
{
    QItemEditorFactory editorFactory;

    QWidget parent;

    {
        QWidget *editor = editorFactory.createEditor(QMetaType::UInt, &parent);
        QCOMPARE(editor->metaObject()->className(), "QUIntSpinBox");
        QCOMPARE(editor->metaObject()->userProperty().type(), QVariant::UInt);
    }
    {
        QWidget *editor = editorFactory.createEditor(QMetaType::Int, &parent);
        QCOMPARE(editor->metaObject()->className(), "QSpinBox");
        QCOMPARE(editor->metaObject()->userProperty().type(), QVariant::Int);
    }
}

QTEST_MAIN(tst_QItemEditorFactory)


