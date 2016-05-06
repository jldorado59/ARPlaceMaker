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

// Kudan.AR.TrackingMethodBase
struct TrackingMethodBase_t888542705;
// Kudan.AR.TrackerBase
struct TrackerBase_t2694038129;

#include "codegen/il2cpp-codegen.h"

// System.Void Kudan.AR.TrackingMethodBase::.ctor()
extern "C"  void TrackingMethodBase__ctor_m2173757644 (TrackingMethodBase_t888542705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Kudan.AR.TrackerBase Kudan.AR.TrackingMethodBase::get_Plugin()
extern "C"  TrackerBase_t2694038129 * TrackingMethodBase_get_Plugin_m1379557738 (TrackingMethodBase_t888542705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackingMethodBase::get_TrackingEnabled()
extern "C"  bool TrackingMethodBase_get_TrackingEnabled_m2903980351 (TrackingMethodBase_t888542705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackingMethodBase::Awake()
extern "C"  void TrackingMethodBase_Awake_m2411362863 (TrackingMethodBase_t888542705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackingMethodBase::Init()
extern "C"  void TrackingMethodBase_Init_m852941832 (TrackingMethodBase_t888542705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackingMethodBase::StartTracking()
extern "C"  void TrackingMethodBase_StartTracking_m2018947043 (TrackingMethodBase_t888542705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackingMethodBase::StopTracking()
extern "C"  void TrackingMethodBase_StopTracking_m2227251857 (TrackingMethodBase_t888542705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackingMethodBase::ProcessFrame()
extern "C"  void TrackingMethodBase_ProcessFrame_m2599077046 (TrackingMethodBase_t888542705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackingMethodBase::DebugGUI(System.Int32)
extern "C"  void TrackingMethodBase_DebugGUI_m2586700977 (TrackingMethodBase_t888542705 * __this, int32_t ___uiScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
