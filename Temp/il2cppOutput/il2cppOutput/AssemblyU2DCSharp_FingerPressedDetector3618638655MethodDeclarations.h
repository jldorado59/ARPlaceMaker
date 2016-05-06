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

// FingerPressedDetector
struct FingerPressedDetector_t3618638655;
// FingerEventDetector`1/FingerEventHandler<FingerPressedEvent>
struct FingerEventHandler_t4220419159;
// FingerGestures/Finger
struct Finger_t2104389513;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FingerGestures_Finger2104389513.h"

// System.Void FingerPressedDetector::.ctor()
extern "C"  void FingerPressedDetector__ctor_m1470506252 (FingerPressedDetector_t3618638655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerPressedDetector::add_OnFingerPressed(FingerEventDetector`1/FingerEventHandler<FingerPressedEvent>)
extern "C"  void FingerPressedDetector_add_OnFingerPressed_m2211350789 (FingerPressedDetector_t3618638655 * __this, FingerEventHandler_t4220419159 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerPressedDetector::remove_OnFingerPressed(FingerEventDetector`1/FingerEventHandler<FingerPressedEvent>)
extern "C"  void FingerPressedDetector_remove_OnFingerPressed_m3959948022 (FingerPressedDetector_t3618638655 * __this, FingerEventHandler_t4220419159 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerPressedDetector::ProcessFinger(FingerGestures/Finger)
extern "C"  void FingerPressedDetector_ProcessFinger_m3480542859 (FingerPressedDetector_t3618638655 * __this, Finger_t2104389513 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
