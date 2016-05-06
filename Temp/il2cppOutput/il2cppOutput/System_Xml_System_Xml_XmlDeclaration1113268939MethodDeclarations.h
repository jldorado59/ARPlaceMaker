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

// System.Xml.XmlDeclaration
struct XmlDeclaration_t1113268939;
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

// System.Void System.Xml.XmlDeclaration::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlDeclaration__ctor_m2252524824 (XmlDeclaration_t1113268939 * __this, String_t* ___version, String_t* ___encoding, String_t* ___standalone, XmlDocument_t3705263098 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Encoding()
extern "C"  String_t* XmlDeclaration_get_Encoding_m1176639093 (XmlDeclaration_t1113268939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Encoding(System.String)
extern "C"  void XmlDeclaration_set_Encoding_m63929174 (XmlDeclaration_t1113268939 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_InnerText()
extern "C"  String_t* XmlDeclaration_get_InnerText_m3794011171 (XmlDeclaration_t1113268939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_LocalName()
extern "C"  String_t* XmlDeclaration_get_LocalName_m1321600854 (XmlDeclaration_t1113268939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Name()
extern "C"  String_t* XmlDeclaration_get_Name_m2196475437 (XmlDeclaration_t1113268939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDeclaration::get_NodeType()
extern "C"  int32_t XmlDeclaration_get_NodeType_m2969226861 (XmlDeclaration_t1113268939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Standalone()
extern "C"  String_t* XmlDeclaration_get_Standalone_m136847527 (XmlDeclaration_t1113268939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Standalone(System.String)
extern "C"  void XmlDeclaration_set_Standalone_m3609889828 (XmlDeclaration_t1113268939 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Value()
extern "C"  String_t* XmlDeclaration_get_Value_m2175935729 (XmlDeclaration_t1113268939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Value(System.String)
extern "C"  void XmlDeclaration_set_Value_m2565088680 (XmlDeclaration_t1113268939 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Version()
extern "C"  String_t* XmlDeclaration_get_Version_m3080109784 (XmlDeclaration_t1113268939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDeclaration::CloneNode(System.Boolean)
extern "C"  XmlNode_t3592213601 * XmlDeclaration_CloneNode_m361680618 (XmlDeclaration_t1113268939 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlDeclaration_WriteContentTo_m3793587229 (XmlDeclaration_t1113268939 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlDeclaration_WriteTo_m3612087052 (XmlDeclaration_t1113268939 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlDeclaration::SkipWhitespace(System.String,System.Int32)
extern "C"  int32_t XmlDeclaration_SkipWhitespace_m4132483755 (XmlDeclaration_t1113268939 * __this, String_t* ___input, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::ParseInput(System.String)
extern "C"  void XmlDeclaration_ParseInput_m4000959855 (XmlDeclaration_t1113268939 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
