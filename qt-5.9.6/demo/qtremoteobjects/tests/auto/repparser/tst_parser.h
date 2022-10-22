#pragma once

#include "repparser.h"

#include <QTemporaryFile>
#include <QTest>
#include <QTextStream>

Q_DECLARE_METATYPE(ASTProperty::Modifier)
Q_DECLARE_METATYPE(ASTModelRole)

class tst_Parser : public QObject {
    Q_OBJECT

private Q_SLOTS:
    void testBasic_data();
    void testBasic();
    void testProperties_data();
    void testProperties();
    void testSlots_data();
    void testSlots();
    void testSignals_data();
    void testSignals();
    void testPods_data();
    void testPods();
    void testEnums_data();
    void testEnums();
    void testModels_data();
    void testModels();
    void testInvalid_data();
    void testInvalid();
};

