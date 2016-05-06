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

// System.Xml.Serialization.XmlReflectionImporter
struct XmlReflectionImporter_t3346079314;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t186122464;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t988104027;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t2483700417;
// System.Xml.Serialization.TypeData
struct TypeData_t3837952962;
// System.Xml.Serialization.XmlAttributes
struct XmlAttributes_t2892492364;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t757519331;
// System.Xml.Serialization.XmlReflectionMember
struct XmlReflectionMember_t891190874;
// System.Xml.Serialization.XmlTypeMapElementInfoList
struct XmlTypeMapElementInfoList_t3690603483;
// System.Xml.Serialization.XmlTypeMapMemberElement
struct XmlTypeMapMemberElement_t1386704533;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributeOve186122464.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "System_Xml_System_Xml_Serialization_XmlRootAttribu2483700417.h"
#include "System_Xml_System_Xml_Serialization_TypeData3837952962.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapping988104027.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributes2892492364.h"
#include "System_Xml_System_Xml_Serialization_XmlReflectionMe891190874.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMemb1386704533.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapElem3690603483.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Xml.Serialization.XmlReflectionImporter::.ctor(System.Xml.Serialization.XmlAttributeOverrides,System.String)
extern "C"  void XmlReflectionImporter__ctor_m3546538387 (XmlReflectionImporter_t3346079314 * __this, XmlAttributeOverrides_t186122464 * ___attributeOverrides, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::.cctor()
extern "C"  void XmlReflectionImporter__cctor_m2165927656 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type)
extern "C"  XmlTypeMapping_t988104027 * XmlReflectionImporter_ImportTypeMapping_m1477374953 (XmlReflectionImporter_t3346079314 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type,System.String)
extern "C"  XmlTypeMapping_t988104027 * XmlReflectionImporter_ImportTypeMapping_m1184272485 (XmlReflectionImporter_t3346079314 * __this, Type_t * ___type, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t988104027 * XmlReflectionImporter_ImportTypeMapping_m4129187674 (XmlReflectionImporter_t3346079314 * __this, Type_t * ___type, XmlRootAttribute_t2483700417 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t988104027 * XmlReflectionImporter_ImportTypeMapping_m3880975803 (XmlReflectionImporter_t3346079314 * __this, TypeData_t3837952962 * ___typeData, XmlRootAttribute_t2483700417 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::CreateTypeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String,System.String)
extern "C"  XmlTypeMapping_t988104027 * XmlReflectionImporter_CreateTypeMapping_m2215889550 (XmlReflectionImporter_t3346079314 * __this, TypeData_t3837952962 * ___typeData, XmlRootAttribute_t2483700417 * ___root, String_t* ___defaultXmlType, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportClassMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t988104027 * XmlReflectionImporter_ImportClassMapping_m4281043886 (XmlReflectionImporter_t3346079314 * __this, Type_t * ___type, XmlRootAttribute_t2483700417 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportClassMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t988104027 * XmlReflectionImporter_ImportClassMapping_m1249078031 (XmlReflectionImporter_t3346079314 * __this, TypeData_t3837952962 * ___typeData, XmlRootAttribute_t2483700417 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::RegisterDerivedMap(System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.XmlTypeMapping)
extern "C"  void XmlReflectionImporter_RegisterDerivedMap_m3264893851 (XmlReflectionImporter_t3346079314 * __this, XmlTypeMapping_t988104027 * ___map, XmlTypeMapping_t988104027 * ___derivedMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlReflectionImporter::GetTypeNamespace(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  String_t* XmlReflectionImporter_GetTypeNamespace_m2770405118 (XmlReflectionImporter_t3346079314 * __this, TypeData_t3837952962 * ___typeData, XmlRootAttribute_t2483700417 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportListMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String,System.Xml.Serialization.XmlAttributes,System.Int32)
extern "C"  XmlTypeMapping_t988104027 * XmlReflectionImporter_ImportListMapping_m2090871817 (XmlReflectionImporter_t3346079314 * __this, Type_t * ___type, XmlRootAttribute_t2483700417 * ___root, String_t* ___defaultNamespace, XmlAttributes_t2892492364 * ___atts, int32_t ___nestingLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportListMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String,System.Xml.Serialization.XmlAttributes,System.Int32)
extern "C"  XmlTypeMapping_t988104027 * XmlReflectionImporter_ImportListMapping_m1868833002 (XmlReflectionImporter_t3346079314 * __this, TypeData_t3837952962 * ___typeData, XmlRootAttribute_t2483700417 * ___root, String_t* ___defaultNamespace, XmlAttributes_t2892492364 * ___atts, int32_t ___nestingLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportXmlNodeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t988104027 * XmlReflectionImporter_ImportXmlNodeMapping_m3126312272 (XmlReflectionImporter_t3346079314 * __this, TypeData_t3837952962 * ___typeData, XmlRootAttribute_t2483700417 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportPrimitiveMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t988104027 * XmlReflectionImporter_ImportPrimitiveMapping_m764540222 (XmlReflectionImporter_t3346079314 * __this, TypeData_t3837952962 * ___typeData, XmlRootAttribute_t2483700417 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportEnumMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t988104027 * XmlReflectionImporter_ImportEnumMapping_m3873708482 (XmlReflectionImporter_t3346079314 * __this, TypeData_t3837952962 * ___typeData, XmlRootAttribute_t2483700417 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportXmlSerializableMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t988104027 * XmlReflectionImporter_ImportXmlSerializableMapping_m2671709965 (XmlReflectionImporter_t3346079314 * __this, TypeData_t3837952962 * ___typeData, XmlRootAttribute_t2483700417 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::ImportIncludedTypes(System.Type,System.String)
extern "C"  void XmlReflectionImporter_ImportIncludedTypes_m4244823514 (XmlReflectionImporter_t3346079314 * __this, Type_t * ___type, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.XmlReflectionImporter::GetReflectionMembers(System.Type)
extern "C"  Il2CppObject * XmlReflectionImporter_GetReflectionMembers_m3636222560 (XmlReflectionImporter_t3346079314 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.XmlReflectionImporter::CreateMapMember(System.Type,System.Xml.Serialization.XmlReflectionMember,System.String)
extern "C"  XmlTypeMapMember_t757519331 * XmlReflectionImporter_CreateMapMember_m1348048932 (XmlReflectionImporter_t3346079314 * __this, Type_t * ___declaringType, XmlReflectionMember_t891190874 * ___rmember, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.XmlReflectionImporter::ImportElementInfo(System.Type,System.String,System.String,System.Type,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes)
extern "C"  XmlTypeMapElementInfoList_t3690603483 * XmlReflectionImporter_ImportElementInfo_m2490944109 (XmlReflectionImporter_t3346079314 * __this, Type_t * ___cls, String_t* ___defaultName, String_t* ___defaultNamespace, Type_t * ___defaultType, XmlTypeMapMemberElement_t1386704533 * ___member, XmlAttributes_t2892492364 * ___atts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.XmlReflectionImporter::ImportAnyElementInfo(System.String,System.Xml.Serialization.XmlReflectionMember,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes)
extern "C"  XmlTypeMapElementInfoList_t3690603483 * XmlReflectionImporter_ImportAnyElementInfo_m2490486255 (XmlReflectionImporter_t3346079314 * __this, String_t* ___defaultNamespace, XmlReflectionMember_t891190874 * ___rmember, XmlTypeMapMemberElement_t1386704533 * ___member, XmlAttributes_t2892492364 * ___atts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::ImportTextElementInfo(System.Xml.Serialization.XmlTypeMapElementInfoList,System.Type,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes,System.String)
extern "C"  void XmlReflectionImporter_ImportTextElementInfo_m1591165834 (XmlReflectionImporter_t3346079314 * __this, XmlTypeMapElementInfoList_t3690603483 * ___list, Type_t * ___defaultType, XmlTypeMapMemberElement_t1386704533 * ___member, XmlAttributes_t2892492364 * ___atts, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlReflectionImporter::CanBeNull(System.Xml.Serialization.TypeData)
extern "C"  bool XmlReflectionImporter_CanBeNull_m8119077 (XmlReflectionImporter_t3346079314 * __this, TypeData_t3837952962 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::IncludeType(System.Type)
extern "C"  void XmlReflectionImporter_IncludeType_m646437332 (XmlReflectionImporter_t3346079314 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlReflectionImporter::GetDefaultValue(System.Xml.Serialization.TypeData,System.Object)
extern "C"  Il2CppObject * XmlReflectionImporter_GetDefaultValue_m917009300 (XmlReflectionImporter_t3346079314 * __this, TypeData_t3837952962 * ___typeData, Il2CppObject * ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
