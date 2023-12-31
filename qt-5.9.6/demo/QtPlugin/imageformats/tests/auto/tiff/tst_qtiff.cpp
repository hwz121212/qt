#include <QtTest/QtTest>
#include <QtGui/QtGui>

#include "tst_qtiff.h"


Q_DECLARE_METATYPE(QImage::Format)
Q_DECLARE_METATYPE(QImageWriter::ImageWriterError)
Q_DECLARE_METATYPE(QImageIOHandler::Transformation)
typedef QList<int> QIntList;
Q_DECLARE_METATYPE(QIntList)


void tst_qtiff::initTestCase()
{
    if (!QImageReader::supportedImageFormats().contains("tiff"))
        QSKIP("The image format handler is not installed.");

    prefix = ":/tiff/";
}

void tst_qtiff::formatHandler()
{
    QString testFormat = "TIFF";
    QString testFile = prefix + "image.tif";
    QList<QByteArray> formats = QImageReader::supportedImageFormats();

    bool formatSupported = false;
    for (QList<QByteArray>::Iterator it = formats.begin(); it != formats.end(); ++it) {
        if (*it == testFormat.toLower()) {
            formatSupported = true;
            break;
        }
    }
    QVERIFY(formatSupported);
    QCOMPARE(QImageReader::imageFormat(testFile), testFormat.toLatin1().toLower());
}

void tst_qtiff::readImage_data()
{
    QTest::addColumn<QString>("fileName");
    QTest::addColumn<QSize>("size");

    QTest::newRow("grayscale-ref") << QString("grayscale-ref.tif") << QSize(320, 200);
    QTest::newRow("grayscale") << QString("grayscale.tif") << QSize(320, 200);
    QTest::newRow("image_100dpi") << QString("image_100dpi.tif") << QSize(22, 22);
    QTest::newRow("image") << QString("image.tif") << QSize(22, 22);
    QTest::newRow("indexed_orientation_1") << QString("indexed_orientation_1.tiff") << QSize(64, 64);
    QTest::newRow("indexed_orientation_2") << QString("indexed_orientation_2.tiff") << QSize(64, 64);
    QTest::newRow("indexed_orientation_3") << QString("indexed_orientation_3.tiff") << QSize(64, 64);
    QTest::newRow("indexed_orientation_4") << QString("indexed_orientation_4.tiff") << QSize(64, 64);
    QTest::newRow("indexed_orientation_5") << QString("indexed_orientation_5.tiff") << QSize(64, 64);
    QTest::newRow("indexed_orientation_6") << QString("indexed_orientation_6.tiff") << QSize(64, 64);
    QTest::newRow("indexed_orientation_7") << QString("indexed_orientation_7.tiff") << QSize(64, 64);
    QTest::newRow("indexed_orientation_8") << QString("indexed_orientation_8.tiff") << QSize(64, 64);
    QTest::newRow("mono_orientation_1") << QString("mono_orientation_1.tiff") << QSize(64, 64);
    QTest::newRow("mono_orientation_2") << QString("mono_orientation_2.tiff") << QSize(64, 64);
    QTest::newRow("mono_orientation_3") << QString("mono_orientation_3.tiff") << QSize(64, 64);
    QTest::newRow("mono_orientation_4") << QString("mono_orientation_4.tiff") << QSize(64, 64);
    QTest::newRow("mono_orientation_5") << QString("mono_orientation_5.tiff") << QSize(64, 64);
    QTest::newRow("mono_orientation_6") << QString("mono_orientation_6.tiff") << QSize(64, 64);
    QTest::newRow("mono_orientation_7") << QString("mono_orientation_7.tiff") << QSize(64, 64);
    QTest::newRow("mono_orientation_8") << QString("mono_orientation_8.tiff") << QSize(64, 64);
    QTest::newRow("original_indexed") << QString("original_indexed.tiff") << QSize(64, 64);
    QTest::newRow("original_grayscale") << QString("original_grayscale.tiff") << QSize(64, 64);
    QTest::newRow("original_mono") << QString("original_mono.tiff") << QSize(64, 64);
    QTest::newRow("original_rgb") << QString("original_rgb.tiff") << QSize(64, 64);
    QTest::newRow("rgba_adobedeflate_littleendian") << QString("rgba_adobedeflate_littleendian.tif") << QSize(200, 200);
    QTest::newRow("rgba_lzw_littleendian") << QString("rgba_lzw_littleendian.tif") << QSize(200, 200);
    QTest::newRow("rgba_nocompression_bigendian") << QString("rgba_nocompression_bigendian.tif") << QSize(200, 200);
    QTest::newRow("rgba_nocompression_littleendian") << QString("rgba_nocompression_littleendian.tif") << QSize(200, 200);
    QTest::newRow("rgba_packbits_littleendian") << QString("rgba_packbits_littleendian.tif") << QSize(200, 200);
    QTest::newRow("rgba_zipdeflate_littleendian") << QString("rgba_zipdeflate_littleendian.tif") << QSize(200, 200);
    QTest::newRow("rgb_orientation_1") << QString("rgb_orientation_1.tiff") << QSize(64, 64);
    QTest::newRow("rgb_orientation_2") << QString("rgb_orientation_2.tiff") << QSize(64, 64);
    QTest::newRow("rgb_orientation_3") << QString("rgb_orientation_3.tiff") << QSize(64, 64);
    QTest::newRow("rgb_orientation_4") << QString("rgb_orientation_4.tiff") << QSize(64, 64);
    QTest::newRow("rgb_orientation_5") << QString("rgb_orientation_5.tiff") << QSize(64, 64);
    QTest::newRow("rgb_orientation_6") << QString("rgb_orientation_6.tiff") << QSize(64, 64);
    QTest::newRow("rgb_orientation_7") << QString("rgb_orientation_7.tiff") << QSize(64, 64);
    QTest::newRow("rgb_orientation_8") << QString("rgb_orientation_8.tiff") << QSize(64, 64);
    QTest::newRow("teapot") << QString("teapot.tiff") << QSize(256, 256);
    QTest::newRow("oddsize_grayscale") << QString("oddsize_grayscale.tiff") << QSize(59, 71);
    QTest::newRow("oddsize_mono") << QString("oddsize_mono.tiff") << QSize(59, 71);
    QTest::newRow("tiled_rgb") << QString("tiled_rgb.tiff") << QSize(64, 64);
    QTest::newRow("tiled_indexed") << QString("tiled_indexed.tiff") << QSize(64, 64);
    QTest::newRow("tiled_grayscale") << QString("tiled_grayscale.tiff") << QSize(64, 64);
    QTest::newRow("tiled_mono") << QString("tiled_mono.tiff") << QSize(64, 64);
    QTest::newRow("tiled_oddsize_grayscale") << QString("tiled_oddsize_grayscale.tiff") << QSize(59, 71);
    QTest::newRow("tiled_oddsize_mono") << QString("tiled_oddsize_mono.tiff") << QSize(59, 71);
}

