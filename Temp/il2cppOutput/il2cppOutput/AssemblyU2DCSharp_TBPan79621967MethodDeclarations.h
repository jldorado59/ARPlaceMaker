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

// TBPan
struct TBPan_t79621967;
// TBPan/PanEventHandler
struct PanEventHandler_t2401301613;
// DragGesture
struct DragGesture_t2914643285;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TBPan_PanEventHandler2401301613.h"
#include "AssemblyU2DCSharp_DragGesture2914643285.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void TBPan::.ctor()
extern "C"  void TBPan__ctor_m2352849660 (TBPan_t79621967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan::add_OnPan(TBPan/PanEventHandler)
extern "C"  void TBPan_add_OnPan_m4267754539 (TBPan_t79621967 * __this, PanEventHandler_t2401301613 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan::remove_OnPan(TBPan/PanEventHandler)
extern "C"  void TBPan_remove_OnPan_m2429691898 (TBPan_t79621967 * __this, PanEventHandler_t2401301613 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan::Awake()
extern "C"  void TBPan_Awake_m2590454879 (TBPan_t79621967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan::Start()
extern "C"  void TBPan_Start_m1299987452 (TBPan_t79621967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan::OnDrag(DragGesture)
extern "C"  void TBPan_OnDrag_m4277115490 (TBPan_t79621967 * __this, DragGesture_t2914643285 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan::Update()
extern "C"  void TBPan_Update_m1650757521 (TBPan_t79621967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TBPan::ConstrainToPanningPlane(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  TBPan_ConstrainToPanningPlane_m141584552 (TBPan_t79621967 * __this, Vector3_t3525329789  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan::TeleportTo(UnityEngine.Vector3)
extern "C"  void TBPan_TeleportTo_m2152384011 (TBPan_t79621967 * __this, Vector3_t3525329789  ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan::FlyTo(UnityEngine.Vector3)
extern "C"  void TBPan_FlyTo_m2654946289 (TBPan_t79621967 * __this, Vector3_t3525329789  ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TBPan::ConstrainToMoveArea(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  TBPan_ConstrainToMoveArea_m4084946453 (TBPan_t79621967 * __this, Vector3_t3525329789  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
