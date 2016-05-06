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

// System.Net.HttpWebResponse
struct HttpWebResponse_t2667966807;
// System.Uri
struct Uri_t2776692961;
// System.String
struct String_t;
// System.Net.WebConnectionData
struct WebConnectionData_t3246245734;
// System.Net.CookieContainer
struct CookieContainer_t3399784903;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1099177929;
// System.IO.Stream
struct Stream_t219029575;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Net_WebConnectionData3246245734.h"
#include "System_System_Net_CookieContainer3399784903.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "System_System_Net_HttpStatusCode2736938801.h"
#include "mscorlib_System_DateTime339033936.h"

// System.Void System.Net.HttpWebResponse::.ctor(System.Uri,System.String,System.Net.WebConnectionData,System.Net.CookieContainer)
extern "C"  void HttpWebResponse__ctor_m704868621 (HttpWebResponse_t2667966807 * __this, Uri_t2776692961 * ___uri, String_t* ___method, WebConnectionData_t3246245734 * ___data, CookieContainer_t3399784903 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebResponse__ctor_m96379232 (HttpWebResponse_t2667966807 * __this, SerializationInfo_t2995724695 * ___serializationInfo, StreamingContext_t986364934  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m2809311756 (HttpWebResponse_t2667966807 * __this, SerializationInfo_t2995724695 * ___serializationInfo, StreamingContext_t986364934  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.IDisposable.Dispose()
extern "C"  void HttpWebResponse_System_IDisposable_Dispose_m705809504 (HttpWebResponse_t2667966807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebResponse::get_Headers()
extern "C"  WebHeaderCollection_t1099177929 * HttpWebResponse_get_Headers_m1322100266 (HttpWebResponse_t2667966807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpStatusCode System.Net.HttpWebResponse::get_StatusCode()
extern "C"  int32_t HttpWebResponse_get_StatusCode_m1024380905 (HttpWebResponse_t2667966807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_StatusDescription()
extern "C"  String_t* HttpWebResponse_get_StatusDescription_m1329734203 (HttpWebResponse_t2667966807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::ReadAll()
extern "C"  void HttpWebResponse_ReadAll_m1984785448 (HttpWebResponse_t2667966807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpWebResponse::GetResponseStream()
extern "C"  Stream_t219029575 * HttpWebResponse_GetResponseStream_m2118879582 (HttpWebResponse_t2667966807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebResponse_GetObjectData_m2339932349 (HttpWebResponse_t2667966807 * __this, SerializationInfo_t2995724695 * ___serializationInfo, StreamingContext_t986364934  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Close()
extern "C"  void HttpWebResponse_Close_m3158053301 (HttpWebResponse_t2667966807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Dispose(System.Boolean)
extern "C"  void HttpWebResponse_Dispose_m1925005715 (HttpWebResponse_t2667966807 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::CheckDisposed()
extern "C"  void HttpWebResponse_CheckDisposed_m2778535370 (HttpWebResponse_t2667966807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::FillCookies()
extern "C"  void HttpWebResponse_FillCookies_m3918912841 (HttpWebResponse_t2667966807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie(System.String)
extern "C"  void HttpWebResponse_SetCookie_m1353788479 (HttpWebResponse_t2667966807 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie2(System.String)
extern "C"  void HttpWebResponse_SetCookie2_m1214268497 (HttpWebResponse_t2667966807 * __this, String_t* ___cookies_str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.HttpWebResponse::TryParseCookieExpires(System.String)
extern "C"  DateTime_t339033936  HttpWebResponse_TryParseCookieExpires_m1708112230 (HttpWebResponse_t2667966807 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
