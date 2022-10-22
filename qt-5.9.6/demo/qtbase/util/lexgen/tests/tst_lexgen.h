#pragma once


#include <QtTest/QtTest>


class tst_LexGen : public QObject
{
    Q_OBJECT
private slots:
    void nfa_singleInput();
    void nfa_alternating();
    void nfa_concatenating();
    void nfa_optional();
    void nfa_toDFA_data();
    void nfa_toDFA();
    void lexgen_data();
    void lexgen();
};

