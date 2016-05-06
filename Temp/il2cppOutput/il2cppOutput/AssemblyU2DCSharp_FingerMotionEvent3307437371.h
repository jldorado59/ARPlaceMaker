#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_FingerEvent252338321.h"
#include "AssemblyU2DCSharp_FingerMotionPhase3317175324.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerMotionEvent
struct  FingerMotionEvent_t3307437371  : public FingerEvent_t252338321
{
public:
	// FingerMotionPhase FingerMotionEvent::phase
	int32_t ___phase_5;
	// UnityEngine.Vector2 FingerMotionEvent::position
	Vector2_t3525329788  ___position_6;
	// System.Single FingerMotionEvent::StartTime
	float ___StartTime_7;

public:
	inline static int32_t get_offset_of_phase_5() { return static_cast<int32_t>(offsetof(FingerMotionEvent_t3307437371, ___phase_5)); }
	inline int32_t get_phase_5() const { return ___phase_5; }
	inline int32_t* get_address_of_phase_5() { return &___phase_5; }
	inline void set_phase_5(int32_t value)
	{
		___phase_5 = value;
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(FingerMotionEvent_t3307437371, ___position_6)); }
	inline Vector2_t3525329788  get_position_6() const { return ___position_6; }
	inline Vector2_t3525329788 * get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(Vector2_t3525329788  value)
	{
		___position_6 = value;
	}

	inline static int32_t get_offset_of_StartTime_7() { return static_cast<int32_t>(offsetof(FingerMotionEvent_t3307437371, ___StartTime_7)); }
	inline float get_StartTime_7() const { return ___StartTime_7; }
	inline float* get_address_of_StartTime_7() { return &___StartTime_7; }
	inline void set_StartTime_7(float value)
	{
		___StartTime_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
