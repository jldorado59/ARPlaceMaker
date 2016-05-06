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

// TBPan/PanEventHandler
struct PanEventHandler_t2401301613;
// System.Object
struct Il2CppObject;
// TBPan
struct TBPan_t79621967;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_TBPan79621967.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void TBPan/PanEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void PanEventHandler__ctor_m2940675844 (PanEventHandler_t2401301613 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan/PanEventHandler::Invoke(TBPan,UnityEngine.Vector3)
extern "C"  void PanEventHandler_Invoke_m1855808696 (PanEventHandler_t2401301613 * __this, TBPan_t79621967 * ___source, Vector3_t3525329789  ___move, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_PanEventHandler_t2401301613(Il2CppObject* delegate, TBPan_t79621967 * ___source, Vector3_t3525329789  ___move);
// System.IAsyncResult TBPan/PanEventHandler::BeginInvoke(TBPan,UnityEngine.Vector3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PanEventHandler_BeginInvoke_m3879500573 (PanEventHandler_t2401301613 * __this, TBPan_t79621967 * ___source, Vector3_t3525329789  ___move, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan/PanEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void PanEventHandler_EndInvoke_m4163812116 (PanEventHandler_t2401301613 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
