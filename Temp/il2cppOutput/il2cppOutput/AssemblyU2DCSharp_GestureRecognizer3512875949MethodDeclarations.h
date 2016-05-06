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

// GestureRecognizer
struct GestureRecognizer_t3512875949;
// FingerGestures/Finger
struct Finger_t2104389513;
// FingerGestures/IFingerList
struct IFingerList_t2944704720;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GestureResetMode2954327145.h"
#include "AssemblyU2DCSharp_FingerGestures_Finger2104389513.h"

// System.Void GestureRecognizer::.ctor()
extern "C"  void GestureRecognizer__ctor_m929383518 (GestureRecognizer_t3512875949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer::.cctor()
extern "C"  void GestureRecognizer__cctor_m2558989071 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GestureRecognizer::get_RequiredFingerCount()
extern "C"  int32_t GestureRecognizer_get_RequiredFingerCount_m3358385640 (GestureRecognizer_t3512875949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer::set_RequiredFingerCount(System.Int32)
extern "C"  void GestureRecognizer_set_RequiredFingerCount_m299452727 (GestureRecognizer_t3512875949 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer::get_SupportFingerClustering()
extern "C"  bool GestureRecognizer_get_SupportFingerClustering_m2139587623 (GestureRecognizer_t3512875949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureResetMode GestureRecognizer::GetDefaultResetMode()
extern "C"  int32_t GestureRecognizer_GetDefaultResetMode_m347079351 (GestureRecognizer_t3512875949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer::Awake()
extern "C"  void GestureRecognizer_Awake_m1166988737 (GestureRecognizer_t3512875949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer::OnEnable()
extern "C"  void GestureRecognizer_OnEnable_m3976773224 (GestureRecognizer_t3512875949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer::OnDisable()
extern "C"  void GestureRecognizer_OnDisable_m3461822917 (GestureRecognizer_t3512875949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer::Acquire(FingerGestures/Finger)
extern "C"  void GestureRecognizer_Acquire_m3930661979 (GestureRecognizer_t3512875949 * __this, Finger_t2104389513 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer::Release(FingerGestures/Finger)
extern "C"  bool GestureRecognizer_Release_m3368580566 (GestureRecognizer_t3512875949 * __this, Finger_t2104389513 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer::Start()
extern "C"  void GestureRecognizer_Start_m4171488606 (GestureRecognizer_t3512875949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer::Young(FingerGestures/IFingerList)
extern "C"  bool GestureRecognizer_Young_m1506319700 (GestureRecognizer_t3512875949 * __this, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
