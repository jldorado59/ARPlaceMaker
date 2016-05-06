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

// TBDragToMove
struct TBDragToMove_t231186510;
// DragGesture
struct DragGesture_t2914643285;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_DragGesture2914643285.h"

// System.Void TBDragToMove::.ctor()
extern "C"  void TBDragToMove__ctor_m1593100813 (TBDragToMove_t231186510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TBDragToMove::get_Dragging()
extern "C"  bool TBDragToMove_get_Dragging_m2089114211 (TBDragToMove_t231186510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragToMove::set_Dragging(System.Boolean)
extern "C"  void TBDragToMove_set_Dragging_m2042802522 (TBDragToMove_t231186510 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragToMove::Start()
extern "C"  void TBDragToMove_Start_m540238605 (TBDragToMove_t231186510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TBDragToMove::ProjectScreenPointOnDragPlane(UnityEngine.Vector3,UnityEngine.Vector2,UnityEngine.Vector3&)
extern "C"  bool TBDragToMove_ProjectScreenPointOnDragPlane_m1552644001 (TBDragToMove_t231186510 * __this, Vector3_t3525329789  ___refPos, Vector2_t3525329788  ___screenPos, Vector3_t3525329789 * ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragToMove::HandleDrag(DragGesture)
extern "C"  void TBDragToMove_HandleDrag_m2301961674 (TBDragToMove_t231186510 * __this, DragGesture_t2914643285 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragToMove::FixedUpdate()
extern "C"  void TBDragToMove_FixedUpdate_m2289052104 (TBDragToMove_t231186510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragToMove::OnDrag(DragGesture)
extern "C"  void TBDragToMove_OnDrag_m1138208755 (TBDragToMove_t231186510 * __this, DragGesture_t2914643285 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragToMove::OnDisable()
extern "C"  void TBDragToMove_OnDisable_m4064169972 (TBDragToMove_t231186510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
