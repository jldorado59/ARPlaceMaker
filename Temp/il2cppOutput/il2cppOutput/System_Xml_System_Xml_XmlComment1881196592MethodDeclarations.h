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

// System.Xml.XmlComment
struct XmlComment_t1881196592;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3705263098;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Xml.XmlWriter
struct XmlWriter_t89522450;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlDocument3705263098.h"
#include "System_Xml_System_Xml_XmlNodeType3966624571.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"

// System.Void System.Xml.XmlComment::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlComment__ctor_m1844436811 (XmlComment_t1881196592 * __this, String_t* ___comment, XmlDocument_t3705263098 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlComment::get_LocalName()
extern "C"  String_t* XmlComment_get_LocalName_m2806662673 (XmlComment_t1881196592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlComment::get_Name()
extern "C"  String_t* XmlComment_get_Name_m2300823186 (XmlComment_t1881196592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlComment::get_NodeType()
extern "C"  int32_t XmlComment_get_NodeType_m3520936914 (XmlComment_t1881196592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlComment::CloneNode(System.Boolean)
extern "C"  XmlNode_t3592213601 * XmlComment_CloneNode_m1339497829 (XmlComment_t1881196592 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlComment::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlComment_WriteContentTo_m2834323906 (XmlComment_t1881196592 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlComment::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlComment_WriteTo_m2136679687 (XmlComment_t1881196592 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
