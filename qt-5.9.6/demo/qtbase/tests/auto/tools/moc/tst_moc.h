#pragma once



#include <QtTest/QtTest>
#include <stdio.h>
#include <qobject.h>
#include <qmetaobject.h>

#include "using-namespaces.h"
#include "assign-namespace.h"
#include "no-keywords.h"
#include "single_function_keyword.h"
#include "backslash-newlines.h"
#include "slots-with-void-template.h"
#include "pure-virtual-signals.h"
#include "qinvokable.h"
// msvc and friends crap out on it
#if !defined(Q_CC_GNU) || defined(Q_OS_IRIX) || defined(Q_OS_WIN)
#define SKIP_NEWLINE_TEST
#endif
#if !defined(SKIP_NEWLINE_TEST)
#include "os9-newlines.h"
// msvc and friends crap out on this file too,
// it seems to contain Mac 9 EOLs, and not windows EOLs.
#include "win-newlines.h"
#endif
#include "escapes-in-string-literals.h"
#include "cstyle-enums.h"

#if defined(PARSE_BOOST)
#include "parse-boost.h"
#endif
#include "cxx11-enums.h"
#include "cxx11-final-classes.h"
#include "cxx11-explicit-override-control.h"

#include "parse-defines.h"
#include "related-metaobjects-in-namespaces.h"
#include "related-metaobjects-in-gadget.h"
#include "related-metaobjects-name-conflict.h"

#include "non-gadget-parent-class.h"
#include "grand-parent-gadget-class.h"
#include "namespace.h"
#include "cxx17-namespaces.h"

#ifdef Q_MOC_RUN
// check that moc can parse these constructs, they are being used in Windows winsock2.h header
#define STRING_HASH_HASH(x) ("foo" ## x ## "bar")
const char *string_hash_hash = STRING_HASH_HASH("baz");
#endif

Q_DECLARE_METATYPE(const QMetaObject*);

namespace TestNonQNamespace {

struct TestGadget {
    Q_GADGET
    Q_CLASSINFO("key", "value")
public:
    enum class TestGEnum1 {
        Key1 = 11,
        Key2
    };
    Q_ENUM(TestGEnum1)

    enum class TestGEnum2 {
        Key1 = 17,
        Key2
    };
    Q_ENUM(TestGEnum2)
};

}

namespace TestQNamespace {
    Q_NAMESPACE
    enum class TestEnum1 {
        Key1 = 11,
        Key2
    };
    Q_ENUM_NS(TestEnum1)

    enum class TestEnum2 {
        Key1 = 17,
        Key2
    };
    Q_ENUM_NS(TestEnum2)

    // try to dizzy moc by adding a struct in between
    struct TestGadget {
        Q_GADGET
    public:
        enum class TestGEnum1 {
            Key1 = 13,
            Key2
        };
        enum class TestGEnum2 {
            Key1 = 23,
            Key2
        };
        Q_ENUM(TestGEnum1)
        Q_ENUM(TestGEnum2)
    };

    enum class TestFlag1 {
        None = 0,
        Flag1 = 1,
        Flag2 = 2,
        Any = Flag1 | Flag2
    };
    Q_FLAG_NS(TestFlag1)

    enum class TestFlag2 {
        None = 0,
        Flag1 = 4,
        Flag2 = 8,
        Any = Flag1 | Flag2
    };
    Q_FLAG_NS(TestFlag2)
}

QT_USE_NAMESPACE

template <bool b> struct QTBUG_31218 {};
struct QTBUG_31218_Derived : QTBUG_31218<-1<0> {};

#if defined(Q_MOC_RUN)
 class QTBUG_45790 : Bug() { };
#endif

class CreatableGadget
{
    Q_GADGET
public:
    Q_INVOKABLE CreatableGadget()
    {
        CreatableGadget::qt_static_metacall((QObject*)this, QMetaObject::ReadProperty, -1, Q_NULLPTR);
    }
};



struct MyStruct {};
struct MyStruct2 {};

struct SuperClass {};


namespace MyNamespace
{
    class TestSuperClass : public QObject
    {
        Q_OBJECT
        public:
            inline TestSuperClass() {}
    };
}

namespace String
{
    typedef QString Type;
}

namespace Int
{
    typedef int Type;
}

typedef struct {
    int doNotConfuseMoc;
} OldStyleCStruct;



    class GadgetInUnnamedNS
    {
        Q_GADGET
        Q_PROPERTY(int x READ x WRITE setX)
        Q_PROPERTY(int y READ y WRITE setY)
    public:
        explicit GadgetInUnnamedNS(int x, int y) : m_x(x), m_y(y) {}
        int x() const { return m_x; }
        int y() const { return m_y; }
        void setX(int x) { m_x = x; }
        void setY(int y) { m_y = y; }

    private:
        int m_x, m_y;
    };

    class ObjectInUnnamedNS : public QObject
    {
        Q_OBJECT
    public:
        explicit ObjectInUnnamedNS(QObject *parent = Q_NULLPTR) : QObject(parent) {}
    };



class Sender : public QObject
{
    Q_OBJECT

public:
    void sendValue(const String::Type& value)
    {
        emit send(value);
    }
    void sendValue(const Int::Type& value)
    {
        emit send(value);
    }

    bool operator< ( const Sender & ) const { /* QTBUG-36834 */ return true;}
signals:
    void send(const String::Type&);
    void send(const Int::Type&);
};

class Receiver : public QObject
{
    Q_OBJECT
public:
    Receiver() : stringCallCount(0), intCallCount(0) {}

    int stringCallCount;
    int intCallCount;

public slots:
    void receive(const String::Type&) { stringCallCount++; }
    void receive(const Int::Type&)    { intCallCount++; }
};

