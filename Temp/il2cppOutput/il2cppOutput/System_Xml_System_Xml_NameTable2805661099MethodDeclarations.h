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

// System.Xml.NameTable
struct NameTable_t2805661099;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Xml.NameTable::.ctor()
extern "C"  void NameTable__ctor_m929780536 (NameTable_t2805661099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Add(System.Char[],System.Int32,System.Int32)
extern "C"  String_t* NameTable_Add_m850607719 (NameTable_t2805661099 * __this, CharU5BU5D_t3416858730* ___key, int32_t ___start, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Add(System.String)
extern "C"  String_t* NameTable_Add_m683458574 (NameTable_t2805661099 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Get(System.String)
extern "C"  String_t* NameTable_Get_m770689209 (NameTable_t2805661099 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::AddEntry(System.String,System.Int32)
extern "C"  String_t* NameTable_AddEntry_m12675925 (NameTable_t2805661099 * __this, String_t* ___str, int32_t ___hash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.NameTable::StrEqArray(System.String,System.Char[],System.Int32)
extern "C"  bool NameTable_StrEqArray_m489605168 (Il2CppObject * __this /* static, unused */, String_t* ___str, CharU5BU5D_t3416858730* ___str2, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
