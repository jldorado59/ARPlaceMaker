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

// System.Xml.XmlAttribute
struct XmlAttribute_t2022155821;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3705263098;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3253021914;
// System.Xml.XmlElement
struct XmlElement_t3562928333;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t886430410;
// System.Xml.XmlWriter
struct XmlWriter_t89522450;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t1053410431;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlDocument3705263098.h"
#include "System_Xml_System_Xml_XmlLinkedNode3253021914.h"
#include "System_Xml_System_Xml_XmlNodeType3966624571.h"
#include "System_Xml_System_Xml_XmlSpace3747690775.h"
#include "System_Xml_System_Xml_XmlNode3592213601.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"

// System.Void System.Xml.XmlAttribute::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean,System.Boolean)
extern "C"  void XmlAttribute__ctor_m1012661718 (XmlAttribute_t2022155821 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, XmlDocument_t3705263098 * ___doc, bool ___atomizedNames, bool ___checkNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t3253021914 * XmlAttribute_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m2118181597 (XmlAttribute_t2022155821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlAttribute_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m250472600 (XmlAttribute_t2022155821 * __this, XmlLinkedNode_t3253021914 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_BaseURI()
extern "C"  String_t* XmlAttribute_get_BaseURI_m3369409849 (XmlAttribute_t2022155821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_LocalName()
extern "C"  String_t* XmlAttribute_get_LocalName_m3967329012 (XmlAttribute_t2022155821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Name()
extern "C"  String_t* XmlAttribute_get_Name_m2056366031 (XmlAttribute_t2022155821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_NamespaceURI()
extern "C"  String_t* XmlAttribute_get_NamespaceURI_m341304021 (XmlAttribute_t2022155821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlAttribute::get_NodeType()
extern "C"  int32_t XmlAttribute_get_NodeType_m3312731855 (XmlAttribute_t2022155821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlAttribute::get_OwnerDocument()
extern "C"  XmlDocument_t3705263098 * XmlAttribute_get_OwnerDocument_m2792713950 (XmlAttribute_t2022155821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlAttribute::get_OwnerElement()
extern "C"  XmlElement_t3562928333 * XmlAttribute_get_OwnerElement_m3510942264 (XmlAttribute_t2022155821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::get_ParentNode()
extern "C"  XmlNode_t3592213601 * XmlAttribute_get_ParentNode_m1823077093 (XmlAttribute_t2022155821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Prefix()
extern "C"  String_t* XmlAttribute_get_Prefix_m1650017622 (XmlAttribute_t2022155821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C"  void XmlAttribute_set_SchemaInfo_m3541162070 (XmlAttribute_t2022155821 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttribute::get_Specified()
extern "C"  bool XmlAttribute_get_Specified_m4166716915 (XmlAttribute_t2022155821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Value()
extern "C"  String_t* XmlAttribute_get_Value_m2127511439 (XmlAttribute_t2022155821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_Value(System.String)
extern "C"  void XmlAttribute_set_Value_m928399498 (XmlAttribute_t2022155821 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_XmlLang()
extern "C"  String_t* XmlAttribute_get_XmlLang_m3372630147 (XmlAttribute_t2022155821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlAttribute::get_XmlSpace()
extern "C"  int32_t XmlAttribute_get_XmlSpace_m3635951016 (XmlAttribute_t2022155821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::AppendChild(System.Xml.XmlNode)
extern "C"  XmlNode_t3592213601 * XmlAttribute_AppendChild_m1532282193 (XmlAttribute_t2022155821 * __this, XmlNode_t3592213601 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  XmlNode_t3592213601 * XmlAttribute_InsertBefore_m4284449214 (XmlAttribute_t2022155821 * __this, XmlNode_t3592213601 * ___newChild, XmlNode_t3592213601 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::RemoveChild(System.Xml.XmlNode)
extern "C"  XmlNode_t3592213601 * XmlAttribute_RemoveChild_m1878730535 (XmlAttribute_t2022155821 * __this, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::CloneNode(System.Boolean)
extern "C"  XmlNode_t3592213601 * XmlAttribute_CloneNode_m3416925128 (XmlAttribute_t2022155821 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::SetDefault()
extern "C"  void XmlAttribute_SetDefault_m3765965565 (XmlAttribute_t2022155821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlAttribute_WriteContentTo_m1139041279 (XmlAttribute_t2022155821 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlAttribute_WriteTo_m1338078570 (XmlAttribute_t2022155821 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition System.Xml.XmlAttribute::GetAttributeDefinition()
extern "C"  DTDAttributeDefinition_t1053410431 * XmlAttribute_GetAttributeDefinition_m1813260737 (XmlAttribute_t2022155821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
