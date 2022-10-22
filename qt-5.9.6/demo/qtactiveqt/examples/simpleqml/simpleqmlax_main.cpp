#include <QAxBindable>
#include <QAxFactory>
#include <QMainWindow>
#include <QQuickWidget>
#include <QQmlContext>

#include "simpleqmlax_main.h"



QAXFACTORY_BEGIN(
    "{E544E321-EF8B-4CD4-91F6-DB55A59DBADB}", // type library ID
    "{E37E3131-DEA2-44EB-97A2-01CDD09A5A4D}") // application ID
    QAXCLASS(QSimpleQmlAx)
QAXFACTORY_END()
