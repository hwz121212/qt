#include <QtTest/QtTest>
#include <QtGui/QtGui>

#include "tst_qtga.h"


void tst_qtga::initTestCase()
{
    if (!QImageReader::supportedImageFormats().contains("tga"))
        QSKIP("The image format handler is not installed.");
}

void tst_qtga::readImage_data()
{
    QTest::addColumn<QString>("fileName");
    QTest::addColumn<QSize>("size");

    QTest::newRow("test-flag") << QString("test-flag.tga") << QSize(400, 400);
}

void tst_qtga::readImage()
{
    QFETCH(QString, fileName);
    QFETCH(QSize, size);

    QString path = QString(":/tga/") + fileName;
    QImageReader reader(path);
    QVERIFY(reader.canRead());
    QImage image = reader.read();
    QVERIFY(!image.isNull());
    QCOMPARE(image.size(), size);
}

QTEST_MAIN(tst_qtga)
//#include "moc_tst_qtga.cpp"
