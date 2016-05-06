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

// System.Net.BindIPEndPoint
struct BindIPEndPoint_t3524008771;
// System.Object
struct Il2CppObject;
// System.Net.IPEndPoint
struct IPEndPoint_t1265996582;
// System.Net.ServicePoint
struct ServicePoint_t28240741;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_Net_ServicePoint28240741.h"
#include "System_System_Net_IPEndPoint1265996582.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Net.BindIPEndPoint::.ctor(System.Object,System.IntPtr)
extern "C"  void BindIPEndPoint__ctor_m218773313 (BindIPEndPoint_t3524008771 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::Invoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32)
extern "C"  IPEndPoint_t1265996582 * BindIPEndPoint_Invoke_m554750276 (BindIPEndPoint_t3524008771 * __this, ServicePoint_t28240741 * ___servicePoint, IPEndPoint_t1265996582 * ___remoteEndPoint, int32_t ___retryCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" IPEndPoint_t1265996582 * pinvoke_delegate_wrapper_BindIPEndPoint_t3524008771(Il2CppObject* delegate, ServicePoint_t28240741 * ___servicePoint, IPEndPoint_t1265996582 * ___remoteEndPoint, int32_t ___retryCount);
// System.IAsyncResult System.Net.BindIPEndPoint::BeginInvoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * BindIPEndPoint_BeginInvoke_m3404421758 (BindIPEndPoint_t3524008771 * __this, ServicePoint_t28240741 * ___servicePoint, IPEndPoint_t1265996582 * ___remoteEndPoint, int32_t ___retryCount, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::EndInvoke(System.IAsyncResult)
extern "C"  IPEndPoint_t1265996582 * BindIPEndPoint_EndInvoke_m2887424362 (BindIPEndPoint_t3524008771 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
