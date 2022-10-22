#pragma once

#include <QtCore/QtCore>
#include <QtTest/QtTest>

#include <algorithm>

#define BASECLASS_NOT_ABSTRACT
#include "baseclass.h"
#include "derivedclass.h"

#ifdef Q_COMPILER_ATOMICS
#  include <atomic>
#endif

QT_USE_NAMESPACE

class tst_Compiler : public QObject
{
Q_OBJECT
private slots:
    /* C++98 & C++03 base functionality */
    void template_methods();
    void template_constructors();
    void template_subclasses();
    void methodSpecialization();
    void constructorSpecialization();
    void staticTemplateMethods();
    void staticTemplateMethodSpecialization();
    void detectDataStream();
    void detectEnums();
    void overrideCFunction();
    void stdSortQList();
    void stdSortQVector();
    void templateCallOrder();
    void virtualFunctionNoLongerPureVirtual();
    void charSignedness() const;
    void privateStaticTemplateMember() const;
    void staticConstUnionWithInitializerList() const;
    void templateFriends();

    /* C++11 features */
    void cxx11_alignas();
    void cxx11_alignof();
    void cxx11_alignas_alignof();
    void cxx11_atomics();
    void cxx11_attributes();
    void cxx11_auto_function();
    void cxx11_auto_type();
    void cxx11_class_enum();
    void cxx11_constexpr();
    void cxx11_decltype();
    void cxx11_default_members();
    void cxx11_delete_members();
    void cxx11_delegating_constructors();
    void cxx11_explicit_conversions();
    void cxx11_explicit_overrides();
    void cxx11_extern_templates();
    void cxx11_inheriting_constructors();
    void cxx11_initializer_lists();
    void cxx11_lambda();
    void cxx11_nonstatic_member_init();
    void cxx11_noexcept();
    void cxx11_nullptr();
    void cxx11_range_for();
    void cxx11_raw_strings();
    void cxx11_ref_qualifiers();
    void cxx11_rvalue_refs();
    void cxx11_static_assert();
    void cxx11_template_alias();
    void cxx11_thread_local();
    void cxx11_udl();
    void cxx11_unicode_strings();
    void cxx11_uniform_init();
    void cxx11_unrestricted_unions();
    void cxx11_variadic_macros();
    void cxx11_variadic_templates();

    /* C++14 compiler features */
    void cxx14_binary_literals();
    void cxx14_init_captures();
    void cxx14_generic_lambdas();
    void cxx14_constexpr();
    void cxx14_decltype_auto();
    void cxx14_return_type_deduction();
    void cxx14_aggregate_nsdmi();
    void cxx14_variable_templates();

    /* Future / Technical specification compiler features */
    void runtimeArrays();
};