#define MACRO_WITH_POSSIBLE_COMPILER_SPECIFIC_ATTRIBUTES

#define DONT_CONFUSE_MOC(klass) klass
#define DONT_CONFUSE_MOC_EVEN_MORE(klass, dummy, dummy2) klass

Q_DECLARE_METATYPE(MyStruct)
Q_DECLARE_METATYPE(MyStruct*)

namespace myNS {
    struct Points
    {
        Points() : p1(0xBEEF), p2(0xBABE) { }
        int p1, p2;
    };
}

Q_DECLARE_METATYPE(myNS::Points)

class TestClassinfoWithEscapes: public QObject
{
    Q_OBJECT
    Q_CLASSINFO("escaped", "\"bar\"")
    Q_CLASSINFO("\"escaped\"", "foo")
    Q_CLASSINFO("cpp c*/omment", "f/*oo")
    Q_CLASSINFO("endswith\\", "Or?\?/")
    Q_CLASSINFO("newline\n inside\n", "Or \r")
public slots:
    void slotWithAReallyLongName(int)
    { }
};

struct ForwardDeclaredStruct;

struct StructQObject : public QObject
{
    Q_OBJECT
public:
    void foo(struct ForwardDeclaredStruct *);
};


class TestClass : public MyNamespace::TestSuperClass, public DONT_CONFUSE_MOC(MyStruct),
                  public DONT_CONFUSE_MOC_EVEN_MORE(MyStruct2, dummy, ignored)
{
    Q_OBJECT
    Q_CLASSINFO("help", QT_TR_NOOP("Opening this will let you configure something"))
    Q_PROPERTY(short int shortIntProperty READ shortIntProperty)
    Q_PROPERTY(unsigned short int unsignedShortIntProperty READ unsignedShortIntProperty)
    Q_PROPERTY(signed short int signedShortIntProperty READ signedShortIntProperty)
    Q_PROPERTY(long int longIntProperty READ longIntProperty)
    Q_PROPERTY(unsigned long int unsignedLongIntProperty READ unsignedLongIntProperty)
    Q_PROPERTY(signed long int signedLongIntProperty READ signedLongIntProperty)
    Q_PROPERTY(long double longDoubleProperty READ longDoubleProperty)
    Q_PROPERTY(myNS::Points points READ points WRITE setPoints)

    Q_CLASSINFO("Multi"
                "line",
                ""
                "This is a "
                "multiline Q_CLASSINFO"
                "")

    // a really really long string that we have to cut into pieces in the generated stringdata
    // table, otherwise msvc craps out
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.kde.KCookieServer\" >\n"
"    <method name=\"findCookies\" >\n"
"      <arg direction=\"in\" type=\"s\" name=\"url\" />\n"
"      <arg direction=\"in\" type=\"x\" name=\"windowId\" />\n"
"      <arg direction=\"out\" type=\"s\" name=\"cookies\" />\n"
"    </method>\n"
"    <method name=\"findDomains\" >\n"
"      <arg direction=\"out\" type=\"as\" name=\"domains\" />\n"
"    </method>\n"
"    <method name=\"findCookies\" >\n"
"      <arg direction=\"in\" type=\"ai\" name=\"fields\" />\n"
"      <arg direction=\"in\" type=\"s\" name=\"domain\" />\n"
"      <arg direction=\"in\" type=\"s\" name=\"fqdn\" />\n"
"      <arg direction=\"in\" type=\"s\" name=\"path\" />\n"
"      <arg direction=\"in\" type=\"s\" name=\"name\" />\n"
"      <arg direction=\"out\" type=\"as\" name=\"cookies\" />\n"
"      <annotation value=\"QList&lt;int>\" name=\"com.trolltech.QtDBus.QtTypeName.In0\" />\n"
"    </method>\n"
"    <method name=\"findDOMCookies\" >\n"
"      <arg direction=\"in\" type=\"s\" name=\"url\" />\n"
"      <arg direction=\"in\" type=\"x\" name=\"windowId\" />\n"
"      <arg direction=\"out\" type=\"s\" name=\"cookies\" />\n"
"    </method>\n"
"    <method name=\"addCookies\" >\n"
"      <arg direction=\"in\" type=\"s\" name=\"url\" />\n"
"      <arg direction=\"in\" type=\"ay\" name=\"cookieHeader\" />\n"
"      <arg direction=\"in\" type=\"x\" name=\"windowId\"  />\n"
"    </method>\n"
"    <method name=\"deleteCookie\" >\n"
"      <arg direction=\"in\" type=\"s\" name=\"domain\" />\n"
"      <arg direction=\"in\" type=\"s\" name=\"fqdn\" />\n"
"      <arg direction=\"in\" type=\"s\" name=\"path\" />\n"
"      <arg direction=\"in\" type=\"s\" name=\"name\" />\n"
"    </method>\n"
"    <method name=\"deleteCookiesFromDomain\" >\n"
"      <arg direction=\"in\" type=\"s\" name=\"domain\" />\n"
"    </method>\n"
"    <method name=\"deleteSessionCookies\" >\n"
"      <arg direction=\"in\" type=\"x\" name=\"windowId\" />\n"
"    </method>\n"
"    <method name=\"deleteSessionCookiesFor\" >\n"
"      <arg direction=\"in\" type=\"s\" name=\"fqdn\" />\n"
"      <arg direction=\"in\" type=\"x\" name=\"windowId\" />\n"
"    </method>\n"
"    <method name=\"deleteAllCookies\" />\n"
"    <method name=\"addDOMCookies\" >\n"
"      <arg direction=\"in\" type=\"s\" name=\"url\" />\n"
"      <arg direction=\"in\" type=\"ay\" name=\"cookieHeader\" />\n"
"      <arg direction=\"in\" type=\"x\" name=\"windowId\" />\n"
"    </method>\n"
"    <method name=\"setDomainAdvice\" >\n"
"      <arg direction=\"in\" type=\"s\" name=\"url\" />\n"
"      <arg direction=\"in\" type=\"s\" name=\"advice\" />\n"
"    </method>\n"
"    <method name=\"getDomainAdvice\" >\n"
"      <arg direction=\"in\" type=\"s\" name=\"url\" />\n"
"      <arg direction=\"out\" type=\"s\" name=\"advice\" />\n"
"    </method>\n"
"    <method name=\"reloadPolicy\" />\n"
"    <method name=\"shutdown\" />\n"
"  </interface>\n"
        "")

