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

// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t835016574;
// System.Object
struct Il2CppObject;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1099177929;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_Net_WebHeaderCollection1099177929.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Net.HttpContinueDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void HttpContinueDelegate__ctor_m2092117820 (HttpContinueDelegate_t835016574 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::Invoke(System.Int32,System.Net.WebHeaderCollection)
extern "C"  void HttpContinueDelegate_Invoke_m1655092752 (HttpContinueDelegate_t835016574 * __this, int32_t ___StatusCode, WebHeaderCollection_t1099177929 * ___httpHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_HttpContinueDelegate_t835016574(Il2CppObject* delegate, int32_t ___StatusCode, WebHeaderCollection_t1099177929 * ___httpHeaders);
// System.IAsyncResult System.Net.HttpContinueDelegate::BeginInvoke(System.Int32,System.Net.WebHeaderCollection,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HttpContinueDelegate_BeginInvoke_m2329366165 (HttpContinueDelegate_t835016574 * __this, int32_t ___StatusCode, WebHeaderCollection_t1099177929 * ___httpHeaders, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void HttpContinueDelegate_EndInvoke_m697802572 (HttpContinueDelegate_t835016574 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
