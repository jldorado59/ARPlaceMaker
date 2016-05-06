#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Xml.XmlParserContext
struct XmlParserContext_t3629084577;
// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1861067185;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t180559927;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNameTable3232213908.h"
#include "System_Xml_System_Xml_XmlNamespaceManager1861067185.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlSpace3747690775.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"

// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.Xml.XmlSpace)
extern "C"  void XmlParserContext__ctor_m857121144 (XmlParserContext_t3629084577 * __this, XmlNameTable_t3232213908 * ___nt, XmlNamespaceManager_t1861067185 * ___nsMgr, String_t* ___xmlLang, int32_t ___xmlSpace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.String,System.String,System.String,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C"  void XmlParserContext__ctor_m4064652205 (XmlParserContext_t3629084577 * __this, XmlNameTable_t3232213908 * ___nt, XmlNamespaceManager_t1861067185 * ___nsMgr, String_t* ___docTypeName, String_t* ___pubId, String_t* ___sysId, String_t* ___internalSubset, String_t* ___baseURI, String_t* ___xmlLang, int32_t ___xmlSpace, Encoding_t180559927 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,Mono.Xml.DTDObjectModel,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C"  void XmlParserContext__ctor_m167099241 (XmlParserContext_t3629084577 * __this, XmlNameTable_t3232213908 * ___nt, XmlNamespaceManager_t1861067185 * ___nsMgr, DTDObjectModel_t709926554 * ___dtd, String_t* ___baseURI, String_t* ___xmlLang, int32_t ___xmlSpace, Encoding_t180559927 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_BaseURI()
extern "C"  String_t* XmlParserContext_get_BaseURI_m1880993733 (XmlParserContext_t3629084577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_BaseURI(System.String)
extern "C"  void XmlParserContext_set_BaseURI_m663391444 (XmlParserContext_t3629084577 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_DocTypeName(System.String)
extern "C"  void XmlParserContext_set_DocTypeName_m3407771698 (XmlParserContext_t3629084577 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::get_Dtd()
extern "C"  DTDObjectModel_t709926554 * XmlParserContext_get_Dtd_m613804278 (XmlParserContext_t3629084577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_Dtd(Mono.Xml.DTDObjectModel)
extern "C"  void XmlParserContext_set_Dtd_m3742115955 (XmlParserContext_t3629084577 * __this, DTDObjectModel_t709926554 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_Encoding(System.Text.Encoding)
extern "C"  void XmlParserContext_set_Encoding_m493475469 (XmlParserContext_t3629084577 * __this, Encoding_t180559927 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_InternalSubset()
extern "C"  String_t* XmlParserContext_get_InternalSubset_m2001938359 (XmlParserContext_t3629084577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_InternalSubset(System.String)
extern "C"  void XmlParserContext_set_InternalSubset_m455417684 (XmlParserContext_t3629084577 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::get_NamespaceManager()
extern "C"  XmlNamespaceManager_t1861067185 * XmlParserContext_get_NamespaceManager_m3379582127 (XmlParserContext_t3629084577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlParserContext::get_NameTable()
extern "C"  XmlNameTable_t3232213908 * XmlParserContext_get_NameTable_m844308283 (XmlParserContext_t3629084577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_PublicId(System.String)
extern "C"  void XmlParserContext_set_PublicId_m2325575695 (XmlParserContext_t3629084577 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_SystemId(System.String)
extern "C"  void XmlParserContext_set_SystemId_m227114249 (XmlParserContext_t3629084577 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_XmlLang()
extern "C"  String_t* XmlParserContext_get_XmlLang_m1884214031 (XmlParserContext_t3629084577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlLang(System.String)
extern "C"  void XmlParserContext_set_XmlLang_m1537642954 (XmlParserContext_t3629084577 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlParserContext::get_XmlSpace()
extern "C"  int32_t XmlParserContext_get_XmlSpace_m4263973404 (XmlParserContext_t3629084577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlSpace(System.Xml.XmlSpace)
extern "C"  void XmlParserContext_set_XmlSpace_m3019056463 (XmlParserContext_t3629084577 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::PushScope()
extern "C"  void XmlParserContext_PushScope_m2997966602 (XmlParserContext_t3629084577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::PopScope()
extern "C"  void XmlParserContext_PopScope_m706589621 (XmlParserContext_t3629084577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