public:
    inline TestClass() {}

private slots:
    inline void dummy1() MACRO_WITH_POSSIBLE_COMPILER_SPECIFIC_ATTRIBUTES {}
    inline void dummy2() MACRO_WITH_POSSIBLE_COMPILER_SPECIFIC_ATTRIBUTES const {}
    inline void dummy3() const MACRO_WITH_POSSIBLE_COMPILER_SPECIFIC_ATTRIBUTES {}

    void slotWithULongLong(unsigned long long) {}
    void slotWithULongLongP(unsigned long long*) {}
    void slotWithULong(unsigned long) {}
    void slotWithLongLong(long long) {}
    void slotWithLong(long) {}

    void slotWithColonColonType(::Int::Type) {}

    TestClass &slotWithReferenceReturnType() { return *this; }

#if (0 && 1) || 1
    void expressionEvaluationShortcut1() {}
#endif
#if (1 || 0) && 0
#else
    void expressionEvaluationShortcut2() {}
#endif

public slots:
    void slotWithArray(const double[3]) {}
    void slotWithNamedArray(const double namedArray[3]) { Q_UNUSED(namedArray); }
    void slotWithMultiArray(const double[3][4]) {}

    short int shortIntProperty() { return 0; }
    unsigned short int unsignedShortIntProperty() { return 0; }
    signed short int signedShortIntProperty() { return 0; }
    long int longIntProperty() { return 0; }
    unsigned long int unsignedLongIntProperty() { return 0; }
    signed long int signedLongIntProperty() { return 0; }
    long double longDoubleProperty() { return 0.0; }

    myNS::Points points() { return m_points; }
    void setPoints(myNS::Points points) { m_points = points; }

signals:
    void signalWithArray(const double[3]);
    void signalWithNamedArray(const double namedArray[3]);
    void signalWithIterator(QList<QUrl>::iterator);
    void signalWithListPointer(QList<QUrl>*); //QTBUG-31002

private slots:
    // for tst_Moc::preprocessorConditionals
#if 0
    void invalidSlot() {}
#else
    void slotInElse() {}
#endif

#if 1
    void slotInIf() {}
#else
    void invalidSlot() {}
#endif

#if 0
    void invalidSlot() {}
#elif 0
#else
    void slotInLastElse() {}
#endif

#if 0
    void invalidSlot() {}
#elif 1
    void slotInElif() {}
#else
    void invalidSlot() {}
#endif

    friend class Receiver; // task #85783
signals:
    friend class Sender; // task #85783

#define MACRO_DEFINED

#if !(defined MACRO_UNDEF || defined MACRO_DEFINED) || 1
    void signalInIf1();
#else
    void doNotExist();
#endif
#if !(!defined MACRO_UNDEF || !defined MACRO_DEFINED) && 1
    void doNotExist();
#else
    void signalInIf2();
#endif
#if !(!defined (MACRO_DEFINED) || !defined (MACRO_UNDEF)) && 1
    void doNotExist();
#else
    void signalInIf3();
#endif

# //QTBUG-22717
 # /*  */
#

 # \

//
public slots:
    void const slotWithSillyConst() {}

public:
    Q_INVOKABLE void const slotWithSillyConst2() {}
    Q_INVOKABLE QObject& myInvokableReturningRef()
    { return *this; }
    Q_INVOKABLE const QObject& myInvokableReturningConstRef() const
    { return *this; }


    // that one however should be fine
public slots:
    void slotWithVoidStar(void *) {}

private:
     myNS::Points m_points;

#ifdef Q_MOC_RUN
    int xx = 11'11; // digit separator must not confuse moc (QTBUG-59351)
#endif

private slots:
     inline virtual void blub1() {}
     virtual inline void blub2() {}
};

class PropertyTestClass : public QObject
{
    Q_OBJECT
public:

    enum TestEnum { One, Two, Three };

    Q_ENUM(TestEnum)
};

class PropertyUseClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(PropertyTestClass::TestEnum foo READ foo)
public:

    inline PropertyTestClass::TestEnum foo() const { return PropertyTestClass::One; }
};

class EnumSourceClass : public QObject
{
    Q_OBJECT

public:
    enum TestEnum { Value = 37 };

    Q_ENUM(TestEnum)
};

class EnumUserClass : public QObject
{
    Q_OBJECT

public:
    Q_ENUMS(EnumSourceClass::TestEnum)
};

class CtorTestClass : public QObject
{
    Q_OBJECT
public:
    Q_INVOKABLE CtorTestClass(QObject *parent = 0);

    CtorTestClass(int foo);

    inline Q_INVOKABLE CtorTestClass(const QString &str)
        { m_str = str; }

    QString m_str;

protected:
    CtorTestClass(int foo, int bar, int baz);
private:
    CtorTestClass(float, float) {}
};


class PrivatePropertyTest;