void tst_qtiff::readImage()
{
    QFETCH(QString, fileName);
    QFETCH(QSize, size);

    QString path = prefix + fileName;
    QImageReader reader(path);
    QVERIFY(reader.canRead());
    QImage image = reader.read();
    QVERIFY(!image.isNull());
    QCOMPARE(image.size(), size);
}

void tst_qtiff::readCorruptImage_data()
{
    QTest::addColumn<QString>("fileName");
    QTest::addColumn<QString>("message");

    QTest::newRow("corrupt tiff") << QString("corrupt-data.tif") << QString();
}

void tst_qtiff::readCorruptImage()
{
    QFETCH(QString, fileName);
    QFETCH(QString, message);

    QString path = prefix + fileName;
    QImageReader reader(path);
    if (!message.isEmpty())
        QTest::ignoreMessage(QtWarningMsg, message.toLatin1());
    QVERIFY(reader.canRead());
    QImage image = reader.read();
    QVERIFY(image.isNull());
}

void tst_qtiff::tiffCompression_data()
{
    QTest::addColumn<QString>("uncompressedFile");
    QTest::addColumn<QString>("compressedFile");

    QTest::newRow("TIFF: adobedeflate") << "rgba_nocompression_littleendian.tif"
                                        << "rgba_adobedeflate_littleendian.tif";
    QTest::newRow("TIFF: lzw") << "rgba_nocompression_littleendian.tif"
                               << "rgba_lzw_littleendian.tif";
    QTest::newRow("TIFF: packbits") << "rgba_nocompression_littleendian.tif"
                                    << "rgba_packbits_littleendian.tif";
    QTest::newRow("TIFF: zipdeflate") << "rgba_nocompression_littleendian.tif"
                                      << "rgba_zipdeflate_littleendian.tif";
}

void tst_qtiff::tiffCompression()
{
    QFETCH(QString, uncompressedFile);
    QFETCH(QString, compressedFile);

    QImage uncompressedImage(prefix + uncompressedFile);
    QImage compressedImage(prefix + compressedFile);

    QCOMPARE(uncompressedImage, compressedImage);
}

