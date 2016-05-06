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

// GeoPoint
struct GeoPoint_t1884169439;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GeoPoint1884169439.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void GeoPoint::.ctor(System.String,System.Double,System.Double)
extern "C"  void GeoPoint__ctor_m1402118878 (GeoPoint_t1884169439 * __this, String_t* ___name, double ___lat, double ___lon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GeoPoint::SetCenter(GeoPoint)
extern "C"  void GeoPoint_SetCenter_m105512402 (GeoPoint_t1884169439 * __this, GeoPoint_t1884169439 * ___center, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GeoPoint::GetNormalPos()
extern "C"  Vector3_t3525329789  GeoPoint_GetNormalPos_m1198560537 (GeoPoint_t1884169439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
