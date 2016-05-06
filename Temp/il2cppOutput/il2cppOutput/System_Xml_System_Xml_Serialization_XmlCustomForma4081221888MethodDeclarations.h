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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Int64[]
struct Int64U5BU5D_t753178071;
// System.Xml.Serialization.TypeData
struct TypeData_t3837952962;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Serialization_TypeData3837952962.h"
#include "mscorlib_System_Object837106420.h"

// System.String System.Xml.Serialization.XmlCustomFormatter::FromEnum(System.Int64,System.String[],System.Int64[],System.String)
extern "C"  String_t* XmlCustomFormatter_FromEnum_m2429903813 (Il2CppObject * __this /* static, unused */, int64_t ___value, StringU5BU5D_t2956870243* ___values, Int64U5BU5D_t753178071* ___ids, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlCustomFormatter::FromXmlName(System.String)
extern "C"  String_t* XmlCustomFormatter_FromXmlName_m2360147262 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlCustomFormatter::FromXmlNCName(System.String)
extern "C"  String_t* XmlCustomFormatter_FromXmlNCName_m3677657961 (Il2CppObject * __this /* static, unused */, String_t* ___ncName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlCustomFormatter::ToXmlString(System.Xml.Serialization.TypeData,System.Object)
extern "C"  String_t* XmlCustomFormatter_ToXmlString_m1862488943 (Il2CppObject * __this /* static, unused */, TypeData_t3837952962 * ___type, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlCustomFormatter::FromXmlString(System.Xml.Serialization.TypeData,System.String)
extern "C"  Il2CppObject * XmlCustomFormatter_FromXmlString_m1762936378 (Il2CppObject * __this /* static, unused */, TypeData_t3837952962 * ___type, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
