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

// FingerDownDetector
struct FingerDownDetector_t1553505457;
// FingerEventDetector`1/FingerEventHandler<FingerDownEvent>
struct FingerEventHandler_t3954356261;
// FingerGestures/Finger
struct Finger_t2104389513;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FingerGestures_Finger2104389513.h"

// System.Void FingerDownDetector::.ctor()
extern "C"  void FingerDownDetector__ctor_m3460569866 (FingerDownDetector_t1553505457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerDownDetector::add_OnFingerDown(FingerEventDetector`1/FingerEventHandler<FingerDownEvent>)
extern "C"  void FingerDownDetector_add_OnFingerDown_m1247701285 (FingerDownDetector_t1553505457 * __this, FingerEventHandler_t3954356261 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerDownDetector::remove_OnFingerDown(FingerEventDetector`1/FingerEventHandler<FingerDownEvent>)
extern "C"  void FingerDownDetector_remove_OnFingerDown_m3633214746 (FingerDownDetector_t1553505457 * __this, FingerEventHandler_t3954356261 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerDownDetector::ProcessFinger(FingerGestures/Finger)
extern "C"  void FingerDownDetector_ProcessFinger_m1166627149 (FingerDownDetector_t1553505457 * __this, Finger_t2104389513 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
