#include <QtTest/QtTest>
#include <QtGui/QtGui>

#include "tst_qjp2.h"


void tst_qjp2::initTestCase()
{
    if (!QImageReader::supportedImageFormats().contains("jp2"))
        QSKIP("The image format handler is not installed.");
}

void tst_qjp2::readImage_data()
{
    QTest::addColumn<QString>("fileName");
    QTest::addColumn<QString>("referenceFileName");
    QTest::addColumn<QSize>("size");

    QTest::newRow("logo") << QString("logo.jp2") << QString("logo.bmp") << QSize(498, 80);
}

void tst_qjp2::readImage()
{
    QFETCH(QString, fileName);
    QFETCH(QString, referenceFileName);
    QFETCH(QSize, size);

    QString path = QString(":/jp2/") + fileName;
    QImageReader reader(path);
    QVERIFY(reader.canRead());
    QImage image = reader.read();
    QVERIFY(!image.isNull());
    QCOMPARE(image.size(), size);

    path = QString(":jp2/") + referenceFileName;
    QImageReader referenceReader(path);
    QVERIFY(referenceReader.canRead());
    QImage referenceImage = referenceReader.read();
    QVERIFY(!referenceImage.isNull());
    QCOMPARE(referenceImage.size(), size);
}

//#include "moc_tst_qjp2.cpp"
QTEST_MAIN(tst_qjp2)

