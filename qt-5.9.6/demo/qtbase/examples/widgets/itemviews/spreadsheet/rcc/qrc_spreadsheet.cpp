/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.9.6
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // E:/hanwenzhi_code/qt-5.9.6/qt-5.9.6/demo/qtbase/examples/widgets/itemviews/spreadsheet/images/interview.png
  0x0,0x0,0x0,0xae,
  0x89,
  0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,
  0x0,0x0,0x10,0x0,0x0,0x0,0x10,0x4,0x3,0x0,0x0,0x0,0xed,0xdd,0xe2,0x52,
  0x0,0x0,0x0,0xf,0x50,0x4c,0x54,0x45,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,
  0xc0,0xff,0xff,0xff,0x0,0x0,0x0,0x63,0x34,0x8b,0x60,0x0,0x0,0x0,0x3,0x74,
  0x52,0x4e,0x53,0x0,0x1,0x2,0xd,0x63,0x94,0xb3,0x0,0x0,0x0,0x4b,0x49,0x44,
  0x41,0x54,0x78,0x5e,0x3d,0x8a,0xc1,0xd,0xc0,0x30,0xc,0x2,0x1d,0x89,0x1,0xba,
  0x8b,0x3d,0x40,0x54,0xb3,0xff,0x4c,0x5,0xa7,0xa,0xf,0x74,0xe6,0x1c,0x41,0xf2,
  0x89,0x58,0x81,0xcc,0x7c,0xd,0x2d,0xa8,0x50,0x6,0x96,0xc0,0x6a,0x63,0x9f,0xa9,
  0xda,0x12,0xec,0xd2,0xa8,0xa5,0x40,0x3,0x5c,0x56,0x6,0xfc,0x6a,0xfe,0x47,0xd,
  0xb8,0x2e,0x50,0x39,0xde,0xf1,0x65,0xf8,0x0,0x49,0xd8,0x14,0x2,0x64,0xfa,0x65,
  0x99,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82,
  
};

static const unsigned char qt_resource_name[] = {
  // images
  0x0,0x6,
  0x7,0x3,0x7d,0xc3,
  0x0,0x69,
  0x0,0x6d,0x0,0x61,0x0,0x67,0x0,0x65,0x0,0x73,
    // interview.png
  0x0,0xd,
  0xf,0x7f,0xc5,0x7,
  0x0,0x69,
  0x0,0x6e,0x0,0x74,0x0,0x65,0x0,0x72,0x0,0x76,0x0,0x69,0x0,0x65,0x0,0x77,0x0,0x2e,0x0,0x70,0x0,0x6e,0x0,0x67,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/images
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/images/interview.png
  0x0,0x0,0x0,0x12,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x83,0x40,0x3b,0x22,0x3f,

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

int QT_RCC_MANGLE_NAMESPACE(qInitResources_spreadsheet)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_spreadsheet)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_spreadsheet)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_spreadsheet)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_spreadsheet)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_spreadsheet)(); }
   } dummy;
}
