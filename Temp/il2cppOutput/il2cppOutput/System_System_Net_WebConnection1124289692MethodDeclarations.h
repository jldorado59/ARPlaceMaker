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

// System.Net.WebConnection
struct WebConnection_t1124289692;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t3432073175;
// System.Net.ServicePoint
struct ServicePoint_t28240741;
// System.Exception
struct Exception_t1967233988;
// System.Net.HttpWebRequest
struct HttpWebRequest_t171953869;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1099177929;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.Object
struct Il2CppObject;
// System.EventHandler
struct EventHandler_t247020293;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.EventArgs
struct EventArgs_t516466188;
// System.Net.NetworkCredential
struct NetworkCredential_t2360216687;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_WebConnectionGroup3432073175.h"
#include "System_System_Net_ServicePoint28240741.h"
#include "mscorlib_System_Exception1967233988.h"
#include "System_System_Net_HttpWebRequest171953869.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "System_System_Net_WebExceptionStatus985135799.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_EventArgs516466188.h"
#include "System_System_Net_NetworkCredential2360216687.h"

// System.Void System.Net.WebConnection::.ctor(System.Net.WebConnectionGroup,System.Net.ServicePoint)
extern "C"  void WebConnection__ctor_m570141276 (WebConnection_t1124289692 * __this, WebConnectionGroup_t3432073175 * ___group, ServicePoint_t28240741 * ___sPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::.cctor()
extern "C"  void WebConnection__cctor_m1414380979 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CanReuse()
extern "C"  bool WebConnection_CanReuse_m429734244 (WebConnection_t1124289692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::LoggedThrow(System.Exception)
extern "C"  void WebConnection_LoggedThrow_m289187660 (WebConnection_t1124289692 * __this, Exception_t1967233988 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::CheckUnityWebSecurity(System.Net.HttpWebRequest)
extern "C"  void WebConnection_CheckUnityWebSecurity_m2005814720 (WebConnection_t1124289692 * __this, HttpWebRequest_t171953869 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Connect(System.Net.HttpWebRequest)
extern "C"  void WebConnection_Connect_m1601206237 (WebConnection_t1124289692 * __this, HttpWebRequest_t171953869 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::EnsureSSLStreamAvailable()
extern "C"  void WebConnection_EnsureSSLStreamAvailable_m2023486437 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CreateTunnel(System.Net.HttpWebRequest,System.IO.Stream,System.Byte[]&)
extern "C"  bool WebConnection_CreateTunnel_m2875476391 (WebConnection_t1124289692 * __this, HttpWebRequest_t171953869 * ___request, Stream_t219029575 * ___stream, ByteU5BU5D_t58506160** ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebConnection::ReadHeaders(System.Net.HttpWebRequest,System.IO.Stream,System.Byte[]&,System.Int32&)
extern "C"  WebHeaderCollection_t1099177929 * WebConnection_ReadHeaders_m1472946024 (WebConnection_t1124289692 * __this, HttpWebRequest_t171953869 * ___request, Stream_t219029575 * ___stream, ByteU5BU5D_t58506160** ___retBuffer, int32_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CreateStream(System.Net.HttpWebRequest)
extern "C"  bool WebConnection_CreateStream_m3681331491 (WebConnection_t1124289692 * __this, HttpWebRequest_t171953869 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::HandleError(System.Net.WebExceptionStatus,System.Exception,System.String)
extern "C"  void WebConnection_HandleError_m1182435509 (WebConnection_t1124289692 * __this, int32_t ___st, Exception_t1967233988 * ___e, String_t* ___where, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::ReadDone(System.IAsyncResult)
extern "C"  void WebConnection_ReadDone_m2966323745 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::ExpectContent(System.Int32)
extern "C"  bool WebConnection_ExpectContent_m3311255475 (Il2CppObject * __this /* static, unused */, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::GetCertificates()
extern "C"  void WebConnection_GetCertificates_m1592645962 (WebConnection_t1124289692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::InitRead(System.Object)
extern "C"  void WebConnection_InitRead_m4254490116 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::GetResponse(System.Byte[],System.Int32)
extern "C"  int32_t WebConnection_GetResponse_m157348301 (WebConnection_t1124289692 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::InitConnection(System.Object)
extern "C"  void WebConnection_InitConnection_m1634600572 (WebConnection_t1124289692 * __this, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.WebConnection::SendRequest(System.Net.HttpWebRequest)
extern "C"  EventHandler_t247020293 * WebConnection_SendRequest_m3112009476 (WebConnection_t1124289692 * __this, HttpWebRequest_t171953869 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::SendNext()
extern "C"  void WebConnection_SendNext_m3731024933 (WebConnection_t1124289692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::NextRead()
extern "C"  void WebConnection_NextRead_m2095832371 (WebConnection_t1124289692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::ReadLine(System.Byte[],System.Int32&,System.Int32,System.String&)
extern "C"  bool WebConnection_ReadLine_m2759062765 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___buffer, int32_t* ___start, int32_t ___max, String_t** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnection::BeginRead(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WebConnection_BeginRead_m3015313059 (WebConnection_t1124289692 * __this, HttpWebRequest_t171953869 * ___request, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t1363551830 * ___cb, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::EndRead(System.Net.HttpWebRequest,System.IAsyncResult)
extern "C"  int32_t WebConnection_EndRead_m1274630179 (WebConnection_t1124289692 * __this, HttpWebRequest_t171953869 * ___request, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::EnsureRead(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t WebConnection_EnsureRead_m929166331 (WebConnection_t1124289692 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CompleteChunkedRead()
extern "C"  bool WebConnection_CompleteChunkedRead_m3721158923 (WebConnection_t1124289692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnection::BeginWrite(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WebConnection_BeginWrite_m2573847028 (WebConnection_t1124289692 * __this, HttpWebRequest_t171953869 * ___request, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t1363551830 * ___cb, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::EndWrite2(System.Net.HttpWebRequest,System.IAsyncResult)
extern "C"  void WebConnection_EndWrite2_m4288679990 (WebConnection_t1124289692 * __this, HttpWebRequest_t171953869 * ___request, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::EndWrite(System.Net.HttpWebRequest,System.IAsyncResult)
extern "C"  bool WebConnection_EndWrite_m2260987032 (WebConnection_t1124289692 * __this, HttpWebRequest_t171953869 * ___request, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::Read(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t WebConnection_Read_m1730466610 (WebConnection_t1124289692 * __this, HttpWebRequest_t171953869 * ___request, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::Write(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.String&)
extern "C"  bool WebConnection_Write_m2555077423 (WebConnection_t1124289692 * __this, HttpWebRequest_t171953869 * ___request, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___size, String_t** ___err_msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Close(System.Boolean)
extern "C"  void WebConnection_Close_m1582875591 (WebConnection_t1124289692 * __this, bool ___sendNext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Abort(System.Object,System.EventArgs)
extern "C"  void WebConnection_Abort_m1843916898 (WebConnection_t1124289692 * __this, Il2CppObject * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::ResetNtlm()
extern "C"  void WebConnection_ResetNtlm_m1493144846 (WebConnection_t1124289692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_Busy()
extern "C"  bool WebConnection_get_Busy_m2822871714 (WebConnection_t1124289692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_PriorityRequest(System.Net.HttpWebRequest)
extern "C"  void WebConnection_set_PriorityRequest_m4059548249 (WebConnection_t1124289692 * __this, HttpWebRequest_t171953869 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_NtlmAuthenticated()
extern "C"  bool WebConnection_get_NtlmAuthenticated_m2752033729 (WebConnection_t1124289692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_NtlmAuthenticated(System.Boolean)
extern "C"  void WebConnection_set_NtlmAuthenticated_m1641730266 (WebConnection_t1124289692 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.WebConnection::get_NtlmCredential()
extern "C"  NetworkCredential_t2360216687 * WebConnection_get_NtlmCredential_m2164891099 (WebConnection_t1124289692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_NtlmCredential(System.Net.NetworkCredential)
extern "C"  void WebConnection_set_NtlmCredential_m870530416 (WebConnection_t1124289692 * __this, NetworkCredential_t2360216687 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_UnsafeAuthenticatedConnectionSharing()
extern "C"  bool WebConnection_get_UnsafeAuthenticatedConnectionSharing_m1443601566 (WebConnection_t1124289692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_UnsafeAuthenticatedConnectionSharing(System.Boolean)
extern "C"  void WebConnection_set_UnsafeAuthenticatedConnectionSharing_m1418610931 (WebConnection_t1124289692 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
