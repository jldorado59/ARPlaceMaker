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

// System.Net.WebAsyncResult
struct WebAsyncResult_t4198106447;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Object
struct Il2CppObject;
// System.Net.HttpWebRequest
struct HttpWebRequest_t171953869;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Exception
struct Exception_t1967233988;
// System.IO.Stream
struct Stream_t219029575;
// System.Net.HttpWebResponse
struct HttpWebResponse_t2667966807;
// System.Threading.WaitHandle
struct WaitHandle_t361062656;
// System.IAsyncResult
struct IAsyncResult_t537683269;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_Net_HttpWebRequest171953869.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "System_System_Net_HttpWebResponse2667966807.h"

// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void WebAsyncResult__ctor_m1701398049 (WebAsyncResult_t4198106447 * __this, AsyncCallback_t1363551830 * ___cb, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.Net.HttpWebRequest,System.AsyncCallback,System.Object)
extern "C"  void WebAsyncResult__ctor_m3971274728 (WebAsyncResult_t4198106447 * __this, HttpWebRequest_t171953869 * ___request, AsyncCallback_t1363551830 * ___cb, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32)
extern "C"  void WebAsyncResult__ctor_m3917357508 (WebAsyncResult_t4198106447 * __this, AsyncCallback_t1363551830 * ___cb, Il2CppObject * ___state, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C"  void WebAsyncResult_SetCompleted_m3561553639 (WebAsyncResult_t4198106447 * __this, bool ___synch, Exception_t1967233988 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::Reset()
extern "C"  void WebAsyncResult_Reset_m1140937314 (WebAsyncResult_t4198106447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Int32)
extern "C"  void WebAsyncResult_SetCompleted_m2960316168 (WebAsyncResult_t4198106447 * __this, bool ___synch, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.IO.Stream)
extern "C"  void WebAsyncResult_SetCompleted_m3009393870 (WebAsyncResult_t4198106447 * __this, bool ___synch, Stream_t219029575 * ___writeStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Net.HttpWebResponse)
extern "C"  void WebAsyncResult_SetCompleted_m400315642 (WebAsyncResult_t4198106447 * __this, bool ___synch, HttpWebResponse_t2667966807 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::DoCallback()
extern "C"  void WebAsyncResult_DoCallback_m612756063 (WebAsyncResult_t4198106447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::WaitUntilComplete()
extern "C"  void WebAsyncResult_WaitUntilComplete_m2752681109 (WebAsyncResult_t4198106447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C"  bool WebAsyncResult_WaitUntilComplete_m4143413377 (WebAsyncResult_t4198106447 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.WebAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * WebAsyncResult_get_AsyncState_m1743691224 (WebAsyncResult_t4198106447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.WebAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t361062656 * WebAsyncResult_get_AsyncWaitHandle_m2543688004 (WebAsyncResult_t4198106447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_IsCompleted()
extern "C"  bool WebAsyncResult_get_IsCompleted_m3042901185 (WebAsyncResult_t4198106447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_GotException()
extern "C"  bool WebAsyncResult_get_GotException_m3940364677 (WebAsyncResult_t4198106447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebAsyncResult::get_Exception()
extern "C"  Exception_t1967233988 * WebAsyncResult_get_Exception_m3377176904 (WebAsyncResult_t4198106447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_NBytes()
extern "C"  int32_t WebAsyncResult_get_NBytes_m1499555429 (WebAsyncResult_t4198106447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_NBytes(System.Int32)
extern "C"  void WebAsyncResult_set_NBytes_m1001309402 (WebAsyncResult_t4198106447 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebAsyncResult::get_InnerAsyncResult()
extern "C"  Il2CppObject * WebAsyncResult_get_InnerAsyncResult_m3256692535 (WebAsyncResult_t4198106447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_InnerAsyncResult(System.IAsyncResult)
extern "C"  void WebAsyncResult_set_InnerAsyncResult_m2944274132 (WebAsyncResult_t4198106447 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpWebResponse System.Net.WebAsyncResult::get_Response()
extern "C"  HttpWebResponse_t2667966807 * WebAsyncResult_get_Response_m3433104279 (WebAsyncResult_t4198106447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebAsyncResult::get_Buffer()
extern "C"  ByteU5BU5D_t58506160* WebAsyncResult_get_Buffer_m1120906510 (WebAsyncResult_t4198106447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Offset()
extern "C"  int32_t WebAsyncResult_get_Offset_m287883483 (WebAsyncResult_t4198106447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Size()
extern "C"  int32_t WebAsyncResult_get_Size_m788557449 (WebAsyncResult_t4198106447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
