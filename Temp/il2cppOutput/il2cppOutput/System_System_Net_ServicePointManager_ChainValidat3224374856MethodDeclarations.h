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

// System.Net.ServicePointManager/ChainValidationHelper
struct ChainValidationHelper_t3224374856;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t2397874734;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3336811651;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2831591730;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2583282360;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t273828613;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3336811650.h"
#include "System_System_Security_Cryptography_X509Certificat2831591730.h"
#include "System_System_Net_Security_SslPolicyErrors3085256601.h"
#include "System_System_Security_Cryptography_X509Certificat2583282360.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate273828612.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Net.ServicePointManager/ChainValidationHelper::.ctor(System.Object)
extern "C"  void ChainValidationHelper__ctor_m3198340947 (ChainValidationHelper_t3224374856 * __this, Il2CppObject * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager/ChainValidationHelper::.cctor()
extern "C"  void ChainValidationHelper__cctor_m2442608620 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ServicePointManager/ChainValidationHelper::get_Host()
extern "C"  String_t* ChainValidationHelper_get_Host_m3959355223 (ChainValidationHelper_t3224374856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult System.Net.ServicePointManager/ChainValidationHelper::ValidateChain(Mono.Security.X509.X509CertificateCollection)
extern "C"  ValidationResult_t2397874734 * ChainValidationHelper_ValidateChain_m3606027497 (ChainValidationHelper_t3224374856 * __this, X509CertificateCollection_t3336811651 * ___certs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager/ChainValidationHelper::GetStatusFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
extern "C"  int32_t ChainValidationHelper_GetStatusFromChain_m4189907822 (Il2CppObject * __this /* static, unused */, X509Chain_t2831591730 * ___chain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.SslPolicyErrors System.Net.ServicePointManager/ChainValidationHelper::GetErrorsFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
extern "C"  int32_t ChainValidationHelper_GetErrorsFromChain_m2003394607 (Il2CppObject * __this /* static, unused */, X509Chain_t2831591730 * ___chain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckCertificateUsage(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool ChainValidationHelper_CheckCertificateUsage_m2553305441 (Il2CppObject * __this /* static, unused */, X509Certificate2_t2583282360 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckServerIdentity(Mono.Security.X509.X509Certificate,System.String)
extern "C"  bool ChainValidationHelper_CheckServerIdentity_m517822786 (Il2CppObject * __this /* static, unused */, X509Certificate_t273828613 * ___cert, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckDomainName(System.String,System.String)
extern "C"  bool ChainValidationHelper_CheckDomainName_m4230222526 (Il2CppObject * __this /* static, unused */, String_t* ___subjectName, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::Match(System.String,System.String)
extern "C"  bool ChainValidationHelper_Match_m2776004176 (Il2CppObject * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