void tst_qtiff::tiffEndianness()
{
    QImage littleEndian(prefix + "rgba_nocompression_littleendian.tif");
    QImage bigEndian(prefix + "rgba_nocompression_bigendian.tif");

    QCOMPARE(littleEndian, bigEndian);
}

void tst_qtiff::tiffOrientation_data()
{
    QTest::addColumn<QString>("expected");
    QTest::addColumn<QString>("oriented");
    QTest::newRow("Indexed TIFF, orientation1") << "tiff_oriented/original_indexed.tiff" << "tiff_oriented/indexed_orientation_1.tiff";
    QTest::newRow("Indexed TIFF, orientation2") << "tiff_oriented/original_indexed.tiff" << "tiff_oriented/indexed_orientation_2.tiff";
    QTest::newRow("Indexed TIFF, orientation3") << "tiff_oriented/original_indexed.tiff" << "tiff_oriented/indexed_orientation_3.tiff";
    QTest::newRow("Indexed TIFF, orientation4") << "tiff_oriented/original_indexed.tiff" << "tiff_oriented/indexed_orientation_4.tiff";
    QTest::newRow("Indexed TIFF, orientation5") << "tiff_oriented/original_indexed.tiff" << "tiff_oriented/indexed_orientation_5.tiff";
    QTest::newRow("Indexed TIFF, orientation6") << "tiff_oriented/original_indexed.tiff" << "tiff_oriented/indexed_orientation_6.tiff";
    QTest::newRow("Indexed TIFF, orientation7") << "tiff_oriented/original_indexed.tiff" << "tiff_oriented/indexed_orientation_7.tiff";
    QTest::newRow("Indexed TIFF, orientation8") << "tiff_oriented/original_indexed.tiff" << "tiff_oriented/indexed_orientation_8.tiff";

    QTest::newRow("Mono TIFF, orientation1") << "tiff_oriented/original_mono.tiff" << "tiff_oriented/mono_orientation_1.tiff";
    QTest::newRow("Mono TIFF, orientation2") << "tiff_oriented/original_mono.tiff" << "tiff_oriented/mono_orientation_2.tiff";
    QTest::newRow("Mono TIFF, orientation3") << "tiff_oriented/original_mono.tiff" << "tiff_oriented/mono_orientation_3.tiff";
    QTest::newRow("Mono TIFF, orientation4") << "tiff_oriented/original_mono.tiff" << "tiff_oriented/mono_orientation_4.tiff";
    QTest::newRow("Mono TIFF, orientation5") << "tiff_oriented/original_mono.tiff" << "tiff_oriented/mono_orientation_5.tiff";
    QTest::newRow("Mono TIFF, orientation6") << "tiff_oriented/original_mono.tiff" << "tiff_oriented/mono_orientation_6.tiff";
    QTest::newRow("Mono TIFF, orientation7") << "tiff_oriented/original_mono.tiff" << "tiff_oriented/mono_orientation_7.tiff";
    QTest::newRow("Mono TIFF, orientation8") << "tiff_oriented/original_mono.tiff" << "tiff_oriented/mono_orientation_8.tiff";

    QTest::newRow("RGB TIFF, orientation1") << "tiff_oriented/original_rgb.tiff" << "tiff_oriented/rgb_orientation_1.tiff";
    QTest::newRow("RGB TIFF, orientation2") << "tiff_oriented/original_rgb.tiff" << "tiff_oriented/rgb_orientation_2.tiff";
    QTest::newRow("RGB TIFF, orientation3") << "tiff_oriented/original_rgb.tiff" << "tiff_oriented/rgb_orientation_3.tiff";
    QTest::newRow("RGB TIFF, orientation4") << "tiff_oriented/original_rgb.tiff" << "tiff_oriented/rgb_orientation_4.tiff";
    QTest::newRow("RGB TIFF, orientation5") << "tiff_oriented/original_rgb.tiff" << "tiff_oriented/rgb_orientation_5.tiff";
    QTest::newRow("RGB TIFF, orientation6") << "tiff_oriented/original_rgb.tiff" << "tiff_oriented/rgb_orientation_6.tiff";
    QTest::newRow("RGB TIFF, orientation7") << "tiff_oriented/original_rgb.tiff" << "tiff_oriented/rgb_orientation_7.tiff";
    QTest::newRow("RGB TIFF, orientation8") << "tiff_oriented/original_rgb.tiff" << "tiff_oriented/rgb_orientation_8.tiff";
}

