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

// GeoPointsController
struct GeoPointsController_t561968688;
// GeoPoint
struct GeoPoint_t1884169439;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GeoPoint1884169439.h"

// System.Void GeoPointsController::.ctor()
extern "C"  void GeoPointsController__ctor_m2933461819 (GeoPointsController_t561968688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GeoPointsController::Start()
extern "C"  void GeoPointsController_Start_m1880599611 (GeoPointsController_t561968688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GeoPointsController::Update()
extern "C"  void GeoPointsController_Update_m2469865266 (GeoPointsController_t561968688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GeoPointsController::OnReady()
extern "C"  void GeoPointsController_OnReady_m3622371421 (GeoPointsController_t561968688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GeoPoint GeoPointsController::ComputeBaricenter()
extern "C"  GeoPoint_t1884169439 * GeoPointsController_ComputeBaricenter_m2255978425 (GeoPointsController_t561968688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GeoPointsController::NormalizePositions()
extern "C"  void GeoPointsController_NormalizePositions_m1432758598 (GeoPointsController_t561968688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double GeoPointsController::GestDistance(System.Int32)
extern "C"  double GeoPointsController_GestDistance_m4059397003 (GeoPointsController_t561968688 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double GeoPointsController::GetBearing(System.Int32)
extern "C"  double GeoPointsController_GetBearing_m2705954927 (GeoPointsController_t561968688 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double GeoPointsController::CalculateDistance(GeoPoint,GeoPoint)
extern "C"  double GeoPointsController_CalculateDistance_m2907816463 (GeoPointsController_t561968688 * __this, GeoPoint_t1884169439 * ___location, GeoPoint_t1884169439 * ___poi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double GeoPointsController::CalculateBearing(GeoPoint,GeoPoint)
extern "C"  double GeoPointsController_CalculateBearing_m357729048 (GeoPointsController_t561968688 * __this, GeoPoint_t1884169439 * ___location, GeoPoint_t1884169439 * ___poi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
