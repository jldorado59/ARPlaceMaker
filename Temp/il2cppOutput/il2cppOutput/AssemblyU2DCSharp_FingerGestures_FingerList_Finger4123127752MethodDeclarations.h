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

// FingerGestures/FingerList/FingerPropertyGetterDelegate`1<UnityEngine.Vector2>
struct FingerPropertyGetterDelegate_1_t4123127752;
// System.Object
struct Il2CppObject;
// FingerGestures/Finger
struct Finger_t2104389513;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_FingerGestures_Finger2104389513.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void FingerGestures/FingerList/FingerPropertyGetterDelegate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C"  void FingerPropertyGetterDelegate_1__ctor_m3925111086_gshared (FingerPropertyGetterDelegate_1_t4123127752 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define FingerPropertyGetterDelegate_1__ctor_m3925111086(__this, ___object, ___method, method) ((  void (*) (FingerPropertyGetterDelegate_1_t4123127752 *, Il2CppObject *, IntPtr_t, const MethodInfo*))FingerPropertyGetterDelegate_1__ctor_m3925111086_gshared)(__this, ___object, ___method, method)
// T FingerGestures/FingerList/FingerPropertyGetterDelegate`1<UnityEngine.Vector2>::Invoke(FingerGestures/Finger)
extern "C"  Vector2_t3525329788  FingerPropertyGetterDelegate_1_Invoke_m3560368676_gshared (FingerPropertyGetterDelegate_1_t4123127752 * __this, Finger_t2104389513 * ___finger, const MethodInfo* method);
#define FingerPropertyGetterDelegate_1_Invoke_m3560368676(__this, ___finger, method) ((  Vector2_t3525329788  (*) (FingerPropertyGetterDelegate_1_t4123127752 *, Finger_t2104389513 *, const MethodInfo*))FingerPropertyGetterDelegate_1_Invoke_m3560368676_gshared)(__this, ___finger, method)
// System.IAsyncResult FingerGestures/FingerList/FingerPropertyGetterDelegate`1<UnityEngine.Vector2>::BeginInvoke(FingerGestures/Finger,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FingerPropertyGetterDelegate_1_BeginInvoke_m1940481532_gshared (FingerPropertyGetterDelegate_1_t4123127752 * __this, Finger_t2104389513 * ___finger, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define FingerPropertyGetterDelegate_1_BeginInvoke_m1940481532(__this, ___finger, ___callback, ___object, method) ((  Il2CppObject * (*) (FingerPropertyGetterDelegate_1_t4123127752 *, Finger_t2104389513 *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))FingerPropertyGetterDelegate_1_BeginInvoke_m1940481532_gshared)(__this, ___finger, ___callback, ___object, method)
// T FingerGestures/FingerList/FingerPropertyGetterDelegate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C"  Vector2_t3525329788  FingerPropertyGetterDelegate_1_EndInvoke_m61610271_gshared (FingerPropertyGetterDelegate_1_t4123127752 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define FingerPropertyGetterDelegate_1_EndInvoke_m61610271(__this, ___result, method) ((  Vector2_t3525329788  (*) (FingerPropertyGetterDelegate_1_t4123127752 *, Il2CppObject *, const MethodInfo*))FingerPropertyGetterDelegate_1_EndInvoke_m61610271_gshared)(__this, ___result, method)
