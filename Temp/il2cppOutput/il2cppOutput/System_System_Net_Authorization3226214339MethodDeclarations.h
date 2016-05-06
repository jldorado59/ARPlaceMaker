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

// System.Net.Authorization
struct Authorization_t3226214339;
// System.String
struct String_t;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t486080599;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Net.Authorization::.ctor(System.String)
extern "C"  void Authorization__ctor_m2068423663 (Authorization_t3226214339 * __this, String_t* ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::.ctor(System.String,System.Boolean)
extern "C"  void Authorization__ctor_m3964302254 (Authorization_t3226214339 * __this, String_t* ___token, bool ___complete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::.ctor(System.String,System.Boolean,System.String)
extern "C"  void Authorization__ctor_m1461752682 (Authorization_t3226214339 * __this, String_t* ___token, bool ___complete, String_t* ___connectionGroupId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Authorization::get_Message()
extern "C"  String_t* Authorization_get_Message_m3479035884 (Authorization_t3226214339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Authorization::get_Complete()
extern "C"  bool Authorization_get_Complete_m47192841 (Authorization_t3226214339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IAuthenticationModule System.Net.Authorization::get_Module()
extern "C"  Il2CppObject * Authorization_get_Module_m2673205832 (Authorization_t3226214339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::set_Module(System.Net.IAuthenticationModule)
extern "C"  void Authorization_set_Module_m275959517 (Authorization_t3226214339 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
