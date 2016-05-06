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

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t3432810239;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1500525009;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlQualifiedName176365656.h"

// System.Void System.Xml.Schema.XmlSchemaType::.ctor()
extern "C"  void XmlSchemaType__ctor_m67578246 (XmlSchemaType_t3432810239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::get_QualifiedName()
extern "C"  XmlQualifiedName_t176365656 * XmlSchemaType_get_QualifiedName_m3059613359 (XmlSchemaType_t3432810239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaSimpleType_t1500525009 * XmlSchemaType_GetBuiltInSimpleType_m799232347 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t176365656 * ___qualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
