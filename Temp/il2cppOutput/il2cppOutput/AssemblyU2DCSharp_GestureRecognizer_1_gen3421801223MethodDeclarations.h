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

// GestureRecognizer`1<System.Object>
struct GestureRecognizer_1_t3421801223;
// GestureRecognizer`1/GestureEventHandler<System.Object>
struct GestureEventHandler_t3587555882;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// System.Object
struct Il2CppObject;
// FingerGestures/IFingerList
struct IFingerList_t2944704720;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Type
struct Type_t;
// Gesture
struct Gesture_t1589572905;
// FingerClusterManager/Cluster
struct Cluster_t2536745434;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Gesture1589572905.h"
#include "AssemblyU2DCSharp_FingerClusterManager_Cluster2536745434.h"

// System.Void GestureRecognizer`1<System.Object>::.ctor()
extern "C"  void GestureRecognizer_1__ctor_m2040306429_gshared (GestureRecognizer_1_t3421801223 * __this, const MethodInfo* method);
#define GestureRecognizer_1__ctor_m2040306429(__this, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, const MethodInfo*))GestureRecognizer_1__ctor_m2040306429_gshared)(__this, method)
// System.Void GestureRecognizer`1<System.Object>::.cctor()
extern "C"  void GestureRecognizer_1__cctor_m2637860944_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define GestureRecognizer_1__cctor_m2637860944(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))GestureRecognizer_1__cctor_m2637860944_gshared)(__this /* static, unused */, method)
// System.Void GestureRecognizer`1<System.Object>::add_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
extern "C"  void GestureRecognizer_1_add_OnGesture_m2571957961_gshared (GestureRecognizer_1_t3421801223 * __this, GestureEventHandler_t3587555882 * ___value, const MethodInfo* method);
#define GestureRecognizer_1_add_OnGesture_m2571957961(__this, ___value, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, GestureEventHandler_t3587555882 *, const MethodInfo*))GestureRecognizer_1_add_OnGesture_m2571957961_gshared)(__this, ___value, method)
// System.Void GestureRecognizer`1<System.Object>::remove_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
extern "C"  void GestureRecognizer_1_remove_OnGesture_m1304861368_gshared (GestureRecognizer_1_t3421801223 * __this, GestureEventHandler_t3587555882 * ___value, const MethodInfo* method);
#define GestureRecognizer_1_remove_OnGesture_m1304861368(__this, ___value, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, GestureEventHandler_t3587555882 *, const MethodInfo*))GestureRecognizer_1_remove_OnGesture_m1304861368_gshared)(__this, ___value, method)
// System.Void GestureRecognizer`1<System.Object>::Start()
extern "C"  void GestureRecognizer_1_Start_m987444221_gshared (GestureRecognizer_1_t3421801223 * __this, const MethodInfo* method);
#define GestureRecognizer_1_Start_m987444221(__this, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, const MethodInfo*))GestureRecognizer_1_Start_m987444221_gshared)(__this, method)
// System.Void GestureRecognizer`1<System.Object>::OnEnable()
extern "C"  void GestureRecognizer_1_OnEnable_m2463231849_gshared (GestureRecognizer_1_t3421801223 * __this, const MethodInfo* method);
#define GestureRecognizer_1_OnEnable_m2463231849(__this, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, const MethodInfo*))GestureRecognizer_1_OnEnable_m2463231849_gshared)(__this, method)
// System.Void GestureRecognizer`1<System.Object>::InitGestures()
extern "C"  void GestureRecognizer_1_InitGestures_m2630207393_gshared (GestureRecognizer_1_t3421801223 * __this, const MethodInfo* method);
#define GestureRecognizer_1_InitGestures_m2630207393(__this, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, const MethodInfo*))GestureRecognizer_1_InitGestures_m2630207393_gshared)(__this, method)
// System.Collections.Generic.List`1<T> GestureRecognizer`1<System.Object>::get_Gestures()
extern "C"  List_1_t1634065389 * GestureRecognizer_1_get_Gestures_m3724991183_gshared (GestureRecognizer_1_t3421801223 * __this, const MethodInfo* method);
#define GestureRecognizer_1_get_Gestures_m3724991183(__this, method) ((  List_1_t1634065389 * (*) (GestureRecognizer_1_t3421801223 *, const MethodInfo*))GestureRecognizer_1_get_Gestures_m3724991183_gshared)(__this, method)
// System.Boolean GestureRecognizer`1<System.Object>::CanBegin(T,FingerGestures/IFingerList)
extern "C"  bool GestureRecognizer_1_CanBegin_m4040595144_gshared (GestureRecognizer_1_t3421801223 * __this, Il2CppObject * ___gesture, Il2CppObject * ___touches, const MethodInfo* method);
#define GestureRecognizer_1_CanBegin_m4040595144(__this, ___gesture, ___touches, method) ((  bool (*) (GestureRecognizer_1_t3421801223 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))GestureRecognizer_1_CanBegin_m4040595144_gshared)(__this, ___gesture, ___touches, method)
// UnityEngine.GameObject GestureRecognizer`1<System.Object>::GetDefaultSelectionForSendMessage(T)
extern "C"  GameObject_t4012695102 * GestureRecognizer_1_GetDefaultSelectionForSendMessage_m423834881_gshared (GestureRecognizer_1_t3421801223 * __this, Il2CppObject * ___gesture, const MethodInfo* method);
#define GestureRecognizer_1_GetDefaultSelectionForSendMessage_m423834881(__this, ___gesture, method) ((  GameObject_t4012695102 * (*) (GestureRecognizer_1_t3421801223 *, Il2CppObject *, const MethodInfo*))GestureRecognizer_1_GetDefaultSelectionForSendMessage_m423834881_gshared)(__this, ___gesture, method)
// T GestureRecognizer`1<System.Object>::CreateGesture()
extern "C"  Il2CppObject * GestureRecognizer_1_CreateGesture_m3779713449_gshared (GestureRecognizer_1_t3421801223 * __this, const MethodInfo* method);
#define GestureRecognizer_1_CreateGesture_m3779713449(__this, method) ((  Il2CppObject * (*) (GestureRecognizer_1_t3421801223 *, const MethodInfo*))GestureRecognizer_1_CreateGesture_m3779713449_gshared)(__this, method)
// System.Type GestureRecognizer`1<System.Object>::GetGestureType()
extern "C"  Type_t * GestureRecognizer_1_GetGestureType_m3933780206_gshared (GestureRecognizer_1_t3421801223 * __this, const MethodInfo* method);
#define GestureRecognizer_1_GetGestureType_m3933780206(__this, method) ((  Type_t * (*) (GestureRecognizer_1_t3421801223 *, const MethodInfo*))GestureRecognizer_1_GetGestureType_m3933780206_gshared)(__this, method)
// System.Void GestureRecognizer`1<System.Object>::OnStateChanged(Gesture)
extern "C"  void GestureRecognizer_1_OnStateChanged_m88650048_gshared (GestureRecognizer_1_t3421801223 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method);
#define GestureRecognizer_1_OnStateChanged_m88650048(__this, ___gesture, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, Gesture_t1589572905 *, const MethodInfo*))GestureRecognizer_1_OnStateChanged_m88650048_gshared)(__this, ___gesture, method)
// T GestureRecognizer`1<System.Object>::FindGestureByCluster(FingerClusterManager/Cluster)
extern "C"  Il2CppObject * GestureRecognizer_1_FindGestureByCluster_m4226386098_gshared (GestureRecognizer_1_t3421801223 * __this, Cluster_t2536745434 * ___cluster, const MethodInfo* method);
#define GestureRecognizer_1_FindGestureByCluster_m4226386098(__this, ___cluster, method) ((  Il2CppObject * (*) (GestureRecognizer_1_t3421801223 *, Cluster_t2536745434 *, const MethodInfo*))GestureRecognizer_1_FindGestureByCluster_m4226386098_gshared)(__this, ___cluster, method)
// T GestureRecognizer`1<System.Object>::MatchActiveGestureToCluster(FingerClusterManager/Cluster)
extern "C"  Il2CppObject * GestureRecognizer_1_MatchActiveGestureToCluster_m157612950_gshared (GestureRecognizer_1_t3421801223 * __this, Cluster_t2536745434 * ___cluster, const MethodInfo* method);
#define GestureRecognizer_1_MatchActiveGestureToCluster_m157612950(__this, ___cluster, method) ((  Il2CppObject * (*) (GestureRecognizer_1_t3421801223 *, Cluster_t2536745434 *, const MethodInfo*))GestureRecognizer_1_MatchActiveGestureToCluster_m157612950_gshared)(__this, ___cluster, method)
// T GestureRecognizer`1<System.Object>::FindFreeGesture()
extern "C"  Il2CppObject * GestureRecognizer_1_FindFreeGesture_m2354753088_gshared (GestureRecognizer_1_t3421801223 * __this, const MethodInfo* method);
#define GestureRecognizer_1_FindFreeGesture_m2354753088(__this, method) ((  Il2CppObject * (*) (GestureRecognizer_1_t3421801223 *, const MethodInfo*))GestureRecognizer_1_FindFreeGesture_m2354753088_gshared)(__this, method)
// System.Void GestureRecognizer`1<System.Object>::Reset(T)
extern "C"  void GestureRecognizer_1_Reset_m3173823732_gshared (GestureRecognizer_1_t3421801223 * __this, Il2CppObject * ___gesture, const MethodInfo* method);
#define GestureRecognizer_1_Reset_m3173823732(__this, ___gesture, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, Il2CppObject *, const MethodInfo*))GestureRecognizer_1_Reset_m3173823732_gshared)(__this, ___gesture, method)
// System.Void GestureRecognizer`1<System.Object>::Update()
extern "C"  void GestureRecognizer_1_Update_m551851952_gshared (GestureRecognizer_1_t3421801223 * __this, const MethodInfo* method);
#define GestureRecognizer_1_Update_m551851952(__this, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, const MethodInfo*))GestureRecognizer_1_Update_m551851952_gshared)(__this, method)
// System.Void GestureRecognizer`1<System.Object>::UpdateUsingClusters()
extern "C"  void GestureRecognizer_1_UpdateUsingClusters_m820807087_gshared (GestureRecognizer_1_t3421801223 * __this, const MethodInfo* method);
#define GestureRecognizer_1_UpdateUsingClusters_m820807087(__this, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, const MethodInfo*))GestureRecognizer_1_UpdateUsingClusters_m820807087_gshared)(__this, method)
// System.Void GestureRecognizer`1<System.Object>::UpdateExclusive()
extern "C"  void GestureRecognizer_1_UpdateExclusive_m1162886704_gshared (GestureRecognizer_1_t3421801223 * __this, const MethodInfo* method);
#define GestureRecognizer_1_UpdateExclusive_m1162886704(__this, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, const MethodInfo*))GestureRecognizer_1_UpdateExclusive_m1162886704_gshared)(__this, method)
// System.Void GestureRecognizer`1<System.Object>::UpdatePerFinger()
extern "C"  void GestureRecognizer_1_UpdatePerFinger_m1255122040_gshared (GestureRecognizer_1_t3421801223 * __this, const MethodInfo* method);
#define GestureRecognizer_1_UpdatePerFinger_m1255122040(__this, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, const MethodInfo*))GestureRecognizer_1_UpdatePerFinger_m1255122040_gshared)(__this, method)
// System.Void GestureRecognizer`1<System.Object>::ProcessCluster(FingerClusterManager/Cluster)
extern "C"  void GestureRecognizer_1_ProcessCluster_m1739714379_gshared (GestureRecognizer_1_t3421801223 * __this, Cluster_t2536745434 * ___cluster, const MethodInfo* method);
#define GestureRecognizer_1_ProcessCluster_m1739714379(__this, ___cluster, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, Cluster_t2536745434 *, const MethodInfo*))GestureRecognizer_1_ProcessCluster_m1739714379_gshared)(__this, ___cluster, method)
// System.Void GestureRecognizer`1<System.Object>::ReleaseFingers(T)
extern "C"  void GestureRecognizer_1_ReleaseFingers_m3824867348_gshared (GestureRecognizer_1_t3421801223 * __this, Il2CppObject * ___gesture, const MethodInfo* method);
#define GestureRecognizer_1_ReleaseFingers_m3824867348(__this, ___gesture, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, Il2CppObject *, const MethodInfo*))GestureRecognizer_1_ReleaseFingers_m3824867348_gshared)(__this, ___gesture, method)
// System.Void GestureRecognizer`1<System.Object>::Begin(T,System.Int32,FingerGestures/IFingerList)
extern "C"  void GestureRecognizer_1_Begin_m1580233525_gshared (GestureRecognizer_1_t3421801223 * __this, Il2CppObject * ___gesture, int32_t ___clusterId, Il2CppObject * ___touches, const MethodInfo* method);
#define GestureRecognizer_1_Begin_m1580233525(__this, ___gesture, ___clusterId, ___touches, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, Il2CppObject *, int32_t, Il2CppObject *, const MethodInfo*))GestureRecognizer_1_Begin_m1580233525_gshared)(__this, ___gesture, ___clusterId, ___touches, method)
// FingerGestures/IFingerList GestureRecognizer`1<System.Object>::GetTouches(T)
extern "C"  Il2CppObject * GestureRecognizer_1_GetTouches_m1168267159_gshared (GestureRecognizer_1_t3421801223 * __this, Il2CppObject * ___gesture, const MethodInfo* method);
#define GestureRecognizer_1_GetTouches_m1168267159(__this, ___gesture, method) ((  Il2CppObject * (*) (GestureRecognizer_1_t3421801223 *, Il2CppObject *, const MethodInfo*))GestureRecognizer_1_GetTouches_m1168267159_gshared)(__this, ___gesture, method)
// System.Void GestureRecognizer`1<System.Object>::UpdateGesture(T,FingerGestures/IFingerList)
extern "C"  void GestureRecognizer_1_UpdateGesture_m2950976719_gshared (GestureRecognizer_1_t3421801223 * __this, Il2CppObject * ___gesture, Il2CppObject * ___touches, const MethodInfo* method);
#define GestureRecognizer_1_UpdateGesture_m2950976719(__this, ___gesture, ___touches, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))GestureRecognizer_1_UpdateGesture_m2950976719_gshared)(__this, ___gesture, ___touches, method)
// System.Void GestureRecognizer`1<System.Object>::RaiseEvent(T)
extern "C"  void GestureRecognizer_1_RaiseEvent_m1527418697_gshared (GestureRecognizer_1_t3421801223 * __this, Il2CppObject * ___gesture, const MethodInfo* method);
#define GestureRecognizer_1_RaiseEvent_m1527418697(__this, ___gesture, method) ((  void (*) (GestureRecognizer_1_t3421801223 *, Il2CppObject *, const MethodInfo*))GestureRecognizer_1_RaiseEvent_m1527418697_gshared)(__this, ___gesture, method)
// System.Boolean GestureRecognizer`1<System.Object>::<FindFreeGesture>m__1(T)
extern "C"  bool GestureRecognizer_1_U3CFindFreeGestureU3Em__1_m545951197_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___g, const MethodInfo* method);
#define GestureRecognizer_1_U3CFindFreeGestureU3Em__1_m545951197(__this /* static, unused */, ___g, method) ((  bool (*) (Il2CppObject * /* static, unused */, Il2CppObject *, const MethodInfo*))GestureRecognizer_1_U3CFindFreeGestureU3Em__1_m545951197_gshared)(__this /* static, unused */, ___g, method)
