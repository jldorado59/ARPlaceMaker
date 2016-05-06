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

// FingerEventDetector
struct FingerEventDetector_t1271053175;
// FingerEvent
struct FingerEvent_t252338321;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FingerEvent252338321.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void FingerEventDetector::.ctor()
extern "C"  void FingerEventDetector__ctor_m2757840340 (FingerEventDetector_t1271053175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector::Awake()
extern "C"  void FingerEventDetector_Awake_m2995445559 (FingerEventDetector_t1271053175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector::Start()
extern "C"  void FingerEventDetector_Start_m1704978132 (FingerEventDetector_t1271053175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector::Update()
extern "C"  void FingerEventDetector_Update_m1320566713 (FingerEventDetector_t1271053175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector::ProcessFingers()
extern "C"  void FingerEventDetector_ProcessFingers_m756370475 (FingerEventDetector_t1271053175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector::TrySendMessage(FingerEvent)
extern "C"  void FingerEventDetector_TrySendMessage_m3569391917 (FingerEventDetector_t1271053175 * __this, FingerEvent_t252338321 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit FingerEventDetector::get_LastHit()
extern "C"  RaycastHit_t46221527  FingerEventDetector_get_LastHit_m1175050914 (FingerEventDetector_t1271053175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject FingerEventDetector::PickObject(UnityEngine.Vector2)
extern "C"  GameObject_t4012695102 * FingerEventDetector_PickObject_m211463039 (FingerEventDetector_t1271053175 * __this, Vector2_t3525329788  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector::UpdateSelection(FingerEvent)
extern "C"  void FingerEventDetector_UpdateSelection_m802849452 (FingerEventDetector_t1271053175 * __this, FingerEvent_t252338321 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
