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

// GestureRecognizer`1/GestureEventHandler<System.Object>
struct GestureEventHandler_t3587555882;
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

// System.Void GestureRecognizer`1/GestureEventHandler<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void GestureEventHandler__ctor_m3713597243_gshared (GestureEventHandler_t3587555882 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define GestureEventHandler__ctor_m3713597243(__this, ___object, ___method, method) ((  void (*) (GestureEventHandler_t3587555882 *, Il2CppObject *, IntPtr_t, const MethodInfo*))GestureEventHandler__ctor_m3713597243_gshared)(__this, ___object, ___method, method)
// System.Void GestureRecognizer`1/GestureEventHandler<System.Object>::Invoke(T)
extern "C"  void GestureEventHandler_Invoke_m470757545_gshared (GestureEventHandler_t3587555882 * __this, Il2CppObject * ___gesture, const MethodInfo* method);
#define GestureEventHandler_Invoke_m470757545(__this, ___gesture, method) ((  void (*) (GestureEventHandler_t3587555882 *, Il2CppObject *, const MethodInfo*))GestureEventHandler_Invoke_m470757545_gshared)(__this, ___gesture, method)
// System.IAsyncResult GestureRecognizer`1/GestureEventHandler<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GestureEventHandler_BeginInvoke_m1188271990_gshared (GestureEventHandler_t3587555882 * __this, Il2CppObject * ___gesture, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define GestureEventHandler_BeginInvoke_m1188271990(__this, ___gesture, ___callback, ___object, method) ((  Il2CppObject * (*) (GestureEventHandler_t3587555882 *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))GestureEventHandler_BeginInvoke_m1188271990_gshared)(__this, ___gesture, ___callback, ___object, method)
// System.Void GestureRecognizer`1/GestureEventHandler<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void GestureEventHandler_EndInvoke_m1936410315_gshared (GestureEventHandler_t3587555882 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define GestureEventHandler_EndInvoke_m1936410315(__this, ___result, method) ((  void (*) (GestureEventHandler_t3587555882 *, Il2CppObject *, const MethodInfo*))GestureEventHandler_EndInvoke_m1936410315_gshared)(__this, ___result, method)
