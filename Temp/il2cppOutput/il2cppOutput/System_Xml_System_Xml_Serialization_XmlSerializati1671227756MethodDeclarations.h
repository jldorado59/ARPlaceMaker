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

// System.Xml.Serialization.XmlSerializationWriterInterpreter
struct XmlSerializationWriterInterpreter_t1671227756;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t2344951413;
// System.Object
struct Il2CppObject;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t988104027;
// System.String
struct String_t;
// System.Xml.Serialization.XmlMembersMapping
struct XmlMembersMapping_t2913331946;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Xml.Serialization.ClassMap
struct ClassMap_t912207490;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t757519331;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t3184170653;
// System.Type
struct Type_t;
// System.Xml.Serialization.TypeData
struct TypeData_t3837952962;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Serialization.ListMap
struct ListMap_t2001748316;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t2899433779;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Serialization_XmlMapping2344951413.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapping988104027.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Serialization_XmlMembersMapp2913331946.h"
#include "System_Xml_System_Xml_Serialization_ClassMap912207490.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMembe757519331.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapElem3184170653.h"
#include "mscorlib_System_Type2779229935.h"
#include "System_Xml_System_Xml_Serialization_TypeData3837952962.h"
#include "System_Xml_System_Xml_XmlQualifiedName176365656.h"
#include "System_Xml_System_Xml_Serialization_ListMap2001748316.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMemb2899433779.h"

// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::.ctor(System.Xml.Serialization.XmlMapping)
extern "C"  void XmlSerializationWriterInterpreter__ctor_m2777107676 (XmlSerializationWriterInterpreter_t1671227756 * __this, XmlMapping_t2344951413 * ___typeMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::InitCallbacks()
extern "C"  void XmlSerializationWriterInterpreter_InitCallbacks_m1072713159 (XmlSerializationWriterInterpreter_t1671227756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteRoot(System.Object)
extern "C"  void XmlSerializationWriterInterpreter_WriteRoot_m2582998282 (XmlSerializationWriterInterpreter_t1671227756 * __this, Il2CppObject * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObject(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void XmlSerializationWriterInterpreter_WriteObject_m246499773 (XmlSerializationWriterInterpreter_t1671227756 * __this, XmlTypeMapping_t988104027 * ___typeMap, Il2CppObject * ___ob, String_t* ___element, String_t* ___namesp, bool ___isNullable, bool ___needType, bool ___writeWrappingElem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteMessage(System.Xml.Serialization.XmlMembersMapping,System.Object[])
extern "C"  void XmlSerializationWriterInterpreter_WriteMessage_m3375648597 (XmlSerializationWriterInterpreter_t1671227756 * __this, XmlMembersMapping_t2913331946 * ___membersMap, ObjectU5BU5D_t11523773* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObjectElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
extern "C"  void XmlSerializationWriterInterpreter_WriteObjectElement_m2323175056 (XmlSerializationWriterInterpreter_t1671227756 * __this, XmlTypeMapping_t988104027 * ___typeMap, Il2CppObject * ___ob, String_t* ___element, String_t* ___namesp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObjectElementAttributes(System.Xml.Serialization.XmlTypeMapping,System.Object)
extern "C"  void XmlSerializationWriterInterpreter_WriteObjectElementAttributes_m3076054849 (XmlSerializationWriterInterpreter_t1671227756 * __this, XmlTypeMapping_t988104027 * ___typeMap, Il2CppObject * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObjectElementElements(System.Xml.Serialization.XmlTypeMapping,System.Object)
extern "C"  void XmlSerializationWriterInterpreter_WriteObjectElementElements_m2232415777 (XmlSerializationWriterInterpreter_t1671227756 * __this, XmlTypeMapping_t988104027 * ___typeMap, Il2CppObject * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C"  void XmlSerializationWriterInterpreter_WriteMembers_m195660520 (XmlSerializationWriterInterpreter_t1671227756 * __this, ClassMap_t912207490 * ___map, Il2CppObject * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteAttributeMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C"  void XmlSerializationWriterInterpreter_WriteAttributeMembers_m486567386 (XmlSerializationWriterInterpreter_t1671227756 * __this, ClassMap_t912207490 * ___map, Il2CppObject * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteElementMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C"  void XmlSerializationWriterInterpreter_WriteElementMembers_m2438908730 (XmlSerializationWriterInterpreter_t1671227756 * __this, ClassMap_t912207490 * ___map, Il2CppObject * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationWriterInterpreter::GetMemberValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationWriterInterpreter_GetMemberValue_m2777931525 (XmlSerializationWriterInterpreter_t1671227756 * __this, XmlTypeMapMember_t757519331 * ___member, Il2CppObject * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationWriterInterpreter::MemberHasValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Boolean)
extern "C"  bool XmlSerializationWriterInterpreter_MemberHasValue_m1854916872 (XmlSerializationWriterInterpreter_t1671227756 * __this, XmlTypeMapMember_t757519331 * ___member, Il2CppObject * ___ob, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteMemberElement(System.Xml.Serialization.XmlTypeMapElementInfo,System.Object)
extern "C"  void XmlSerializationWriterInterpreter_WriteMemberElement_m884687583 (XmlSerializationWriterInterpreter_t1671227756 * __this, XmlTypeMapElementInfo_t3184170653 * ___elem, Il2CppObject * ___memberValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationWriterInterpreter::ImplicitConvert(System.Object,System.Type)
extern "C"  Il2CppObject * XmlSerializationWriterInterpreter_ImplicitConvert_m2748108773 (XmlSerializationWriterInterpreter_t1671227756 * __this, Il2CppObject * ___obj, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WritePrimitiveValueLiteral(System.Object,System.String,System.String,System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.TypeData,System.Boolean,System.Boolean)
extern "C"  void XmlSerializationWriterInterpreter_WritePrimitiveValueLiteral_m3733720316 (XmlSerializationWriterInterpreter_t1671227756 * __this, Il2CppObject * ___memberValue, String_t* ___name, String_t* ___ns, XmlTypeMapping_t988104027 * ___mappedType, TypeData_t3837952962 * ___typeData, bool ___wrapped, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WritePrimitiveValueEncoded(System.Object,System.String,System.String,System.Xml.XmlQualifiedName,System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.TypeData,System.Boolean,System.Boolean)
extern "C"  void XmlSerializationWriterInterpreter_WritePrimitiveValueEncoded_m588607427 (XmlSerializationWriterInterpreter_t1671227756 * __this, Il2CppObject * ___memberValue, String_t* ___name, String_t* ___ns, XmlQualifiedName_t176365656 * ___xsiType, XmlTypeMapping_t988104027 * ___mappedType, TypeData_t3837952962 * ___typeData, bool ___wrapped, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteListElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
extern "C"  void XmlSerializationWriterInterpreter_WriteListElement_m1737646319 (XmlSerializationWriterInterpreter_t1671227756 * __this, XmlTypeMapping_t988104027 * ___typeMap, Il2CppObject * ___ob, String_t* ___element, String_t* ___namesp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteListContent(System.Object,System.Xml.Serialization.TypeData,System.Xml.Serialization.ListMap,System.Object,System.Text.StringBuilder)
extern "C"  void XmlSerializationWriterInterpreter_WriteListContent_m4184880763 (XmlSerializationWriterInterpreter_t1671227756 * __this, Il2CppObject * ___container, TypeData_t3837952962 * ___listType, ListMap_t2001748316 * ___map, Il2CppObject * ___ob, StringBuilder_t3822575854 * ___targetString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlSerializationWriterInterpreter::GetListCount(System.Xml.Serialization.TypeData,System.Object)
extern "C"  int32_t XmlSerializationWriterInterpreter_GetListCount_m1323969298 (XmlSerializationWriterInterpreter_t1671227756 * __this, TypeData_t3837952962 * ___listType, Il2CppObject * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteAnyElementContent(System.Xml.Serialization.XmlTypeMapMemberAnyElement,System.Object)
extern "C"  void XmlSerializationWriterInterpreter_WriteAnyElementContent_m4045039636 (XmlSerializationWriterInterpreter_t1671227756 * __this, XmlTypeMapMemberAnyElement_t2899433779 * ___member, Il2CppObject * ___memberValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WritePrimitiveElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
extern "C"  void XmlSerializationWriterInterpreter_WritePrimitiveElement_m191590282 (XmlSerializationWriterInterpreter_t1671227756 * __this, XmlTypeMapping_t988104027 * ___typeMap, Il2CppObject * ___ob, String_t* ___element, String_t* ___namesp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteEnumElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
extern "C"  void XmlSerializationWriterInterpreter_WriteEnumElement_m3368888210 (XmlSerializationWriterInterpreter_t1671227756 * __this, XmlTypeMapping_t988104027 * ___typeMap, Il2CppObject * ___ob, String_t* ___element, String_t* ___namesp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriterInterpreter::GetStringValue(System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.TypeData,System.Object)
extern "C"  String_t* XmlSerializationWriterInterpreter_GetStringValue_m4202024733 (XmlSerializationWriterInterpreter_t1671227756 * __this, XmlTypeMapping_t988104027 * ___typeMap, TypeData_t3837952962 * ___type, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriterInterpreter::GetEnumXmlValue(System.Xml.Serialization.XmlTypeMapping,System.Object)
extern "C"  String_t* XmlSerializationWriterInterpreter_GetEnumXmlValue_m4038408248 (XmlSerializationWriterInterpreter_t1671227756 * __this, XmlTypeMapping_t988104027 * ___typeMap, Il2CppObject * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
