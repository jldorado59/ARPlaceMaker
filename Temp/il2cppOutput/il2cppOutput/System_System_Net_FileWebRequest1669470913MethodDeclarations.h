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

// System.Net.FileWebRequest
struct FileWebRequest_t1669470913;
// System.Uri
struct Uri_t2776692961;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Net.ICredentials
struct ICredentials_t2307785309;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1099177929;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t49946189;
// System.Exception
struct Exception_t1967233988;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Object
struct Il2CppObject;
// System.Net.WebResponse
struct WebResponse_t2411292415;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Net.FileWebRequest::.ctor(System.Uri)
extern "C"  void FileWebRequest__ctor_m1190066806 (FileWebRequest_t1669470913 * __this, Uri_t2776692961 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebRequest__ctor_m2417420612 (FileWebRequest_t1669470913 * __this, SerializationInfo_t2995724695 * ___serializationInfo, StreamingContext_t986364934  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3587475368 (FileWebRequest_t1669470913 * __this, SerializationInfo_t2995724695 * ___serializationInfo, StreamingContext_t986364934  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FileWebRequest::get_ContentLength()
extern "C"  int64_t FileWebRequest_get_ContentLength_m3959517096 (FileWebRequest_t1669470913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FileWebRequest::get_Credentials()
extern "C"  Il2CppObject * FileWebRequest_get_Credentials_m3151607268 (FileWebRequest_t1669470913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_Credentials(System.Net.ICredentials)
extern "C"  void FileWebRequest_set_Credentials_m2271052495 (FileWebRequest_t1669470913 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebRequest::get_Headers()
extern "C"  WebHeaderCollection_t1099177929 * FileWebRequest_get_Headers_m3065734382 (FileWebRequest_t1669470913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FileWebRequest::get_Method()
extern "C"  String_t* FileWebRequest_get_Method_m2005929480 (FileWebRequest_t1669470913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FileWebRequest::get_Proxy()
extern "C"  Il2CppObject * FileWebRequest_get_Proxy_m469077010 (FileWebRequest_t1669470913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FileWebRequest::get_RequestUri()
extern "C"  Uri_t2776692961 * FileWebRequest_get_RequestUri_m3313865781 (FileWebRequest_t1669470913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FileWebRequest::GetMustImplement()
extern "C"  Exception_t1967233988 * FileWebRequest_GetMustImplement_m391298838 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Abort()
extern "C"  void FileWebRequest_Abort_m303714001 (FileWebRequest_t1669470913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FileWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FileWebRequest_BeginGetResponse_m1046890263 (FileWebRequest_t1669470913 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::EndGetResponse(System.IAsyncResult)
extern "C"  WebResponse_t2411292415 * FileWebRequest_EndGetResponse_m1769167488 (FileWebRequest_t1669470913 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponse()
extern "C"  WebResponse_t2411292415 * FileWebRequest_GetResponse_m3466591250 (FileWebRequest_t1669470913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponseInternal()
extern "C"  WebResponse_t2411292415 * FileWebRequest_GetResponseInternal_m3074376367 (FileWebRequest_t1669470913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebRequest_GetObjectData_m1166847137 (FileWebRequest_t1669470913 * __this, SerializationInfo_t2995724695 * ___serializationInfo, StreamingContext_t986364934  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Close()
extern "C"  void FileWebRequest_Close_m2365028249 (FileWebRequest_t1669470913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