class tst_Moc : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool user1 READ user1 USER true )
    Q_PROPERTY(bool user2 READ user2 USER false)
    Q_PROPERTY(bool user3 READ user3 USER userFunction())
    Q_PROPERTY(QString member1 MEMBER sMember)
    Q_PROPERTY(QString member2 MEMBER sMember READ member2)
    Q_PROPERTY(QString member3 MEMBER sMember WRITE setMember3)
    Q_PROPERTY(QString member4 MEMBER sMember NOTIFY member4Changed)
    Q_PROPERTY(QString member5 MEMBER sMember NOTIFY member5Changed)
    Q_PROPERTY(QString member6 MEMBER sConst CONSTANT)
    Q_PROPERTY(QString sub1 MEMBER (sub.m_string))
    Q_PROPERTY(QString sub2 READ (sub.string) WRITE (sub.setString))

public:
    inline tst_Moc() : sConst("const") {}

private slots:
    void initTestCase();

    void slotWithException() throw(MyStruct);
    void dontStripNamespaces();
    void oldStyleCasts();
    void warnOnExtraSignalSlotQualifiaction();
    void uLongLong();
    void inputFileNameWithDotsButNoExtension();
    void userProperties();
    void supportConstSignals();
    void task87883();
    void multilineComments();
    void classinfoWithEscapes();
    void trNoopInClassInfo();
    void ppExpressionEvaluation();
    void arrayArguments();
    void preprocessorConditionals();
    void blackslashNewlines();
    void slotWithSillyConst();
    void testExtraData();
    void testExtraDataForEnum();
    void namespaceTypeProperty();
    void slotsWithVoidTemplate();
    void structQObject();
    void namespacedFlags();
    void warnOnMultipleInheritance();
    void ignoreOptionClashes();
    void forgottenQInterface();
    void os9Newline();
    void winNewline();
    void escapesInStringLiterals();
    void frameworkSearchPath();
    void cstyleEnums();
    void defineMacroViaCmdline();
    void defineMacroViaForcedInclude();
    void defineMacroViaForcedIncludeRelative();
    void environmentIncludePaths_data();
    void environmentIncludePaths();
    void specifyMetaTagsFromCmdline();
    void invokable();
    void singleFunctionKeywordSignalAndSlot();
    void templateGtGt();
    void qprivateslots();
    void qprivateproperties();
    void inlineSlotsWithThrowDeclaration();
    void warnOnPropertyWithoutREAD();
    void constructors();
    void typenameWithUnsigned();
    void warnOnVirtualSignal();
    void QTBUG5590_dummyProperty();
    void QTBUG12260_defaultTemplate();
    void notifyError();
    void QTBUG17635_invokableAndProperty();
    void revisions();
    void warnings_data();
    void warnings();
    void privateClass();
    void cxx11Enums_data();
    void cxx11Enums();
    void returnRefs();
    void memberProperties_data();
    void memberProperties();
    void memberProperties2();
    void privateSignalConnection();
    void finalClasses_data();
    void finalClasses();
    void explicitOverrideControl_data();
    void explicitOverrideControl();
    void autoPropertyMetaTypeRegistration();
    void autoMethodArgumentMetaTypeRegistration();
    void autoSignalSpyMetaTypeRegistration();
    void parseDefines();
    void preprocessorOnly();
    void unterminatedFunctionMacro();
    void QTBUG32933_relatedObjectsDontIncludeItself();
    void writeEnumFromUnrelatedClass();
    void relatedMetaObjectsWithinNamespaces();
    void relatedMetaObjectsInGadget();
    void relatedMetaObjectsNameConflict_data();
    void relatedMetaObjectsNameConflict();
    void strignLiteralsInMacroExtension();
    void unnamedNamespaceObjectsAndGadgets();
    void veryLongStringData();
    void gadgetHierarchy();
    void optionsFileError_data();
    void optionsFileError();
    void testQNamespace();
    void cxx17Namespaces();

signals:
    void sigWithUnsignedArg(unsigned foo);
    void sigWithSignedArg(signed foo);
    void sigWithConstSignedArg(const signed foo);
    void sigWithVolatileConstSignedArg(volatile const signed foo);
    void sigWithCustomType(const MyStruct);
    void constSignal1() const;
    void constSignal2(int arg) const;
    void member4Changed();
    void member5Changed(const QString &newVal);

private:
    bool user1() { return true; };
    bool user2() { return false; };
    bool user3() { return false; };
    bool userFunction(){ return false; };
    template <class T> void revisions_T();
    QString member2() const { return sMember; }
    void setMember3( const QString &sVal ) { sMember = sVal; }

private:
    QString m_moc;
    QString m_sourceDirectory;
    QString qtIncludePath;
    class PrivateClass;
    QString sMember;
    const QString sConst;
    PrivatePropertyTest *pPPTest;

    struct {
        QString m_string;
        void setString(const QString &s) { m_string = s; }
        QString string() { return m_string; }
    } sub;

};



