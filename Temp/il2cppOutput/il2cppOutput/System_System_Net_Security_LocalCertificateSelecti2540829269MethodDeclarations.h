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

// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t2540829269;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3432067208;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2200082950;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Security_Cryptography_X509Certificat2200082950.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3432067208.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void LocalCertificateSelectionCallback__ctor_m1247669215 (LocalCertificateSelectionCallback_t2540829269 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern "C"  X509Certificate_t3432067208 * LocalCertificateSelectionCallback_Invoke_m2092911830 (LocalCertificateSelectionCallback_t2540829269 * __this, Il2CppObject * ___sender, String_t* ___targetHost, X509CertificateCollection_t2200082950 * ___localCertificates, X509Certificate_t3432067208 * ___remoteCertificate, StringU5BU5D_t2956870243* ___acceptableIssuers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" X509Certificate_t3432067208 * pinvoke_delegate_wrapper_LocalCertificateSelectionCallback_t2540829269(Il2CppObject* delegate, Il2CppObject * ___sender, String_t* ___targetHost, X509CertificateCollection_t2200082950 * ___localCertificates, X509Certificate_t3432067208 * ___remoteCertificate, StringU5BU5D_t2956870243* ___acceptableIssuers);
// System.IAsyncResult System.Net.Security.LocalCertificateSelectionCallback::BeginInvoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LocalCertificateSelectionCallback_BeginInvoke_m3113613092 (LocalCertificateSelectionCallback_t2540829269 * __this, Il2CppObject * ___sender, String_t* ___targetHost, X509CertificateCollection_t2200082950 * ___localCertificates, X509Certificate_t3432067208 * ___remoteCertificate, StringU5BU5D_t2956870243* ___acceptableIssuers, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C"  X509Certificate_t3432067208 * LocalCertificateSelectionCallback_EndInvoke_m660893172 (LocalCertificateSelectionCallback_t2540829269 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
