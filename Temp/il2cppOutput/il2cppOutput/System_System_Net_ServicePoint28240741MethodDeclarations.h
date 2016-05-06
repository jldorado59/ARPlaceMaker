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

// System.Net.ServicePoint
struct ServicePoint_t28240741;
// System.Uri
struct Uri_t2776692961;
// System.Version
struct Version_t497901645;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Net.IPHostEntry
struct IPHostEntry_t4205702573;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t3432073175;
// System.String
struct String_t;
// System.EventHandler
struct EventHandler_t247020293;
// System.Net.HttpWebRequest
struct HttpWebRequest_t171953869;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3432067208;
// System.Net.Sockets.Socket
struct Socket_t150013987;
// System.Net.IPEndPoint
struct IPEndPoint_t1265996582;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Version497901645.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Net_HttpWebRequest171953869.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3432067208.h"
#include "System_System_Net_Sockets_Socket150013987.h"
#include "System_System_Net_IPEndPoint1265996582.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern "C"  void ServicePoint__ctor_m4244145138 (ServicePoint_t28240741 * __this, Uri_t2776692961 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
extern "C"  Uri_t2776692961 * ServicePoint_get_Address_m1466650202 (ServicePoint_t28240741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_ConnectionLimit()
extern "C"  int32_t ServicePoint_get_ConnectionLimit_m3121072129 (ServicePoint_t28240741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
extern "C"  int32_t ServicePoint_get_CurrentConnections_m1954016890 (ServicePoint_t28240741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
extern "C"  DateTime_t339033936  ServicePoint_get_IdleSince_m3269103731 (ServicePoint_t28240741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
extern "C"  void ServicePoint_set_IdleSince_m305314386 (ServicePoint_t28240741 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.ServicePoint::get_ProtocolVersion()
extern "C"  Version_t497901645 * ServicePoint_get_ProtocolVersion_m1049388570 (ServicePoint_t28240741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern "C"  void ServicePoint_set_Expect100Continue_m285998358 (ServicePoint_t28240741 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseNagleAlgorithm()
extern "C"  bool ServicePoint_get_UseNagleAlgorithm_m3421720563 (ServicePoint_t28240741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern "C"  void ServicePoint_set_UseNagleAlgorithm_m4121109536 (ServicePoint_t28240741 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_SendContinue()
extern "C"  bool ServicePoint_get_SendContinue_m2781931911 (ServicePoint_t28240741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern "C"  void ServicePoint_set_SendContinue_m515260680 (ServicePoint_t28240741 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UsesProxy()
extern "C"  bool ServicePoint_get_UsesProxy_m287961580 (ServicePoint_t28240741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern "C"  void ServicePoint_set_UsesProxy_m3686577241 (ServicePoint_t28240741 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseConnect()
extern "C"  bool ServicePoint_get_UseConnect_m86082395 (ServicePoint_t28240741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern "C"  void ServicePoint_set_UseConnect_m3883999836 (ServicePoint_t28240741 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
extern "C"  bool ServicePoint_get_AvailableForRecycling_m4047613978 (ServicePoint_t28240741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.ServicePoint::get_Groups()
extern "C"  Hashtable_t3875263730 * ServicePoint_get_Groups_m2859817643 (ServicePoint_t28240741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.ServicePoint::get_HostEntry()
extern "C"  IPHostEntry_t4205702573 * ServicePoint_get_HostEntry_m2097536138 (ServicePoint_t28240741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetVersion(System.Version)
extern "C"  void ServicePoint_SetVersion_m3470915170 (ServicePoint_t28240741 * __this, Version_t497901645 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnectionGroup System.Net.ServicePoint::GetConnectionGroup(System.String)
extern "C"  WebConnectionGroup_t3432073175 * ServicePoint_GetConnectionGroup_m1152498600 (ServicePoint_t28240741 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.ServicePoint::SendRequest(System.Net.HttpWebRequest,System.String)
extern "C"  EventHandler_t247020293 * ServicePoint_SendRequest_m2674493811 (ServicePoint_t28240741 * __this, HttpWebRequest_t171953869 * ___request, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetCertificates(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void ServicePoint_SetCertificates_m3816091347 (ServicePoint_t28240741 * __this, X509Certificate_t3432067208 * ___client, X509Certificate_t3432067208 * ___server, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::CallEndPointDelegate(System.Net.Sockets.Socket,System.Net.IPEndPoint)
extern "C"  bool ServicePoint_CallEndPointDelegate_m3251688122 (ServicePoint_t28240741 * __this, Socket_t150013987 * ___sock, IPEndPoint_t1265996582 * ___remote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