class PrivatePropertyTest : public QObject
{
	Q_OBJECT
		Q_PROPERTY(int foo READ foo WRITE setFoo)
		Q_PRIVATE_PROPERTY(d, int bar READ bar WRITE setBar)
		Q_PRIVATE_PROPERTY(PrivatePropertyTest::d, int plop READ plop WRITE setPlop)
		Q_PRIVATE_PROPERTY(PrivatePropertyTest::d_func(), int baz READ baz WRITE setBaz)
		Q_PRIVATE_PROPERTY(PrivatePropertyTest::d, QString blub MEMBER mBlub)
		Q_PRIVATE_PROPERTY(PrivatePropertyTest::d, QString blub2 MEMBER mBlub READ blub)
		Q_PRIVATE_PROPERTY(PrivatePropertyTest::d, QString blub3 MEMBER mBlub WRITE setBlub)
		Q_PRIVATE_PROPERTY(PrivatePropertyTest::d, QString blub4 MEMBER mBlub NOTIFY blub4Changed)
		Q_PRIVATE_PROPERTY(PrivatePropertyTest::d, QString blub5 MEMBER mBlub NOTIFY blub5Changed)
		Q_PRIVATE_PROPERTY(PrivatePropertyTest::d, QString blub6 MEMBER mConst CONSTANT)
		class MyDPointer {
		public:
			MyDPointer() : mConst("const"), mBar(0), mPlop(0) {}
			int bar() { return mBar; }
			void setBar(int value) { mBar = value; }
			int plop() { return mPlop; }
			void setPlop(int value) { mPlop = value; }
			int baz() { return mBaz; }
			void setBaz(int value) { mBaz = value; }
			QString blub() const { return mBlub; }
			void setBlub(const QString &value) { mBlub = value; }
			QString mBlub;
			const QString mConst;
		private:
			int mBar;
			int mPlop;
			int mBaz;
	};
public:
	PrivatePropertyTest(QObject *parent = 0) : QObject(parent), mFoo(0), d(new MyDPointer) {}
	int foo() { return mFoo; }
	void setFoo(int value) { mFoo = value; }
	MyDPointer *d_func() { return d.data(); }
signals:
	void blub4Changed();
	void blub5Changed(const QString &newBlub);
private:
	int mFoo;
	QScopedPointer<MyDPointer> d;
};


class QTBUG5590_DummyObject : public QObject
{
	Q_OBJECT
		Q_PROPERTY(bool dummy)
};

class QTBUG5590_PropertyObject : public QTBUG5590_DummyObject
{
	Q_OBJECT
		Q_PROPERTY(int value READ value WRITE setValue)
		Q_PROPERTY(int value2 READ value2 WRITE setValue2)

public:
	QTBUG5590_PropertyObject() : m_value(85), m_value2(40) { }
	int value() const { return m_value; }
	void setValue(int value) { m_value = value; }
	int value2() const { return m_value2; }
	void setValue2(int value) { m_value2 = value; }
private:
	int m_value, m_value2;
};




class QTBUG7421_ReturnConstTemplate : public QObject
{
	Q_OBJECT
public slots:
	const QList<int> returnConstTemplate1() { return QList<int>(); }
	QList<int> const returnConstTemplate2() { return QList<int>(); }
	const int returnConstInt() { return 0; }
	const QString returnConstString(const QString s) { return s; }
	QString const returnConstString2(QString const s) { return s; }
};

class QTBUG9354_constInName : public QObject
{
	Q_OBJECT
public slots:
	void slotChooseScientificConst0(struct science_constant const &) {};
	void foo(struct science_const const &) {};
	void foo(struct constconst const &) {};
	void foo(struct constconst *) {};
	void foo(struct const_ *) {};
};


template<typename T1, typename T2>
class TestTemplate2
{
};

class QTBUG11647_constInTemplateParameter : public QObject
{
	Q_OBJECT
public slots:
	void testSlot(TestTemplate2<const int, const short*>) {}
	void testSlot2(TestTemplate2<int, short const * const >) {}
	void testSlot3(TestTemplate2<TestTemplate2 < const int, const short* > const *,
		TestTemplate2< TestTemplate2 < void, int >, unsigned char *> >) {}

signals:
	void testSignal(TestTemplate2<const int, const short*>);
};

class QTBUG12260_defaultTemplate_Object : public QObject
{
	Q_OBJECT
public slots:
#if !(defined(Q_CC_GNU) && __GNUC__ == 4 && __GNUC_MINOR__ <= 3) || defined(Q_MOC_RUN)
	void doSomething(QHash<QString, QVariant> values = QHash<QString, QVariant>()) { Q_UNUSED(values); }
	void doSomethingElse(QSharedPointer<QVarLengthArray<QString, (16 >> 2)> > val
		= QSharedPointer<QVarLengthArray<QString, (16 >> 2)> >())
	{
		Q_UNUSED(val);
	}
#else
	// we want to test the previous function, but gcc < 4.4 seemed to have a bug similar to the one moc has.
	typedef QHash<QString, QVariant> WorkaroundGCCBug;
	void doSomething(QHash<QString, QVariant> values = WorkaroundGCCBug()) { Q_UNUSED(values); }
	void doSomethingElse(QSharedPointer<QVarLengthArray<QString, (16 >> 2)> > val
		= (QSharedPointer<QVarLengthArray<QString, (16 >> 2)> >()))
	{
		Q_UNUSED(val);
	}
#endif

	void doAnotherThing(bool a = (1 < 3), bool b = (1 > 4)) { Q_UNUSED(a); Q_UNUSED(b); }

#if defined(Q_MOC_RUN) || (defined(Q_COMPILER_AUTO_TYPE) && !(defined(Q_CC_CLANG) && Q_CC_CLANG < 304))
	// There is no Q_COMPILER_>>  but if compiler support auto, it should also support >>
	void performSomething(QVector<QList<QString>> e = QVector<QList<QString>>(8 < 1),
		QHash<int, QVector<QString>> h = QHash<int, QVector<QString>>())
	{
		Q_UNUSED(e); Q_UNUSED(h);
	}
#else
	void performSomething(QVector<QList<QString> > e = QVector<QList<QString> >(),
		QHash<int, QVector<QString> > h = (QHash<int, QVector<QString> >()))
	{
		Q_UNUSED(e); Q_UNUSED(h);
	}
#endif
};





