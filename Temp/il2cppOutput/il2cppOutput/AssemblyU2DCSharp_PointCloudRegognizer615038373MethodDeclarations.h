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

// PointCloudRegognizer
struct PointCloudRegognizer_t615038373;
// PointCloudRegognizer/NormalizedTemplate
struct NormalizedTemplate_t3849291953;
// PointCloudGestureTemplate
struct PointCloudGestureTemplate_t3506552702;
// System.Collections.Generic.List`1<PointCloudRegognizer/Point>
struct List_1_t874251881;
// PointCloudGesture
struct PointCloudGesture_t1959506660;
// FingerGestures/IFingerList
struct IFingerList_t2944704720;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PointCloudGestureTemplate3506552702.h"
#include "AssemblyU2DCSharp_PointCloudGesture1959506660.h"
#include "AssemblyU2DCSharp_GestureRecognitionState3604239971.h"

// System.Void PointCloudRegognizer::.ctor()
extern "C"  void PointCloudRegognizer__ctor_m1532634774 (PointCloudRegognizer_t615038373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudRegognizer::.cctor()
extern "C"  void PointCloudRegognizer__cctor_m4079908823 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudRegognizer::Awake()
extern "C"  void PointCloudRegognizer_Awake_m1770239993 (PointCloudRegognizer_t615038373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PointCloudRegognizer/NormalizedTemplate PointCloudRegognizer::FindNormalizedTemplate(PointCloudGestureTemplate)
extern "C"  NormalizedTemplate_t3849291953 * PointCloudRegognizer_FindNormalizedTemplate_m2151274244 (PointCloudRegognizer_t615038373 * __this, PointCloudGestureTemplate_t3506552702 * ___template, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PointCloudRegognizer/Point> PointCloudRegognizer::Normalize(System.Collections.Generic.List`1<PointCloudRegognizer/Point>)
extern "C"  List_1_t874251881 * PointCloudRegognizer_Normalize_m586181104 (PointCloudRegognizer_t615038373 * __this, List_1_t874251881 * ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PointCloudRegognizer::AddTemplate(PointCloudGestureTemplate)
extern "C"  bool PointCloudRegognizer_AddTemplate_m22426905 (PointCloudRegognizer_t615038373 * __this, PointCloudGestureTemplate_t3506552702 * ___template, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudRegognizer::OnBegin(PointCloudGesture,FingerGestures/IFingerList)
extern "C"  void PointCloudRegognizer_OnBegin_m842134274 (PointCloudRegognizer_t615038373 * __this, PointCloudGesture_t1959506660 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PointCloudRegognizer::RecognizePointCloud(PointCloudGesture)
extern "C"  bool PointCloudRegognizer_RecognizePointCloud_m4170662651 (PointCloudRegognizer_t615038373 * __this, PointCloudGesture_t1959506660 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PointCloudRegognizer::GreedyCloudMatch(System.Collections.Generic.List`1<PointCloudRegognizer/Point>,System.Collections.Generic.List`1<PointCloudRegognizer/Point>)
extern "C"  float PointCloudRegognizer_GreedyCloudMatch_m531174752 (PointCloudRegognizer_t615038373 * __this, List_1_t874251881 * ___points, List_1_t874251881 * ___refPoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PointCloudRegognizer::CloudDistance(System.Collections.Generic.List`1<PointCloudRegognizer/Point>,System.Collections.Generic.List`1<PointCloudRegognizer/Point>,System.Int32)
extern "C"  float PointCloudRegognizer_CloudDistance_m2680430367 (Il2CppObject * __this /* static, unused */, List_1_t874251881 * ___points1, List_1_t874251881 * ___points2, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudRegognizer::ResetMatched(System.Int32)
extern "C"  void PointCloudRegognizer_ResetMatched_m2074903380 (Il2CppObject * __this /* static, unused */, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState PointCloudRegognizer::OnRecognize(PointCloudGesture,FingerGestures/IFingerList)
extern "C"  int32_t PointCloudRegognizer_OnRecognize_m255479063 (PointCloudRegognizer_t615038373 * __this, PointCloudGesture_t1959506660 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PointCloudRegognizer::GetDefaultEventMessageName()
extern "C"  String_t* PointCloudRegognizer_GetDefaultEventMessageName_m3168427828 (PointCloudRegognizer_t615038373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudRegognizer::OnDrawGizmosSelected()
extern "C"  void PointCloudRegognizer_OnDrawGizmosSelected_m2474258629 (PointCloudRegognizer_t615038373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudRegognizer::DrawNormalizedPointCloud(System.Collections.Generic.List`1<PointCloudRegognizer/Point>,System.Single)
extern "C"  void PointCloudRegognizer_DrawNormalizedPointCloud_m3663320047 (PointCloudRegognizer_t615038373 * __this, List_1_t874251881 * ___points, float ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
