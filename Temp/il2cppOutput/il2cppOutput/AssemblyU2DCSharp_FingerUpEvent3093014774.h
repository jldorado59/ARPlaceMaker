#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_FingerEvent252338321.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerUpEvent
struct  FingerUpEvent_t3093014774  : public FingerEvent_t252338321
{
public:
	// System.Single FingerUpEvent::timeHeldDown
	float ___timeHeldDown_5;

public:
	inline static int32_t get_offset_of_timeHeldDown_5() { return static_cast<int32_t>(offsetof(FingerUpEvent_t3093014774, ___timeHeldDown_5)); }
	inline float get_timeHeldDown_5() const { return ___timeHeldDown_5; }
	inline float* get_address_of_timeHeldDown_5() { return &___timeHeldDown_5; }
	inline void set_timeHeldDown_5(float value)
	{
		___timeHeldDown_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