class QTBUG_17635_InvokableAndProperty : public QObject
{
	Q_OBJECT
public:
	Q_PROPERTY(int numberOfEggs READ numberOfEggs)
		Q_PROPERTY(int numberOfChickens READ numberOfChickens)
		Q_INVOKABLE QString getEgg(int index) { Q_UNUSED(index); return QString::fromLatin1("Egg"); }
	Q_INVOKABLE QString getChicken(int index) { Q_UNUSED(index); return QString::fromLatin1("Chicken"); }
	int numberOfEggs() { return 2; }
	int numberOfChickens() { return 4; }
};




// If changed, update VersionTestNotify below
class VersionTest : public QObject
{
	Q_OBJECT
		Q_PROPERTY(int prop1 READ foo)
		Q_PROPERTY(int prop2 READ foo REVISION 2)

public:
	int foo() const { return 0; }

	Q_INVOKABLE void method1() {}
	Q_INVOKABLE Q_REVISION(4) void method2() {}

	enum TestEnum { One, Two };
	Q_ENUM(TestEnum);


public slots:
	void slot1() {}
	Q_REVISION(3) void slot2() {}

signals:
	void signal1();
	Q_REVISION(5) void signal2();

	public slots Q_REVISION(6) :
		void slot3() {}
	void slot4() {}

	signals Q_REVISION(7) :
		void signal3();
	void signal4();
};

// If changed, update VersionTest above
class VersionTestNotify : public QObject
{
	Q_OBJECT
		Q_PROPERTY(int prop1 READ foo NOTIFY fooChanged)
		Q_PROPERTY(int prop2 READ foo REVISION 2)

public:
	int foo() const { return 0; }

	Q_INVOKABLE void method1() {}
	Q_INVOKABLE Q_REVISION(4) void method2() {}

	enum TestEnum { One, Two };
	Q_ENUM(TestEnum);

public slots:
	void slot1() {}
	Q_REVISION(3) void slot2() {}

signals:
	void fooChanged();
	void signal1();
	Q_REVISION(5) void signal2();

	public slots Q_REVISION(6) :
		void slot3() {}
	void slot4() {}

	signals Q_REVISION(7) :
		void signal3();
	void signal4();
};




//this used to fail to compile
class ClassWithOneMember : public QObject {
	Q_PROPERTY(int member MEMBER member)
		Q_OBJECT
public:
	int member;
};



class SignalConnectionTester : public QObject
{
	Q_OBJECT
public:
	SignalConnectionTester(QObject *parent = 0)
		: QObject(parent), testPassed(false)
	{

	}

public Q_SLOTS:
	void testSlot()
	{
		testPassed = true;
	}
	void testSlotWith1Arg(int i)
	{
		testPassed = i == 42;
	}
	void testSlotWith2Args(int i, const QString &s)
	{
		testPassed = i == 42 && s == "Hello";
	}

public:
	bool testPassed;
};

class ClassWithPrivateSignals : public QObject
{
	Q_OBJECT
public:
	ClassWithPrivateSignals(QObject *parent = 0)
		: QObject(parent)
	{

	}

	void emitPrivateSignals()
	{
		emit privateSignal1(QPrivateSignal());
		emit privateSignalWith1Arg(42, QPrivateSignal());
		emit privateSignalWith2Args(42, "Hello", QPrivateSignal());

		emit privateOverloadedSignal(QPrivateSignal());
		emit privateOverloadedSignal(42, QPrivateSignal());

		emit overloadedMaybePrivate();
		emit overloadedMaybePrivate(42, QPrivateSignal());
	}

Q_SIGNALS:
	void privateSignal1(QPrivateSignal);
	void privateSignalWith1Arg(int arg1, QPrivateSignal);
	void privateSignalWith2Args(int arg1, const QString &arg2, QPrivateSignal);

	void privateOverloadedSignal(QPrivateSignal);
	void privateOverloadedSignal(int, QPrivateSignal);

	void overloadedMaybePrivate();
	void overloadedMaybePrivate(int, QPrivateSignal);

};

class SubClassFromPrivateSignals : public ClassWithPrivateSignals
{
	Q_OBJECT
public:
	SubClassFromPrivateSignals(QObject *parent = 0)
		: ClassWithPrivateSignals(parent)
	{

	}

	void emitProtectedSignals()
	{
		// Compile test: All of this intentionally does not compile:
  //         emit privateSignal1();
  //         emit privateSignalWith1Arg(42);
  //         emit privateSignalWith2Args(42, "Hello");
  //
  //         emit privateSignal1(QPrivateSignal());
  //         emit privateSignalWith1Arg(42, QPrivateSignal());
  //         emit privateSignalWith2Args(42, "Hello", QPrivateSignal());
  //
  //         emit privateSignal1(ClassWithPrivateSignals::QPrivateSignal());
  //         emit privateSignalWith1Arg(42, ClassWithPrivateSignals::QPrivateSignal());
  //         emit privateSignalWith2Args(42, "Hello", ClassWithPrivateSignals::QPrivateSignal());

  //         emit privateOverloadedSignal();
  //         emit privateOverloadedSignal(42);

  //         emit overloadedMaybePrivate();
  //         emit overloadedMaybePrivate(42);


	}
};




class CustomQObject : public QObject
{
	Q_OBJECT
		Q_ENUMS(Number)
public:
	enum Number {
		Zero,
		One,
		Two
	};
	explicit CustomQObject(QObject *parent = 0)
		: QObject(parent)
	{
	}
};



Q_DECLARE_METATYPE(CustomQObject::Number)

typedef CustomQObject* CustomQObjectStar;
Q_DECLARE_METATYPE(CustomQObjectStar);


