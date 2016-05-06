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

// System.Net.DigestClient
struct DigestClient_t3820912185;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
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

// System.Void System.Net.DigestClient::.ctor()
extern "C"  void DigestClient__ctor_m299255755 (DigestClient_t3820912185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestClient::.cctor()
extern "C"  void DigestClient__cctor_m204897602 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.DigestClient::get_Cache()
extern "C"  Hashtable_t3875263730 * DigestClient_get_Cache_m499281433 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestClient::CheckExpired(System.Int32)
extern "C"  void DigestClient_CheckExpired_m4238582311 (Il2CppObject * __this /* static, unused */, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t3226214339 * DigestClient_Authenticate_m1457292628 (DigestClient_t3820912185 * __this, String_t* ___challenge, WebRequest_t3488810021 * ___webRequest, Il2CppObject * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t3226214339 * DigestClient_PreAuthenticate_m3609215481 (DigestClient_t3820912185 * __this, WebRequest_t3488810021 * ___webRequest, Il2CppObject * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestClient::get_AuthenticationType()
extern "C"  String_t* DigestClient_get_AuthenticationType_m1949045937 (DigestClient_t3820912185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
