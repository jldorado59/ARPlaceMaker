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

// Kudan.AR.TrackerBase
struct TrackerBase_t2694038129;
// Kudan.AR.Trackable
struct Trackable_t1993354605;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t1769722184;
// Kudan.AR.Trackable[]
struct TrackableU5BU5D_t2840057408;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Void Kudan.AR.TrackerBase::.ctor()
extern "C"  void TrackerBase__ctor_m3726205224 (TrackerBase_t2694038129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Kudan.AR.TrackerBase::get_CameraFrameRate()
extern "C"  float TrackerBase_get_CameraFrameRate_m4007859417 (TrackerBase_t2694038129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Kudan.AR.TrackerBase::get_TrackerFrameRate()
extern "C"  float TrackerBase_get_TrackerFrameRate_m2941106630 (TrackerBase_t2694038129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Kudan.AR.TrackerBase::get_AppFrameRate()
extern "C"  float TrackerBase_get_AppFrameRate_m4160623421 (TrackerBase_t2694038129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Kudan.AR.TrackerBase::GetPluginVersion()
extern "C"  float TrackerBase_GetPluginVersion_m1242286615 (TrackerBase_t2694038129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Kudan.AR.TrackerBase::GetNumTrackables()
extern "C"  int32_t TrackerBase_GetNumTrackables_m3004261256 (TrackerBase_t2694038129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Kudan.AR.Trackable Kudan.AR.TrackerBase::GetTrackable(System.Int32)
extern "C"  Trackable_t1993354605 * TrackerBase_GetTrackable_m2564835242 (TrackerBase_t2694038129 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackerBase::IsTrackingRunning()
extern "C"  bool TrackerBase_IsTrackingRunning_m1116233616 (TrackerBase_t2694038129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackerBase::RemoveTrackable(System.String)
extern "C"  void TrackerBase_RemoveTrackable_m4041080219 (TrackerBase_t2694038129 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackerBase::ClearTrackables()
extern "C"  void TrackerBase_ClearTrackables_m2116332385 (TrackerBase_t2694038129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.TrackerBase::SetupRenderingCamera(System.Single,System.Single)
extern "C"  void TrackerBase_SetupRenderingCamera_m2603821728 (TrackerBase_t2694038129 * __this, float ___cameraNearPlane, float ___cameraFarPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.TrackerBase::AddTrackable(System.String,System.String)
extern "C"  bool TrackerBase_AddTrackable_m1516200426 (TrackerBase_t2694038129 * __this, String_t* ___path, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Kudan.AR.TrackerBase::GetTrackingTexture()
extern "C"  Texture_t1769722184 * TrackerBase_GetTrackingTexture_m6273753 (TrackerBase_t2694038129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Kudan.AR.TrackerBase::GetNumDetectedTrackables()
extern "C"  int32_t TrackerBase_GetNumDetectedTrackables_m1910043178 (TrackerBase_t2694038129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Kudan.AR.Trackable Kudan.AR.TrackerBase::GetDetectedTrackable(System.Int32)
extern "C"  Trackable_t1993354605 * TrackerBase_GetDetectedTrackable_m301970376 (TrackerBase_t2694038129 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Kudan.AR.TrackerBase::GetProjectionMatrix()
extern "C"  Matrix4x4_t277289660  TrackerBase_GetProjectionMatrix_m69329393 (TrackerBase_t2694038129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Kudan.AR.Trackable[] Kudan.AR.TrackerBase::GetDetectedTrackablesAsArray()
extern "C"  TrackableU5BU5D_t2840057408* TrackerBase_GetDetectedTrackablesAsArray_m10490793 (TrackerBase_t2694038129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
