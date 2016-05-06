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

// System.Predicate`1<PointCloudRegognizer/Point>
struct Predicate_1_t648256810;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_PointCloudRegognizer_Point77292912.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<PointCloudRegognizer/Point>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m3478604085_gshared (Predicate_1_t648256810 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m3478604085(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t648256810 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m3478604085_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<PointCloudRegognizer/Point>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m1592909997_gshared (Predicate_1_t648256810 * __this, Point_t77292912  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m1592909997(__this, ___obj, method) ((  bool (*) (Predicate_1_t648256810 *, Point_t77292912 , const MethodInfo*))Predicate_1_Invoke_m1592909997_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<PointCloudRegognizer/Point>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m946605884_gshared (Predicate_1_t648256810 * __this, Point_t77292912  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m946605884(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t648256810 *, Point_t77292912 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m946605884_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<PointCloudRegognizer/Point>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m1009615175_gshared (Predicate_1_t648256810 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m1009615175(__this, ___result, method) ((  bool (*) (Predicate_1_t648256810 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m1009615175_gshared)(__this, ___result, method)
