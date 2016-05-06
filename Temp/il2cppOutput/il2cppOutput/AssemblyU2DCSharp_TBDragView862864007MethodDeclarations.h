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

// TBDragView
struct TBDragView_t862864007;
// DragGesture
struct DragGesture_t2914643285;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragGesture2914643285.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void TBDragView::.ctor()
extern "C"  void TBDragView__ctor_m637681140 (TBDragView_t862864007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragView::Awake()
extern "C"  void TBDragView_Awake_m875286359 (TBDragView_t862864007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragView::Start()
extern "C"  void TBDragView_Start_m3879786228 (TBDragView_t862864007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TBDragView::get_Dragging()
extern "C"  bool TBDragView_get_Dragging_m2959516060 (TBDragView_t862864007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragView::OnDrag(DragGesture)
extern "C"  void TBDragView_OnDrag_m4086006106 (TBDragView_t862864007 * __this, DragGesture_t2914643285 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragView::Update()
extern "C"  void TBDragView_Update_m20140953 (TBDragView_t862864007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TBDragView::NormalizePitch(System.Single)
extern "C"  float TBDragView_NormalizePitch_m4238461372 (Il2CppObject * __this /* static, unused */, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion TBDragView::get_IdealRotation()
extern "C"  Quaternion_t1891715979  TBDragView_get_IdealRotation_m3097739476 (TBDragView_t862864007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragView::set_IdealRotation(UnityEngine.Quaternion)
extern "C"  void TBDragView_set_IdealRotation_m1071307699 (TBDragView_t862864007 * __this, Quaternion_t1891715979  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragView::LookAt(UnityEngine.Vector3)
extern "C"  void TBDragView_LookAt_m1742896343 (TBDragView_t862864007 * __this, Vector3_t3525329789  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
