#include "tst_qframe.h"



Q_DECLARE_METATYPE(QFrame::Shape)
Q_DECLARE_METATYPE(QFrame::Shadow)

void tst_QFrame::testDefaults()
{
    QFrame frame;
    QCOMPARE(frame.frameStyle(), int(QFrame::NoFrame | QFrame::Plain));
    frame.setFrameShape(QFrame::Box);
    QCOMPARE(frame.frameStyle(), int(QFrame::Box | QFrame::Plain));
    frame.setFrameStyle(QFrame::Box); // no shadow specified!
    QCOMPARE(frame.frameStyle(), int(QFrame::Box));
}

static void provideFrameData()
{
    QTest::addColumn<QString>("basename");
    QTest::addColumn<int>("lineWidth");
    QTest::addColumn<int>("midLineWidth");
    QTest::addColumn<QFrame::Shape>("shape");
    QTest::addColumn<QFrame::Shadow>("shadow");

    for (int lineWidth = 0; lineWidth < 3; ++lineWidth) {
        for (int midLineWidth = 0; midLineWidth < 3; ++midLineWidth) {
            const QByteArray postFix = '_' + QByteArray::number(lineWidth) + '_'
                + QByteArray::number(midLineWidth);
            QTest::newRow(("box_noshadow" + postFix).constData())
                     << "box_noshadow" << lineWidth << midLineWidth << QFrame::Box << (QFrame::Shadow)0;
            QTest::newRow(("box_plain" + postFix).constData())
                    << "box_plain" << lineWidth << midLineWidth << QFrame::Box << QFrame::Plain;
            QTest::newRow(("box_raised" + postFix).constData())
                    << "box_raised" << lineWidth << midLineWidth << QFrame::Box << QFrame::Raised;
            QTest::newRow(("box_sunken" + postFix).constData())
                    << "box_sunken" << lineWidth << midLineWidth << QFrame::Box << QFrame::Sunken;

            QTest::newRow(("winpanel_noshadow" + postFix).constData())
                    << "winpanel_noshadow" << lineWidth << midLineWidth << QFrame::WinPanel << (QFrame::Shadow)0;
            QTest::newRow(("winpanel_plain" + postFix).constData())
                    << "winpanel_plain" << lineWidth << midLineWidth << QFrame::WinPanel << QFrame::Plain;
            QTest::newRow(("winpanel_raised" + postFix).constData())
                    << "winpanel_raised" << lineWidth << midLineWidth << QFrame::WinPanel << QFrame::Raised;
            QTest::newRow(("winpanel_sunken" + postFix).constData())
                    << "winpanel_sunken" << lineWidth << midLineWidth << QFrame::WinPanel << QFrame::Sunken;
        }
    }
}

class Frame : public QFrame
{
public:
    using QFrame::initStyleOption;
};

void tst_QFrame::testInitStyleOption_data()
{
    provideFrameData();
}

void tst_QFrame::testInitStyleOption()
{
    QFETCH(QString, basename);
    QFETCH(int, lineWidth);
    QFETCH(int, midLineWidth);
    QFETCH(QFrame::Shape, shape);
    QFETCH(QFrame::Shadow, shadow);

    Frame frame;
    frame.setFrameStyle(shape | shadow);
    frame.setLineWidth(lineWidth);
    frame.setMidLineWidth(midLineWidth);
    frame.resize(16, 16);

    QStyleOptionFrame styleOption;
    frame.initStyleOption(&styleOption);

    switch (shape) {
    case QFrame::Box:
    case QFrame::Panel:
    case QFrame::StyledPanel:
    case QFrame::HLine:
    case QFrame::VLine:
        QCOMPARE(styleOption.lineWidth, lineWidth);
        QCOMPARE(styleOption.midLineWidth, midLineWidth);
        break;

    case QFrame::NoFrame:
    case QFrame::WinPanel:
        QCOMPARE(styleOption.lineWidth, frame.frameWidth());
        QCOMPARE(styleOption.midLineWidth, 0);
        break;
    }

    QCOMPARE(styleOption.features, QStyleOptionFrame::None);
    QCOMPARE(styleOption.frameShape, shape);
    if (shadow == QFrame::Sunken)
        QVERIFY(styleOption.state & QStyle::State_Sunken);
    else if (shadow == QFrame::Raised)
        QVERIFY(styleOption.state & QStyle::State_Raised);
}

QT_BEGIN_NAMESPACE
Q_GUI_EXPORT QPalette qt_fusionPalette();
QT_END_NAMESPACE

void tst_QFrame::testPainting_data()
{
    provideFrameData();
}

void tst_QFrame::testPainting()
{
    QFETCH(QString, basename);
    QFETCH(int, lineWidth);
    QFETCH(int, midLineWidth);
    QFETCH(QFrame::Shape, shape);
    QFETCH(QFrame::Shadow, shadow);

    QFrame frame;
    frame.setStyle(QStyleFactory::create(QStringLiteral("fusion")));
    frame.setPalette(qt_fusionPalette());
    frame.setFrameStyle(shape | shadow);
    frame.setLineWidth(lineWidth);
    frame.setMidLineWidth(midLineWidth);
    frame.resize(16, 16);

    const QPixmap pixmap = frame.grab();

    const QString fileName = QLatin1String("images/") + basename + QLatin1Char('_')
        + QString::number(lineWidth) + QLatin1Char('_') + QString::number(midLineWidth)
        + QLatin1String(".png");
    const QString referenceFilePath = QFINDTESTDATA(fileName);
    const QPixmap referencePixmap(referenceFilePath);
    QVERIFY2(!referencePixmap.isNull(), qPrintable(QStringLiteral("Could not load reference pixmap %1").arg(referenceFilePath)));
    QCOMPARE(pixmap, referencePixmap);
}

QTEST_MAIN(tst_QFrame)


