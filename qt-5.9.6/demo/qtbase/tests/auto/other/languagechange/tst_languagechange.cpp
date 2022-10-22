#include "tst_languagechange.h"




tst_languageChange::tst_languageChange() :
    m_layout(QDialogButtonBox::WinLayout)
{
    if (const QPlatformTheme *theme = QGuiApplicationPrivate::platformTheme())
        m_layout = static_cast<QDialogButtonBox::ButtonLayout>(theme->themeHint(QPlatformTheme::DialogButtonBoxLayout).toInt());
}

void tst_languageChange::initTestCase()
{
}

void tst_languageChange::cleanupTestCase()
{
}

LanguageTestStateMachine::LanguageTestStateMachine(QTranslator *translator) :
    m_translator(translator), m_state(InstallTranslator)
{
    m_timer.setInterval(500);
    connect(&m_timer, SIGNAL(timeout()), this, SLOT(timeout()));
}

void LanguageTestStateMachine::timeout()
{
    switch (m_state) {
    case InstallTranslator:
        m_timer.stop();
        QCoreApplication::installTranslator(m_translator);
        m_timer.setInterval(2500);
        m_timer.start();
        m_state = CloseDialog;
        break;
    case CloseDialog: // Close repeatedly in case file dialog is slow.
        QApplication::closeAllWindows();
        break;
    }
}

enum DialogType {
    InputDialog = 1,
    ColorDialog,
    FileDialog
};

typedef QSet<QByteArray> TranslationSet;
Q_DECLARE_METATYPE(TranslationSet)

void tst_languageChange::retranslatability_data()
{
    QTest::addColumn<int>("dialogType");
    QTest::addColumn<TranslationSet >("expected");

    //next we fill it with data
    QTest::newRow( "QInputDialog" )
        << int(InputDialog) << (QSet<QByteArray>()
                    << "QPlatformTheme::Cancel");

    QTest::newRow( "QColorDialog" )
        << int(ColorDialog) << (QSet<QByteArray>()
                    << "QPlatformTheme::Cancel"
                    << "QColorDialog::&Sat:"
                    << "QColorDialog::&Add to Custom Colors"
                    << "QColorDialog::&Green:"
                    << "QColorDialog::&Red:"
                    << "QColorDialog::Bl&ue:"
                    << "QColorDialog::A&lpha channel:"
                    << "QColorDialog::&Basic colors"
                    << "QColorDialog::&Custom colors"
                    << "QColorDialog::&Val:"
                    << "QColorDialog::Hu&e:");

    QTest::newRow( "QFileDialog" )
        << int(FileDialog) << (QSet<QByteArray>()
                    << "QFileDialog::All Files (*)"
                    << "QFileDialog::Back"
                    << "QFileDialog::Create New Folder"
                    << "QFileDialog::Detail View"
#if !defined(Q_OS_MAC) && !defined(Q_OS_WINRT)
                    << "QFileDialog::File"
#endif
                    << "QFileDialog::Files of type:"
                    << "QFileDialog::Forward"
                    << "QFileDialog::List View"
                    << "QFileDialog::Look in:"
                    << "QFileDialog::Open"
                    << "QFileDialog::Parent Directory"
                    << "QFileDialog::Show "
                    << "QFileDialog::Show &hidden files"
                    << "QFileDialog::&Delete"
                    << "QFileDialog::&New Folder"
                    << "QFileDialog::&Rename"
                    << "QFileSystemModel::Date Modified"
#ifdef Q_OS_WIN
                    << "QFileSystemModel::My Computer"
#else
                    << "QFileSystemModel::Computer"
#endif
                    << "QFileSystemModel::Size"
#ifdef Q_OS_MAC
                    << "QFileSystemModel::Kind::Match OS X Finder"
#else
                    << "QFileSystemModel::Type::All other platforms"
#endif
//                    << "QFileSystemModel::%1 KB"
                    << "QPlatformTheme::Cancel"
                    << "QPlatformTheme::Open"
                    << "QFileDialog::File &name:");
}

void tst_languageChange::retranslatability()
{
    QFETCH( int, dialogType);
    QFETCH( TranslationSet, expected);

    if (m_layout == QDialogButtonBox::GnomeLayout)
        QSKIP("The input data are not suitable for this layout (QDialogButtonBox::GnomeLayout)");

    // This will always be queried for when a language changes
    expected.insert("QGuiApplication::QT_LAYOUT_DIRECTION::Translate this string to the string 'LTR' in left-to-right "
                    "languages or to 'RTL' in right-to-left languages (such as Hebrew and Arabic) to "
                    "get proper widget layout.");

    TransformTranslator translator;
    LanguageTestStateMachine stateMachine(&translator);

    switch (dialogType) {
    case InputDialog:
        stateMachine.start();
        QInputDialog::getInt(0, QLatin1String("title"), QLatin1String("label"));
        break;

    case ColorDialog:
#ifdef Q_OS_MAC
        QSKIP("The native color dialog is used on Mac OS");
#else
        stateMachine.start();
        QColorDialog::getColor();
#endif
        break;
    case FileDialog: {
#ifdef Q_OS_MAC
        QSKIP("The native file dialog is used on Mac OS");
#endif
        QFileDialog dlg;
        dlg.setOption(QFileDialog::DontUseNativeDialog);
        QString tempDirPattern = QDir::tempPath();
        if (!tempDirPattern.endsWith(QLatin1Char('/')))
            tempDirPattern += QLatin1Char('/');
        tempDirPattern += QStringLiteral("languagechangetestdirXXXXXX");
        QTemporaryDir temporaryDir(tempDirPattern);
        temporaryDir.setAutoRemove(true);
        QVERIFY2(temporaryDir.isValid(), qPrintable(temporaryDir.errorString()));
        const QString finalDir = temporaryDir.path() + QStringLiteral("/finaldir");
        const QString fooName = temporaryDir.path() + QStringLiteral("/foo");
        QDir dir;
        QVERIFY(dir.mkpath(finalDir));
        QFile fooFile(fooName);
        QVERIFY(fooFile.open(QIODevice::WriteOnly|QIODevice::Text));
        fooFile.write("test");
        fooFile.close();
        dlg.setDirectory(temporaryDir.path());
        dlg.setFileMode(QFileDialog::ExistingFiles);
        dlg.setViewMode(QFileDialog::Detail);
        stateMachine.start();
        dlg.exec();
        QTest::qWait(3000);
        break; }
    }

    // In case we use a Color dialog, we do not want to test for
    // strings non existing in the dialog and which do not get
    // translated.
    const QSize desktopSize = QApplication::desktop()->size();
    if (dialogType == ColorDialog && (desktopSize.width() < 480 || desktopSize.height() < 350)) {
        expected.remove("QColorDialog::&Basic colors");
        expected.remove("QColorDialog::&Custom colors");
        expected.remove("QColorDialog::&Define Custom Colors >>");
        expected.remove("QColorDialog::&Add to Custom Colors");
    }

    // see if all of our *expected* translations was translated.
    // (There might be more, but thats not that bad)
    QSet<QByteArray> commonTranslations = expected;
    commonTranslations.intersect(translator.m_translations);
    if (!expected.subtract(commonTranslations).isEmpty()) {
        qDebug() << "Missing:" << expected;
        if (!translator.m_translations.subtract(commonTranslations).isEmpty())
            qDebug() << "Unexpected:" << translator.m_translations;
    }

    QVERIFY(expected.isEmpty());
}

QTEST_MAIN(tst_languageChange)
