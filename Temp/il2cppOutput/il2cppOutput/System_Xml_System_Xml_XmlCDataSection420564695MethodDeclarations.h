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

// System.Xml.XmlCDataSection
struct XmlCDataSection_t420564695;
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

// System.Void System.Xml.XmlCDataSection::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlCDataSection__ctor_m2813634932 (XmlCDataSection_t420564695 * __this, String_t* ___data, XmlDocument_t3705263098 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlCDataSection::get_LocalName()
extern "C"  String_t* XmlCDataSection_get_LocalName_m1335883988 (XmlCDataSection_t420564695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlCDataSection::get_Name()
extern "C"  String_t* XmlCDataSection_get_Name_m1407460847 (XmlCDataSection_t420564695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlCDataSection::get_NodeType()
extern "C"  int32_t XmlCDataSection_get_NodeType_m174249137 (XmlCDataSection_t420564695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlCDataSection::get_ParentNode()
extern "C"  XmlNode_t3592213601 * XmlCDataSection_get_ParentNode_m2712209467 (XmlCDataSection_t420564695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlCDataSection::CloneNode(System.Boolean)
extern "C"  XmlNode_t3592213601 * XmlCDataSection_CloneNode_m3699289906 (XmlCDataSection_t420564695 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlCDataSection::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlCDataSection_WriteContentTo_m1236188089 (XmlCDataSection_t420564695 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlCDataSection::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlCDataSection_WriteTo_m2361719536 (XmlCDataSection_t420564695 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
