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
// System.Net.WebRequest
struct WebRequest_t3488810021;
// System.Net.ICredentials
struct ICredentials_t2307785309;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Net_WebRequest3488810021.h"

// System.Void System.Net.AuthenticationManager::.cctor()
extern "C"  void AuthenticationManager__cctor_m4133232566 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::EnsureModules()
extern "C"  void AuthenticationManager_EnsureModules_m3823797022 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t3226214339 * AuthenticationManager_Authenticate_m926148532 (Il2CppObject * __this /* static, unused */, String_t* ___challenge, WebRequest_t3488810021 * ___request, Il2CppObject * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::DoAuthenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t3226214339 * AuthenticationManager_DoAuthenticate_m3748190185 (Il2CppObject * __this /* static, unused */, String_t* ___challenge, WebRequest_t3488810021 * ___request, Il2CppObject * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t3226214339 * AuthenticationManager_PreAuthenticate_m2542705561 (Il2CppObject * __this /* static, unused */, WebRequest_t3488810021 * ___request, Il2CppObject * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
