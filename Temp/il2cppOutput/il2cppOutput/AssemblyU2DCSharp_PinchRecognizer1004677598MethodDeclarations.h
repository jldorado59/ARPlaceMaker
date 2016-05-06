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

// PinchRecognizer
struct PinchRecognizer_t1004677598;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// PinchGesture
struct PinchGesture_t1502590799;
// FingerGestures/IFingerList
struct IFingerList_t2944704720;
// FingerGestures/Finger
struct Finger_t2104389513;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PinchGesture1502590799.h"
#include "AssemblyU2DCSharp_GestureResetMode2954327145.h"
#include "AssemblyU2DCSharp_GestureRecognitionState3604239971.h"
#include "AssemblyU2DCSharp_FingerGestures_Finger2104389513.h"

// System.Void PinchRecognizer::.ctor()
extern "C"  void PinchRecognizer__ctor_m1867765581 (PinchRecognizer_t1004677598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PinchRecognizer::GetDefaultEventMessageName()
extern "C"  String_t* PinchRecognizer_GetDefaultEventMessageName_m2729946679 (PinchRecognizer_t1004677598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PinchRecognizer::get_RequiredFingerCount()
extern "C"  int32_t PinchRecognizer_get_RequiredFingerCount_m3201705623 (PinchRecognizer_t1004677598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PinchRecognizer::set_RequiredFingerCount(System.Int32)
extern "C"  void PinchRecognizer_set_RequiredFingerCount_m2093961190 (PinchRecognizer_t1004677598 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PinchRecognizer::get_SupportFingerClustering()
extern "C"  bool PinchRecognizer_get_SupportFingerClustering_m3329279702 (PinchRecognizer_t1004677598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PinchRecognizer::GetDefaultSelectionForSendMessage(PinchGesture)
extern "C"  GameObject_t4012695102 * PinchRecognizer_GetDefaultSelectionForSendMessage_m3620807784 (PinchRecognizer_t1004677598 * __this, PinchGesture_t1502590799 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureResetMode PinchRecognizer::GetDefaultResetMode()
extern "C"  int32_t PinchRecognizer_GetDefaultResetMode_m3360150630 (PinchRecognizer_t1004677598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PinchRecognizer::CanBegin(PinchGesture,FingerGestures/IFingerList)
extern "C"  bool PinchRecognizer_CanBegin_m606141509 (PinchRecognizer_t1004677598 * __this, PinchGesture_t1502590799 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PinchRecognizer::OnBegin(PinchGesture,FingerGestures/IFingerList)
extern "C"  void PinchRecognizer_OnBegin_m305539916 (PinchRecognizer_t1004677598 * __this, PinchGesture_t1502590799 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState PinchRecognizer::OnRecognize(PinchGesture,FingerGestures/IFingerList)
extern "C"  int32_t PinchRecognizer_OnRecognize_m2505971575 (PinchRecognizer_t1004677598 * __this, PinchGesture_t1502590799 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PinchRecognizer::FingersMovedInOppositeDirections(FingerGestures/Finger,FingerGestures/Finger)
extern "C"  bool PinchRecognizer_FingersMovedInOppositeDirections_m3249159944 (PinchRecognizer_t1004677598 * __this, Finger_t2104389513 * ___finger0, Finger_t2104389513 * ___finger1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
