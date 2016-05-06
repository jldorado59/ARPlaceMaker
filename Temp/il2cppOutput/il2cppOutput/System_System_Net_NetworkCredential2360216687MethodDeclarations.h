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

// System.Net.NetworkCredential
struct NetworkCredential_t2360216687;
// System.String
struct String_t;
// System.Uri
struct Uri_t2776692961;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_String968488902.h"

// System.String System.Net.NetworkCredential::get_Domain()
extern "C"  String_t* NetworkCredential_get_Domain_m1006306893 (NetworkCredential_t2360216687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C"  String_t* NetworkCredential_get_UserName_m3369838591 (NetworkCredential_t2360216687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C"  String_t* NetworkCredential_get_Password_m3230765156 (NetworkCredential_t2360216687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C"  NetworkCredential_t2360216687 * NetworkCredential_GetCredential_m1548991703 (NetworkCredential_t2360216687 * __this, Uri_t2776692961 * ___uri, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
