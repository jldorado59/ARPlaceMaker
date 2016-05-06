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

// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t1498997132;
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

// System.Void System.Xml.XmlProcessingInstruction::.ctor(System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlProcessingInstruction__ctor_m2102822131 (XmlProcessingInstruction_t1498997132 * __this, String_t* ___target, String_t* ___data, XmlDocument_t3705263098 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Data()
extern "C"  String_t* XmlProcessingInstruction_get_Data_m2626064013 (XmlProcessingInstruction_t1498997132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_InnerText()
extern "C"  String_t* XmlProcessingInstruction_get_InnerText_m2546918850 (XmlProcessingInstruction_t1498997132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_LocalName()
extern "C"  String_t* XmlProcessingInstruction_get_LocalName_m74508533 (XmlProcessingInstruction_t1498997132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Name()
extern "C"  String_t* XmlProcessingInstruction_get_Name_m2912150830 (XmlProcessingInstruction_t1498997132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlProcessingInstruction::get_NodeType()
extern "C"  int32_t XmlProcessingInstruction_get_NodeType_m2293943854 (XmlProcessingInstruction_t1498997132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Target()
extern "C"  String_t* XmlProcessingInstruction_get_Target_m272081460 (XmlProcessingInstruction_t1498997132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Value()
extern "C"  String_t* XmlProcessingInstruction_get_Value_m2887036432 (XmlProcessingInstruction_t1498997132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlProcessingInstruction::set_Value(System.String)
extern "C"  void XmlProcessingInstruction_set_Value_m1485561641 (XmlProcessingInstruction_t1498997132 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlProcessingInstruction::CloneNode(System.Boolean)
extern "C"  XmlNode_t3592213601 * XmlProcessingInstruction_CloneNode_m709035017 (XmlProcessingInstruction_t1498997132 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlProcessingInstruction::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlProcessingInstruction_WriteContentTo_m1056836638 (XmlProcessingInstruction_t1498997132 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlProcessingInstruction::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlProcessingInstruction_WriteTo_m1420894763 (XmlProcessingInstruction_t1498997132 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