void tst_qtiff::tiffOrientation()
{
    QFETCH(QString, expected);
    QFETCH(QString, oriented);

    QImage expectedImage(prefix + expected);
    QImage orientedImage(prefix + oriented);
    QCOMPARE(expectedImage, orientedImage);
}

void tst_qtiff::tiffGrayscale()
{
    QImage actualImage(prefix + "grayscale.tif");
    QImage expectedImage(prefix + "grayscale-ref.tif");

    QCOMPARE(expectedImage, actualImage.convertToFormat(expectedImage.format()));
}

void tst_qtiff::dotsPerMeter_data()
{
    QTest::addColumn<QString>("fileName");
    QTest::addColumn<int>("expectedDotsPerMeterX");
    QTest::addColumn<int>("expectedDotsPerMeterY");
    QTest::newRow("TIFF: 72 dpi") << ("rgba_nocompression_littleendian.tif") << qRound(72 * (100 / 2.54)) << qRound(72 * (100 / 2.54));
    QTest::newRow("TIFF: 100 dpi") << ("image_100dpi.tif") << qRound(100 * (100 / 2.54)) << qRound(100 * (100 / 2.54));
}

void tst_qtiff::dotsPerMeter()
{
    QFETCH(QString, fileName);
    QFETCH(int, expectedDotsPerMeterX);
    QFETCH(int, expectedDotsPerMeterY);

    QImage image(prefix + fileName);

    QCOMPARE(image.dotsPerMeterX(), expectedDotsPerMeterX);
    QCOMPARE(image.dotsPerMeterY(), expectedDotsPerMeterY);
}

void tst_qtiff::physicalDpi_data()
{
    QTest::addColumn<QString>("fileName");
    QTest::addColumn<int>("expectedPhysicalDpiX");
    QTest::addColumn<int>("expectedPhysicalDpiY");
    QTest::newRow("TIFF: 72 dpi") << "rgba_nocompression_littleendian.tif" << 72 << 72;
    QTest::newRow("TIFF: 100 dpi") << "image_100dpi.tif" << 100 << 100;
}

void tst_qtiff::physicalDpi()
{
    QFETCH(QString, fileName);
    QFETCH(int, expectedPhysicalDpiX);
    QFETCH(int, expectedPhysicalDpiY);

    QImage image(prefix + fileName);

    QCOMPARE(image.physicalDpiX(), expectedPhysicalDpiX);
    QCOMPARE(image.physicalDpiY(), expectedPhysicalDpiY);
}

void tst_qtiff::writeImage_data()
{
    QTest::addColumn<QString>("fileName");
    QTest::addColumn<bool>("lossy");
    QTest::addColumn<QByteArray>("format");

    QTest::newRow("TIFF: teapot") << QString("teapot.tiff") << false << QByteArray("tiff");
}

void tst_qtiff::writeImage()
{
    QFETCH(QString, fileName);
    QFETCH(bool, lossy);
    QFETCH(QByteArray, format);

    QImage image;
    {
        QImageReader reader(prefix + fileName);
        image = reader.read();
        QVERIFY2(!image.isNull(), qPrintable(reader.errorString()));
    }
    QByteArray output;
    {
        QBuffer buf(&output);
        QVERIFY(buf.open(QIODevice::WriteOnly));
        QImageWriter writer(&buf, format);
        QVERIFY(writer.write(image));
    }
    image = image.convertToFormat(QImage::Format_ARGB32_Premultiplied);

    QImage image2;
    {
        QBuffer buf(&output);
        QVERIFY(buf.open(QIODevice::ReadOnly));
        QImageReader reader(&buf);
        image2 = reader.read();
        QVERIFY2(!image.isNull(), qPrintable(reader.errorString()));
    }
    if (!lossy) {
        QCOMPARE(image, image2);
    } else {
        QCOMPARE(image.format(), image2.format());
        QCOMPARE(image.depth(), image2.depth());
    }
}

