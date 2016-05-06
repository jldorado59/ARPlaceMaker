#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "AssemblyU2DCSharp_FingerEvent252338321.h"
#include "AssemblyU2DCSharp_FingerHoverPhase1776806408.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerHoverEvent
struct  FingerHoverEvent_t1767068455  : public FingerEvent_t252338321
{
public:
	// FingerHoverPhase FingerHoverEvent::phase
	int32_t ___phase_5;
	// UnityEngine.GameObject FingerHoverEvent::PreviousSelection
	GameObject_t4012695102 * ___PreviousSelection_6;

public:
	inline static int32_t get_offset_of_phase_5() { return static_cast<int32_t>(offsetof(FingerHoverEvent_t1767068455, ___phase_5)); }
	inline int32_t get_phase_5() const { return ___phase_5; }
	inline int32_t* get_address_of_phase_5() { return &___phase_5; }
	inline void set_phase_5(int32_t value)
	{
		___phase_5 = value;
	}

	inline static int32_t get_offset_of_PreviousSelection_6() { return static_cast<int32_t>(offsetof(FingerHoverEvent_t1767068455, ___PreviousSelection_6)); }
	inline GameObject_t4012695102 * get_PreviousSelection_6() const { return ___PreviousSelection_6; }
	inline GameObject_t4012695102 ** get_address_of_PreviousSelection_6() { return &___PreviousSelection_6; }
	inline void set_PreviousSelection_6(GameObject_t4012695102 * value)
	{
		___PreviousSelection_6 = value;
		Il2CppCodeGenWriteBarrier(&___PreviousSelection_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
