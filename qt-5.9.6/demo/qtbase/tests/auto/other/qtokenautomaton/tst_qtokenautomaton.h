#pragma once


#include <QtTest/QtTest>

#include "tokenizers/basic/basic.h"
#include "tokenizers/basicNamespace/basicNamespace.h"
#include "tokenizers/boilerplate/boilerplate.h"
#include "tokenizers/noToString/noToString.h"

/*!
 \class tst_QTokenAutomaton
 \internal
 \brief Tests the QTokenAutomaton generator.

TODO:
    - Verify high Unicode codepoints
    - Verify that signatures are static.
 */
class tst_QTokenAutomaton : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void tokenizerBasic() const;
};