void tst_qtiff::readWriteNonDestructive_data()
{
    QTest::addColumn<QImage::Format>("format");
    QTest::addColumn<QImage::Format>("expectedFormat");
    QTest::addColumn<QImageIOHandler::Transformation>("transformation");
    QTest::newRow("tiff mono") << QImage::Format_Mono << QImage::Format_Mono << QImageIOHandler::TransformationNone;
    QTest::newRow("tiff indexed") << QImage::Format_Indexed8 << QImage::Format_Indexed8 << QImageIOHandler::TransformationMirror;
    QTest::newRow("tiff argb32pm") << QImage::Format_ARGB32_Premultiplied << QImage::Format_ARGB32_Premultiplied << QImageIOHandler::TransformationRotate90;
    QTest::newRow("tiff rgb32") << QImage::Format_RGB32 << QImage::Format_RGB32 << QImageIOHandler::TransformationRotate270;
    QTest::newRow("tiff grayscale") << QImage::Format_Grayscale8 << QImage::Format_Grayscale8 << QImageIOHandler::TransformationFlip;
}

void tst_qtiff::readWriteNonDestructive()
{
    QFETCH(QImage::Format, format);
    QFETCH(QImage::Format, expectedFormat);
    QFETCH(QImageIOHandler::Transformation, transformation);

    QImage image = QImage(prefix + "colorful.bmp").convertToFormat(format);
    QVERIFY(!image.isNull());

    QByteArray output;
    QBuffer buf(&output);
    QVERIFY(buf.open(QIODevice::WriteOnly));
    QImageWriter writer(&buf, "tiff");
    writer.setTransformation(transformation);
    writer.write(image);
    buf.close();

    QVERIFY(buf.open(QIODevice::ReadOnly));
    QImageReader reader(&buf);
    QCOMPARE(reader.imageFormat(), expectedFormat);
    QCOMPARE(reader.size(), image.size());
    QCOMPARE(reader.autoTransform(), true);
    reader.setAutoTransform(false);
    QCOMPARE(reader.transformation(), transformation);
    QImage image2 = reader.read();
    QVERIFY2(!image.isNull(), qPrintable(reader.errorString()));

    QCOMPARE(image2.format(), expectedFormat);
    QCOMPARE(image2, image);
}

void tst_qtiff::largeTiff()
{
    QImage img(4096, 2048, QImage::Format_ARGB32_Premultiplied);

    QPainter p(&img);
    img.fill(0x0);
    p.fillRect(0, 0, 4096, 2048, QBrush(Qt::CrossPattern));
    p.end();

    QByteArray array;
    QBuffer writeBuffer(&array);
    writeBuffer.open(QIODevice::WriteOnly);

    QImageWriter writer(&writeBuffer, "tiff");
    QVERIFY(writer.write(img));

    writeBuffer.close();

    QBuffer readBuffer(&array);
    readBuffer.open(QIODevice::ReadOnly);

    QImageReader reader(&readBuffer, "tiff");

    QImage img2 = reader.read();
    QVERIFY(!img2.isNull());

    QCOMPARE(img, img2);
}

void tst_qtiff::supportsOption_data()
{
    QTest::addColumn<QIntList>("options");

    QTest::newRow("tiff") << (QIntList()
                              << QImageIOHandler::Size
                              << QImageIOHandler::CompressionRatio
                              << QImageIOHandler::ImageTransformation
                              << QImageIOHandler::TransformedByDefault);
}

void tst_qtiff::supportsOption()
{
    QFETCH(QIntList, options);

    QSet<QImageIOHandler::ImageOption> allOptions;
    allOptions << QImageIOHandler::Size
               << QImageIOHandler::ClipRect
               << QImageIOHandler::Description
               << QImageIOHandler::ScaledClipRect
               << QImageIOHandler::ScaledSize
               << QImageIOHandler::CompressionRatio
               << QImageIOHandler::Gamma
               << QImageIOHandler::Quality
               << QImageIOHandler::Name
               << QImageIOHandler::SubType
               << QImageIOHandler::IncrementalReading
               << QImageIOHandler::Endianness
               << QImageIOHandler::Animation
               << QImageIOHandler::BackgroundColor
               << QImageIOHandler::ImageTransformation
               << QImageIOHandler::TransformedByDefault;

    QImageWriter writer;
    writer.setFormat("tiff");
    for (int i = 0; i < options.size(); ++i) {
        QVERIFY(writer.supportsOption(QImageIOHandler::ImageOption(options.at(i))));
        allOptions.remove(QImageIOHandler::ImageOption(options.at(i)));
    }

    foreach (QImageIOHandler::ImageOption option, allOptions)
        QVERIFY(!writer.supportsOption(option));
}

