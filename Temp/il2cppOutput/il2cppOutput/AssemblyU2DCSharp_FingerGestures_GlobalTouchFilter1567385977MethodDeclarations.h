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

// FingerGestures/GlobalTouchFilterDelegate
struct GlobalTouchFilterDelegate_t1567385977;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector23525329788MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void FingerGestures/GlobalTouchFilterDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void GlobalTouchFilterDelegate__ctor_m2788909956 (GlobalTouchFilterDelegate_t1567385977 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/GlobalTouchFilterDelegate::Invoke(System.Int32,UnityEngine.Vector2)
extern "C"  bool GlobalTouchFilterDelegate_Invoke_m2639575 (GlobalTouchFilterDelegate_t1567385977 * __this, int32_t ___fingerIndex, Vector2_t3525329788  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_GlobalTouchFilterDelegate_t1567385977(Il2CppObject* delegate, int32_t ___fingerIndex, Vector2_t3525329788  ___position);
// System.IAsyncResult FingerGestures/GlobalTouchFilterDelegate::BeginInvoke(System.Int32,UnityEngine.Vector2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GlobalTouchFilterDelegate_BeginInvoke_m1345281204 (GlobalTouchFilterDelegate_t1567385977 * __this, int32_t ___fingerIndex, Vector2_t3525329788  ___position, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/GlobalTouchFilterDelegate::EndInvoke(System.IAsyncResult)
extern "C"  bool GlobalTouchFilterDelegate_EndInvoke_m2408026696 (GlobalTouchFilterDelegate_t1567385977 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
