#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FingerEventDetector
struct FingerEventDetector_t1271053175;
// FingerGestures/Finger
struct Finger_t2104389513;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerEvent
struct  FingerEvent_t252338321  : public Il2CppObject
{
public:
	// FingerEventDetector FingerEvent::detector
	FingerEventDetector_t1271053175 * ___detector_0;
	// FingerGestures/Finger FingerEvent::finger
	Finger_t2104389513 * ___finger_1;
	// System.String FingerEvent::name
	String_t* ___name_2;
	// UnityEngine.GameObject FingerEvent::selection
	GameObject_t4012695102 * ___selection_3;
	// UnityEngine.RaycastHit FingerEvent::hit
	RaycastHit_t46221527  ___hit_4;

public:
	inline static int32_t get_offset_of_detector_0() { return static_cast<int32_t>(offsetof(FingerEvent_t252338321, ___detector_0)); }
	inline FingerEventDetector_t1271053175 * get_detector_0() const { return ___detector_0; }
	inline FingerEventDetector_t1271053175 ** get_address_of_detector_0() { return &___detector_0; }
	inline void set_detector_0(FingerEventDetector_t1271053175 * value)
	{
		___detector_0 = value;
		Il2CppCodeGenWriteBarrier(&___detector_0, value);
	}

	inline static int32_t get_offset_of_finger_1() { return static_cast<int32_t>(offsetof(FingerEvent_t252338321, ___finger_1)); }
	inline Finger_t2104389513 * get_finger_1() const { return ___finger_1; }
	inline Finger_t2104389513 ** get_address_of_finger_1() { return &___finger_1; }
	inline void set_finger_1(Finger_t2104389513 * value)
	{
		___finger_1 = value;
		Il2CppCodeGenWriteBarrier(&___finger_1, value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(FingerEvent_t252338321, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_selection_3() { return static_cast<int32_t>(offsetof(FingerEvent_t252338321, ___selection_3)); }
	inline GameObject_t4012695102 * get_selection_3() const { return ___selection_3; }
	inline GameObject_t4012695102 ** get_address_of_selection_3() { return &___selection_3; }
	inline void set_selection_3(GameObject_t4012695102 * value)
	{
		___selection_3 = value;
		Il2CppCodeGenWriteBarrier(&___selection_3, value);
	}

	inline static int32_t get_offset_of_hit_4() { return static_cast<int32_t>(offsetof(FingerEvent_t252338321, ___hit_4)); }
	inline RaycastHit_t46221527  get_hit_4() const { return ___hit_4; }
	inline RaycastHit_t46221527 * get_address_of_hit_4() { return &___hit_4; }
	inline void set_hit_4(RaycastHit_t46221527  value)
	{
		___hit_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
