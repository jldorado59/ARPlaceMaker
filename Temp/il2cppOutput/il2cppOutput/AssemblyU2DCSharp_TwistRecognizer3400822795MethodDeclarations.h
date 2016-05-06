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

// TwistRecognizer
struct TwistRecognizer_t3400822795;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// TwistGesture
struct TwistGesture_t4198361154;
// FingerGestures/IFingerList
struct IFingerList_t2944704720;
// FingerGestures/Finger
struct Finger_t2104389513;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GestureResetMode2954327145.h"
#include "AssemblyU2DCSharp_TwistGesture4198361154.h"
#include "AssemblyU2DCSharp_GestureRecognitionState3604239971.h"
#include "AssemblyU2DCSharp_FingerGestures_Finger2104389513.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void TwistRecognizer::.ctor()
extern "C"  void TwistRecognizer__ctor_m1922642880 (TwistRecognizer_t3400822795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwistRecognizer::GetDefaultEventMessageName()
extern "C"  String_t* TwistRecognizer_GetDefaultEventMessageName_m1236707236 (TwistRecognizer_t3400822795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TwistRecognizer::get_RequiredFingerCount()
extern "C"  int32_t TwistRecognizer_get_RequiredFingerCount_m4186336330 (TwistRecognizer_t3400822795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwistRecognizer::set_RequiredFingerCount(System.Int32)
extern "C"  void TwistRecognizer_set_RequiredFingerCount_m1172152601 (TwistRecognizer_t3400822795 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TwistRecognizer::get_SupportFingerClustering()
extern "C"  bool TwistRecognizer_get_SupportFingerClustering_m4283497225 (TwistRecognizer_t3400822795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureResetMode TwistRecognizer::GetDefaultResetMode()
extern "C"  int32_t TwistRecognizer_GetDefaultResetMode_m1720511385 (TwistRecognizer_t3400822795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject TwistRecognizer::GetDefaultSelectionForSendMessage(TwistGesture)
extern "C"  GameObject_t4012695102 * TwistRecognizer_GetDefaultSelectionForSendMessage_m2727722824 (TwistRecognizer_t3400822795 * __this, TwistGesture_t4198361154 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TwistRecognizer::CanBegin(TwistGesture,FingerGestures/IFingerList)
extern "C"  bool TwistRecognizer_CanBegin_m3803459435 (TwistRecognizer_t3400822795 * __this, TwistGesture_t4198361154 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwistRecognizer::OnBegin(TwistGesture,FingerGestures/IFingerList)
extern "C"  void TwistRecognizer_OnBegin_m2474328748 (TwistRecognizer_t3400822795 * __this, TwistGesture_t4198361154 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState TwistRecognizer::OnRecognize(TwistGesture,FingerGestures/IFingerList)
extern "C"  int32_t TwistRecognizer_OnRecognize_m120516695 (TwistRecognizer_t3400822795 * __this, TwistGesture_t4198361154 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TwistRecognizer::FingersMovedInOppositeDirections(FingerGestures/Finger,FingerGestures/Finger)
extern "C"  bool TwistRecognizer_FingersMovedInOppositeDirections_m2520523067 (TwistRecognizer_t3400822795 * __this, Finger_t2104389513 * ___finger0, Finger_t2104389513 * ___finger1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TwistRecognizer::SignedAngularGap(FingerGestures/Finger,FingerGestures/Finger,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float TwistRecognizer_SignedAngularGap_m2499737396 (Il2CppObject * __this /* static, unused */, Finger_t2104389513 * ___finger0, Finger_t2104389513 * ___finger1, Vector2_t3525329788  ___refPos0, Vector2_t3525329788  ___refPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
