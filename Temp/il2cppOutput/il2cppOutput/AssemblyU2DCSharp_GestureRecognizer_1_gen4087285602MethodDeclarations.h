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


#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GestureRecognizer_1_gen3421801223MethodDeclarations.h"

// System.Void GestureRecognizer`1<PinchGesture>::.ctor()
#define GestureRecognizer_1__ctor_m3604797626(__this, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, const MethodInfo*))GestureRecognizer_1__ctor_m2040306429_gshared)(__this, method)
// System.Void GestureRecognizer`1<PinchGesture>::.cctor()
#define GestureRecognizer_1__cctor_m3892447795(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))GestureRecognizer_1__cctor_m2637860944_gshared)(__this /* static, unused */, method)
// System.Void GestureRecognizer`1<PinchGesture>::add_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
#define GestureRecognizer_1_add_OnGesture_m710470470(__this, ___value, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, GestureEventHandler_t4253040261 *, const MethodInfo*))GestureRecognizer_1_add_OnGesture_m2571957961_gshared)(__this, ___value, method)
// System.Void GestureRecognizer`1<PinchGesture>::remove_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
#define GestureRecognizer_1_remove_OnGesture_m2348742939(__this, ___value, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, GestureEventHandler_t4253040261 *, const MethodInfo*))GestureRecognizer_1_remove_OnGesture_m1304861368_gshared)(__this, ___value, method)
// System.Void GestureRecognizer`1<PinchGesture>::Start()
#define GestureRecognizer_1_Start_m2551935418(__this, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, const MethodInfo*))GestureRecognizer_1_Start_m987444221_gshared)(__this, method)
// System.Void GestureRecognizer`1<PinchGesture>::OnEnable()
#define GestureRecognizer_1_OnEnable_m1235385484(__this, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, const MethodInfo*))GestureRecognizer_1_OnEnable_m2463231849_gshared)(__this, method)
// System.Void GestureRecognizer`1<PinchGesture>::InitGestures()
#define GestureRecognizer_1_InitGestures_m812976964(__this, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, const MethodInfo*))GestureRecognizer_1_InitGestures_m2630207393_gshared)(__this, method)
// System.Collections.Generic.List`1<T> GestureRecognizer`1<PinchGesture>::get_Gestures()
#define GestureRecognizer_1_get_Gestures_m1403410472(__this, method) ((  List_1_t2299549768 * (*) (GestureRecognizer_1_t4087285602 *, const MethodInfo*))GestureRecognizer_1_get_Gestures_m3724991183_gshared)(__this, method)
// System.Boolean GestureRecognizer`1<PinchGesture>::CanBegin(T,FingerGestures/IFingerList)
#define GestureRecognizer_1_CanBegin_m205545347(__this, ___gesture, ___touches, method) ((  bool (*) (GestureRecognizer_1_t4087285602 *, PinchGesture_t1502590799 *, Il2CppObject *, const MethodInfo*))GestureRecognizer_1_CanBegin_m4040595144_gshared)(__this, ___gesture, ___touches, method)
// UnityEngine.GameObject GestureRecognizer`1<PinchGesture>::GetDefaultSelectionForSendMessage(T)
#define GestureRecognizer_1_GetDefaultSelectionForSendMessage_m338159194(__this, ___gesture, method) ((  GameObject_t4012695102 * (*) (GestureRecognizer_1_t4087285602 *, PinchGesture_t1502590799 *, const MethodInfo*))GestureRecognizer_1_GetDefaultSelectionForSendMessage_m423834881_gshared)(__this, ___gesture, method)
// T GestureRecognizer`1<PinchGesture>::CreateGesture()
#define GestureRecognizer_1_CreateGesture_m2735058436(__this, method) ((  PinchGesture_t1502590799 * (*) (GestureRecognizer_1_t4087285602 *, const MethodInfo*))GestureRecognizer_1_CreateGesture_m3779713449_gshared)(__this, method)
// System.Type GestureRecognizer`1<PinchGesture>::GetGestureType()
#define GestureRecognizer_1_GetGestureType_m836663389(__this, method) ((  Type_t * (*) (GestureRecognizer_1_t4087285602 *, const MethodInfo*))GestureRecognizer_1_GetGestureType_m3933780206_gshared)(__this, method)
// System.Void GestureRecognizer`1<PinchGesture>::OnStateChanged(Gesture)
#define GestureRecognizer_1_OnStateChanged_m3923236093(__this, ___gesture, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, Gesture_t1589572905 *, const MethodInfo*))GestureRecognizer_1_OnStateChanged_m88650048_gshared)(__this, ___gesture, method)
// T GestureRecognizer`1<PinchGesture>::FindGestureByCluster(FingerClusterManager/Cluster)
#define GestureRecognizer_1_FindGestureByCluster_m1970683511(__this, ___cluster, method) ((  PinchGesture_t1502590799 * (*) (GestureRecognizer_1_t4087285602 *, Cluster_t2536745434 *, const MethodInfo*))GestureRecognizer_1_FindGestureByCluster_m4226386098_gshared)(__this, ___cluster, method)
// T GestureRecognizer`1<PinchGesture>::MatchActiveGestureToCluster(FingerClusterManager/Cluster)
#define GestureRecognizer_1_MatchActiveGestureToCluster_m526003761(__this, ___cluster, method) ((  PinchGesture_t1502590799 * (*) (GestureRecognizer_1_t4087285602 *, Cluster_t2536745434 *, const MethodInfo*))GestureRecognizer_1_MatchActiveGestureToCluster_m157612950_gshared)(__this, ___cluster, method)
// T GestureRecognizer`1<PinchGesture>::FindFreeGesture()
#define GestureRecognizer_1_FindFreeGesture_m3463632859(__this, method) ((  PinchGesture_t1502590799 * (*) (GestureRecognizer_1_t4087285602 *, const MethodInfo*))GestureRecognizer_1_FindFreeGesture_m2354753088_gshared)(__this, method)
// System.Void GestureRecognizer`1<PinchGesture>::Reset(T)
#define GestureRecognizer_1_Reset_m133443287(__this, ___gesture, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, PinchGesture_t1502590799 *, const MethodInfo*))GestureRecognizer_1_Reset_m3173823732_gshared)(__this, ___gesture, method)
// System.Void GestureRecognizer`1<PinchGesture>::Update()
#define GestureRecognizer_1_Update_m1806438803(__this, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, const MethodInfo*))GestureRecognizer_1_Update_m551851952_gshared)(__this, method)
// System.Void GestureRecognizer`1<PinchGesture>::UpdateUsingClusters()
#define GestureRecognizer_1_UpdateUsingClusters_m4252726444(__this, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, const MethodInfo*))GestureRecognizer_1_UpdateUsingClusters_m820807087_gshared)(__this, method)
// System.Void GestureRecognizer`1<PinchGesture>::UpdateExclusive()
#define GestureRecognizer_1_UpdateExclusive_m2113942445(__this, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, const MethodInfo*))GestureRecognizer_1_UpdateExclusive_m1162886704_gshared)(__this, method)
// System.Void GestureRecognizer`1<PinchGesture>::UpdatePerFinger()
#define GestureRecognizer_1_UpdatePerFinger_m2206177781(__this, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, const MethodInfo*))GestureRecognizer_1_UpdatePerFinger_m1255122040_gshared)(__this, method)
// System.Void GestureRecognizer`1<PinchGesture>::ProcessCluster(FingerClusterManager/Cluster)
#define GestureRecognizer_1_ProcessCluster_m3686888366(__this, ___cluster, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, Cluster_t2536745434 *, const MethodInfo*))GestureRecognizer_1_ProcessCluster_m1739714379_gshared)(__this, ___cluster, method)
// System.Void GestureRecognizer`1<PinchGesture>::ReleaseFingers(T)
#define GestureRecognizer_1_ReleaseFingers_m480955793(__this, ___gesture, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, PinchGesture_t1502590799 *, const MethodInfo*))GestureRecognizer_1_ReleaseFingers_m3824867348_gshared)(__this, ___gesture, method)
// System.Void GestureRecognizer`1<PinchGesture>::Begin(T,System.Int32,FingerGestures/IFingerList)
#define GestureRecognizer_1_Begin_m2085686808(__this, ___gesture, ___clusterId, ___touches, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, PinchGesture_t1502590799 *, int32_t, Il2CppObject *, const MethodInfo*))GestureRecognizer_1_Begin_m1580233525_gshared)(__this, ___gesture, ___clusterId, ___touches, method)
// FingerGestures/IFingerList GestureRecognizer`1<PinchGesture>::GetTouches(T)
#define GestureRecognizer_1_GetTouches_m967546630(__this, ___gesture, method) ((  Il2CppObject * (*) (GestureRecognizer_1_t4087285602 *, PinchGesture_t1502590799 *, const MethodInfo*))GestureRecognizer_1_GetTouches_m1168267159_gshared)(__this, ___gesture, method)
// System.Void GestureRecognizer`1<PinchGesture>::UpdateGesture(T,FingerGestures/IFingerList)
#define GestureRecognizer_1_UpdateGesture_m3983620108(__this, ___gesture, ___touches, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, PinchGesture_t1502590799 *, Il2CppObject *, const MethodInfo*))GestureRecognizer_1_UpdateGesture_m2950976719_gshared)(__this, ___gesture, ___touches, method)
// System.Void GestureRecognizer`1<PinchGesture>::RaiseEvent(T)
#define GestureRecognizer_1_RaiseEvent_m2992819014(__this, ___gesture, method) ((  void (*) (GestureRecognizer_1_t4087285602 *, PinchGesture_t1502590799 *, const MethodInfo*))GestureRecognizer_1_RaiseEvent_m1527418697_gshared)(__this, ___gesture, method)
// System.Boolean GestureRecognizer`1<PinchGesture>::<FindFreeGesture>m__1(T)
#define GestureRecognizer_1_U3CFindFreeGestureU3Em__1_m1194224088(__this /* static, unused */, ___g, method) ((  bool (*) (Il2CppObject * /* static, unused */, PinchGesture_t1502590799 *, const MethodInfo*))GestureRecognizer_1_U3CFindFreeGestureU3Em__1_m545951197_gshared)(__this /* static, unused */, ___g, method)
