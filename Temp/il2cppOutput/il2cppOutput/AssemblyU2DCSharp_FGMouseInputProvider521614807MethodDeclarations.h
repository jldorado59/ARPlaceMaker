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

// FGMouseInputProvider
struct FGMouseInputProvider_t521614807;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void FGMouseInputProvider::.ctor()
extern "C"  void FGMouseInputProvider__ctor_m1611318948 (FGMouseInputProvider_t521614807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGMouseInputProvider::Start()
extern "C"  void FGMouseInputProvider_Start_m558456740 (FGMouseInputProvider_t521614807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGMouseInputProvider::Update()
extern "C"  void FGMouseInputProvider_Update_m138141929 (FGMouseInputProvider_t521614807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGMouseInputProvider::UpdatePinchEmulation()
extern "C"  void FGMouseInputProvider_UpdatePinchEmulation_m4241063301 (FGMouseInputProvider_t521614807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGMouseInputProvider::UpdateTwistEmulation()
extern "C"  void FGMouseInputProvider_UpdateTwistEmulation_m1212153080 (FGMouseInputProvider_t521614807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FGMouseInputProvider::get_MaxSimultaneousFingers()
extern "C"  int32_t FGMouseInputProvider_get_MaxSimultaneousFingers_m2070829218 (FGMouseInputProvider_t521614807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGMouseInputProvider::GetInputState(System.Int32,System.Boolean&,UnityEngine.Vector2&)
extern "C"  void FGMouseInputProvider_GetInputState_m3169520921 (FGMouseInputProvider_t521614807 * __this, int32_t ___fingerIndex, bool* ___down, Vector2_t3525329788 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
