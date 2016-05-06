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

// PointCloudGestureTemplate
struct PointCloudGestureTemplate_t3506552702;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void PointCloudGestureTemplate::.ctor()
extern "C"  void PointCloudGestureTemplate__ctor_m3827241901 (PointCloudGestureTemplate_t3506552702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 PointCloudGestureTemplate::get_Size()
extern "C"  Vector2_t3525329788  PointCloudGestureTemplate_get_Size_m3559059782 (PointCloudGestureTemplate_t3506552702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PointCloudGestureTemplate::get_Width()
extern "C"  float PointCloudGestureTemplate_get_Width_m3469667316 (PointCloudGestureTemplate_t3506552702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PointCloudGestureTemplate::get_Height()
extern "C"  float PointCloudGestureTemplate_get_Height_m689318747 (PointCloudGestureTemplate_t3506552702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudGestureTemplate::BeginPoints()
extern "C"  void PointCloudGestureTemplate_BeginPoints_m1772604727 (PointCloudGestureTemplate_t3506552702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudGestureTemplate::AddPoint(System.Int32,UnityEngine.Vector2)
extern "C"  void PointCloudGestureTemplate_AddPoint_m4245503723 (PointCloudGestureTemplate_t3506552702 * __this, int32_t ___stroke, Vector2_t3525329788  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudGestureTemplate::AddPoint(System.Int32,System.Single,System.Single)
extern "C"  void PointCloudGestureTemplate_AddPoint_m4058518401 (PointCloudGestureTemplate_t3506552702 * __this, int32_t ___stroke, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudGestureTemplate::EndPoints()
extern "C"  void PointCloudGestureTemplate_EndPoints_m2907117033 (PointCloudGestureTemplate_t3506552702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 PointCloudGestureTemplate::GetPosition(System.Int32)
extern "C"  Vector2_t3525329788  PointCloudGestureTemplate_GetPosition_m1581643862 (PointCloudGestureTemplate_t3506552702 * __this, int32_t ___pointIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PointCloudGestureTemplate::GetStrokeId(System.Int32)
extern "C"  int32_t PointCloudGestureTemplate_GetStrokeId_m3325571155 (PointCloudGestureTemplate_t3506552702 * __this, int32_t ___pointIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PointCloudGestureTemplate::get_PointCount()
extern "C"  int32_t PointCloudGestureTemplate_get_PointCount_m2210645393 (PointCloudGestureTemplate_t3506552702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PointCloudGestureTemplate::get_StrokeCount()
extern "C"  int32_t PointCloudGestureTemplate_get_StrokeCount_m2333853735 (PointCloudGestureTemplate_t3506552702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudGestureTemplate::Normalize()
extern "C"  void PointCloudGestureTemplate_Normalize_m3726529432 (PointCloudGestureTemplate_t3506552702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudGestureTemplate::MakeDirty()
extern "C"  void PointCloudGestureTemplate_MakeDirty_m2643862863 (PointCloudGestureTemplate_t3506552702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
