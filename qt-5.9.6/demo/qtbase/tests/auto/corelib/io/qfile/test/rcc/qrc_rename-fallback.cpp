/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.9.6
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // E:/hanwenzhi_code/qt-5.9.6/qt-5.9.6/demo/qtbase/tests/auto/corelib/io/qfile/rename-fallback.qrc
  0x0,0x0,0x0,0x6c,
  0x3c,
  0x21,0x44,0x4f,0x43,0x54,0x59,0x50,0x45,0x20,0x52,0x43,0x43,0x3e,0x3c,0x52,0x43,
  0x43,0x20,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x3d,0x22,0x31,0x2e,0x30,0x22,0x3e,
  0xd,0xa,0x3c,0x71,0x72,0x65,0x73,0x6f,0x75,0x72,0x63,0x65,0x3e,0xd,0xa,0x20,
  0x20,0x20,0x20,0x3c,0x66,0x69,0x6c,0x65,0x3e,0x72,0x65,0x6e,0x61,0x6d,0x65,0x2d,
  0x66,0x61,0x6c,0x6c,0x62,0x61,0x63,0x6b,0x2e,0x71,0x72,0x63,0x3c,0x2f,0x66,0x69,
  0x6c,0x65,0x3e,0xd,0xa,0x3c,0x2f,0x71,0x72,0x65,0x73,0x6f,0x75,0x72,0x63,0x65,
  0x3e,0xd,0xa,0x3c,0x2f,0x52,0x43,0x43,0x3e,0xd,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // rename-fallback.qrc
  0x0,0x13,
  0x3,0x40,0x33,0x43,
  0x0,0x72,
  0x0,0x65,0x0,0x6e,0x0,0x61,0x0,0x6d,0x0,0x65,0x0,0x2d,0x0,0x66,0x0,0x61,0x0,0x6c,0x0,0x6c,0x0,0x62,0x0,0x61,0x0,0x63,0x0,0x6b,0x0,0x2e,0x0,0x71,
  0x0,0x72,0x0,0x63,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/rename-fallback.qrc
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x83,0x40,0x3b,0x8e,0x14,

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

int QT_RCC_MANGLE_NAMESPACE(qInitResources_rename_fallback)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_rename_fallback)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_rename_fallback)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_rename_fallback)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_rename_fallback)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_rename_fallback)(); }
   } dummy;
}
