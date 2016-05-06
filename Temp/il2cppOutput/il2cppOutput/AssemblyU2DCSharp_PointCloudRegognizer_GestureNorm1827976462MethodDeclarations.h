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

// PointCloudRegognizer/GestureNormalizer
struct GestureNormalizer_t1827976462;
// System.Collections.Generic.List`1<PointCloudRegognizer/Point>
struct List_1_t874251881;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void PointCloudRegognizer/GestureNormalizer::.ctor()
extern "C"  void GestureNormalizer__ctor_m2114000375 (GestureNormalizer_t1827976462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PointCloudRegognizer/Point> PointCloudRegognizer/GestureNormalizer::Apply(System.Collections.Generic.List`1<PointCloudRegognizer/Point>,System.Int32)
extern "C"  List_1_t874251881 * GestureNormalizer_Apply_m2445989673 (GestureNormalizer_t1827976462 * __this, List_1_t874251881 * ___inputPoints, int32_t ___normalizedPointsCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PointCloudRegognizer/Point> PointCloudRegognizer/GestureNormalizer::Resample(System.Collections.Generic.List`1<PointCloudRegognizer/Point>,System.Int32)
extern "C"  List_1_t874251881 * GestureNormalizer_Resample_m1542788034 (GestureNormalizer_t1827976462 * __this, List_1_t874251881 * ___points, int32_t ___normalizedPointsCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PointCloudRegognizer/GestureNormalizer::PathLength(System.Collections.Generic.List`1<PointCloudRegognizer/Point>)
extern "C"  float GestureNormalizer_PathLength_m3851930388 (Il2CppObject * __this /* static, unused */, List_1_t874251881 * ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudRegognizer/GestureNormalizer::Scale(System.Collections.Generic.List`1<PointCloudRegognizer/Point>)
extern "C"  void GestureNormalizer_Scale_m3061766649 (Il2CppObject * __this /* static, unused */, List_1_t874251881 * ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudRegognizer/GestureNormalizer::TranslateToOrigin(System.Collections.Generic.List`1<PointCloudRegognizer/Point>)
extern "C"  void GestureNormalizer_TranslateToOrigin_m2269804468 (Il2CppObject * __this /* static, unused */, List_1_t874251881 * ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 PointCloudRegognizer/GestureNormalizer::Centroid(System.Collections.Generic.List`1<PointCloudRegognizer/Point>)
extern "C"  Vector2_t3525329788  GestureNormalizer_Centroid_m3029292976 (Il2CppObject * __this /* static, unused */, List_1_t874251881 * ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
