/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.9.6
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // E:/hanwenzhi_code/qt-5.9.6/qt-5.9.6/demo/qtbase/examples/widgets/tools/treemodelcompleter/resources/treemodel.txt
  0x0,0x0,0x0,0x4b,
  0x0,
  0x0,0x1,0x42,0x78,0x9c,0xb,0x48,0x2c,0x4a,0xcd,0x2b,0x31,0xe4,0xe5,0x52,0x0,
  0x2,0xe7,0x8c,0xcc,0x9c,0x14,0x28,0x1b,0x4,0xdc,0x8b,0x12,0xf3,0x52,0x70,0xb,
  0x1a,0x61,0x13,0x34,0x46,0x8,0xc2,0x25,0x30,0xcc,0xc1,0xad,0xdd,0x90,0x18,0xed,
  0x58,0x9d,0x1,0xb3,0x9d,0x97,0x2b,0x0,0xec,0x27,0x23,0x22,0xfd,0x84,0xcd,0xc,
  0xe2,0x3,0x80,0x97,0xb,0x0,0x43,0xf7,0x4d,0x6f,
  
};

static const unsigned char qt_resource_name[] = {
  // resources
  0x0,0x9,
  0xa,0x6c,0x78,0x43,
  0x0,0x72,
  0x0,0x65,0x0,0x73,0x0,0x6f,0x0,0x75,0x0,0x72,0x0,0x63,0x0,0x65,0x0,0x73,
    // treemodel.txt
  0x0,0xd,
  0xd,0xa8,0xd2,0xb4,
  0x0,0x74,
  0x0,0x72,0x0,0x65,0x0,0x65,0x0,0x6d,0x0,0x6f,0x0,0x64,0x0,0x65,0x0,0x6c,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/resources
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/resources/treemodel.txt
  0x0,0x0,0x0,0x18,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x83,0x40,0x3b,0x41,0x6f,

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

int QT_RCC_MANGLE_NAMESPACE(qInitResources_treemodelcompleter)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_treemodelcompleter)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_treemodelcompleter)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_treemodelcompleter)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_treemodelcompleter)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_treemodelcompleter)(); }
   } dummy;
}