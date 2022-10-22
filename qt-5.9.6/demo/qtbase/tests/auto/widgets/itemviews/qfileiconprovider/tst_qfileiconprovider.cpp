#include "tst_qfileiconprovider.h"



// Subclass that exposes the protected functions.
class SubQFileIconProvider : public QFileIconProvider
{
public:

};

void tst_QFileIconProvider::qfileiconprovider_data()
{
}

void tst_QFileIconProvider::qfileiconprovider()
{
    // don't crash
    SubQFileIconProvider provider;
}

Q_DECLARE_METATYPE(QFileIconProvider::IconType)
void tst_QFileIconProvider::iconType_data()
{
    QTest::addColumn<QFileIconProvider::IconType>("type");

    QTest::newRow("computer") << QFileIconProvider::Computer;
    QTest::newRow("desktop") << QFileIconProvider::Desktop;
    QTest::newRow("trashcan") << QFileIconProvider::Trashcan;
    QTest::newRow("network") << QFileIconProvider::Network;
    QTest::newRow("drive") << QFileIconProvider::Drive;
    QTest::newRow("folder") << QFileIconProvider::Folder;
    QTest::newRow("file") << QFileIconProvider::File;
}

// public QIcon icon(QFileIconProvider::IconType const& type) const
void tst_QFileIconProvider::iconType()
{
    QFETCH(QFileIconProvider::IconType, type);
    SubQFileIconProvider provider;
    QVERIFY(!provider.icon(type).isNull());
}

void tst_QFileIconProvider::iconInfo_data()
{
    QTest::addColumn<QFileInfo>("info");
    QTest::addColumn<bool>("setPath");

    QTest::newRow("null") << QFileInfo() << false;
    QTest::newRow("drive") << QFileInfo(QDir::rootPath()) << true;
    QTest::newRow("home") << QFileInfo(QDir::homePath()) << true;
    QTest::newRow("current") << QFileInfo(QDir::currentPath()) << true;
}

// public QIcon icon(QFileInfo const& info) const
void tst_QFileIconProvider::iconInfo()
{
    QFETCH(QFileInfo, info);
    QFETCH(bool, setPath);

    if (setPath)
        QVERIFY(info.exists());
    SubQFileIconProvider provider;
    // we should always get an icon
    QVERIFY(!provider.icon(info).isNull());
}

void tst_QFileIconProvider::type_data()
{
    QTest::addColumn<QFileInfo>("info");
    // Return value is _very_ system dependent, hard to test
    // QTest::addColumn<QString>("type");

    QTest::newRow("null") << QFileInfo();
    QTest::newRow("drive") << QFileInfo(QDir::rootPath());
    QTest::newRow("home") << QFileInfo(QDir::homePath());
    QTest::newRow("current") << QFileInfo(QDir::currentPath());
    QTest::newRow("exe") << QFileInfo(QCoreApplication::applicationFilePath());
}

// public QString type(QFileInfo const& info) const
void tst_QFileIconProvider::type()
{
    QFETCH(QFileInfo, info);
    SubQFileIconProvider provider;
    QVERIFY(!provider.type(info).isEmpty());
}

static QIcon getIcon()
{
    QFileIconProvider fip;
    return fip.icon(QDir::currentPath());
}

void tst_QFileIconProvider::taskQTBUG_46755_QFileIconEngine_crash()
{
    const QIcon &icon = getIcon();
    foreach (const QSize &size, icon.availableSizes())
        icon.pixmap(size);

    // No crash, all good.
}

QTEST_MAIN(tst_QFileIconProvider)


