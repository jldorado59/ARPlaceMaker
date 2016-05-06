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

// FingerGestures/FingerList
struct FingerList_t978167751;
// System.Collections.Generic.List`1<FingerGestures/Finger>
struct List_1_t2901348482;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// FingerGestures/Finger
struct Finger_t2104389513;
// System.Collections.Generic.IEnumerator`1<FingerGestures/Finger>
struct IEnumerator_1_t3587495961;
// System.Collections.Generic.IEnumerable`1<FingerGestures/Finger>
struct IEnumerable_1_t681576573;
// FingerGestures/FingerList/FingerPropertyGetterDelegate`1<UnityEngine.Vector2>
struct FingerPropertyGetterDelegate_1_t4123127752;
// FingerGestures/FingerList/FingerPropertyGetterDelegate`1<System.Single>
struct FingerPropertyGetterDelegate_1_t1556006985;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FingerGestures_Finger2104389513.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void FingerGestures/FingerList::.ctor()
extern "C"  void FingerList__ctor_m2103466088 (FingerList_t978167751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures/FingerList::.ctor(System.Collections.Generic.List`1<FingerGestures/Finger>)
extern "C"  void FingerList__ctor_m1848710097 (FingerList_t978167751 * __this, List_1_t2901348482 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FingerGestures/FingerList::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * FingerList_System_Collections_IEnumerable_GetEnumerator_m2323380217 (FingerList_t978167751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/Finger FingerGestures/FingerList::get_Item(System.Int32)
extern "C"  Finger_t2104389513 * FingerList_get_Item_m607210619 (FingerList_t978167751 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FingerGestures/FingerList::get_Count()
extern "C"  int32_t FingerList_get_Count_m1753666554 (FingerList_t978167751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<FingerGestures/Finger> FingerGestures/FingerList::GetEnumerator()
extern "C"  Il2CppObject* FingerList_GetEnumerator_m1065016109 (FingerList_t978167751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures/FingerList::Add(FingerGestures/Finger)
extern "C"  void FingerList_Add_m775724646 (FingerList_t978167751 * __this, Finger_t2104389513 * ___touch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/FingerList::Remove(FingerGestures/Finger)
extern "C"  bool FingerList_Remove_m2063917377 (FingerList_t978167751 * __this, Finger_t2104389513 * ___touch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/FingerList::Contains(FingerGestures/Finger)
extern "C"  bool FingerList_Contains_m2950089478 (FingerList_t978167751 * __this, Finger_t2104389513 * ___touch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures/FingerList::AddRange(System.Collections.Generic.IEnumerable`1<FingerGestures/Finger>)
extern "C"  void FingerList_AddRange_m1804957336 (FingerList_t978167751 * __this, Il2CppObject* ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures/FingerList::Clear()
extern "C"  void FingerList_Clear_m3804566675 (FingerList_t978167751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/FingerList::AverageVector(FingerGestures/FingerList/FingerPropertyGetterDelegate`1<UnityEngine.Vector2>)
extern "C"  Vector2_t3525329788  FingerList_AverageVector_m1851889530 (FingerList_t978167751 * __this, FingerPropertyGetterDelegate_1_t4123127752 * ___getProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures/FingerList::AverageFloat(FingerGestures/FingerList/FingerPropertyGetterDelegate`1<System.Single>)
extern "C"  float FingerList_AverageFloat_m768197051 (FingerList_t978167751 * __this, FingerPropertyGetterDelegate_1_t1556006985 * ___getProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/FingerList::GetFingerStartPosition(FingerGestures/Finger)
extern "C"  Vector2_t3525329788  FingerList_GetFingerStartPosition_m2798009056 (Il2CppObject * __this /* static, unused */, Finger_t2104389513 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/FingerList::GetFingerPosition(FingerGestures/Finger)
extern "C"  Vector2_t3525329788  FingerList_GetFingerPosition_m3277705220 (Il2CppObject * __this /* static, unused */, Finger_t2104389513 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/FingerList::GetFingerPreviousPosition(FingerGestures/Finger)
extern "C"  Vector2_t3525329788  FingerList_GetFingerPreviousPosition_m1930517773 (Il2CppObject * __this /* static, unused */, Finger_t2104389513 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures/FingerList::GetFingerDistanceFromStart(FingerGestures/Finger)
extern "C"  float FingerList_GetFingerDistanceFromStart_m2136576921 (Il2CppObject * __this /* static, unused */, Finger_t2104389513 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/FingerList::GetAverageStartPosition()
extern "C"  Vector2_t3525329788  FingerList_GetAverageStartPosition_m1560594469 (FingerList_t978167751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/FingerList::GetAveragePosition()
extern "C"  Vector2_t3525329788  FingerList_GetAveragePosition_m2235364881 (FingerList_t978167751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/FingerList::GetAveragePreviousPosition()
extern "C"  Vector2_t3525329788  FingerList_GetAveragePreviousPosition_m679046504 (FingerList_t978167751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures/FingerList::GetAverageDistanceFromStart()
extern "C"  float FingerList_GetAverageDistanceFromStart_m2270446798 (FingerList_t978167751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/Finger FingerGestures/FingerList::GetOldest()
extern "C"  Finger_t2104389513 * FingerList_GetOldest_m2197454985 (FingerList_t978167751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/FingerList::MovingInSameDirection(System.Single)
extern "C"  bool FingerList_MovingInSameDirection_m4145545099 (FingerList_t978167751 * __this, float ___tolerance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/FingerList::AllMoving()
extern "C"  bool FingerList_AllMoving_m1146008649 (FingerList_t978167751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