struct CustomObject3 {};
struct CustomObject4 {};
struct CustomObject5 {};
struct CustomObject6 {};
struct CustomObject7 {};
struct CustomObject8 {};
struct CustomObject9 {};
struct CustomObject10 {};
struct CustomObject11 {};
struct CustomObject12 {};

Q_DECLARE_METATYPE(CustomObject3)
Q_DECLARE_METATYPE(CustomObject4)
Q_DECLARE_METATYPE(CustomObject5)
Q_DECLARE_METATYPE(CustomObject6)
Q_DECLARE_METATYPE(CustomObject7)
Q_DECLARE_METATYPE(CustomObject8)
Q_DECLARE_METATYPE(CustomObject9)
Q_DECLARE_METATYPE(CustomObject10)
Q_DECLARE_METATYPE(CustomObject11)
Q_DECLARE_METATYPE(CustomObject12)


namespace SomeNamespace {

	class NamespacedQObject : public QObject
	{
		Q_OBJECT
	public:
		explicit NamespacedQObject(QObject *parent = 0)
			: QObject(parent)
		{

		}
	};

	struct NamespacedNonQObject {};
}
Q_DECLARE_METATYPE(SomeNamespace::NamespacedNonQObject)

// Need different types for the invokable method tests because otherwise the registration
// done in the property test would interfere.

class CustomQObject2 : public QObject
{
	Q_OBJECT
		Q_ENUMS(Number)
public:
	enum Number {
		Zero,
		One,
		Two
	};
	explicit CustomQObject2(QObject *parent = 0)
		: QObject(parent)
	{
	}
};

Q_DECLARE_METATYPE(CustomQObject2::Number)

typedef CustomQObject2* CustomQObject2Star;
Q_DECLARE_METATYPE(CustomQObject2Star);

namespace SomeNamespace2 {

	class NamespacedQObject2 : public QObject
	{
		Q_OBJECT
	public:
		explicit NamespacedQObject2(QObject *parent = 0)
			: QObject(parent)
		{

		}
	};

	struct NamespacedNonQObject2 {};
}
Q_DECLARE_METATYPE(SomeNamespace2::NamespacedNonQObject2)



class AutoRegistrationObject : public QObject
{
	Q_OBJECT
		Q_PROPERTY(QObject* object READ object CONSTANT)
		Q_PROPERTY(CustomQObject* customObject READ customObject CONSTANT)
		Q_PROPERTY(QSharedPointer<CustomQObject> customObjectP READ customObjectP CONSTANT)
		Q_PROPERTY(QWeakPointer<CustomQObject> customObjectWP READ customObjectWP CONSTANT)
		Q_PROPERTY(QPointer<CustomQObject> customObjectTP READ customObjectTP CONSTANT)
		Q_PROPERTY(QList<int> listInt READ listInt CONSTANT)
		Q_PROPERTY(QVector<QVariant> vectorVariant READ vectorVariant CONSTANT)
		Q_PROPERTY(QList<CustomQObject*> listObject READ listObject CONSTANT)
		Q_PROPERTY(QVector<QList<int>> vectorListInt READ vectorListInt CONSTANT)
		Q_PROPERTY(QVector<QList<CustomQObject*>> vectorListObject READ vectorListObject CONSTANT)
		Q_PROPERTY(CustomQObject::Number enumValue READ enumValue CONSTANT)
		Q_PROPERTY(CustomQObjectStar customObjectTypedef READ customObjectTypedef CONSTANT)
		Q_PROPERTY(SomeNamespace::NamespacedQObject* customObjectNamespaced READ customObjectNamespaced CONSTANT)
		Q_PROPERTY(SomeNamespace::NamespacedNonQObject customNonQObjectNamespaced READ customNonQObjectNamespaced CONSTANT)
public:
	AutoRegistrationObject(QObject *parent = 0)
		: QObject(parent)
	{
	}

	QObject* object() const
	{
		return 0;
	}

	QSharedPointer<CustomQObject> customObjectP() const
	{
		return QSharedPointer<CustomQObject>();
	}

	QWeakPointer<CustomQObject> customObjectWP() const
	{
		return QWeakPointer<CustomQObject>();
	}

	QPointer<CustomQObject> customObjectTP() const
	{
		return QPointer<CustomQObject>();
	}

	CustomQObject* customObject() const
	{
		return 0;
	}

	QList<int> listInt() const
	{
		return QList<int>();
	}

	QVector<QVariant> vectorVariant() const
	{
		return QVector<QVariant>();
	}

	QList<CustomQObject*> listObject() const
	{
		return QList<CustomQObject*>();
	}

	QVector<QList<int> > vectorListInt() const
	{
		return QVector<QList<int> >();
	}

	QVector<QList<CustomQObject*> > vectorListObject() const
	{
		return QVector<QList<CustomQObject*> >();
	}

	CustomQObject::Number enumValue() const
	{
		return CustomQObject::Zero;
	}

	CustomQObjectStar customObjectTypedef() const
	{
		return 0;
	}

	SomeNamespace::NamespacedQObject* customObjectNamespaced() const
	{
		return 0;
	}

	SomeNamespace::NamespacedNonQObject customNonQObjectNamespaced() const
	{
		return SomeNamespace::NamespacedNonQObject();
	}

public slots:
	void objectSlot(QObject*) {}
	void customObjectSlot(CustomQObject2*) {}
	void sharedPointerSlot(QSharedPointer<CustomQObject2>) {}
	void weakPointerSlot(QWeakPointer<CustomQObject2>) {}
	void trackingPointerSlot(QPointer<CustomQObject2>) {}
	void listIntSlot(QList<int>) {}
	void vectorVariantSlot(QVector<QVariant>) {}
	void listCustomObjectSlot(QList<CustomQObject2*>) {}
	void vectorListIntSlot(QVector<QList<int> >) {}
	void vectorListCustomObjectSlot(QVector<QList<CustomQObject2*> >) {}
	void enumSlot(CustomQObject2::Number) {}
	void typedefSlot(CustomQObject2Star) {}
	void namespacedQObjectSlot(SomeNamespace2::NamespacedQObject2*) {}
	void namespacedNonQObjectSlot(SomeNamespace2::NamespacedNonQObject2) {}

