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

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t3432073175;
// System.Net.ServicePoint
struct ServicePoint_t28240741;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t1124289692;
// System.Net.HttpWebRequest
struct HttpWebRequest_t171953869;
// System.Collections.Queue
struct Queue_t1621224067;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_ServicePoint28240741.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Net_HttpWebRequest171953869.h"
#include "System_System_Net_WebConnection1124289692.h"

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C"  void WebConnectionGroup__ctor_m1503299254 (WebConnectionGroup_t3432073175 * __this, ServicePoint_t28240741 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C"  WebConnection_t1124289692 * WebConnectionGroup_GetConnection_m3061212227 (WebConnectionGroup_t3432073175 * __this, HttpWebRequest_t171953869 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C"  void WebConnectionGroup_PrepareSharingNtlm_m4279924202 (Il2CppObject * __this /* static, unused */, WebConnection_t1124289692 * ___cnc, HttpWebRequest_t171953869 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C"  WebConnection_t1124289692 * WebConnectionGroup_CreateOrReuseConnection_m1829131780 (WebConnectionGroup_t3432073175 * __this, HttpWebRequest_t171953869 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C"  Queue_t1621224067 * WebConnectionGroup_get_Queue_m318446937 (WebConnectionGroup_t3432073175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
