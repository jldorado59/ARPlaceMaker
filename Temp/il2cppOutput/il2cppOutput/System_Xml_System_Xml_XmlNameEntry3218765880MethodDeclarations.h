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

// System.Xml.XmlNameEntry
struct XmlNameEntry_t3218765880;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t3408046266;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_XmlNameEntryCache3408046266.h"

// System.Void System.Xml.XmlNameEntry::.ctor(System.String,System.String,System.String)
extern "C"  void XmlNameEntry__ctor_m1623657471 (XmlNameEntry_t3218765880 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNameEntry::Update(System.String,System.String,System.String)
extern "C"  void XmlNameEntry_Update_m1900151592 (XmlNameEntry_t3218765880 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNameEntry::Equals(System.Object)
extern "C"  bool XmlNameEntry_Equals_m179953812 (XmlNameEntry_t3218765880 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNameEntry::GetHashCode()
extern "C"  int32_t XmlNameEntry_GetHashCode_m684083372 (XmlNameEntry_t3218765880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNameEntry::GetPrefixedName(System.Xml.XmlNameEntryCache)
extern "C"  String_t* XmlNameEntry_GetPrefixedName_m4122333266 (XmlNameEntry_t3218765880 * __this, XmlNameEntryCache_t3408046266 * ___owner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
