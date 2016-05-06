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

// System.Xml.XmlEntityReference
struct XmlEntityReference_t2855594873;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3705263098;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3253021914;
// System.Xml.XmlEntity
struct XmlEntity_t3865788546;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Xml.XmlWriter
struct XmlWriter_t89522450;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlDocument3705263098.h"
#include "System_Xml_System_Xml_XmlLinkedNode3253021914.h"
#include "System_Xml_System_Xml_XmlNodeType3966624571.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"

// System.Void System.Xml.XmlEntityReference::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlEntityReference__ctor_m4204770978 (XmlEntityReference_t2855594873 * __this, String_t* ___name, XmlDocument_t3705263098 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t3253021914 * XmlEntityReference_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m1444792401 (XmlEntityReference_t2855594873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlEntityReference_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m3259893196 (XmlEntityReference_t2855594873 * __this, XmlLinkedNode_t3253021914 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_BaseURI()
extern "C"  String_t* XmlEntityReference_get_BaseURI_m3284568621 (XmlEntityReference_t2855594873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntity System.Xml.XmlEntityReference::get_Entity()
extern "C"  XmlEntity_t3865788546 * XmlEntityReference_get_Entity_m1580380137 (XmlEntityReference_t2855594873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_ChildrenBaseURI()
extern "C"  String_t* XmlEntityReference_get_ChildrenBaseURI_m140442094 (XmlEntityReference_t2855594873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntityReference::get_IsReadOnly()
extern "C"  bool XmlEntityReference_get_IsReadOnly_m3660004087 (XmlEntityReference_t2855594873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_LocalName()
extern "C"  String_t* XmlEntityReference_get_LocalName_m4039287528 (XmlEntityReference_t2855594873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Name()
extern "C"  String_t* XmlEntityReference_get_Name_m1968996187 (XmlEntityReference_t2855594873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntityReference::get_NodeType()
extern "C"  int32_t XmlEntityReference_get_NodeType_m304105755 (XmlEntityReference_t2855594873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Value()
extern "C"  String_t* XmlEntityReference_get_Value_m3714013571 (XmlEntityReference_t2855594873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::set_Value(System.String)
extern "C"  void XmlEntityReference_set_Value_m3531732182 (XmlEntityReference_t2855594873 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntityReference::CloneNode(System.Boolean)
extern "C"  XmlNode_t3592213601 * XmlEntityReference_CloneNode_m2407751292 (XmlEntityReference_t2855594873 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlEntityReference_WriteContentTo_m1711801931 (XmlEntityReference_t2855594873 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlEntityReference_WriteTo_m2708902046 (XmlEntityReference_t2855594873 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::SetReferencedEntityContent()
extern "C"  void XmlEntityReference_SetReferencedEntityContent_m3161830181 (XmlEntityReference_t2855594873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
