#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_DiscreteGestureRecognizer_1_gen2337112580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LongPressRecognizer
struct  LongPressRecognizer_t1602536459  : public DiscreteGestureRecognizer_1_t2337112580
{
public:
	// System.Single LongPressRecognizer::Duration
	float ___Duration_18;
	// System.Single LongPressRecognizer::MoveTolerance
	float ___MoveTolerance_19;

public:
	inline static int32_t get_offset_of_Duration_18() { return static_cast<int32_t>(offsetof(LongPressRecognizer_t1602536459, ___Duration_18)); }
	inline float get_Duration_18() const { return ___Duration_18; }
	inline float* get_address_of_Duration_18() { return &___Duration_18; }
	inline void set_Duration_18(float value)
	{
		___Duration_18 = value;
	}

	inline static int32_t get_offset_of_MoveTolerance_19() { return static_cast<int32_t>(offsetof(LongPressRecognizer_t1602536459, ___MoveTolerance_19)); }
	inline float get_MoveTolerance_19() const { return ___MoveTolerance_19; }
	inline float* get_address_of_MoveTolerance_19() { return &___MoveTolerance_19; }
	inline void set_MoveTolerance_19(float value)
	{
		___MoveTolerance_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
