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

// TapRecognizer
struct TapRecognizer_t3788301703;
// TapGesture
struct TapGesture_t659145798;
// FingerClusterManager/Cluster
struct Cluster_t2536745434;
// FingerGestures/IFingerList
struct IFingerList_t2944704720;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TapGesture659145798.h"
#include "AssemblyU2DCSharp_FingerClusterManager_Cluster2536745434.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_GestureRecognitionState3604239971.h"

// System.Void TapRecognizer::.ctor()
extern "C"  void TapRecognizer__ctor_m3478766532 (TapRecognizer_t3788301703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TapRecognizer::get_IsMultiTap()
extern "C"  bool TapRecognizer_get_IsMultiTap_m1126032713 (TapRecognizer_t3788301703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TapRecognizer::HasTimedOut(TapGesture)
extern "C"  bool TapRecognizer_HasTimedOut_m1637105889 (TapRecognizer_t3788301703 * __this, TapGesture_t659145798 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TapRecognizer::Reset(TapGesture)
extern "C"  void TapRecognizer_Reset_m472955115 (TapRecognizer_t3788301703 * __this, TapGesture_t659145798 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TapGesture TapRecognizer::MatchActiveGestureToCluster(FingerClusterManager/Cluster)
extern "C"  TapGesture_t659145798 * TapRecognizer_MatchActiveGestureToCluster_m4106057907 (TapRecognizer_t3788301703 * __this, Cluster_t2536745434 * ___cluster, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TapGesture TapRecognizer::FindClosestPendingGesture(UnityEngine.Vector2)
extern "C"  TapGesture_t659145798 * TapRecognizer_FindClosestPendingGesture_m4169174671 (TapRecognizer_t3788301703 * __this, Vector2_t3525329788  ___center, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState TapRecognizer::RecognizeSingleTap(TapGesture,FingerGestures/IFingerList)
extern "C"  int32_t TapRecognizer_RecognizeSingleTap_m2831951227 (TapRecognizer_t3788301703 * __this, TapGesture_t659145798 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState TapRecognizer::RecognizeMultiTap(TapGesture,FingerGestures/IFingerList)
extern "C"  int32_t TapRecognizer_RecognizeMultiTap_m4263406222 (TapRecognizer_t3788301703 * __this, TapGesture_t659145798 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TapRecognizer::GetDefaultEventMessageName()
extern "C"  String_t* TapRecognizer_GetDefaultEventMessageName_m2171243872 (TapRecognizer_t3788301703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TapRecognizer::OnBegin(TapGesture,FingerGestures/IFingerList)
extern "C"  void TapRecognizer_OnBegin_m1898903660 (TapRecognizer_t3788301703 * __this, TapGesture_t659145798 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState TapRecognizer::OnRecognize(TapGesture,FingerGestures/IFingerList)
extern "C"  int32_t TapRecognizer_OnRecognize_m808350423 (TapRecognizer_t3788301703 * __this, TapGesture_t659145798 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
