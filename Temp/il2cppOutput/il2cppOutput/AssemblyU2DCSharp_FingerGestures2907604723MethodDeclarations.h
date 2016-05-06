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

// FingerGestures
struct FingerGestures_t2907604723;
// Gesture/EventHandler
struct EventHandler_t1765379952;
// FingerEventDetector`1/FingerEventHandler<FingerEvent>
struct FingerEventHandler_t3850568487;
// Gesture
struct Gesture_t1589572905;
// FingerEvent
struct FingerEvent_t252338321;
// FingerClusterManager
struct FingerClusterManager_t3376029756;
// FGInputProvider
struct FGInputProvider_t1238597786;
// FingerGestures/Finger
struct Finger_t2104389513;
// FingerGestures/IFingerList
struct IFingerList_t2944704720;
// System.Collections.Generic.List`1<GestureRecognizer>
struct List_1_t14867622;
// GestureRecognizer
struct GestureRecognizer_t3512875949;
// FingerGestures/GlobalTouchFilterDelegate
struct GlobalTouchFilterDelegate_t1567385977;
// UnityEngine.Transform
struct Transform_t284553113;
// System.String
struct String_t;
// FingerGestures/Finger[]
struct FingerU5BU5D_t400038964;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gesture_EventHandler1765379952.h"
#include "AssemblyU2DCSharp_Gesture1589572905.h"
#include "AssemblyU2DCSharp_FingerEvent252338321.h"
#include "AssemblyU2DCSharp_FGInputProvider1238597786.h"
#include "AssemblyU2DCSharp_GestureRecognizer3512875949.h"
#include "AssemblyU2DCSharp_FingerGestures_GlobalTouchFilter1567385977.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "AssemblyU2DCSharp_FingerGestures_SwipeDirection80164229.h"
#include "AssemblyU2DCSharp_FingerGestures_Finger2104389513.h"

