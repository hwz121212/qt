/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.9.6
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // E:/hanwenzhi_code/qt-5.9.6/qt-5.9.6/demo/qtdeclarative/tests/auto/qml/qquickfolderlistmodel/data/txtdir/hello.txt
  0x0,0x0,0x0,0x16,
  0x48,
  0x65,0x6c,0x6c,0x6f,0x20,0x66,0x72,0x6f,0x6d,0x20,0x68,0x65,0x6c,0x6c,0x6f,0x2e,
  0x74,0x78,0x74,0xd,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // myprefix
  0x0,0x8,
  0x0,0x78,0xb3,0xa8,
  0x0,0x6d,
  0x0,0x79,0x0,0x70,0x0,0x72,0x0,0x65,0x0,0x66,0x0,0x69,0x0,0x78,
    // subdir
  0x0,0x6,
  0x7,0xab,0x8b,0x2,
  0x0,0x73,
  0x0,0x75,0x0,0x62,0x0,0x64,0x0,0x69,0x0,0x72,
    // txtdir
  0x0,0x6,
  0x7,0xbf,0xab,0x2,
  0x0,0x74,
  0x0,0x78,0x0,0x74,0x0,0x64,0x0,0x69,0x0,0x72,
    // hello.txt
  0x0,0x9,
  0x3,0x32,0x86,0x74,
  0x0,0x68,
  0x0,0x65,0x0,0x6c,0x0,0x6c,0x0,0x6f,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/myprefix
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/myprefix/subdir
  0x0,0x0,0x0,0x16,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x3,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/myprefix/subdir/txtdir
  0x0,0x0,0x0,0x28,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x4,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/myprefix/subdir/txtdir/hello.txt
  0x0,0x0,0x0,0x3a,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x63,0xb0,0xcf,0x17,0x40,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_introspect)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_introspect)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_introspect)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_introspect)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_introspect)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_introspect)(); }
   } dummy;
}
