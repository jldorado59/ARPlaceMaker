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

// DragRecognizer
struct DragRecognizer_t2550591000;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// DragGesture
struct DragGesture_t2914643285;
// FingerGestures/IFingerList
struct IFingerList_t2944704720;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragGesture2914643285.h"
#include "AssemblyU2DCSharp_GestureRecognitionState3604239971.h"

// System.Void DragRecognizer::.ctor()
extern "C"  void DragRecognizer__ctor_m2732407171 (DragRecognizer_t2550591000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DragRecognizer::GetDefaultEventMessageName()
extern "C"  String_t* DragRecognizer_GetDefaultEventMessageName_m3146602663 (DragRecognizer_t2550591000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject DragRecognizer::GetDefaultSelectionForSendMessage(DragGesture)
extern "C"  GameObject_t4012695102 * DragRecognizer_GetDefaultSelectionForSendMessage_m873514074 (DragRecognizer_t2550591000 * __this, DragGesture_t2914643285 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragRecognizer::CanBegin(DragGesture,FingerGestures/IFingerList)
extern "C"  bool DragRecognizer_CanBegin_m2023555267 (DragRecognizer_t2550591000 * __this, DragGesture_t2914643285 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragRecognizer::OnBegin(DragGesture,FingerGestures/IFingerList)
extern "C"  void DragRecognizer_OnBegin_m37351328 (DragRecognizer_t2550591000 * __this, DragGesture_t2914643285 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState DragRecognizer::OnRecognize(DragGesture,FingerGestures/IFingerList)
extern "C"  int32_t DragRecognizer_OnRecognize_m2646045429 (DragRecognizer_t2550591000 * __this, DragGesture_t2914643285 * ___gesture, Il2CppObject * ___touches, const MethodInfo* method) IL2CPP_METHOD_ATTR;
