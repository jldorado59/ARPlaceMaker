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

// FingerUpDetector
struct FingerUpDetector_t544994282;
// FingerEventDetector`1/FingerEventHandler<FingerUpEvent>
struct FingerEventHandler_t2396277644;
// FingerGestures/Finger
struct Finger_t2104389513;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FingerGestures_Finger2104389513.h"

// System.Void FingerUpDetector::.ctor()
extern "C"  void FingerUpDetector__ctor_m599521777 (FingerUpDetector_t544994282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerUpDetector::add_OnFingerUp(FingerEventDetector`1/FingerEventHandler<FingerUpEvent>)
extern "C"  void FingerUpDetector_add_OnFingerUp_m1386765530 (FingerUpDetector_t544994282 * __this, FingerEventHandler_t2396277644 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerUpDetector::remove_OnFingerUp(FingerEventDetector`1/FingerEventHandler<FingerUpEvent>)
extern "C"  void FingerUpDetector_remove_OnFingerUp_m1580441633 (FingerUpDetector_t544994282 * __this, FingerEventHandler_t2396277644 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerUpDetector::ProcessFinger(FingerGestures/Finger)
extern "C"  void FingerUpDetector_ProcessFinger_m806686662 (FingerUpDetector_t544994282 * __this, Finger_t2104389513 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
