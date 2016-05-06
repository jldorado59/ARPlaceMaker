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

// System.Xml.XmlDocumentType
struct XmlDocumentType_t1191145044;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3705263098;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t1329997280;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Xml.XmlWriter
struct XmlWriter_t89522450;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlDocument3705263098.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "System_Xml_System_Xml_XmlNodeType3966624571.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"

// System.Void System.Xml.XmlDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlDocumentType__ctor_m978796707 (XmlDocumentType_t1191145044 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, XmlDocument_t3705263098 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::.ctor(Mono.Xml.DTDObjectModel,System.Xml.XmlDocument)
extern "C"  void XmlDocumentType__ctor_m1497903455 (XmlDocumentType_t1191145044 * __this, DTDObjectModel_t709926554 * ___dtd, XmlDocument_t3705263098 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::ImportFromDTD()
extern "C"  void XmlDocumentType_ImportFromDTD_m3660752114 (XmlDocumentType_t1191145044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::get_DTD()
extern "C"  DTDObjectModel_t709926554 * XmlDocumentType_get_DTD_m1586388925 (XmlDocumentType_t1191145044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::get_Entities()
extern "C"  XmlNamedNodeMap_t1329997280 * XmlDocumentType_get_Entities_m3166112270 (XmlDocumentType_t1191145044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_InternalSubset()
extern "C"  String_t* XmlDocumentType_get_InternalSubset_m1333229984 (XmlDocumentType_t1191145044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentType::get_IsReadOnly()
extern "C"  bool XmlDocumentType_get_IsReadOnly_m1626547890 (XmlDocumentType_t1191145044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_LocalName()
extern "C"  String_t* XmlDocumentType_get_LocalName_m2702123767 (XmlDocumentType_t1191145044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_Name()
extern "C"  String_t* XmlDocumentType_get_Name_m1620439532 (XmlDocumentType_t1191145044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentType::get_NodeType()
extern "C"  int32_t XmlDocumentType_get_NodeType_m2435078702 (XmlDocumentType_t1191145044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_PublicId()
extern "C"  String_t* XmlDocumentType_get_PublicId_m1258052229 (XmlDocumentType_t1191145044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_SystemId()
extern "C"  String_t* XmlDocumentType_get_SystemId_m4291413835 (XmlDocumentType_t1191145044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentType::CloneNode(System.Boolean)
extern "C"  XmlNode_t3592213601 * XmlDocumentType_CloneNode_m1338362261 (XmlDocumentType_t1191145044 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlDocumentType_WriteContentTo_m3632682358 (XmlDocumentType_t1191145044 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlDocumentType_WriteTo_m2019699667 (XmlDocumentType_t1191145044 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
