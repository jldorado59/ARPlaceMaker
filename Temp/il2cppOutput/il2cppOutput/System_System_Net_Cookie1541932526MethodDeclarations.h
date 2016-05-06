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

// System.Net.Cookie
struct Cookie_t1541932526;
// System.String
struct String_t;
// System.Uri
struct Uri_t2776692961;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Net.Cookie::.ctor()
extern "C"  void Cookie__ctor_m749965558 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::.ctor(System.String,System.String)
extern "C"  void Cookie__ctor_m473882888 (Cookie_t1541932526 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::.cctor()
extern "C"  void Cookie__cctor_m1291999607 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Comment()
extern "C"  String_t* Cookie_get_Comment_m1065183021 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Comment(System.String)
extern "C"  void Cookie_set_Comment_m429647852 (Cookie_t1541932526 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.Cookie::get_CommentUri()
extern "C"  Uri_t2776692961 * Cookie_get_CommentUri_m1997904722 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_CommentUri(System.Uri)
extern "C"  void Cookie_set_CommentUri_m2209531659 (Cookie_t1541932526 * __this, Uri_t2776692961 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Discard()
extern "C"  bool Cookie_get_Discard_m3634482143 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Discard(System.Boolean)
extern "C"  void Cookie_set_Discard_m1506297356 (Cookie_t1541932526 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Domain()
extern "C"  String_t* Cookie_get_Domain_m380732312 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Domain(System.String)
extern "C"  void Cookie_set_Domain_m1439537299 (Cookie_t1541932526 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_ExactDomain()
extern "C"  bool Cookie_get_ExactDomain_m3630794404 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_ExactDomain(System.Boolean)
extern "C"  void Cookie_set_ExactDomain_m4164606225 (Cookie_t1541932526 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Expired()
extern "C"  bool Cookie_get_Expired_m4018922662 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Cookie::get_Expires()
extern "C"  DateTime_t339033936  Cookie_get_Expires_m657225144 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Expires(System.DateTime)
extern "C"  void Cookie_set_Expires_m3601651821 (Cookie_t1541932526 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_HttpOnly()
extern "C"  bool Cookie_get_HttpOnly_m1683333781 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_HttpOnly(System.Boolean)
extern "C"  void Cookie_set_HttpOnly_m2390693654 (Cookie_t1541932526 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Name()
extern "C"  String_t* Cookie_get_Name_m94989407 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Name(System.String)
extern "C"  void Cookie_set_Name_m1518068076 (Cookie_t1541932526 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Path()
extern "C"  String_t* Cookie_get_Path_m152459129 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Path(System.String)
extern "C"  void Cookie_set_Path_m3475722386 (Cookie_t1541932526 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Port()
extern "C"  String_t* Cookie_get_Port_m165340373 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Port(System.String)
extern "C"  void Cookie_set_Port_m2158516406 (Cookie_t1541932526 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Net.Cookie::get_Ports()
extern "C"  Int32U5BU5D_t1809983122* Cookie_get_Ports_m2139144971 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Secure()
extern "C"  bool Cookie_get_Secure_m655046904 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Secure(System.Boolean)
extern "C"  void Cookie_set_Secure_m3967528633 (Cookie_t1541932526 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Cookie::get_TimeStamp()
extern "C"  DateTime_t339033936  Cookie_get_TimeStamp_m3414624826 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Value()
extern "C"  String_t* Cookie_get_Value_m1454378239 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Value(System.String)
extern "C"  void Cookie_set_Value_m3944093978 (Cookie_t1541932526 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::get_Version()
extern "C"  int32_t Cookie_get_Version_m275661107 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Version(System.Int32)
extern "C"  void Cookie_set_Version_m128814560 (Cookie_t1541932526 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::Equals(System.Object)
extern "C"  bool Cookie_Equals_m2267348733 (Cookie_t1541932526 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::GetHashCode()
extern "C"  int32_t Cookie_GetHashCode_m4162714965 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::hash(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Cookie_hash_m1162468957 (Il2CppObject * __this /* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, int32_t ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::ToString()
extern "C"  String_t* Cookie_ToString_m3751681783 (Cookie_t1541932526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::ToString(System.Uri)
extern "C"  String_t* Cookie_ToString_m339822058 (Cookie_t1541932526 * __this, Uri_t2776692961 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::IsNullOrEmpty(System.String)
extern "C"  bool Cookie_IsNullOrEmpty_m1158722015 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
