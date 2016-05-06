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

// System.Xml.Serialization.TypeData
struct TypeData_t3837952962;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaPatternFacet
struct XmlSchemaPatternFacet_t2687480780;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.InvalidOperationException
struct InvalidOperationException_t2420574324;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Serialization_TypeData3837952962.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaPatternFacet2687480780.h"
#include "System_Xml_System_Xml_Serialization_SchemaTypes802525398.h"

// System.Void System.Xml.Serialization.TypeData::.ctor(System.Type,System.String,System.Boolean)
extern "C"  void TypeData__ctor_m338275825 (TypeData_t3837952962 * __this, Type_t * ___type, String_t* ___elementName, bool ___isPrimitive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::.ctor(System.Type,System.String,System.Boolean,System.Xml.Serialization.TypeData,System.Xml.Schema.XmlSchemaPatternFacet)
extern "C"  void TypeData__ctor_m420493673 (TypeData_t3837952962 * __this, Type_t * ___type, String_t* ___elementName, bool ___isPrimitive, TypeData_t3837952962 * ___mappedType, XmlSchemaPatternFacet_t2687480780 * ___facet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::.cctor()
extern "C"  void TypeData__cctor_m1141656772 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeData::get_TypeName()
extern "C"  String_t* TypeData_get_TypeName_m1117343750 (TypeData_t3837952962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeData::get_XmlType()
extern "C"  String_t* TypeData_get_XmlType_m3918246226 (TypeData_t3837952962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::get_Type()
extern "C"  Type_t * TypeData_get_Type_m2191724548 (TypeData_t3837952962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeData::get_FullTypeName()
extern "C"  String_t* TypeData_get_FullTypeName_m2969171957 (TypeData_t3837952962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.SchemaTypes System.Xml.Serialization.TypeData::get_SchemaType()
extern "C"  int32_t TypeData_get_SchemaType_m1693934194 (TypeData_t3837952962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsListType()
extern "C"  bool TypeData_get_IsListType_m1977463454 (TypeData_t3837952962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsComplexType()
extern "C"  bool TypeData_get_IsComplexType_m115025350 (TypeData_t3837952962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsValueType()
extern "C"  bool TypeData_get_IsValueType_m321491079 (TypeData_t3837952962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsNullable()
extern "C"  bool TypeData_get_IsNullable_m3895772871 (TypeData_t3837952962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::set_IsNullable(System.Boolean)
extern "C"  void TypeData_set_IsNullable_m1764739194 (TypeData_t3837952962 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::get_ListItemTypeData()
extern "C"  TypeData_t3837952962 * TypeData_get_ListItemTypeData_m3943692862 (TypeData_t3837952962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::get_ListItemType()
extern "C"  Type_t * TypeData_get_ListItemType_m2794988341 (TypeData_t3837952962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsXsdType()
extern "C"  bool TypeData_get_IsXsdType_m3775213727 (TypeData_t3837952962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_HasPublicConstructor()
extern "C"  bool TypeData_get_HasPublicConstructor_m3359090099 (TypeData_t3837952962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Xml.Serialization.TypeData::GetIndexerProperty(System.Type)
extern "C"  PropertyInfo_t * TypeData_GetIndexerProperty_m3778817866 (Il2CppObject * __this /* static, unused */, Type_t * ___collectionType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.InvalidOperationException System.Xml.Serialization.TypeData::CreateMissingAddMethodException(System.Type,System.String,System.Type)
extern "C"  InvalidOperationException_t2420574324 * TypeData_CreateMissingAddMethodException_m1061219609 (Il2CppObject * __this /* static, unused */, Type_t * ___type, String_t* ___inheritFrom, Type_t * ___argumentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::GetGenericListItemType(System.Type)
extern "C"  Type_t * TypeData_GetGenericListItemType_m510784044 (TypeData_t3837952962 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
