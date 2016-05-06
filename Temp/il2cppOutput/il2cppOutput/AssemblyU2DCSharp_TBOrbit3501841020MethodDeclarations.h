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

// TBOrbit
struct TBOrbit_t3501841020;
// DragGesture
struct DragGesture_t2914643285;
// PinchGesture
struct PinchGesture_t1502590799;
// GestureRecognizer
struct GestureRecognizer_t3512875949;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_DragGesture2914643285.h"
#include "AssemblyU2DCSharp_PinchGesture1502590799.h"
#include "AssemblyU2DCSharp_GestureRecognizer3512875949.h"

// System.Void TBOrbit::.ctor()
extern "C"  void TBOrbit__ctor_m2138529903 (TBOrbit_t3501841020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TBOrbit::get_Distance()
extern "C"  float TBOrbit_get_Distance_m1488810983 (TBOrbit_t3501841020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TBOrbit::get_IdealDistance()
extern "C"  float TBOrbit_get_IdealDistance_m2874419290 (TBOrbit_t3501841020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::set_IdealDistance(System.Single)
extern "C"  void TBOrbit_set_IdealDistance_m1556939089 (TBOrbit_t3501841020 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TBOrbit::get_Yaw()
extern "C"  float TBOrbit_get_Yaw_m1931170015 (TBOrbit_t3501841020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TBOrbit::get_IdealYaw()
extern "C"  float TBOrbit_get_IdealYaw_m2936823948 (TBOrbit_t3501841020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::set_IdealYaw(System.Single)
extern "C"  void TBOrbit_set_IdealYaw_m2220099295 (TBOrbit_t3501841020 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TBOrbit::get_Pitch()
extern "C"  float TBOrbit_get_Pitch_m1258996144 (TBOrbit_t3501841020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TBOrbit::get_IdealPitch()
extern "C"  float TBOrbit_get_IdealPitch_m1324784157 (TBOrbit_t3501841020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::set_IdealPitch(System.Single)
extern "C"  void TBOrbit_set_IdealPitch_m1475219694 (TBOrbit_t3501841020 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TBOrbit::get_IdealPanOffset()
extern "C"  Vector3_t3525329789  TBOrbit_get_IdealPanOffset_m959699583 (TBOrbit_t3501841020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::set_IdealPanOffset(UnityEngine.Vector3)
extern "C"  void TBOrbit_set_IdealPanOffset_m2351606924 (TBOrbit_t3501841020 * __this, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TBOrbit::get_PanOffset()
extern "C"  Vector3_t3525329789  TBOrbit_get_PanOffset_m1211261230 (TBOrbit_t3501841020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::InstallGestureRecognizers()
extern "C"  void TBOrbit_InstallGestureRecognizers_m3369568910 (TBOrbit_t3501841020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::Start()
extern "C"  void TBOrbit_Start_m1085667695 (TBOrbit_t3501841020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::OnDrag(DragGesture)
extern "C"  void TBOrbit_OnDrag_m3310469973 (TBOrbit_t3501841020 * __this, DragGesture_t2914643285 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::OnPinch(PinchGesture)
extern "C"  void TBOrbit_OnPinch_m3884041721 (TBOrbit_t3501841020 * __this, PinchGesture_t1502590799 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::OnTwoFingerDrag(DragGesture)
extern "C"  void TBOrbit_OnTwoFingerDrag_m1163269318 (TBOrbit_t3501841020 * __this, DragGesture_t2914643285 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::Apply()
extern "C"  void TBOrbit_Apply_m2189632891 (TBOrbit_t3501841020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::LateUpdate()
extern "C"  void TBOrbit_LateUpdate_m2590234436 (TBOrbit_t3501841020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TBOrbit::ClampAngle(System.Single,System.Single,System.Single)
extern "C"  float TBOrbit_ClampAngle_m2904755156 (Il2CppObject * __this /* static, unused */, float ___angle, float ___min, float ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::ResetPanning()
extern "C"  void TBOrbit_ResetPanning_m148413687 (TBOrbit_t3501841020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TBOrbit::<InstallGestureRecognizers>m__4(GestureRecognizer)
extern "C"  bool TBOrbit_U3CInstallGestureRecognizersU3Em__4_m824295972 (Il2CppObject * __this /* static, unused */, GestureRecognizer_t3512875949 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TBOrbit::<InstallGestureRecognizers>m__5(GestureRecognizer)
extern "C"  bool TBOrbit_U3CInstallGestureRecognizersU3Em__5_m415471747 (Il2CppObject * __this /* static, unused */, GestureRecognizer_t3512875949 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TBOrbit::<InstallGestureRecognizers>m__6(GestureRecognizer)
extern "C"  bool TBOrbit_U3CInstallGestureRecognizersU3Em__6_m6647522 (Il2CppObject * __this /* static, unused */, GestureRecognizer_t3512875949 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
