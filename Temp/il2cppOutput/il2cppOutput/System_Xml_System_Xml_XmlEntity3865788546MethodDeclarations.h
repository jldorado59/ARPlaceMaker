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

// System.Xml.XmlEntity
struct XmlEntity_t3865788546;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3705263098;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3253021914;
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

// System.Void System.Xml.XmlEntity::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlEntity__ctor_m2872251573 (XmlEntity_t3865788546 * __this, String_t* ___name, String_t* ___NDATA, String_t* ___publicId, String_t* ___systemId, XmlDocument_t3705263098 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntity::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t3253021914 * XmlEntity_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m640766286 (XmlEntity_t3865788546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlEntity_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m1732330643 (XmlEntity_t3865788546 * __this, XmlLinkedNode_t3253021914 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_BaseURI()
extern "C"  String_t* XmlEntity_get_BaseURI_m3195431374 (XmlEntity_t3865788546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_InnerText()
extern "C"  String_t* XmlEntity_get_InnerText_m2455182102 (XmlEntity_t3865788546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntity::get_IsReadOnly()
extern "C"  bool XmlEntity_get_IsReadOnly_m1672029536 (XmlEntity_t3865788546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_LocalName()
extern "C"  String_t* XmlEntity_get_LocalName_m4277739081 (XmlEntity_t3865788546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_Name()
extern "C"  String_t* XmlEntity_get_Name_m2360126298 (XmlEntity_t3865788546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntity::get_NodeType()
extern "C"  int32_t XmlEntity_get_NodeType_m771016028 (XmlEntity_t3865788546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_SystemId()
extern "C"  String_t* XmlEntity_get_SystemId_m1709840825 (XmlEntity_t3865788546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntity::CloneNode(System.Boolean)
extern "C"  XmlNode_t3592213601 * XmlEntity_CloneNode_m3924773415 (XmlEntity_t3865788546 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlEntity_WriteContentTo_m1582172964 (XmlEntity_t3865788546 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlEntity_WriteTo_m571694565 (XmlEntity_t3865788546 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::SetEntityContent()
extern "C"  void XmlEntity_SetEntityContent_m1743264951 (XmlEntity_t3865788546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
