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

// System.Net.FtpAsyncResult
struct FtpAsyncResult_t1608781441;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Object
struct Il2CppObject;
// System.Threading.WaitHandle
struct WaitHandle_t361062656;
// System.Exception
struct Exception_t1967233988;
// System.Net.FtpWebResponse
struct FtpWebResponse_t3279279229;
// System.IO.Stream
struct Stream_t219029575;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_Exception1967233988.h"
#include "System_System_Net_FtpWebResponse3279279229.h"

// System.Void System.Net.FtpAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void FtpAsyncResult__ctor_m996159919 (FtpAsyncResult_t1608781441 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.FtpAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * FtpAsyncResult_get_AsyncState_m2681175690 (FtpAsyncResult_t1608781441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.FtpAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t361062656 * FtpAsyncResult_get_AsyncWaitHandle_m3104266194 (FtpAsyncResult_t1608781441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_IsCompleted()
extern "C"  bool FtpAsyncResult_get_IsCompleted_m2040148559 (FtpAsyncResult_t1608781441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_GotException()
extern "C"  bool FtpAsyncResult_get_GotException_m2919804343 (FtpAsyncResult_t1608781441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpAsyncResult::get_Exception()
extern "C"  Exception_t1967233988 * FtpAsyncResult_get_Exception_m2991776342 (FtpAsyncResult_t1608781441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebResponse System.Net.FtpAsyncResult::get_Response()
extern "C"  FtpWebResponse_t3279279229 * FtpAsyncResult_get_Response_m3336946139 (FtpAsyncResult_t1608781441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Stream(System.IO.Stream)
extern "C"  void FtpAsyncResult_set_Stream_m3014354805 (FtpAsyncResult_t1608781441 * __this, Stream_t219029575 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C"  bool FtpAsyncResult_WaitUntilComplete_m1609274803 (FtpAsyncResult_t1608781441 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception,System.Net.FtpWebResponse)
extern "C"  void FtpAsyncResult_SetCompleted_m2460255838 (FtpAsyncResult_t1608781441 * __this, bool ___synch, Exception_t1967233988 * ___exc, FtpWebResponse_t3279279229 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Net.FtpWebResponse)
extern "C"  void FtpAsyncResult_SetCompleted_m1997870026 (FtpAsyncResult_t1608781441 * __this, bool ___synch, FtpWebResponse_t3279279229 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C"  void FtpAsyncResult_SetCompleted_m3064165237 (FtpAsyncResult_t1608781441 * __this, bool ___synch, Exception_t1967233988 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::DoCallback()
extern "C"  void FtpAsyncResult_DoCallback_m2621895697 (FtpAsyncResult_t1608781441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