// System.Void FingerGestures::.ctor()
extern "C"  void FingerGestures__ctor_m594831112 (FingerGestures_t2907604723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::.cctor()
extern "C"  void FingerGestures__cctor_m777799077 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::add_OnGestureEvent(Gesture/EventHandler)
extern "C"  void FingerGestures_add_OnGestureEvent_m3115828692 (Il2CppObject * __this /* static, unused */, EventHandler_t1765379952 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::remove_OnGestureEvent(Gesture/EventHandler)
extern "C"  void FingerGestures_remove_OnGestureEvent_m3963595579 (Il2CppObject * __this /* static, unused */, EventHandler_t1765379952 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::add_OnFingerEvent(FingerEventDetector`1/FingerEventHandler<FingerEvent>)
extern "C"  void FingerGestures_add_OnFingerEvent_m320121231 (Il2CppObject * __this /* static, unused */, FingerEventHandler_t3850568487 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::remove_OnFingerEvent(FingerEventDetector`1/FingerEventHandler<FingerEvent>)
extern "C"  void FingerGestures_remove_OnFingerEvent_m110441206 (Il2CppObject * __this /* static, unused */, FingerEventHandler_t3850568487 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::FireEvent(Gesture)
extern "C"  void FingerGestures_FireEvent_m3288616575 (Il2CppObject * __this /* static, unused */, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::FireEvent(FingerEvent)
extern "C"  void FingerGestures_FireEvent_m3269593239 (Il2CppObject * __this /* static, unused */, FingerEvent_t252338321 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerClusterManager FingerGestures::get_DefaultClusterManager()
extern "C"  FingerClusterManager_t3376029756 * FingerGestures_get_DefaultClusterManager_m3075425936 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures FingerGestures::get_Instance()
extern "C"  FingerGestures_t2907604723 * FingerGestures_get_Instance_m590289156 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::Init()
extern "C"  void FingerGestures_Init_m2880218700 (FingerGestures_t2907604723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FGInputProvider FingerGestures::get_InputProvider()
extern "C"  FGInputProvider_t1238597786 * FingerGestures_get_InputProvider_m3869525887 (FingerGestures_t2907604723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::InitInputProvider()
extern "C"  void FingerGestures_InitInputProvider_m3634993809 (FingerGestures_t2907604723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::InstallInputProvider(FGInputProvider)
extern "C"  void FingerGestures_InstallInputProvider_m4289455452 (FingerGestures_t2907604723 * __this, FGInputProvider_t1238597786 * ___inputProviderPrefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FingerGestures::get_MaxFingers()
extern "C"  int32_t FingerGestures_get_MaxFingers_m3541252729 (FingerGestures_t2907604723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/Finger FingerGestures::GetFinger(System.Int32)
extern "C"  Finger_t2104389513 * FingerGestures_GetFinger_m3441520136 (Il2CppObject * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/IFingerList FingerGestures::get_Touches()
extern "C"  Il2CppObject * FingerGestures_get_Touches_m183703553 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GestureRecognizer> FingerGestures::get_RegisteredGestureRecognizers()
extern "C"  List_1_t14867622 * FingerGestures_get_RegisteredGestureRecognizers_m1537119707 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::Register(GestureRecognizer)
extern "C"  void FingerGestures_Register_m385012582 (Il2CppObject * __this /* static, unused */, GestureRecognizer_t3512875949 * ___recognizer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::Unregister(GestureRecognizer)
extern "C"  void FingerGestures_Unregister_m182540269 (Il2CppObject * __this /* static, unused */, GestureRecognizer_t3512875949 * ___recognizer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures::get_PixelDistanceScale()
extern "C"  float FingerGestures_get_PixelDistanceScale_m142876736 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::set_PixelDistanceScale(System.Single)
extern "C"  void FingerGestures_set_PixelDistanceScale_m77064387 (Il2CppObject * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures::GetAdjustedPixelDistance(System.Single)
extern "C"  float FingerGestures_GetAdjustedPixelDistance_m3885969708 (Il2CppObject * __this /* static, unused */, float ___rawPixelDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures::IsRetinaDisplay()
extern "C"  bool FingerGestures_IsRetinaDisplay_m3769002511 (FingerGestures_t2907604723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::Awake()
extern "C"  void FingerGestures_Awake_m832436331 (FingerGestures_t2907604723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::Start()
extern "C"  void FingerGestures_Start_m3836936200 (FingerGestures_t2907604723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::OnEnable()
extern "C"  void FingerGestures_OnEnable_m1650172798 (FingerGestures_t2907604723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::CheckInit()
extern "C"  void FingerGestures_CheckInit_m754777566 (FingerGestures_t2907604723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::Update()
extern "C"  void FingerGestures_Update_m2986757381 (FingerGestures_t2907604723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::InitFingers(System.Int32)
extern "C"  void FingerGestures_InitFingers_m1105655345 (FingerGestures_t2907604723 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::UpdateFingers()
extern "C"  void FingerGestures_UpdateFingers_m2783221767 (FingerGestures_t2907604723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/GlobalTouchFilterDelegate FingerGestures::get_GlobalTouchFilter()
extern "C"  GlobalTouchFilterDelegate_t1567385977 * FingerGestures_get_GlobalTouchFilter_m3331615665 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::set_GlobalTouchFilter(FingerGestures/GlobalTouchFilterDelegate)
extern "C"  void FingerGestures_set_GlobalTouchFilter_m2171098112 (Il2CppObject * __this /* static, unused */, GlobalTouchFilterDelegate_t1567385977 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures::ShouldProcessTouch(System.Int32,UnityEngine.Vector2)
extern "C"  bool FingerGestures_ShouldProcessTouch_m2389199256 (FingerGestures_t2907604723 * __this, int32_t ___fingerIndex, Vector2_t3525329788  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform FingerGestures::CreateNode(System.String,UnityEngine.Transform)
extern "C"  Transform_t284553113 * FingerGestures_CreateNode_m3982322433 (FingerGestures_t2907604723 * __this, String_t* ___name, Transform_t284553113 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::InitNodes()
extern "C"  void FingerGestures_InitNodes_m3712761063 (FingerGestures_t2907604723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/SwipeDirection FingerGestures::GetSwipeDirection(UnityEngine.Vector2,System.Single)
extern "C"  int32_t FingerGestures_GetSwipeDirection_m1893702352 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___dir, float ___tolerance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/SwipeDirection FingerGestures::GetSwipeDirection(UnityEngine.Vector2)
extern "C"  int32_t FingerGestures_GetSwipeDirection_m3081140011 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures::UsingUnityRemote()
extern "C"  bool FingerGestures_UsingUnityRemote_m3473835431 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures::AllFingersMoving(FingerGestures/Finger[])
extern "C"  bool FingerGestures_AllFingersMoving_m3365127044 (Il2CppObject * __this /* static, unused */, FingerU5BU5D_t400038964* ___fingers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures::FingersMovedInOppositeDirections(FingerGestures/Finger,FingerGestures/Finger,System.Single)
extern "C"  bool FingerGestures_FingersMovedInOppositeDirections_m2661933120 (Il2CppObject * __this /* static, unused */, Finger_t2104389513 * ___finger0, Finger_t2104389513 * ___finger1, float ___minDOT, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures::SignedAngle(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float FingerGestures_SignedAngle_m291979933 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___from, Vector2_t3525329788  ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures::NormalizeAngle360(System.Single)
extern "C"  float FingerGestures_NormalizeAngle360_m1488664074 (Il2CppObject * __this /* static, unused */, float ___angleInDegrees, const MethodInfo* method) IL2CPP_METHOD_ATTR;
