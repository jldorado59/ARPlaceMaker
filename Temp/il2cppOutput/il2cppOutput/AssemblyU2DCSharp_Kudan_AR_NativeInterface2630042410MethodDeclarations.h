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

// Kudan.AR.NativeInterface
struct NativeInterface_t2630042410;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void Kudan.AR.NativeInterface::.ctor()
extern "C"  void NativeInterface__ctor_m3221203343 (NativeInterface_t2630042410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.NativeInterface::Init()
extern "C"  bool NativeInterface_Init_m1294308761 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.NativeInterface::Deinit()
extern "C"  void NativeInterface_Deinit_m2219145638 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Kudan.AR.NativeInterface::GetPluginVersion()
extern "C"  float NativeInterface_GetPluginVersion_m3773613392 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.NativeInterface::AddTrackableSet(System.IntPtr,System.Int32)
extern "C"  bool NativeInterface_AddTrackableSet_m2827330426 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataPointer, int32_t ___dataLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.NativeInterface::ProcessFrame(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void NativeInterface_ProcessFrame_m3538061238 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataPointer, int32_t ___width, int32_t ___height, int32_t ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Kudan.AR.NativeInterface::GetNumberOfTrackables()
extern "C"  int32_t NativeInterface_GetNumberOfTrackables_m3428461155 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Kudan.AR.NativeInterface::GetNumberOfDetectedTrackables()
extern "C"  int32_t NativeInterface_GetNumberOfDetectedTrackables_m2273750533 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.NativeInterface::GetProjectionMatrix(System.Single,System.Single,System.Single[])
extern "C"  bool NativeInterface_GetProjectionMatrix_m668105556 (Il2CppObject * __this /* static, unused */, float ___nearPlane, float ___farPlane, SingleU5BU5D_t1219431280* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.NativeInterface::GetDetectedTrackable(System.Int32,System.Single[],System.Int32&,System.Int32&,System.Int32&,System.Text.StringBuilder)
extern "C"  bool NativeInterface_GetDetectedTrackable_m2536748045 (Il2CppObject * __this /* static, unused */, int32_t ___index, SingleU5BU5D_t1219431280* ___result, int32_t* ___width, int32_t* ___height, int32_t* ___trackingMethod, StringBuilder_t3822575854 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.NativeInterface::EnableTrackingMethod(System.Int32)
extern "C"  bool NativeInterface_EnableTrackingMethod_m1417281525 (Il2CppObject * __this /* static, unused */, int32_t ___trackingMethodId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.NativeInterface::DisableTrackingMethod(System.Int32)
extern "C"  bool NativeInterface_DisableTrackingMethod_m2069949898 (Il2CppObject * __this /* static, unused */, int32_t ___trackingMethodId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.NativeInterface::ArbiTrackGetPose(System.Single[])
extern "C"  void NativeInterface_ArbiTrackGetPose_m4081347200 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.NativeInterface::ArbiTrackStart(System.Single[])
extern "C"  void NativeInterface_ArbiTrackStart_m1534118981 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___pose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Kudan.AR.NativeInterface::ArbiTrackIsTracking()
extern "C"  bool NativeInterface_ArbiTrackIsTracking_m414691789 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Kudan.AR.NativeInterface::FloorPlaceGetPose(System.Single[],System.Single)
extern "C"  void NativeInterface_FloorPlaceGetPose_m3801004533 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___pose, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
