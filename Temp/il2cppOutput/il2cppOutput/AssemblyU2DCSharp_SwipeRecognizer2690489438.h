#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_DiscreteGestureRecognizer_1_gen4285317777.h"
#include "AssemblyU2DCSharp_FingerGestures_SwipeDirection80164229.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SwipeRecognizer
struct  SwipeRecognizer_t2690489438  : public DiscreteGestureRecognizer_1_t4285317777
{
public:
	// FingerGestures/SwipeDirection SwipeRecognizer::ValidDirections
	int32_t ___ValidDirections_18;
	// System.Single SwipeRecognizer::MinDistance
	float ___MinDistance_19;
	// System.Single SwipeRecognizer::MaxDistance
	float ___MaxDistance_20;
	// System.Single SwipeRecognizer::MinVelocity
	float ___MinVelocity_21;
	// System.Single SwipeRecognizer::MaxDeviation
	float ___MaxDeviation_22;

public:
	inline static int32_t get_offset_of_ValidDirections_18() { return static_cast<int32_t>(offsetof(SwipeRecognizer_t2690489438, ___ValidDirections_18)); }
	inline int32_t get_ValidDirections_18() const { return ___ValidDirections_18; }
	inline int32_t* get_address_of_ValidDirections_18() { return &___ValidDirections_18; }
	inline void set_ValidDirections_18(int32_t value)
	{
		___ValidDirections_18 = value;
	}

	inline static int32_t get_offset_of_MinDistance_19() { return static_cast<int32_t>(offsetof(SwipeRecognizer_t2690489438, ___MinDistance_19)); }
	inline float get_MinDistance_19() const { return ___MinDistance_19; }
	inline float* get_address_of_MinDistance_19() { return &___MinDistance_19; }
	inline void set_MinDistance_19(float value)
	{
		___MinDistance_19 = value;
	}

	inline static int32_t get_offset_of_MaxDistance_20() { return static_cast<int32_t>(offsetof(SwipeRecognizer_t2690489438, ___MaxDistance_20)); }
	inline float get_MaxDistance_20() const { return ___MaxDistance_20; }
	inline float* get_address_of_MaxDistance_20() { return &___MaxDistance_20; }
	inline void set_MaxDistance_20(float value)
	{
		___MaxDistance_20 = value;
	}

	inline static int32_t get_offset_of_MinVelocity_21() { return static_cast<int32_t>(offsetof(SwipeRecognizer_t2690489438, ___MinVelocity_21)); }
	inline float get_MinVelocity_21() const { return ___MinVelocity_21; }
	inline float* get_address_of_MinVelocity_21() { return &___MinVelocity_21; }
	inline void set_MinVelocity_21(float value)
	{
		___MinVelocity_21 = value;
	}

	inline static int32_t get_offset_of_MaxDeviation_22() { return static_cast<int32_t>(offsetof(SwipeRecognizer_t2690489438, ___MaxDeviation_22)); }
	inline float get_MaxDeviation_22() const { return ___MaxDeviation_22; }
	inline float* get_address_of_MaxDeviation_22() { return &___MaxDeviation_22; }
	inline void set_MaxDeviation_22(float value)
	{
		___MaxDeviation_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
