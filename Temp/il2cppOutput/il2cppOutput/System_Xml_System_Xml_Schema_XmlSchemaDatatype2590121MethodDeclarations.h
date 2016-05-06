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

// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t2590121;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlQualifiedName176365656.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Xml.Schema.XmlSchemaDatatype::.ctor()
extern "C"  void XmlSchemaDatatype__ctor_m503494556 (XmlSchemaDatatype_t2590121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaDatatype::.cctor()
extern "C"  void XmlSchemaDatatype__cctor_m2241333137 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaDatatype_t2590121 * XmlSchemaDatatype_FromName_m2003221181 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t176365656 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.String,System.String)
extern "C"  XmlSchemaDatatype_t2590121 * XmlSchemaDatatype_FromName_m1008904623 (Il2CppObject * __this /* static, unused */, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
