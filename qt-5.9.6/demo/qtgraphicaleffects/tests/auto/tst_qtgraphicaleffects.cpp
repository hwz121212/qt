#include "tst_qtgraphicaleffects.h"



QString tst_qtgraphicaleffects::componentErrors(const QQmlComponent* component) const
{
    if (!component) {
        return "(null component)";
    }

    QStringList out;

    foreach (QQmlError const& error, component->errors()) {
        out << error.toString();
    }

    return out.join("\n");
}

void tst_qtgraphicaleffects::initTestCase()
{
    QString import;

    // Allow the test to work whether or not the module is yet installed.
    if (QFile::exists(QLibraryInfo::location(QLibraryInfo::Qml2ImportsPath) + "/QtGraphicalEffects")) {
        // Module is installed - import it the nice way
        import = "QtGraphicalEffects";
    }
    else {
        // Module is not installed - import it from the source tree, by URI
        QString qmldir = QFINDTESTDATA("../../src/effects/qmldir");
        QVERIFY2(QFile::exists(qmldir), qPrintable(qmldir));

        QUrl url = QUrl::fromLocalFile(QFileInfo(qmldir).canonicalPath());
        import = "\"" + url.toString() + "\"";
    }

    importSelf = QString("import %1 1.0\n").arg(import);
}


void tst_qtgraphicaleffects::brightnessContrast()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "BrightnessContrast {"
            "width: 50; height: 50\n"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("brightness").type(), QVariant::Double);
    QCOMPARE(obj->property("brightness").toDouble(), 0.0);
    QCOMPARE(obj->property("contrast").type(), QVariant::Double);
    QCOMPARE(obj->property("contrast").toDouble(), 0.0);
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("cached").toBool(), false);

    delete obj;
}

void tst_qtgraphicaleffects::colorize()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "Colorize {"
            "width: 50; height: 50\n"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("hue").type(), QVariant::Double);
    QCOMPARE(obj->property("hue").toDouble(), 0.0);
    QCOMPARE(obj->property("saturation").type(), QVariant::Double);
    QCOMPARE(obj->property("saturation").toDouble(), 1.0);
    QCOMPARE(obj->property("lightness").type(), QVariant::Double);
    QCOMPARE(obj->property("lightness").toDouble(), 0.0);
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("cached").toBool(), false);

    delete obj;
}

void tst_qtgraphicaleffects::fastBlur()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "FastBlur {"
            "width: 50; height: 50\n"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("radius").type(), QVariant::Double);
    QCOMPARE(obj->property("radius").toDouble(), 0.0);
    QCOMPARE(obj->property("transparentBorder").toBool(), false);
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("cached").toBool(), false);

    delete obj;
}

void tst_qtgraphicaleffects::desaturate()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "Desaturate {"
            "width: 50; height: 50\n"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("desaturation").type(), QVariant::Double);
    QCOMPARE(obj->property("desaturation").toDouble(), 0.0);
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("cached").toBool(), false);

    delete obj;
}

void tst_qtgraphicaleffects::hueSaturation()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "HueSaturation {"
            "width: 50; height: 50\n"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("hue").type(), QVariant::Double);
    QCOMPARE(obj->property("hue").toDouble(), 0.0);
    QCOMPARE(obj->property("saturation").type(), QVariant::Double);
    QCOMPARE(obj->property("saturation").toDouble(), 0.0);
    QCOMPARE(obj->property("lightness").type(), QVariant::Double);
    QCOMPARE(obj->property("lightness").toDouble(), 0.0);
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("cached").toBool(), false);

    delete obj;
}

void tst_qtgraphicaleffects::opacityMask()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "OpacityMask {"
            "width: 50; height: 50\n"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "maskSource: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("maskSource").toInt(), 0);
    QCOMPARE(obj->property("cached").toBool(), false);

    delete obj;
}

