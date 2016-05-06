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

// LongPressRecognizer
struct LongPressRecognizer_t1602536459;
// System.String
struct String_t;
// LongPressGesture
struct LongPressGesture_t2876118082;
// FingerGestures/IFingerList
struct IFingerList_t2944704720;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LongPressGesture2876118082.h"
#include "AssemblyU2DCSharp_GestureRecognitionState3604239971.h"

// System.Void LongPressRecognizer::.ctor()
extern "C"  void LongPressRecognizer__ctor_m819833792 (LongPressRecognizer_t1602536459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LongPressRecognizer::GetDefaultEventMessageName()
extern "C"  String_t* LongPressRecognizer_GetDefaultEventMessageName_m2224261412 (LongPressRecognizer_t1602536459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LongPressRecognizer::OnBegin(LongPressGesture,FingerGestures/IFingerList)
extern "C"  void LongPressRecognizer_OnBegin_m872283692 (LongPressRecognizer_t1602536459 * __this, LongPressGesture_t2876118082 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState LongPressRecognizer::OnRecognize(LongPressGesture,FingerGestures/IFingerList)
extern "C"  int32_t LongPressRecognizer_OnRecognize_m3065439831 (LongPressRecognizer_t1602536459 * __this, LongPressGesture_t2876118082 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
