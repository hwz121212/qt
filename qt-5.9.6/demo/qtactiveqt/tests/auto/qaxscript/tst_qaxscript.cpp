#include "tst_qaxscript.h"


void tst_QAxScript::scriptReturnValue()
{
    QAxScriptManager scriptManager;
    const char scriptCode[] =
        "function foo() {\n"
        "    return 'test';\n"
        "}\n"; // QTBUG-42289, fails when DISPATCH_PROPERTYGET is used.
    QAxScript *script = scriptManager.load(QLatin1String(scriptCode),
                                           QStringLiteral("Test"),
                                           QStringLiteral("JScript"));
    QVERIFY2(script, "Unable to load script (CoInitialize() called?)");
    const QVariant result = script->call("foo()");
    QCOMPARE(result, QVariant(QStringLiteral("test")));
}

QTEST_MAIN(tst_QAxScript)