void tst_qtiff::resolution_data()
{
    QTest::addColumn<QString>("filename");
    QTest::addColumn<int>("expectedDotsPerMeterX");
    QTest::addColumn<int>("expectedDotsPerMeterY");

    QTest::newRow("TIFF: 100 dpi") << ("image_100dpi.tif") << qRound(100 * (100 / 2.54)) << qRound(100 * (100 / 2.54));
    QTest::newRow("TIFF: 50 dpi") << ("image_50dpi.tif") << qRound(50 * (100 / 2.54)) << qRound(50 * (100 / 2.54));
    QTest::newRow("TIFF: 300 dot per meter") << ("image_300dpm.tif") << 300 << 300;
}

void tst_qtiff::resolution()
{
    QFETCH(QString, filename);
    QFETCH(int, expectedDotsPerMeterX);
    QFETCH(int, expectedDotsPerMeterY);

    QImage image(prefix + QLatin1String("colorful.bmp"));
    image.setDotsPerMeterX(expectedDotsPerMeterX);
    image.setDotsPerMeterY(expectedDotsPerMeterY);

    QByteArray output;
    {
        QBuffer buf(&output);
        QVERIFY(buf.open(QIODevice::WriteOnly));
        QImageWriter writer(&buf, "tiff");
        QVERIFY(writer.write(image));
    }
    QBuffer buf(&output);
    QVERIFY(buf.open(QIODevice::ReadOnly));
    QImageReader reader(&buf);
    const QImage generatedImage = reader.read();
    QVERIFY(!generatedImage.isNull());

    QCOMPARE(expectedDotsPerMeterX, generatedImage.dotsPerMeterX());
    QCOMPARE(expectedDotsPerMeterY, generatedImage.dotsPerMeterY());
}

void tst_qtiff::multipage_data()
{
    QTest::addColumn<QString>("filename");
    QTest::addColumn<int>("expectedNumPages");
    QTest::addColumn<QVector<QSize>>("expectedSizes");

    QVector<QSize> sizes = QVector<QSize>() << QSize(640, 480) << QSize(800, 600) << QSize(320, 240);
    QTest::newRow("3 page TIFF") << ("multipage.tiff") << 3 << sizes;
}

void tst_qtiff::multipage()
{
    QFETCH(QString, filename);
    QFETCH(int, expectedNumPages);
    QFETCH(QVector<QSize>, expectedSizes);

    QImageReader reader(prefix + filename);
    QCOMPARE(reader.imageCount(), expectedNumPages);

    // Test jumpToImage, currentImageNumber and whether the actual image is correct
    QCOMPARE(reader.jumpToImage(-1), false);
    for (int i = 0; i < expectedNumPages; ++i) {
        reader.jumpToImage(i);
        QCOMPARE(reader.currentImageNumber(), i);
        QSize size = reader.size();
        QCOMPARE(size.width(), expectedSizes[i].width());
        QCOMPARE(size.height(), expectedSizes[i].height());
        QImage image = reader.read();
        QVERIFY2(!image.isNull(), qPrintable(reader.errorString()));
    }
    QCOMPARE(reader.jumpToImage(expectedNumPages), false);

    // Test jumpToNextImage
    reader.jumpToImage(0);
    QCOMPARE(reader.currentImageNumber(), 0);
    for (int i = 0; i < expectedNumPages - 1; ++i) {
        QCOMPARE(reader.jumpToNextImage(), true);
    }
    QCOMPARE(reader.jumpToNextImage(), false);
}

void tst_qtiff::tiled_data()
{
    QTest::addColumn<QString>("expectedFile");
    QTest::addColumn<QString>("tiledFile");
    QTest::newRow("RGB") << "original_rgb.tiff" << "tiled_rgb.tiff";
    QTest::newRow("Indexed") << "original_indexed.tiff" << "tiled_indexed.tiff";
    QTest::newRow("Grayscale") << "original_grayscale.tiff" << "tiled_grayscale.tiff";
    QTest::newRow("Mono") << "original_mono.tiff" << "tiled_mono.tiff";
    QTest::newRow("Oddsize (Grayscale)") << "oddsize_grayscale.tiff" << "tiled_oddsize_grayscale.tiff";
    QTest::newRow("Oddsize (Mono)") << "oddsize_mono.tiff" << "tiled_oddsize_mono.tiff";
}

void tst_qtiff::tiled()
{
    QFETCH(QString, expectedFile);
    QFETCH(QString, tiledFile);

    QImage expectedImage(prefix + expectedFile);
    QImage tiledImage(prefix + tiledFile);
    QVERIFY(!tiledImage.isNull());
    QCOMPARE(expectedImage, tiledImage);
}

QTEST_MAIN(tst_qtiff)
//#include "moc_tst_qtiff.cpp"
