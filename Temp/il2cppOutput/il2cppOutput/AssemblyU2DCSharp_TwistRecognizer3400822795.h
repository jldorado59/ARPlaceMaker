#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_ContinuousGestureRecognizer_1_ge4049978014.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwistRecognizer
struct  TwistRecognizer_t3400822795  : public ContinuousGestureRecognizer_1_t4049978014
{
public:
	// System.Single TwistRecognizer::MinDOT
	float ___MinDOT_18;
	// System.Single TwistRecognizer::MinRotation
	float ___MinRotation_19;

public:
	inline static int32_t get_offset_of_MinDOT_18() { return static_cast<int32_t>(offsetof(TwistRecognizer_t3400822795, ___MinDOT_18)); }
	inline float get_MinDOT_18() const { return ___MinDOT_18; }
	inline float* get_address_of_MinDOT_18() { return &___MinDOT_18; }
	inline void set_MinDOT_18(float value)
	{
		___MinDOT_18 = value;
	}

	inline static int32_t get_offset_of_MinRotation_19() { return static_cast<int32_t>(offsetof(TwistRecognizer_t3400822795, ___MinRotation_19)); }
	inline float get_MinRotation_19() const { return ___MinRotation_19; }
	inline float* get_address_of_MinRotation_19() { return &___MinRotation_19; }
	inline void set_MinRotation_19(float value)
	{
		___MinRotation_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
