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

// System.Xml.Serialization.ClassMap
struct ClassMap_t912207490;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t757519331;
// System.Xml.Serialization.XmlTypeMapMemberExpandable
struct XmlTypeMapMemberExpandable_t1849554103;
// System.Xml.Serialization.XmlTypeMapMemberAttribute
struct XmlTypeMapMemberAttribute_t2837866357;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t3184170653;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t2899433779;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute
struct XmlTypeMapMemberAnyAttribute_t576758419;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces
struct XmlTypeMapMemberNamespaces_t1473492027;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMembe757519331.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMemb1849554103.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Xml.Serialization.ClassMap::.ctor()
extern "C"  void ClassMap__ctor_m3728665929 (ClassMap_t912207490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::AddMember(System.Xml.Serialization.XmlTypeMapMember)
extern "C"  void ClassMap_AddMember_m1875253975 (ClassMap_t912207490 * __this, XmlTypeMapMember_t757519331 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::RegisterFlatList(System.Xml.Serialization.XmlTypeMapMemberExpandable)
extern "C"  void ClassMap_RegisterFlatList_m688271440 (ClassMap_t912207490 * __this, XmlTypeMapMemberExpandable_t1849554103 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAttribute System.Xml.Serialization.ClassMap::GetAttribute(System.String,System.String)
extern "C"  XmlTypeMapMemberAttribute_t2837866357 * ClassMap_GetAttribute_m3196217067 (ClassMap_t912207490 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ClassMap::GetElement(System.String,System.String)
extern "C"  XmlTypeMapElementInfo_t3184170653 * ClassMap_GetElement_m3737748067 (ClassMap_t912207490 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ClassMap::GetElement(System.Int32)
extern "C"  XmlTypeMapElementInfo_t3184170653 * ClassMap_GetElement_m4004624716 (ClassMap_t912207490 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.ClassMap::BuildKey(System.String,System.String)
extern "C"  String_t* ClassMap_BuildKey_m733643573 (ClassMap_t912207490 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement System.Xml.Serialization.ClassMap::get_DefaultAnyElementMember()
extern "C"  XmlTypeMapMemberAnyElement_t2899433779 * ClassMap_get_DefaultAnyElementMember_m3724699635 (ClassMap_t912207490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute System.Xml.Serialization.ClassMap::get_DefaultAnyAttributeMember()
extern "C"  XmlTypeMapMemberAnyAttribute_t576758419 * ClassMap_get_DefaultAnyAttributeMember_m2749385715 (ClassMap_t912207490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces System.Xml.Serialization.ClassMap::get_NamespaceDeclarations()
extern "C"  XmlTypeMapMemberNamespaces_t1473492027 * ClassMap_get_NamespaceDeclarations_m3505324052 (ClassMap_t912207490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.ClassMap::get_AttributeMembers()
extern "C"  Il2CppObject * ClassMap_get_AttributeMembers_m3649534527 (ClassMap_t912207490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.ClassMap::get_ElementMembers()
extern "C"  Il2CppObject * ClassMap_get_ElementMembers_m1176036895 (ClassMap_t912207490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_AllMembers()
extern "C"  ArrayList_t2121638921 * ClassMap_get_AllMembers_m2801991306 (ClassMap_t912207490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_FlatLists()
extern "C"  ArrayList_t2121638921 * ClassMap_get_FlatLists_m836694060 (ClassMap_t912207490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_ListMembers()
extern "C"  ArrayList_t2121638921 * ClassMap_get_ListMembers_m3321229227 (ClassMap_t912207490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::get_XmlTextCollector()
extern "C"  XmlTypeMapMember_t757519331 * ClassMap_get_XmlTextCollector_m2750672627 (ClassMap_t912207490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::get_ReturnMember()
extern "C"  XmlTypeMapMember_t757519331 * ClassMap_get_ReturnMember_m2751635476 (ClassMap_t912207490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.ClassMap::get_SimpleContentBaseType()
extern "C"  XmlQualifiedName_t176365656 * ClassMap_get_SimpleContentBaseType_m4024408541 (ClassMap_t912207490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::SetCanBeSimpleType(System.Boolean)
extern "C"  void ClassMap_SetCanBeSimpleType_m4038087023 (ClassMap_t912207490 * __this, bool ___can, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.ClassMap::get_HasSimpleContent()
extern "C"  bool ClassMap_get_HasSimpleContent_m3703916553 (ClassMap_t912207490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
