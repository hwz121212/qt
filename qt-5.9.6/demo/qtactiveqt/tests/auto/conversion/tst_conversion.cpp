#include "tst_conversion.h"


Q_DECLARE_METATYPE(Mode)

void tst_Conversion::conversion_data()
{
    QTest::addColumn<QVariant>("value");
    QTest::addColumn<uint>("expectedType");
    QTest::addColumn<QByteArray>("typeName");
    QTest::addColumn<Mode>("mode");

    QVariant qvar;
    QByteArray typeName;

    qvar = QVariant('a');
    typeName = QByteArrayLiteral("char");
    QTest::newRow("char")
        << qvar << uint(VT_I1) << typeName << ByValue;
    QTest::newRow("char-ref")
        << qvar << uint(VT_I1 | VT_BYREF) << typeName << ByReference;
    QTest::newRow("char-out")
        << qvar << uint(VT_I1 | VT_BYREF) << typeName << OutParameter;

    qvar = QVariant(uchar(197));
    typeName = QByteArrayLiteral("uchar");
    QTest::newRow("uchar")
        << qvar << uint(VT_UI1) << typeName << ByValue;
    QTest::newRow("uchar-ref")
        << qvar << uint(VT_UI1 | VT_BYREF) << typeName << ByReference;
    QTest::newRow("uchar-out")
        << qvar << uint(VT_UI1 | VT_BYREF) << typeName << OutParameter;

    qvar = QVariant(ushort(42));
    typeName = QByteArrayLiteral("ushort");
    QTest::newRow("ushort")
        << qvar << uint(VT_UI2) << typeName << ByValue;
    QTest::newRow("ushort-ref")
        << qvar << uint(VT_UI2 | VT_BYREF) << typeName << ByReference;
    QTest::newRow("ushort-out")
        << qvar << uint(VT_UI2 | VT_BYREF) << typeName << OutParameter;

    qvar = QVariant(short(42));
    typeName = QByteArrayLiteral("short");
    QTest::newRow("short")
        << qvar << uint(VT_I2) << typeName << ByValue;
    QTest::newRow("short-ref")
        << qvar << uint(VT_I2 | VT_BYREF) << typeName << ByReference;
    QTest::newRow("short-out")
        << qvar << uint(VT_I2 | VT_BYREF) << typeName << OutParameter;

    qvar = QVariant(42);
    typeName.clear();
    QTest::newRow("int")
        << qvar << uint(VT_I4) << typeName << ByValue;
    QTest::newRow("int-ref")
        << qvar << uint(VT_I4 | VT_BYREF) << typeName << ByReference;
    QTest::newRow("int-out")
        << qvar << uint(VT_I4 | VT_BYREF) << typeName << OutParameter;

    qvar = QVariant(42u);
    typeName.clear();
    QTest::newRow("uint")
        << qvar << uint(VT_UI4) << typeName << ByValue;
    QTest::newRow("uint-ref")
        << qvar << uint(VT_UI4 | VT_BYREF) << typeName << ByReference;
    QTest::newRow("uint-out")
        << qvar << uint(VT_UI4 | VT_BYREF) << typeName << OutParameter;

    qvar = QVariant(qint64(42));
    typeName.clear();
    QTest::newRow("int64")
        << qvar << uint(VT_I8) << typeName << ByValue;
    QTest::newRow("int64-ref")
        << qvar << uint(VT_I8 | VT_BYREF) << typeName << ByReference;
    QTest::newRow("int64-out")
        << qvar << uint(VT_I8 | VT_BYREF) << typeName << OutParameter;

    qvar = QVariant(quint64(42u));
    typeName.clear();
    QTest::newRow("uint64")
        << qvar << uint(VT_UI8) << typeName << ByValue;
    QTest::newRow("uint64-ref")
        << qvar << uint(VT_UI8 | VT_BYREF) << typeName << ByReference;
    QTest::newRow("uint64-out")
        << qvar << uint(VT_UI8 | VT_BYREF) << typeName << OutParameter;

    qvar = QVariant(3.141f);
    typeName = QByteArrayLiteral("float");
    QTest::newRow("float")
        << qvar << uint(VT_R4) << typeName << ByValue;
    QTest::newRow("float-ref")
        << qvar << uint(VT_R4 | VT_BYREF) << typeName << ByReference;
    QTest::newRow("float-out")
        << qvar << uint(VT_R4 | VT_BYREF) << typeName << OutParameter;

    qvar = QVariant(3.141);
    typeName.clear();
    QTest::newRow("double")
        << qvar << uint(VT_R8) << typeName << ByValue;
    QTest::newRow("double-ref")
        << qvar << uint(VT_R8 | VT_BYREF) << typeName << ByReference;
    QTest::newRow("double-out")
        << qvar << uint(VT_R8 | VT_BYREF) << typeName << OutParameter;

    qvar = QDateTime(QDate(1968, 3, 9), QTime(10, 0));
    typeName.clear();
    QTest::newRow("datetime")
        << qvar << uint(VT_DATE) << typeName << ByValue;
    QTest::newRow("datetime-ref")
        << qvar << uint(VT_DATE | VT_BYREF) << typeName << ByReference;
    QTest::newRow("datetime-out")
        << qvar << uint(VT_DATE | VT_BYREF) << typeName << OutParameter;
}

void tst_Conversion::conversion()
{
    QFETCH(QVariant, value);
    QFETCH(uint, expectedType);
    QFETCH(QByteArray, typeName);
    QFETCH(Mode, mode);

    VARIANT variant;
    VariantInit(&variant);
    if (mode == OutParameter) {
        variant.vt = expectedType | VT_BYREF;
        variant.pullVal = new ULONGLONG(0);
    }

    QVERIFY(QVariantToVARIANT_container(value, variant, typeName, mode != ByValue));
    QCOMPARE(uint(variant.vt), expectedType);
    const QVariant converted = VARIANTToQVariant_container(variant, QByteArray());
    QCOMPARE(converted, value);

    if (mode == OutParameter)
        delete variant.pullVal;
}

QTEST_MAIN(tst_Conversion)

