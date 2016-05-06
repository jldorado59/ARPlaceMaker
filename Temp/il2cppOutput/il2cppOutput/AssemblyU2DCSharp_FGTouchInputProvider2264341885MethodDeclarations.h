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

// FGTouchInputProvider
struct FGTouchInputProvider_t2264341885;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Touch1603883884.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void FGTouchInputProvider::.ctor()
extern "C"  void FGTouchInputProvider__ctor_m264116670 (FGTouchInputProvider_t2264341885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGTouchInputProvider::Start()
extern "C"  void FGTouchInputProvider_Start_m3506221758 (FGTouchInputProvider_t2264341885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGTouchInputProvider::Update()
extern "C"  void FGTouchInputProvider_Update_m1324544271 (FGTouchInputProvider_t2264341885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGTouchInputProvider::UpdateFingerTouchMap()
extern "C"  void FGTouchInputProvider_UpdateFingerTouchMap_m1775473493 (FGTouchInputProvider_t2264341885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FGTouchInputProvider::HasValidTouch(System.Int32)
extern "C"  bool FGTouchInputProvider_HasValidTouch_m1708165910 (FGTouchInputProvider_t2264341885 * __this, int32_t ___fingerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch FGTouchInputProvider::GetTouch(System.Int32)
extern "C"  Touch_t1603883884  FGTouchInputProvider_GetTouch_m215268043 (FGTouchInputProvider_t2264341885 * __this, int32_t ___fingerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FGTouchInputProvider::get_MaxSimultaneousFingers()
extern "C"  int32_t FGTouchInputProvider_get_MaxSimultaneousFingers_m2930891208 (FGTouchInputProvider_t2264341885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGTouchInputProvider::GetInputState(System.Int32,System.Boolean&,UnityEngine.Vector2&)
extern "C"  void FGTouchInputProvider_GetInputState_m1194029887 (FGTouchInputProvider_t2264341885 * __this, int32_t ___fingerIndex, bool* ___down, Vector2_t3525329788 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
