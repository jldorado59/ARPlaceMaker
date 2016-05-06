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

// FingerHoverDetector
struct FingerHoverDetector_t92426265;
// FingerEventDetector`1/FingerEventHandler<FingerHoverEvent>
struct FingerEventHandler_t1070331325;
// FingerHoverEvent
struct FingerHoverEvent_t1767068455;
// FingerGestures/Finger
struct Finger_t2104389513;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FingerHoverEvent1767068455.h"
#include "AssemblyU2DCSharp_FingerHoverPhase1776806408.h"
#include "AssemblyU2DCSharp_FingerGestures_Finger2104389513.h"

// System.Void FingerHoverDetector::.ctor()
extern "C"  void FingerHoverDetector__ctor_m2103562098 (FingerHoverDetector_t92426265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerHoverDetector::add_OnFingerHover(FingerEventDetector`1/FingerEventHandler<FingerHoverEvent>)
extern "C"  void FingerHoverDetector_add_OnFingerHover_m2525599723 (FingerHoverDetector_t92426265 * __this, FingerEventHandler_t1070331325 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerHoverDetector::remove_OnFingerHover(FingerEventDetector`1/FingerEventHandler<FingerHoverEvent>)
extern "C"  void FingerHoverDetector_remove_OnFingerHover_m777057488 (FingerHoverDetector_t92426265 * __this, FingerEventHandler_t1070331325 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerHoverDetector::Start()
extern "C"  void FingerHoverDetector_Start_m1050699890 (FingerHoverDetector_t92426265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerHoverDetector::FireEvent(FingerHoverEvent,FingerHoverPhase)
extern "C"  bool FingerHoverDetector_FireEvent_m4213308189 (FingerHoverDetector_t92426265 * __this, FingerHoverEvent_t1767068455 * ___e, int32_t ___phase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerHoverDetector::ProcessFinger(FingerGestures/Finger)
extern "C"  void FingerHoverDetector_ProcessFinger_m375248357 (FingerHoverDetector_t92426265 * __this, Finger_t2104389513 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
