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

// FingerEventDetector`1/FingerEventHandler<System.Object>
struct FingerEventHandler_t140369290;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void FingerEventDetector`1/FingerEventHandler<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void FingerEventHandler__ctor_m425058771_gshared (FingerEventHandler_t140369290 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define FingerEventHandler__ctor_m425058771(__this, ___object, ___method, method) ((  void (*) (FingerEventHandler_t140369290 *, Il2CppObject *, IntPtr_t, const MethodInfo*))FingerEventHandler__ctor_m425058771_gshared)(__this, ___object, ___method, method)
// System.Void FingerEventDetector`1/FingerEventHandler<System.Object>::Invoke(T)
extern "C"  void FingerEventHandler_Invoke_m4182135569_gshared (FingerEventHandler_t140369290 * __this, Il2CppObject * ___eventData, const MethodInfo* method);
#define FingerEventHandler_Invoke_m4182135569(__this, ___eventData, method) ((  void (*) (FingerEventHandler_t140369290 *, Il2CppObject *, const MethodInfo*))FingerEventHandler_Invoke_m4182135569_gshared)(__this, ___eventData, method)
// System.IAsyncResult FingerEventDetector`1/FingerEventHandler<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FingerEventHandler_BeginInvoke_m1896720230_gshared (FingerEventHandler_t140369290 * __this, Il2CppObject * ___eventData, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define FingerEventHandler_BeginInvoke_m1896720230(__this, ___eventData, ___callback, ___object, method) ((  Il2CppObject * (*) (FingerEventHandler_t140369290 *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))FingerEventHandler_BeginInvoke_m1896720230_gshared)(__this, ___eventData, ___callback, ___object, method)
// System.Void FingerEventDetector`1/FingerEventHandler<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void FingerEventHandler_EndInvoke_m934360419_gshared (FingerEventHandler_t140369290 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define FingerEventHandler_EndInvoke_m934360419(__this, ___result, method) ((  void (*) (FingerEventHandler_t140369290 *, Il2CppObject *, const MethodInfo*))FingerEventHandler_EndInvoke_m934360419_gshared)(__this, ___result, method)
