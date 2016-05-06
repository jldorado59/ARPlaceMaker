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

// Gesture
struct Gesture_t1589572905;
// Gesture/EventHandler
struct EventHandler_t1765379952;
// FingerGestures/FingerList
struct FingerList_t978167751;
// GestureRecognizer
struct GestureRecognizer_t3512875949;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// ScreenRaycaster
struct ScreenRaycaster_t4188861866;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gesture_EventHandler1765379952.h"
#include "AssemblyU2DCSharp_FingerGestures_FingerList978167751.h"
#include "AssemblyU2DCSharp_GestureRecognizer3512875949.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_GestureRecognitionState3604239971.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "AssemblyU2DCSharp_ScreenRaycaster4188861866.h"

// System.Void Gesture::.ctor()
extern "C"  void Gesture__ctor_m1915811938 (Gesture_t1589572905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::add_OnStateChanged(Gesture/EventHandler)
extern "C"  void Gesture_add_OnStateChanged_m1220715596 (Gesture_t1589572905 * __this, EventHandler_t1765379952 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::remove_OnStateChanged(Gesture/EventHandler)
extern "C"  void Gesture_remove_OnStateChanged_m533623847 (Gesture_t1589572905 * __this, EventHandler_t1765379952 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/FingerList Gesture::get_Fingers()
extern "C"  FingerList_t978167751 * Gesture_get_Fingers_m497292433 (Gesture_t1589572905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_Fingers(FingerGestures/FingerList)
extern "C"  void Gesture_set_Fingers_m394850946 (Gesture_t1589572905 * __this, FingerList_t978167751 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognizer Gesture::get_Recognizer()
extern "C"  GestureRecognizer_t3512875949 * Gesture_get_Recognizer_m3443234761 (Gesture_t1589572905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_Recognizer(GestureRecognizer)
extern "C"  void Gesture_set_Recognizer_m532011202 (Gesture_t1589572905 * __this, GestureRecognizer_t3512875949 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Gesture::get_StartTime()
extern "C"  float Gesture_get_StartTime_m3223758450 (Gesture_t1589572905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_StartTime(System.Single)
extern "C"  void Gesture_set_StartTime_m3721071161 (Gesture_t1589572905 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Gesture::get_StartPosition()
extern "C"  Vector2_t3525329788  Gesture_get_StartPosition_m285519837 (Gesture_t1589572905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_StartPosition(UnityEngine.Vector2)
extern "C"  void Gesture_set_StartPosition_m1839633132 (Gesture_t1589572905 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Gesture::get_Position()
extern "C"  Vector2_t3525329788  Gesture_get_Position_m451484505 (Gesture_t1589572905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_Position(UnityEngine.Vector2)
extern "C"  void Gesture_set_Position_m1053063218 (Gesture_t1589572905 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState Gesture::get_State()
extern "C"  int32_t Gesture_get_State_m3157652344 (Gesture_t1589572905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_State(GestureRecognitionState)
extern "C"  void Gesture_set_State_m3236968059 (Gesture_t1589572905 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState Gesture::get_PreviousState()
extern "C"  int32_t Gesture_get_PreviousState_m3646314113 (Gesture_t1589572905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Gesture::get_ElapsedTime()
extern "C"  float Gesture_get_ElapsedTime_m1051477900 (Gesture_t1589572905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Gesture::get_StartSelection()
extern "C"  GameObject_t4012695102 * Gesture_get_StartSelection_m988830432 (Gesture_t1589572905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_StartSelection(UnityEngine.GameObject)
extern "C"  void Gesture_set_StartSelection_m3674641569 (Gesture_t1589572905 * __this, GameObject_t4012695102 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Gesture::get_Selection()
extern "C"  GameObject_t4012695102 * Gesture_get_Selection_m2085766488 (Gesture_t1589572905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_Selection(UnityEngine.GameObject)
extern "C"  void Gesture_set_Selection_m1954834151 (Gesture_t1589572905 * __this, GameObject_t4012695102 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit Gesture::get_Hit()
extern "C"  RaycastHit_t46221527  Gesture_get_Hit_m1353673382 (Gesture_t1589572905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_Hit(UnityEngine.RaycastHit)
extern "C"  void Gesture_set_Hit_m4035210741 (Gesture_t1589572905 * __this, RaycastHit_t46221527  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Gesture::PickObject(ScreenRaycaster,UnityEngine.Vector2)
extern "C"  GameObject_t4012695102 * Gesture_PickObject_m2988082767 (Gesture_t1589572905 * __this, ScreenRaycaster_t4188861866 * ___raycaster, Vector2_t3525329788  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::PickStartSelection(ScreenRaycaster)
extern "C"  void Gesture_PickStartSelection_m2468673915 (Gesture_t1589572905 * __this, ScreenRaycaster_t4188861866 * ___raycaster, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::PickSelection(ScreenRaycaster)
extern "C"  void Gesture_PickSelection_m4111963517 (Gesture_t1589572905 * __this, ScreenRaycaster_t4188861866 * ___raycaster, const MethodInfo* method) IL2CPP_METHOD_ATTR;
