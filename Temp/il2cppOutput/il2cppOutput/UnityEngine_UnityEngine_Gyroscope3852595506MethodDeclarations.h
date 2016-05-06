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

// UnityEngine.Gyroscope
struct Gyroscope_t3852595506;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Void UnityEngine.Gyroscope::.ctor(System.Int32)
extern "C"  void Gyroscope__ctor_m2665436357 (Gyroscope_t3852595506 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Gyroscope::attitude_Internal(System.Int32)
extern "C"  Quaternion_t1891715979  Gyroscope_attitude_Internal_m315730319 (Il2CppObject * __this /* static, unused */, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gyroscope::INTERNAL_CALL_attitude_Internal(System.Int32,UnityEngine.Quaternion&)
extern "C"  void Gyroscope_INTERNAL_CALL_attitude_Internal_m2063094673 (Il2CppObject * __this /* static, unused */, int32_t ___idx, Quaternion_t1891715979 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Gyroscope::get_attitude()
extern "C"  Quaternion_t1891715979  Gyroscope_get_attitude_m822764265 (Gyroscope_t3852595506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