	void bu1(int, CustomObject3) {}
	void bu2(CustomObject4, int) {}
	void bu3(CustomObject5, CustomObject6) {}
	void bu4(CustomObject7, int, CustomObject8) {}
	void bu5(int, CustomObject9, CustomObject10) {}
	void bu6(int, CustomObject11, int) {}

	// these can't be registered, but they should at least compile
	void ref1(int&) {}
	void ref2(QList<int>&) {}
	void ref3(CustomQObject2&) {}
	void ref4(QSharedPointer<CustomQObject2>&) {}

signals:
	void someSignal(CustomObject12);
};



namespace QTBUG32933_relatedObjectsDontIncludeItself {
	namespace NS {
		class Obj : QObject {
			Q_OBJECT
				Q_PROPERTY(MyEnum p1 MEMBER member)
				Q_PROPERTY(Obj::MyEnum p2 MEMBER member)
				Q_PROPERTY(NS::Obj::MyEnum p3 MEMBER member)
				Q_PROPERTY(QTBUG32933_relatedObjectsDontIncludeItself::NS::Obj::MyEnum p4 MEMBER member)
				Q_ENUMS(MyEnum);
		public:
			enum MyEnum { Something, SomethingElse };
			MyEnum member;
		};
	}
}


class UnrelatedClass : public QObject
{
	Q_OBJECT
		Q_ENUMS(UnrelatedEnum)
public:
	enum UnrelatedEnum {
		UnrelatedInvalidValue = -1,
		UnrelatedValue = 42
	};
};

// The presence of this macro used to confuse moc and prevent
// UnrelatedClass from being listed in the related meta objects.
Q_DECLARE_METATYPE(UnrelatedClass::UnrelatedEnum)

class TestClassReferencingUnrelatedEnum : public QObject
{
	Q_OBJECT
		Q_PROPERTY(UnrelatedClass::UnrelatedEnum enumProperty READ enumProperty WRITE setEnumProperty)
public:
	TestClassReferencingUnrelatedEnum()
		: m_enumProperty(UnrelatedClass::UnrelatedInvalidValue)
	{}

	UnrelatedClass::UnrelatedEnum enumProperty() const {
		return m_enumProperty;
	}

	void setEnumProperty(UnrelatedClass::UnrelatedEnum arg) {
		m_enumProperty = arg;
	}

private:
	UnrelatedClass::UnrelatedEnum m_enumProperty;
};



class StringLiteralsInMacroExtension : public QObject
{
	Q_OBJECT
#define Macro(F) F " " F
		Q_CLASSINFO(Macro("String"), Macro("Literal"))
#undef Macro

#define Macro(F) F
		Q_CLASSINFO("String" Macro("!"), "Literal" Macro("!"))
		Q_CLASSINFO(Macro("!") "String", Macro("!") "Literal")
#undef Macro

#define Macro "foo"
		Q_CLASSINFO("String" Macro, "Literal" Macro)
		Q_CLASSINFO(Macro "String", Macro "Literal")
#undef Macro
};



class VeryLongStringData : public QObject
{
	Q_OBJECT

#define repeat2(V) V V
#define repeat4(V) repeat2(V) repeat2(V)
#define repeat8(V) repeat4(V) repeat4(V)
#define repeat16(V) repeat8(V) repeat8(V)
#define repeat32(V) repeat16(V) repeat16(V)
#define repeat64(V) repeat32(V) repeat32(V)
#define repeat128(V) repeat64(V) repeat64(V)
#define repeat256(V) repeat128(V) repeat128(V)
#define repeat512(V) repeat256(V) repeat256(V)
#define repeat1024(V) repeat512(V) repeat512(V)
#define repeat2048(V) repeat1024(V) repeat1024(V)
#define repeat4096(V) repeat2048(V) repeat2048(V)
#define repeat8192(V) repeat4096(V) repeat4096(V)
#define repeat16384(V) repeat8192(V) repeat8192(V)
#define repeat32768(V) repeat16384(V) repeat16384(V)
#define repeat65534(V) repeat32768(V) repeat16384(V) repeat8192(V) repeat4096(V) repeat2048(V) repeat1024(V) repeat512(V) repeat256(V) repeat128(V) repeat64(V) repeat32(V) repeat16(V) repeat8(V) repeat4(V) repeat2(V)

		Q_CLASSINFO(repeat65534("n"), repeat65534("i"))
		Q_CLASSINFO(repeat65534("e"), repeat65534("r"))
		Q_CLASSINFO(repeat32768("o"), repeat32768("b"))
		Q_CLASSINFO(":", ")")

#undef repeat2
#undef repeat4
#undef repeat8
#undef repeat16
#undef repeat32
#undef repeat64
#undef repeat128
#undef repeat256
#undef repeat512
#undef repeat1024
#undef repeat2048
#undef repeat4096
#undef repeat8192
#undef repeat16384
#undef repeat32768
#undef repeat65534
};




class tst_Moc::PrivateClass : public QObject {
	Q_PROPERTY(int someProperty READ someSlot WRITE someSlot2)
		Q_OBJECT
Q_SIGNALS:
	void someSignal();
public Q_SLOTS:
	int someSlot() { return 1; }
	void someSlot2(int) {}
public:
	Q_INVOKABLE PrivateClass() {}
};
