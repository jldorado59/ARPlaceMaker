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

// System.Net.FtpWebResponse
struct FtpWebResponse_t3279279229;
// System.Net.FtpWebRequest
struct FtpWebRequest_t2824072935;
// System.Uri
struct Uri_t2776692961;
// System.String
struct String_t;
// System.Net.FtpStatus
struct FtpStatus_t955148094;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1099177929;
// System.IO.Stream
struct Stream_t219029575;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_FtpWebRequest2824072935.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Net_FtpStatusCode1094090571.h"
#include "System_System_Net_FtpStatus955148094.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_IO_Stream219029575.h"

// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Boolean)
extern "C"  void FtpWebResponse__ctor_m3542190242 (FtpWebResponse_t3279279229 * __this, FtpWebRequest_t2824072935 * ___request, Uri_t2776692961 * ___uri, String_t* ___method, bool ___keepAlive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatusCode,System.String)
extern "C"  void FtpWebResponse__ctor_m2217738742 (FtpWebResponse_t3279279229 * __this, FtpWebRequest_t2824072935 * ___request, Uri_t2776692961 * ___uri, String_t* ___method, int32_t ___statusCode, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatus)
extern "C"  void FtpWebResponse__ctor_m287332007 (FtpWebResponse_t3279279229 * __this, FtpWebRequest_t2824072935 * ___request, Uri_t2776692961 * ___uri, String_t* ___method, FtpStatus_t955148094 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebResponse::get_Headers()
extern "C"  WebHeaderCollection_t1099177929 * FtpWebResponse_get_Headers_m584940466 (FtpWebResponse_t3279279229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_LastModified(System.DateTime)
extern "C"  void FtpWebResponse_set_LastModified_m1304868287 (FtpWebResponse_t3279279229 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_BannerMessage(System.String)
extern "C"  void FtpWebResponse_set_BannerMessage_m1222407647 (FtpWebResponse_t3279279229 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_WelcomeMessage(System.String)
extern "C"  void FtpWebResponse_set_WelcomeMessage_m1191478019 (FtpWebResponse_t3279279229 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::Close()
extern "C"  void FtpWebResponse_Close_m3876778333 (FtpWebResponse_t3279279229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpWebResponse::GetResponseStream()
extern "C"  Stream_t219029575 * FtpWebResponse_GetResponseStream_m2153035058 (FtpWebResponse_t3279279229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_Stream(System.IO.Stream)
extern "C"  void FtpWebResponse_set_Stream_m4206595185 (FtpWebResponse_t3279279229 * __this, Stream_t219029575 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::UpdateStatus(System.Net.FtpStatus)
extern "C"  void FtpWebResponse_UpdateStatus_m2179474228 (FtpWebResponse_t3279279229 * __this, FtpStatus_t955148094 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::CheckDisposed()
extern "C"  void FtpWebResponse_CheckDisposed_m2215497074 (FtpWebResponse_t3279279229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebResponse::IsFinal()
extern "C"  bool FtpWebResponse_IsFinal_m2524807527 (FtpWebResponse_t3279279229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
