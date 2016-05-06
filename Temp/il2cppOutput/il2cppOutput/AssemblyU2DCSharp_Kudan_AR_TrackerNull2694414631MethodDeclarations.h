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

// Kudan.AR.TrackerNull
struct TrackerNull_t2694414631;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Void Kudan.AR.TrackerNull::.ctor()
extern "C"  void TrackerNull__ctor_m1105186610 (TrackerNull_t2694414631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackerNull::InitPlugin()
extern "C"  bool TrackerNull_InitPlugin_m950302825 (TrackerNull_t2694414631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackerNull::DeinitPlugin()
extern "C"  void TrackerNull_DeinitPlugin_m3468773750 (TrackerNull_t2694414631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Kudan.AR.TrackerNull::GetNativePluginVersion()
extern "C"  float TrackerNull_GetNativePluginVersion_m517578614 (TrackerNull_t2694414631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackerNull::OnApplicationFocus(System.Boolean)
extern "C"  void TrackerNull_OnApplicationFocus_m1018712944 (TrackerNull_t2694414631 * __this, bool ___focusStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackerNull::OnApplicationPause(System.Boolean)
extern "C"  void TrackerNull_OnApplicationPause_m2472880270 (TrackerNull_t2694414631 * __this, bool ___pauseStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackerNull::SetApiKey(System.String,System.String)
extern "C"  void TrackerNull_SetApiKey_m1741270375 (TrackerNull_t2694414631 * __this, String_t* ___key, String_t* ___bundleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Kudan.AR.TrackerNull::GetNumCameras()
extern "C"  int32_t TrackerNull_GetNumCameras_m3322126336 (TrackerNull_t2694414631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackerNull::AddTrackable(System.Byte[],System.String)
extern "C"  bool TrackerNull_AddTrackable_m3762406907 (TrackerNull_t2694414631 * __this, ByteU5BU5D_t58506160* ___data, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackerNull::StartInputFromImage(UnityEngine.Texture2D)
extern "C"  bool TrackerNull_StartInputFromImage_m2432350839 (TrackerNull_t2694414631 * __this, Texture2D_t2509538522 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackerNull::StartInputFromCamera(System.Int32,System.Int32,System.Int32)
extern "C"  bool TrackerNull_StartInputFromCamera_m4281417870 (TrackerNull_t2694414631 * __this, int32_t ___deviceIndex, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackerNull::StopInput()
extern "C"  void TrackerNull_StopInput_m3847056312 (TrackerNull_t2694414631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackerNull::StartTracking()
extern "C"  void TrackerNull_StartTracking_m2577649737 (TrackerNull_t2694414631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackerNull::StopTracking()
extern "C"  void TrackerNull_StopTracking_m582706539 (TrackerNull_t2694414631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackerNull::EnableTrackingMethod(System.Int32)
extern "C"  bool TrackerNull_EnableTrackingMethod_m2294998642 (TrackerNull_t2694414631 * __this, int32_t ___trackingMethodId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackerNull::DisableTrackingMethod(System.Int32)
extern "C"  bool TrackerNull_DisableTrackingMethod_m3509376749 (TrackerNull_t2694414631 * __this, int32_t ___trackingMethodId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackerNull::UpdateTracking()
extern "C"  void TrackerNull_UpdateTracking_m1824872754 (TrackerNull_t2694414631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackerNull::PostRender()
extern "C"  void TrackerNull_PostRender_m2910756840 (TrackerNull_t2694414631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackerNull::ArbiTrackStart(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void TrackerNull_ArbiTrackStart_m1236512153 (TrackerNull_t2694414631 * __this, Vector3_t3525329789  ___position, Quaternion_t1891715979  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackerNull::ArbiTrackIsTracking()
extern "C"  bool TrackerNull_ArbiTrackIsTracking_m39912496 (TrackerNull_t2694414631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackerNull::FloorPlaceGetPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void TrackerNull_FloorPlaceGetPose_m4250044714 (TrackerNull_t2694414631 * __this, Vector3_t3525329789 * ___position, Quaternion_t1891715979 * ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackerNull::ArbiTrackGetPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void TrackerNull_ArbiTrackGetPose_m1911586324 (TrackerNull_t2694414631 * __this, Vector3_t3525329789 * ___position, Quaternion_t1891715979 * ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