void tst_qtgraphicaleffects::radialGradient()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "RadialGradient {"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("gradient").toInt(), 0);
    QCOMPARE(obj->property("horizontalOffset").type(), QVariant::Double);
    QCOMPARE(obj->property("horizontalOffset").toDouble(), 0.0);
    QCOMPARE(obj->property("verticalOffset").type(), QVariant::Double);
    QCOMPARE(obj->property("verticalOffset").toDouble(), 0.0);
    QCOMPARE(obj->property("horizontalRadius").type(), QVariant::Double);
    QCOMPARE(obj->property("horizontalRadius").toDouble(), 50.0);
    QCOMPARE(obj->property("verticalRadius").type(), QVariant::Double);
    QCOMPARE(obj->property("verticalRadius").toDouble(), 50.0);
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("angle").type(), QVariant::Double);
    QCOMPARE(obj->property("angle").toDouble(), 0.0);
    QCOMPARE(obj->property("cached").toBool(), false);

    delete obj;
}

void tst_qtgraphicaleffects::linearGradient()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "LinearGradient {"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("gradient").toInt(), 0);
    QCOMPARE(obj->property("start").toPointF(), QPointF(0.0, 0.0));
    QCOMPARE(obj->property("end").toPointF(), QPointF(0.0, 50.0));
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("cached").toBool(), false);

    delete obj;
}

void tst_qtgraphicaleffects::rectangularGlow()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "RectangularGlow {"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("spread").type(), QVariant::Double);
    QCOMPARE(obj->property("spread").toDouble(), 0.0);
    QCOMPARE(obj->property("glowRadius").type(), QVariant::Double);
    QCOMPARE(obj->property("glowRadius").toDouble(), 0.0);
    QCOMPARE(obj->property("color").toString(), QString("#ffffff"));
    QCOMPARE(obj->property("cornerRadius").type(), QVariant::Double);
    QCOMPARE(obj->property("cornerRadius").toDouble(), 0.0);
    QCOMPARE(obj->property("cached").toBool(), false);

    delete obj;
}

void tst_qtgraphicaleffects::conicalGradient()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "ConicalGradient {"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("angle").type(), QVariant::Double);
    QCOMPARE(obj->property("angle").toDouble(), 0.0);
    QCOMPARE(obj->property("gradient").toInt(), 0);
    QCOMPARE(obj->property("horizontalOffset").type(), QVariant::Double);
    QCOMPARE(obj->property("horizontalOffset").toDouble(), 0.0);
    QCOMPARE(obj->property("horizontalOffset").type(), QVariant::Double);
    QCOMPARE(obj->property("verticalOffset").toDouble(), 0.0);
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("cached").toBool(), false);

    delete obj;
}

void tst_qtgraphicaleffects::colorOverlay()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "ColorOverlay {"
            "width: 50; height: 50\n"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("cached").toBool(), false);
    QCOMPARE(obj->property("color").toString(), QString("#00000000"));

    delete obj;
}

void tst_qtgraphicaleffects::gaussianBlur()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "GaussianBlur {"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("radius").type(), QVariant::Double);
    QCOMPARE(obj->property("radius").toDouble(), 4.0);
    QCOMPARE(obj->property("samples").toInt(), 9);
    QCOMPARE(obj->property("transparentBorder").toBool(), false);

    double res = obj->property("deviation").toDouble();
    QVERIFY(res > 0.0);

    QCOMPARE(obj->property("cached").toBool(), false);

    delete obj;
}

void tst_qtgraphicaleffects::dropShadow()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "DropShadow {"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("radius").type(), QVariant::Double);
    QCOMPARE(obj->property("radius").toDouble(), 4.0);
    QCOMPARE(obj->property("samples").toInt(), 9);
    QCOMPARE(obj->property("horizontalOffset").type(), QVariant::Double);
    QCOMPARE(obj->property("horizontalOffset").toDouble(), 0.0);
    QCOMPARE(obj->property("verticalOffset").type(), QVariant::Double);
    QCOMPARE(obj->property("verticalOffset").toDouble(), 0.0);
    QCOMPARE(obj->property("cached").toBool(), false);
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("color").toString(), QString("#000000"));
    QCOMPARE(obj->property("spread").type(), QVariant::Double);
    QCOMPARE(obj->property("spread").toDouble(), 0.0);
    QCOMPARE(obj->property("transparentBorder").toBool(), true);

    delete obj;
}

