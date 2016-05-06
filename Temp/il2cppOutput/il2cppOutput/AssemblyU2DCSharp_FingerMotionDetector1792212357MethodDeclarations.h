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

// FingerMotionDetector
struct FingerMotionDetector_t1792212357;
// FingerEventDetector`1/FingerEventHandler<FingerMotionEvent>
struct FingerEventHandler_t2610700241;
// FingerMotionEvent
struct FingerMotionEvent_t3307437371;
// FingerGestures/Finger
struct Finger_t2104389513;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FingerMotionEvent3307437371.h"
#include "AssemblyU2DCSharp_FingerMotionDetector_EventType2035398868.h"
#include "AssemblyU2DCSharp_FingerMotionPhase3317175324.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_FingerGestures_Finger2104389513.h"

// System.Void FingerMotionDetector::.ctor()
extern "C"  void FingerMotionDetector__ctor_m931775158 (FingerMotionDetector_t1792212357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerMotionDetector::add_OnFingerMove(FingerEventDetector`1/FingerEventHandler<FingerMotionEvent>)
extern "C"  void FingerMotionDetector_add_OnFingerMove_m1040514286 (FingerMotionDetector_t1792212357 * __this, FingerEventHandler_t2610700241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerMotionDetector::remove_OnFingerMove(FingerEventDetector`1/FingerEventHandler<FingerMotionEvent>)
extern "C"  void FingerMotionDetector_remove_OnFingerMove_m911647435 (FingerMotionDetector_t1792212357 * __this, FingerEventHandler_t2610700241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerMotionDetector::add_OnFingerStationary(FingerEventDetector`1/FingerEventHandler<FingerMotionEvent>)
extern "C"  void FingerMotionDetector_add_OnFingerStationary_m2050580779 (FingerMotionDetector_t1792212357 * __this, FingerEventHandler_t2610700241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerMotionDetector::remove_OnFingerStationary(FingerEventDetector`1/FingerEventHandler<FingerMotionEvent>)
extern "C"  void FingerMotionDetector_remove_OnFingerStationary_m1086090568 (FingerMotionDetector_t1792212357 * __this, FingerEventHandler_t2610700241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerMotionDetector::FireEvent(FingerMotionEvent,FingerMotionDetector/EventType,FingerMotionPhase,UnityEngine.Vector2,System.Boolean)
extern "C"  bool FingerMotionDetector_FireEvent_m1059152688 (FingerMotionDetector_t1792212357 * __this, FingerMotionEvent_t3307437371 * ___e, int32_t ___eventType, int32_t ___phase, Vector2_t3525329788  ___position, bool ___updateSelection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerMotionDetector::ProcessFinger(FingerGestures/Finger)
extern "C"  void FingerMotionDetector_ProcessFinger_m3596376353 (FingerMotionDetector_t1792212357 * __this, Finger_t2104389513 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
