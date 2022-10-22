#pragma once

#include <QtTest/QtTest>
#include <QtGui/QtGui>
#include <private/qtextengine_p.h>

#include "bidireorderstring.h"

class tst_QComplexText : public QObject
{
Q_OBJECT

private slots:
    void bidiReorderString_data();
    void bidiReorderString();
    void bidiCursor_qtbug2795();
    void bidiCursor_PDF();
    void bidiCursorMovement_data();
    void bidiCursorMovement();
    void bidiCursorLogicalMovement_data();
    void bidiCursorLogicalMovement();
    void bidiInvalidCursorNoMovement_data();
    void bidiInvalidCursorNoMovement();
};

