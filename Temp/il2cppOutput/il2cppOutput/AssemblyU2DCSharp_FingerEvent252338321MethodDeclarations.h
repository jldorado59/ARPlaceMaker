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

// FingerEvent
struct FingerEvent_t252338321;
// System.String
struct String_t;
// FingerEventDetector
struct FingerEventDetector_t1271053175;
// FingerGestures/Finger
struct Finger_t2104389513;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_FingerEventDetector1271053175.h"
#include "AssemblyU2DCSharp_FingerGestures_Finger2104389513.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"

// System.Void FingerEvent::.ctor()
extern "C"  void FingerEvent__ctor_m2003185146 (FingerEvent_t252338321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FingerEvent::get_Name()
extern "C"  String_t* FingerEvent_get_Name_m3299110619 (FingerEvent_t252338321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEvent::set_Name(System.String)
extern "C"  void FingerEvent_set_Name_m1895560816 (FingerEvent_t252338321 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerEventDetector FingerEvent::get_Detector()
extern "C"  FingerEventDetector_t1271053175 * FingerEvent_get_Detector_m2443001949 (FingerEvent_t252338321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEvent::set_Detector(FingerEventDetector)
extern "C"  void FingerEvent_set_Detector_m2409317358 (FingerEvent_t252338321 * __this, FingerEventDetector_t1271053175 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/Finger FingerEvent::get_Finger()
extern "C"  Finger_t2104389513 * FingerEvent_get_Finger_m1465727150 (FingerEvent_t252338321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEvent::set_Finger(FingerGestures/Finger)
extern "C"  void FingerEvent_set_Finger_m317972349 (FingerEvent_t252338321 * __this, Finger_t2104389513 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerEvent::get_Position()
extern "C"  Vector2_t3525329788  FingerEvent_get_Position_m2057519169 (FingerEvent_t252338321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEvent::set_Position(UnityEngine.Vector2)
extern "C"  void FingerEvent_set_Position_m1280532426 (FingerEvent_t252338321 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject FingerEvent::get_Selection()
extern "C"  GameObject_t4012695102 * FingerEvent_get_Selection_m840794224 (FingerEvent_t252338321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEvent::set_Selection(UnityEngine.GameObject)
extern "C"  void FingerEvent_set_Selection_m3399860863 (FingerEvent_t252338321 * __this, GameObject_t4012695102 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit FingerEvent::get_Hit()
extern "C"  RaycastHit_t46221527  FingerEvent_get_Hit_m461708350 (FingerEvent_t252338321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEvent::set_Hit(UnityEngine.RaycastHit)
extern "C"  void FingerEvent_set_Hit_m1666734989 (FingerEvent_t252338321 * __this, RaycastHit_t46221527  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
