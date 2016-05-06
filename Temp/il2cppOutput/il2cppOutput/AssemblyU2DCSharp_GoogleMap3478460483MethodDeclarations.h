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

// GoogleMap
struct GoogleMap_t3478460483;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GoogleMapColor3897743584.h"

// System.Void GoogleMap::.ctor()
extern "C"  void GoogleMap__ctor_m4013529224 (GoogleMap_t3478460483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMap::Start()
extern "C"  void GoogleMap_Start_m2960667016 (GoogleMap_t3478460483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMap::Refresh()
extern "C"  void GoogleMap_Refresh_m3498750081 (GoogleMap_t3478460483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GoogleMap::_Refresh()
extern "C"  Il2CppObject * GoogleMap__Refresh_m3005240144 (GoogleMap_t3478460483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMap::UpdateMarker(System.Int32,System.String,GoogleMapColor,System.Single,System.Single)
extern "C"  void GoogleMap_UpdateMarker_m2148892676 (GoogleMap_t3478460483 * __this, int32_t ___index, String_t* ___label, int32_t ___color, float ___latitude, float ___longitude, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMap::AddMarker(System.String,GoogleMapColor,System.Single,System.Single)
extern "C"  void GoogleMap_AddMarker_m938508879 (GoogleMap_t3478460483 * __this, String_t* ___label, int32_t ___color, float ___latitude, float ___longitude, const MethodInfo* method) IL2CPP_METHOD_ATTR;
