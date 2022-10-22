#pragma once

#include <QtTest/QtTest>
#include <private/qfontengine_p.h>
#include <private/qtextengine_p.h>
#include <qtextlayout.h>
#include <qfontdatabase.h>
#include <qfontinfo.h>

class tst_QTextScriptEngine : public QObject
{
    Q_OBJECT

public:
    tst_QTextScriptEngine();

private slots:
    void initTestCase();
    void devanagari_data();
    void devanagari();
    void bengali_data();
    void bengali();
    void gurmukhi_data();
    void gurmukhi();
    // gujarati missing
    void oriya_data();
    void oriya();
    void tamil_data();
    void tamil();
    void telugu_data();
    void telugu();
    void kannada_data();
    void kannada();
    void malayalam_data();
    void malayalam();
    void sinhala_data();
    void sinhala();
    void khmer_data();
    void khmer();
    void linearB_data();
    void linearB();
    void greek_data();
    void greek();

    void mirroredChars_data();
    void mirroredChars();

    void controlInSyllable_qtbug14204();
    void combiningMarks_qtbug15675_data();
    void combiningMarks_qtbug15675();

    void thaiIsolatedSaraAm();
    void thaiWithZWJ();
    void thaiMultipleVowels();
private:
    bool haveTestFonts;
};
