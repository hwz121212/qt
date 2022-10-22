#include "tst_qwidgetmetatype.h"



Q_STATIC_ASSERT(( QMetaTypeId2<QSizePolicy>::IsBuiltIn));
Q_STATIC_ASSERT((!QMetaTypeId2<QWidget*>::IsBuiltIn));
Q_STATIC_ASSERT((!QMetaTypeId2<QList<QSizePolicy> >::IsBuiltIn));
Q_STATIC_ASSERT((!QMetaTypeId2<QMap<QString,QSizePolicy> >::IsBuiltIn));


void tst_QWidgetMetaType::metaObject()
{
    QCOMPARE(QMetaType::metaObjectForType(qMetaTypeId<QWidget*>()), &QWidget::staticMetaObject);
    QCOMPARE(QMetaType::metaObjectForType(qMetaTypeId<QLabel*>()), &QLabel::staticMetaObject);
    QCOMPARE(QMetaType::metaObjectForType(qMetaTypeId<CustomWidget*>()), &CustomWidget::staticMetaObject);
    QCOMPARE(QMetaType::metaObjectForType(qMetaTypeId<QSizePolicy>()), &QSizePolicy::staticMetaObject);
}

QTEST_MAIN(tst_QWidgetMetaType)

