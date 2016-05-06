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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct DefaultComparer_t2650910179;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C"  void DefaultComparer__ctor_m699473545_gshared (DefaultComparer_t2650910179 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m699473545(__this, method) ((  void (*) (DefaultComparer_t2650910179 *, const MethodInfo*))DefaultComparer__ctor_m699473545_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m782100810_gshared (DefaultComparer_t2650910179 * __this, KeyValuePair_2_t3312956448  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m782100810(__this, ___obj, method) ((  int32_t (*) (DefaultComparer_t2650910179 *, KeyValuePair_2_t3312956448 , const MethodInfo*))DefaultComparer_GetHashCode_m782100810_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m3661957278_gshared (DefaultComparer_t2650910179 * __this, KeyValuePair_2_t3312956448  ___x, KeyValuePair_2_t3312956448  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m3661957278(__this, ___x, ___y, method) ((  bool (*) (DefaultComparer_t2650910179 *, KeyValuePair_2_t3312956448 , KeyValuePair_2_t3312956448 , const MethodInfo*))DefaultComparer_Equals_m3661957278_gshared)(__this, ___x, ___y, method)
