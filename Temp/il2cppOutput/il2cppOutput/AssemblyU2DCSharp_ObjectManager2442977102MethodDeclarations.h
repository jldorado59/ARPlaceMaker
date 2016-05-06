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

// ObjectManager
struct ObjectManager_t2442977102;
// DragGesture
struct DragGesture_t2914643285;
// TwistGesture
struct TwistGesture_t4198361154;
// PinchGesture
struct PinchGesture_t1502590799;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragGesture2914643285.h"
#include "AssemblyU2DCSharp_TwistGesture4198361154.h"
#include "AssemblyU2DCSharp_PinchGesture1502590799.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void ObjectManager::.ctor()
extern "C"  void ObjectManager__ctor_m3431520733 (ObjectManager_t2442977102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectManager::Start()
extern "C"  void ObjectManager_Start_m2378658525 (ObjectManager_t2442977102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectManager::Update()
extern "C"  void ObjectManager_Update_m729822416 (ObjectManager_t2442977102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectManager::OnDrag(DragGesture)
extern "C"  void ObjectManager_OnDrag_m1799522243 (ObjectManager_t2442977102 * __this, DragGesture_t2914643285 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectManager::OnTwist(TwistGesture)
extern "C"  void ObjectManager_OnTwist_m4230249473 (ObjectManager_t2442977102 * __this, TwistGesture_t4198361154 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectManager::OnPinch(PinchGesture)
extern "C"  void ObjectManager_OnPinch_m3562219239 (ObjectManager_t2442977102 * __this, PinchGesture_t1502590799 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectManager::BorrarObjecto()
extern "C"  void ObjectManager_BorrarObjecto_m3037348717 (ObjectManager_t2442977102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectManager::AdicionarObjeto(UnityEngine.GameObject)
extern "C"  void ObjectManager_AdicionarObjeto_m3282733304 (ObjectManager_t2442977102 * __this, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
