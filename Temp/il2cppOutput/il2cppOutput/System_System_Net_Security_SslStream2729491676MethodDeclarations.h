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

// System.Net.Security.SslStream
struct SslStream_t2729491676;
// System.IO.Stream
struct Stream_t219029575;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t4087051103;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t2540829269;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3432067208;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2200082950;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "System_System_Net_Security_RemoteCertificateValida4087051103.h"
#include "System_System_Net_Security_LocalCertificateSelecti2540829269.h"
#include "System_System_Security_Cryptography_X509Certificat2200082950.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3432067208.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Security_Authentication_SslProtocols2100950796.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Object837106420.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP4015394186.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
extern "C"  void SslStream__ctor_m219176074 (SslStream_t2729491676 * __this, Stream_t219029575 * ___innerStream, bool ___leaveStreamOpen, RemoteCertificateValidationCallback_t4087051103 * ___certValidationCallback, LocalCertificateSelectionCallback_t2540829269 * ___certSelectionCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanRead()
extern "C"  bool SslStream_get_CanRead_m3341586189 (SslStream_t2729491676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanSeek()
extern "C"  bool SslStream_get_CanSeek_m3370341231 (SslStream_t2729491676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanWrite()
extern "C"  bool SslStream_get_CanWrite_m1032610282 (SslStream_t2729491676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Length()
extern "C"  int64_t SslStream_get_Length_m1037506982 (SslStream_t2729491676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Position()
extern "C"  int64_t SslStream_get_Position_m833298281 (SslStream_t2729491676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::set_Position(System.Int64)
extern "C"  void SslStream_set_Position_m1453586112 (SslStream_t2729491676 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsAuthenticated()
extern "C"  bool SslStream_get_IsAuthenticated_m800088812 (SslStream_t2729491676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_ReadTimeout()
extern "C"  int32_t SslStream_get_ReadTimeout_m2679126988 (SslStream_t2729491676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_WriteTimeout()
extern "C"  int32_t SslStream_get_WriteTimeout_m1840838243 (SslStream_t2729491676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::OnCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t3432067208 * SslStream_OnCertificateSelection_m280533825 (SslStream_t2729491676 * __this, X509CertificateCollection_t2200082950 * ___clientCerts, X509Certificate_t3432067208 * ___serverCert, String_t* ___targetHost, X509CertificateCollection_t2200082950 * ___serverRequestedCerts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslStream_BeginAuthenticateAsClient_m2535801674 (SslStream_t2729491676 * __this, String_t* ___targetHost, X509CertificateCollection_t2200082950 * ___clientCertificates, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, AsyncCallback_t1363551830 * ___asyncCallback, Il2CppObject * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslStream_BeginRead_m3663021798 (SslStream_t2729491676 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1363551830 * ___asyncCallback, Il2CppObject * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType System.Net.Security.SslStream::GetMonoSslProtocol(System.Security.Authentication.SslProtocols)
extern "C"  int32_t SslStream_GetMonoSslProtocol_m403603204 (SslStream_t2729491676 * __this, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslStream_BeginWrite_m62055331 (SslStream_t2729491676 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1363551830 * ___asyncCallback, Il2CppObject * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::AuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
extern "C"  void SslStream_AuthenticateAsClient_m3560445065 (SslStream_t2729491676 * __this, String_t* ___targetHost, X509CertificateCollection_t2200082950 * ___clientCertificates, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Dispose(System.Boolean)
extern "C"  void SslStream_Dispose_m50080176 (SslStream_t2729491676 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndAuthenticateAsClient(System.IAsyncResult)
extern "C"  void SslStream_EndAuthenticateAsClient_m2394080284 (SslStream_t2729491676 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::EndRead(System.IAsyncResult)
extern "C"  int32_t SslStream_EndRead_m1650948968 (SslStream_t2729491676 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndWrite(System.IAsyncResult)
extern "C"  void SslStream_EndWrite_m3496657943 (SslStream_t2729491676 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Flush()
extern "C"  void SslStream_Flush_m369630686 (SslStream_t2729491676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t SslStream_Read_m2774213435 (SslStream_t2729491676 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t SslStream_Seek_m1475566206 (SslStream_t2729491676 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::SetLength(System.Int64)
extern "C"  void SslStream_SetLength_m596518164 (SslStream_t2729491676 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void SslStream_Write_m2565551568 (SslStream_t2729491676 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::CheckConnectionAuthenticated()
extern "C"  void SslStream_CheckConnectionAuthenticated_m3206794129 (SslStream_t2729491676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