void tst_qtgraphicaleffects::innerShadow()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "InnerShadow {"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("radius").type(), QVariant::Double);
    QCOMPARE(obj->property("radius").toDouble(), 0.0);
    QCOMPARE(obj->property("samples").toInt(), 0);
    QCOMPARE(obj->property("horizontalOffset").type(), QVariant::Double);
    QCOMPARE(obj->property("horizontalOffset").toDouble(), 0.0);
    QCOMPARE(obj->property("verticalOffset").type(), QVariant::Double);
    QCOMPARE(obj->property("verticalOffset").toDouble(), 0.0);
    QCOMPARE(obj->property("cached").toBool(), false);
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("color").toString(), QString("#000000"));
    QCOMPARE(obj->property("spread").type(), QVariant::Double);
    QCOMPARE(obj->property("spread").toDouble(), 0.0);
    QCOMPARE(obj->property("fast").toBool(), false);

    delete obj;
}

void tst_qtgraphicaleffects::gammaAdjust()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "GammaAdjust {"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    //qDebug() << component.errorString();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("gamma").type(), QVariant::Double);
    QCOMPARE(obj->property("gamma").toDouble(), 1.0);
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("cached").toBool(), false);

    delete obj;
}

void tst_qtgraphicaleffects::thresholdMask()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "ThresholdMask {"
            "width: 50; height: 50\n"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "maskSource: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("maskSource").toInt(), 0);
    QCOMPARE(obj->property("cached").toBool(), false);
    QCOMPARE(obj->property("threshold").type(), QVariant::Double);
    QCOMPARE(obj->property("threshold").toDouble(), 0.0);
    QCOMPARE(obj->property("spread").type(), QVariant::Double);
    QCOMPARE(obj->property("spread").toDouble(), 0.0);

    delete obj;
}

void tst_qtgraphicaleffects::glow()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "Glow {"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("radius").type(), QVariant::Double);
    QCOMPARE(obj->property("radius").toDouble(), 4.0);
    QCOMPARE(obj->property("samples").toInt(), 9);
    QCOMPARE(obj->property("cached").toBool(), false);
    QCOMPARE(obj->property("spread").type(), QVariant::Double);
    QCOMPARE(obj->property("spread").toDouble(), 0.5);
    QCOMPARE(obj->property("color").toString(), QString("#ffffff"));
    QCOMPARE(obj->property("transparentBorder").toBool(), true);

    delete obj;
}

void tst_qtgraphicaleffects::blend()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "Blend {"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "foregroundSource: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("foregroundSource").toInt(), 0);
    QCOMPARE(obj->property("cached").toBool(), false);
    QCOMPARE(obj->property("mode").toString(), QString("normal"));

    delete obj;
}

void tst_qtgraphicaleffects::displace()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "Displace {"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "displacementSource: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("displacementSource").toInt(), 0);
    QCOMPARE(obj->property("cached").toBool(), false);
    QCOMPARE(obj->property("displacement").type(), QVariant::Double);
    QCOMPARE(obj->property("displacement").toDouble(), 0.0);

    delete obj;
}

void tst_qtgraphicaleffects::recursiveBlur()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "RecursiveBlur {"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("loops").toInt(), 0);
    QCOMPARE(obj->property("radius").type(), QVariant::Double);
    QCOMPARE(obj->property("radius").toDouble(), 0.0);
    QCOMPARE(obj->property("progress").type(), QVariant::Double);
    QCOMPARE(obj->property("progress").toDouble(), 0.0);
    QCOMPARE(obj->property("transparentBorder").toBool(), false);
    QCOMPARE(obj->property("cached").toBool(), false);

    delete obj;
}

