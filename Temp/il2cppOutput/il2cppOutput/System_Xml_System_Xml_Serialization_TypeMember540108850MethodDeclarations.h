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

// System.Xml.Serialization.TypeMember
struct TypeMember_t540108850;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Serialization_TypeMember540108850.h"

// System.Void System.Xml.Serialization.TypeMember::.ctor(System.Type,System.String)
extern "C"  void TypeMember__ctor_m3361941244 (TypeMember_t540108850 * __this, Type_t * ___type, String_t* ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.TypeMember::GetHashCode()
extern "C"  int32_t TypeMember_GetHashCode_m797651050 (TypeMember_t540108850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeMember::Equals(System.Object)
extern "C"  bool TypeMember_Equals_m1066000722 (TypeMember_t540108850 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeMember::Equals(System.Xml.Serialization.TypeMember,System.Xml.Serialization.TypeMember)
extern "C"  bool TypeMember_Equals_m4247592268 (Il2CppObject * __this /* static, unused */, TypeMember_t540108850 * ___tm1, TypeMember_t540108850 * ___tm2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeMember::ToString()
extern "C"  String_t* TypeMember_ToString_m2237685364 (TypeMember_t540108850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
