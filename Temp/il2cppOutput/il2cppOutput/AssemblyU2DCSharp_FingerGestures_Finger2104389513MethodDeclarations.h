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

// FingerGestures/Finger
struct Finger_t2104389513;
// System.Collections.Generic.List`1<GestureRecognizer>
struct List_1_t14867622;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FingerGestures_FingerPhase262076274.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void FingerGestures/Finger::.ctor(System.Int32)
extern "C"  void Finger__ctor_m1794669879 (Finger_t2104389513 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FingerGestures/Finger::get_Index()
extern "C"  int32_t Finger_get_Index_m1297082235 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/Finger::get_IsDown()
extern "C"  bool Finger_get_IsDown_m916118367 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/FingerPhase FingerGestures/Finger::get_Phase()
extern "C"  int32_t Finger_get_Phase_m3061736317 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/FingerPhase FingerGestures/Finger::get_PreviousPhase()
extern "C"  int32_t Finger_get_PreviousPhase_m3657497478 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/Finger::get_WasDown()
extern "C"  bool Finger_get_WasDown_m3609353018 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/Finger::get_IsMoving()
extern "C"  bool Finger_get_IsMoving_m2690745611 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/Finger::get_WasMoving()
extern "C"  bool Finger_get_WasMoving_m1023965734 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/Finger::get_IsStationary()
extern "C"  bool Finger_get_IsStationary_m1623710193 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/Finger::get_WasStationary()
extern "C"  bool Finger_get_WasStationary_m3093875084 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/Finger::get_Moved()
extern "C"  bool Finger_get_Moved_m1294150722 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures/Finger::get_StarTime()
extern "C"  float Finger_get_StarTime_m698847834 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/Finger::get_StartPosition()
extern "C"  Vector2_t3525329788  Finger_get_StartPosition_m1781884705 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/Finger::get_Position()
extern "C"  Vector2_t3525329788  Finger_get_Position_m1470884245 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/Finger::get_PreviousPosition()
extern "C"  Vector2_t3525329788  Finger_get_PreviousPosition_m361667820 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/Finger::get_DeltaPosition()
extern "C"  Vector2_t3525329788  Finger_get_DeltaPosition_m744925943 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures/Finger::get_DistanceFromStart()
extern "C"  float Finger_get_DistanceFromStart_m2972495626 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/Finger::get_IsFiltered()
extern "C"  bool Finger_get_IsFiltered_m250382740 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures/Finger::get_TimeStationary()
extern "C"  float Finger_get_TimeStationary_m2837102972 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GestureRecognizer> FingerGestures/Finger::get_GestureRecognizers()
extern "C"  List_1_t14867622 * Finger_get_GestureRecognizers_m126164095 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> FingerGestures/Finger::get_ExtendedProperties()
extern "C"  Dictionary_2_t2474804324 * Finger_get_ExtendedProperties_m619146967 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FingerGestures/Finger::ToString()
extern "C"  String_t* Finger_ToString_m781332167 (Finger_t2104389513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures/Finger::Update(System.Boolean,UnityEngine.Vector2)
extern "C"  void Finger_Update_m581451410 (Finger_t2104389513 * __this, bool ___newDownState, Vector2_t3525329788  ___newPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