void tst_qtgraphicaleffects::directionalBlur()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "DirectionalBlur {"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("length").toInt(), 0);
    QCOMPARE(obj->property("samples").type(), QVariant::Int);
    QCOMPARE(obj->property("samples").toInt(), 0);
    QCOMPARE(obj->property("angle").type(), QVariant::Double);
    QCOMPARE(obj->property("angle").toDouble(), 0.0);
    QCOMPARE(obj->property("transparentBorder").toBool(), false);
    QCOMPARE(obj->property("cached").toBool(), false);

    delete obj;
}

void tst_qtgraphicaleffects::radialBlur()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "RadialBlur {"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("samples").type(), QVariant::Int);
    QCOMPARE(obj->property("samples").toInt(), 0);
    QCOMPARE(obj->property("angle").type(), QVariant::Double);
    QCOMPARE(obj->property("angle").toDouble(), 0.0);
    QCOMPARE(obj->property("transparentBorder").toBool(), false);
    QCOMPARE(obj->property("cached").toBool(), false);
    QCOMPARE(obj->property("horizontalOffset").type(), QVariant::Double);
    QCOMPARE(obj->property("horizontalOffset").toDouble(), 0.0);
    QCOMPARE(obj->property("verticalOffset").type(), QVariant::Double);
    QCOMPARE(obj->property("verticalOffset").toDouble(), 0.0);

    delete obj;
}

void tst_qtgraphicaleffects::zoomBlur()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "ZoomBlur {"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();

    // Default values
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("length").toInt(), 0);
    QCOMPARE(obj->property("samples").type(), QVariant::Int);
    QCOMPARE(obj->property("samples").toInt(), 0);
    QCOMPARE(obj->property("transparentBorder").toBool(), false);
    QCOMPARE(obj->property("cached").toBool(), false);
    QCOMPARE(obj->property("horizontalOffset").type(), QVariant::Double);
    QCOMPARE(obj->property("horizontalOffset").toDouble(), 0.0);
    QCOMPARE(obj->property("verticalOffset").type(), QVariant::Double);
    QCOMPARE(obj->property("verticalOffset").toDouble(), 0.0);

    delete obj;
}

void tst_qtgraphicaleffects::levelAdjust()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "LevelAdjust {"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("minimumInput").toString(), QString("#00000000"));
    QCOMPARE(obj->property("maximumInput").toString(), QString("#ffffff"));
    QCOMPARE(obj->property("minimumOutput").toString(), QString("#00000000"));
    QCOMPARE(obj->property("maximumOutput").toString(), QString("#ffffff"));
    QCOMPARE(obj->property("cached").toBool(), false);

    delete obj;
}

void tst_qtgraphicaleffects::maskedBlur()
{
    // Creation
    QString componentStr = "import QtQuick 2.0\n"
            + importSelf +
            "MaskedBlur {"
            "source: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "maskSource: ShaderEffectSource {sourceItem: Rectangle {width: 100; height: 100}}"
            "width: 50; height: 50\n"
            "}";
    QQmlComponent component(&engine);
    component.setData(componentStr.toLatin1(), QUrl::fromLocalFile(""));
    QVERIFY2(component.status() != QQmlComponent::Error, qPrintable(componentErrors(&component)));
    QTRY_COMPARE(component.status(), QQmlComponent::Ready);
    QObject *obj = component.create();
    QVERIFY(obj != 0);

    // Default values
    QCOMPARE(obj->property("source").toInt(), 0);
    QCOMPARE(obj->property("maskSource").toInt(), 0);
    QCOMPARE(obj->property("radius").type(), QVariant::Double);
    QCOMPARE(obj->property("radius").toDouble(), 4.0);
    QCOMPARE(obj->property("samples").toInt(), 9);
    QCOMPARE(obj->property("cached").toBool(), false);

    delete obj;
}

QTEST_MAIN(tst_qtgraphicaleffects)

//#include "tst_qtgraphicaleffects.moc"
