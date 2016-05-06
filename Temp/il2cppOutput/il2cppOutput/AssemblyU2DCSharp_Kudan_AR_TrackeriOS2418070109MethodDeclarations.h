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

// Kudan.AR.TrackeriOS
struct TrackeriOS_t2418070109;
// UnityEngine.Renderer
struct Renderer_t1092684080;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.Generic.List`1<Kudan.AR.Trackable>
struct List_1_t2790313574;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Renderer1092684080.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Void Kudan.AR.TrackeriOS::.ctor(UnityEngine.Renderer)
extern "C"  void TrackeriOS__ctor_m3309728422 (TrackeriOS_t2418070109 * __this, Renderer_t1092684080 * ___background, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Kudan.AR.TrackeriOS::GetRenderEventFunc()
extern "C"  IntPtr_t TrackeriOS_GetRenderEventFunc_m275853601 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::SetApiKeyNative(System.String,System.String)
extern "C"  void TrackeriOS_SetApiKeyNative_m229686562 (Il2CppObject * __this /* static, unused */, String_t* ___key, String_t* ___bundleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Kudan.AR.TrackeriOS::GetTextureForPlane(System.Int32,System.Int32&,System.Int32&)
extern "C"  IntPtr_t TrackeriOS_GetTextureForPlane_m262256418 (Il2CppObject * __this /* static, unused */, int32_t ___plane, int32_t* ___width, int32_t* ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Kudan.AR.TrackeriOS::GetCaptureDeviceCount()
extern "C"  int32_t TrackeriOS_GetCaptureDeviceCount_m3533276405 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackeriOS::BeginCaptureSession(System.Int32,System.Int32,System.Int32)
extern "C"  bool TrackeriOS_BeginCaptureSession_m3060347484 (Il2CppObject * __this /* static, unused */, int32_t ___deviceIndex, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::EndCaptureSession()
extern "C"  void TrackeriOS_EndCaptureSession_m485989609 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::BeginTracking()
extern "C"  void TrackeriOS_BeginTracking_m1374614142 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::EndTracking()
extern "C"  void TrackeriOS_EndTracking_m2253621104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Kudan.AR.TrackeriOS::GetCaptureDeviceRate()
extern "C"  float TrackeriOS_GetCaptureDeviceRate_m3413734686 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Kudan.AR.TrackeriOS::GetTrackerRate()
extern "C"  float TrackeriOS_GetTrackerRate_m1085019866 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::GetDetectedTrackable(System.Int32,System.Text.StringBuilder,System.Int32,System.Int32&,System.Int32&,System.Single[],System.Single[])
extern "C"  void TrackeriOS_GetDetectedTrackable_m452605409 (Il2CppObject * __this /* static, unused */, int32_t ___index, StringBuilder_t3822575854 * ___name, int32_t ___nameSize, int32_t* ___width, int32_t* ___height, SingleU5BU5D_t1219431280* ___pos, SingleU5BU5D_t1219431280* ___ori, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackeriOS::InitPlugin()
extern "C"  bool TrackeriOS_InitPlugin_m3512976019 (TrackeriOS_t2418070109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::DeinitPlugin()
extern "C"  void TrackeriOS_DeinitPlugin_m1126129928 (TrackeriOS_t2418070109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Kudan.AR.TrackeriOS::GetNativePluginVersion()
extern "C"  float TrackeriOS_GetNativePluginVersion_m1701023600 (TrackeriOS_t2418070109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::OnApplicationFocus(System.Boolean)
extern "C"  void TrackeriOS_OnApplicationFocus_m3277909506 (TrackeriOS_t2418070109 * __this, bool ___focusStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::OnApplicationPause(System.Boolean)
extern "C"  void TrackeriOS_OnApplicationPause_m437109536 (TrackeriOS_t2418070109 * __this, bool ___pauseStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Kudan.AR.TrackeriOS::GetNumCameras()
extern "C"  int32_t TrackeriOS_GetNumCameras_m1409384202 (TrackeriOS_t2418070109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackeriOS::StartInputFromImage(UnityEngine.Texture2D)
extern "C"  bool TrackeriOS_StartInputFromImage_m1234001697 (TrackeriOS_t2418070109 * __this, Texture2D_t2509538522 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackeriOS::StartInputFromCamera(System.Int32,System.Int32,System.Int32)
extern "C"  bool TrackeriOS_StartInputFromCamera_m822595256 (TrackeriOS_t2418070109 * __this, int32_t ___deviceIndex, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::StopInput()
extern "C"  void TrackeriOS_StopInput_m2025246054 (TrackeriOS_t2418070109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackeriOS::AddTrackable(System.Byte[],System.String)
extern "C"  bool TrackeriOS_AddTrackable_m1506993169 (TrackeriOS_t2418070109 * __this, ByteU5BU5D_t58506160* ___data, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::UpdateTracking()
extern "C"  void TrackeriOS_UpdateTracking_m1107022916 (TrackeriOS_t2418070109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::PostRender()
extern "C"  void TrackeriOS_PostRender_m2269213690 (TrackeriOS_t2418070109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::StartTracking()
extern "C"  void TrackeriOS_StartTracking_m2970135287 (TrackeriOS_t2418070109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::StopTracking()
extern "C"  void TrackeriOS_StopTracking_m2535030013 (TrackeriOS_t2418070109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackeriOS::EnableTrackingMethod(System.Int32)
extern "C"  bool TrackeriOS_EnableTrackingMethod_m4206482716 (TrackeriOS_t2418070109 * __this, int32_t ___trackingMethodId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackeriOS::DisableTrackingMethod(System.Int32)
extern "C"  bool TrackeriOS_DisableTrackingMethod_m2635840899 (TrackeriOS_t2418070109 * __this, int32_t ___trackingMethodId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::SetApiKey(System.String,System.String)
extern "C"  void TrackeriOS_SetApiKey_m3701387001 (TrackeriOS_t2418070109 * __this, String_t* ___key, String_t* ___bundleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Kudan.AR.TrackeriOS::ConvertNativeFloatsToMatrix(System.Single[],System.Single)
extern "C"  Matrix4x4_t277289660  TrackeriOS_ConvertNativeFloatsToMatrix_m1217820408 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___r, float ___cameraAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Kudan.AR.TrackeriOS::ConvertNativeFloatsToVector3(System.Single,System.Single,System.Single)
extern "C"  Vector3_t3525329789  TrackeriOS_ConvertNativeFloatsToVector3_m2297698007 (Il2CppObject * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Kudan.AR.TrackeriOS::ConvertNativeFloatsToQuaternion(System.Single,System.Single,System.Single,System.Single)
extern "C"  Quaternion_t1891715979  TrackeriOS_ConvertNativeFloatsToQuaternion_m1786005658 (Il2CppObject * __this /* static, unused */, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Kudan.AR.Trackable> Kudan.AR.TrackeriOS::GetDetected()
extern "C"  List_1_t2790313574 * TrackeriOS_GetDetected_m3467210200 (TrackeriOS_t2418070109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::SetYpCbCrMaterialOnBackground()
extern "C"  void TrackeriOS_SetYpCbCrMaterialOnBackground_m2057193721 (TrackeriOS_t2418070109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::UpdateBackground()
extern "C"  void TrackeriOS_UpdateBackground_m244246011 (TrackeriOS_t2418070109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::ArbiTrackStart(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void TrackeriOS_ArbiTrackStart_m3392811563 (TrackeriOS_t2418070109 * __this, Vector3_t3525329789  ___position, Quaternion_t1891715979  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackeriOS::ArbiTrackIsTracking()
extern "C"  bool TrackeriOS_ArbiTrackIsTracking_m524388678 (TrackeriOS_t2418070109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::FloorPlaceGetPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void TrackeriOS_FloorPlaceGetPose_m425856984 (TrackeriOS_t2418070109 * __this, Vector3_t3525329789 * ___position, Quaternion_t1891715979 * ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackeriOS::ArbiTrackGetPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void TrackeriOS_ArbiTrackGetPose_m2342414758 (TrackeriOS_t2418070109 * __this, Vector3_t3525329789 * ___position, Quaternion_t1891715979 * ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
