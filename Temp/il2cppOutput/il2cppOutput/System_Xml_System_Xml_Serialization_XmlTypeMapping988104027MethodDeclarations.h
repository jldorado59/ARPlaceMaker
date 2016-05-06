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

// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t988104027;
// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t3837952962;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Type
struct Type_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Serialization_TypeData3837952962.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapping988104027.h"
#include "mscorlib_System_Type2779229935.h"
#include "System_Xml_System_Xml_XmlQualifiedName176365656.h"

// System.Void System.Xml.Serialization.XmlTypeMapping::.ctor(System.String,System.String,System.Xml.Serialization.TypeData,System.String,System.String)
extern "C"  void XmlTypeMapping__ctor_m1515273402 (XmlTypeMapping_t988104027 * __this, String_t* ___elementName, String_t* ___ns, TypeData_t3837952962 * ___typeData, String_t* ___xmlType, String_t* ___xmlTypeNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_TypeFullName()
extern "C"  String_t* XmlTypeMapping_get_TypeFullName_m420567886 (XmlTypeMapping_t988104027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapping::get_TypeData()
extern "C"  TypeData_t3837952962 * XmlTypeMapping_get_TypeData_m3898113510 (XmlTypeMapping_t988104027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_XmlType()
extern "C"  String_t* XmlTypeMapping_get_XmlType_m1769290969 (XmlTypeMapping_t988104027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_XmlType(System.String)
extern "C"  void XmlTypeMapping_set_XmlType_m4239717312 (XmlTypeMapping_t988104027 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_XmlTypeNamespace()
extern "C"  String_t* XmlTypeMapping_get_XmlTypeNamespace_m3791467172 (XmlTypeMapping_t988104027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_XmlTypeNamespace(System.String)
extern "C"  void XmlTypeMapping_set_XmlTypeNamespace_m1375523783 (XmlTypeMapping_t988104027 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.XmlTypeMapping::get_DerivedTypes()
extern "C"  ArrayList_t2121638921 * XmlTypeMapping_get_DerivedTypes_m1594465991 (XmlTypeMapping_t988104027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapping::get_MultiReferenceType()
extern "C"  bool XmlTypeMapping_get_MultiReferenceType_m2426892065 (XmlTypeMapping_t988104027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::get_BaseMap()
extern "C"  XmlTypeMapping_t988104027 * XmlTypeMapping_get_BaseMap_m1656586130 (XmlTypeMapping_t988104027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_BaseMap(System.Xml.Serialization.XmlTypeMapping)
extern "C"  void XmlTypeMapping_set_BaseMap_m1571702341 (XmlTypeMapping_t988104027 * __this, XmlTypeMapping_t988104027 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_IncludeInSchema(System.Boolean)
extern "C"  void XmlTypeMapping_set_IncludeInSchema_m3085381238 (XmlTypeMapping_t988104027 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapping::get_IsNullable()
extern "C"  bool XmlTypeMapping_get_IsNullable_m276935072 (XmlTypeMapping_t988104027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_IsNullable(System.Boolean)
extern "C"  void XmlTypeMapping_set_IsNullable_m1376214419 (XmlTypeMapping_t988104027 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::GetRealTypeMap(System.Type)
extern "C"  XmlTypeMapping_t988104027 * XmlTypeMapping_GetRealTypeMap_m1065224057 (XmlTypeMapping_t988104027 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::GetRealElementMap(System.String,System.String)
extern "C"  XmlTypeMapping_t988104027 * XmlTypeMapping_GetRealElementMap_m2295230554 (XmlTypeMapping_t988104027 * __this, String_t* ___name, String_t* ___ens, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::UpdateRoot(System.Xml.XmlQualifiedName)
extern "C"  void XmlTypeMapping_UpdateRoot_m2535486701 (XmlTypeMapping_t988104027 * __this, XmlQualifiedName_t176365656 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
