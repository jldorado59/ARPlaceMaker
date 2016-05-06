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

// SwipeRecognizer
struct SwipeRecognizer_t2690489438;
// System.String
struct String_t;
// SwipeGesture
struct SwipeGesture_t529355983;
// FingerGestures/IFingerList
struct IFingerList_t2944704720;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SwipeGesture529355983.h"
#include "AssemblyU2DCSharp_GestureRecognitionState3604239971.h"
#include "AssemblyU2DCSharp_FingerGestures_SwipeDirection80164229.h"

// System.Void SwipeRecognizer::.ctor()
extern "C"  void SwipeRecognizer__ctor_m3192992973 (SwipeRecognizer_t2690489438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SwipeRecognizer::GetDefaultEventMessageName()
extern "C"  String_t* SwipeRecognizer_GetDefaultEventMessageName_m1535361207 (SwipeRecognizer_t2690489438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwipeRecognizer::CanBegin(SwipeGesture,FingerGestures/IFingerList)
extern "C"  bool SwipeRecognizer_CanBegin_m2355353413 (SwipeRecognizer_t2690489438 * __this, SwipeGesture_t529355983 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwipeRecognizer::OnBegin(SwipeGesture,FingerGestures/IFingerList)
extern "C"  void SwipeRecognizer_OnBegin_m978475852 (SwipeRecognizer_t2690489438 * __this, SwipeGesture_t529355983 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState SwipeRecognizer::OnRecognize(SwipeGesture,FingerGestures/IFingerList)
extern "C"  int32_t SwipeRecognizer_OnRecognize_m3880585079 (SwipeRecognizer_t2690489438 * __this, SwipeGesture_t529355983 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwipeRecognizer::IsValidDirection(FingerGestures/SwipeDirection)
extern "C"  bool SwipeRecognizer_IsValidDirection_m1043563425 (SwipeRecognizer_t2690489438 * __this, int32_t ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
