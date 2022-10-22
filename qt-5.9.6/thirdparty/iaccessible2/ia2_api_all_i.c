

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for ia2_api_all.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IAccessibleRelation,0x7CDF86EE,0xC3DA,0x496a,0xBD,0xA4,0x28,0x1B,0x33,0x6E,0x1F,0xDC);


MIDL_DEFINE_GUID(IID, IID_IAccessibleAction,0xB70D9F59,0x3B5A,0x4dba,0xAB,0x9E,0x22,0x01,0x2F,0x60,0x7D,0xF5);


MIDL_DEFINE_GUID(IID, IID_IAccessible2,0xE89F726E,0xC4F4,0x4c19,0xBB,0x19,0xB6,0x47,0xD7,0xFA,0x84,0x78);


MIDL_DEFINE_GUID(IID, IID_IAccessible2_2,0x6C9430E9,0x299D,0x4E6F,0xBD,0x01,0xA8,0x2A,0x1E,0x88,0xD3,0xFF);


MIDL_DEFINE_GUID(IID, IID_IAccessibleComponent,0x1546D4B0,0x4C98,0x4bda,0x89,0xAE,0x9A,0x64,0x74,0x8B,0xDD,0xE4);


MIDL_DEFINE_GUID(IID, IID_IAccessibleValue,0x35855B5B,0xC566,0x4fd0,0xA7,0xB1,0xE6,0x54,0x65,0x60,0x03,0x94);


MIDL_DEFINE_GUID(IID, IID_IAccessibleText,0x24FD2FFB,0x3AAD,0x4a08,0x83,0x35,0xA3,0xAD,0x89,0xC0,0xFB,0x4B);


MIDL_DEFINE_GUID(IID, IID_IAccessibleText2,0x9690A9CC,0x5C80,0x4DF5,0x85,0x2E,0x2D,0x5A,0xE4,0x18,0x9A,0x54);


MIDL_DEFINE_GUID(IID, IID_IAccessibleEditableText,0xA59AA09A,0x7011,0x4b65,0x93,0x9D,0x32,0xB1,0xFB,0x55,0x47,0xE3);


MIDL_DEFINE_GUID(IID, IID_IAccessibleHyperlink,0x01C20F2B,0x3DD2,0x400f,0x94,0x9F,0xAD,0x00,0xBD,0xAB,0x1D,0x41);


MIDL_DEFINE_GUID(IID, IID_IAccessibleHypertext,0x6B4F8BBF,0xF1F2,0x418a,0xB3,0x5E,0xA1,0x95,0xBC,0x41,0x03,0xB9);


MIDL_DEFINE_GUID(IID, IID_IAccessibleHypertext2,0xCF64D89F,0x8287,0x4B44,0x85,0x01,0xA8,0x27,0x45,0x3A,0x60,0x77);


MIDL_DEFINE_GUID(IID, IID_IAccessibleTable,0x35AD8070,0xC20C,0x4fb4,0xB0,0x94,0xF4,0xF7,0x27,0x5D,0xD4,0x69);


MIDL_DEFINE_GUID(IID, IID_IAccessibleTable2,0x6167f295,0x06f0,0x4cdd,0xa1,0xfa,0x02,0xe2,0x51,0x53,0xd8,0x69);


MIDL_DEFINE_GUID(IID, IID_IAccessibleTableCell,0x594116B1,0xC99F,0x4847,0xAD,0x06,0x0A,0x7A,0x86,0xEC,0xE6,0x45);


MIDL_DEFINE_GUID(IID, IID_IAccessibleImage,0xFE5ABB3D,0x615E,0x4f7b,0x90,0x9F,0x5F,0x0E,0xDA,0x9E,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, IID_IAccessibleApplication,0xD49DED83,0x5B25,0x43F4,0x9B,0x95,0x93,0xB4,0x45,0x95,0x97,0x9E);


MIDL_DEFINE_GUID(IID, IID_IAccessibleDocument,0xC48C7FCF,0x4AB5,0x4056,0xAF,0xA6,0x90,0x2D,0x6E,0x1D,0x11,0x49);


MIDL_DEFINE_GUID(IID, LIBID_IAccessible2Lib,0xCE3F726E,0xD1D3,0x44FE,0xB9,0x95,0xFF,0x1D,0xB3,0xB4,0x8B,0x2B);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



