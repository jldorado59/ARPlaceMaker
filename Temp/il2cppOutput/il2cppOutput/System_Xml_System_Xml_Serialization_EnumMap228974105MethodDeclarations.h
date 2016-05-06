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

// System.Xml.Serialization.EnumMap
struct EnumMap_t228974105;
// System.Xml.Serialization.EnumMap/EnumMapMember[]
struct EnumMapMemberU5BU5D_t3911606680;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Int64[]
struct Int64U5BU5D_t753178071;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Xml.Serialization.EnumMap::.ctor(System.Xml.Serialization.EnumMap/EnumMapMember[],System.Boolean)
extern "C"  void EnumMap__ctor_m1389877646 (EnumMap_t228974105 * __this, EnumMapMemberU5BU5D_t3911606680* ___members, bool ___isFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.EnumMap::get_IsFlags()
extern "C"  bool EnumMap_get_IsFlags_m2407749736 (EnumMap_t228974105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Serialization.EnumMap::get_EnumNames()
extern "C"  StringU5BU5D_t2956870243* EnumMap_get_EnumNames_m2965856409 (EnumMap_t228974105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Serialization.EnumMap::get_XmlNames()
extern "C"  StringU5BU5D_t2956870243* EnumMap_get_XmlNames_m554155393 (EnumMap_t228974105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64[] System.Xml.Serialization.EnumMap::get_Values()
extern "C"  Int64U5BU5D_t753178071* EnumMap_get_Values_m2390395762 (EnumMap_t228974105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.EnumMap::GetXmlName(System.String,System.Object)
extern "C"  String_t* EnumMap_GetXmlName_m407677947 (EnumMap_t228974105 * __this, String_t* ___typeName, Il2CppObject * ___enumValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.EnumMap::GetEnumName(System.String,System.String)
extern "C"  String_t* EnumMap_GetEnumName_m2804311267 (EnumMap_t228974105 * __this, String_t* ___typeName, String_t* ___xmlName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
