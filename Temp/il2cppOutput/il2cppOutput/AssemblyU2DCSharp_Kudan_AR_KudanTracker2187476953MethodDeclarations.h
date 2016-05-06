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

// Kudan.AR.KudanTracker
struct KudanTracker_t2187476953;
// Kudan.AR.TrackerBase
struct TrackerBase_t2694038129;
// Kudan.AR.TrackingMethodBase
struct TrackingMethodBase_t888542705;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Kudan_AR_TrackingMethodBase888542705.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Void Kudan.AR.KudanTracker::.ctor()
extern "C"  void KudanTracker__ctor_m961384804 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Kudan.AR.TrackerBase Kudan.AR.KudanTracker::get_Interface()
extern "C"  TrackerBase_t2694038129 * KudanTracker_get_Interface_m918421084 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Kudan.AR.TrackingMethodBase Kudan.AR.KudanTracker::get_CurrentTrackingMethod()
extern "C"  TrackingMethodBase_t888542705 * KudanTracker_get_CurrentTrackingMethod_m3985646878 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::Start()
extern "C"  void KudanTracker_Start_m4203489892 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Kudan.AR.KudanTracker::RunLicensing()
extern "C"  Il2CppObject * KudanTracker_RunLicensing_m2286859467 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::OnEnable()
extern "C"  void KudanTracker_OnEnable_m3844344738 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::OnDisable()
extern "C"  void KudanTracker_OnDisable_m3651507147 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::OnApplicationFocus(System.Boolean)
extern "C"  void KudanTracker_OnApplicationFocus_m2039792126 (KudanTracker_t2187476953 * __this, bool ___focusStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::OnApplicationPause(System.Boolean)
extern "C"  void KudanTracker_OnApplicationPause_m3493959452 (KudanTracker_t2187476953 * __this, bool ___pauseStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::StartTracking()
extern "C"  void KudanTracker_StartTracking_m2777497723 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::StopTracking()
extern "C"  void KudanTracker_StopTracking_m1420437241 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::ChangeTrackingMethod(Kudan.AR.TrackingMethodBase)
extern "C"  void KudanTracker_ChangeTrackingMethod_m860849579 (KudanTracker_t2187476953 * __this, TrackingMethodBase_t888542705 * ___newTrackingMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::ArbiTrackStart(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void KudanTracker_ArbiTrackStart_m3329282599 (KudanTracker_t2187476953 * __this, Vector3_t3525329789  ___position, Quaternion_t1891715979  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.KudanTracker::ArbiTrackIsTracking()
extern "C"  bool KudanTracker_ArbiTrackIsTracking_m916213450 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::FloorPlaceGetPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void KudanTracker_FloorPlaceGetPose_m1333529948 (KudanTracker_t2187476953 * __this, Vector3_t3525329789 * ___position, Quaternion_t1891715979 * ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::ArbiTrackGetPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void KudanTracker_ArbiTrackGetPose_m1263315874 (KudanTracker_t2187476953 * __this, Vector3_t3525329789 * ___position, Quaternion_t1891715979 * ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::OnDestroy()
extern "C"  void KudanTracker_OnDestroy_m1534071901 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::Update()
extern "C"  void KudanTracker_Update_m1465019945 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::OnPostRender()
extern "C"  void KudanTracker_OnPostRender_m3365252277 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::ProcessNewTrackables()
extern "C"  void KudanTracker_ProcessNewTrackables_m2755155231 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.KudanTracker::HasActiveTrackingData()
extern "C"  bool KudanTracker_HasActiveTrackingData_m2001779031 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::OnDrawGizmos()
extern "C"  void KudanTracker_OnDrawGizmos_m746383164 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.KudanTracker::StartLineRendering()
extern "C"  bool KudanTracker_StartLineRendering_m288080930 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::RenderAxes()
extern "C"  void KudanTracker_RenderAxes_m35763003 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::OnGUI()
extern "C"  void KudanTracker_OnGUI_m456783454 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.KudanTracker::CreateDebugLineMaterial()
extern "C"  void KudanTracker_CreateDebugLineMaterial_m412507476 (KudanTracker_t2187476953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
