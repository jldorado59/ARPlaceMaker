#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_DiscreteGestureRecognizer_1_gen120140296.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TapRecognizer
struct  TapRecognizer_t3788301703  : public DiscreteGestureRecognizer_1_t120140296
{
public:
	// System.Int32 TapRecognizer::RequiredTaps
	int32_t ___RequiredTaps_18;
	// System.Single TapRecognizer::MoveTolerance
	float ___MoveTolerance_19;
	// System.Single TapRecognizer::MaxDuration
	float ___MaxDuration_20;
	// System.Single TapRecognizer::MaxDelayBetweenTaps
	float ___MaxDelayBetweenTaps_21;

public:
	inline static int32_t get_offset_of_RequiredTaps_18() { return static_cast<int32_t>(offsetof(TapRecognizer_t3788301703, ___RequiredTaps_18)); }
	inline int32_t get_RequiredTaps_18() const { return ___RequiredTaps_18; }
	inline int32_t* get_address_of_RequiredTaps_18() { return &___RequiredTaps_18; }
	inline void set_RequiredTaps_18(int32_t value)
	{
		___RequiredTaps_18 = value;
	}

	inline static int32_t get_offset_of_MoveTolerance_19() { return static_cast<int32_t>(offsetof(TapRecognizer_t3788301703, ___MoveTolerance_19)); }
	inline float get_MoveTolerance_19() const { return ___MoveTolerance_19; }
	inline float* get_address_of_MoveTolerance_19() { return &___MoveTolerance_19; }
	inline void set_MoveTolerance_19(float value)
	{
		___MoveTolerance_19 = value;
	}

	inline static int32_t get_offset_of_MaxDuration_20() { return static_cast<int32_t>(offsetof(TapRecognizer_t3788301703, ___MaxDuration_20)); }
	inline float get_MaxDuration_20() const { return ___MaxDuration_20; }
	inline float* get_address_of_MaxDuration_20() { return &___MaxDuration_20; }
	inline void set_MaxDuration_20(float value)
	{
		___MaxDuration_20 = value;
	}

	inline static int32_t get_offset_of_MaxDelayBetweenTaps_21() { return static_cast<int32_t>(offsetof(TapRecognizer_t3788301703, ___MaxDelayBetweenTaps_21)); }
	inline float get_MaxDelayBetweenTaps_21() const { return ___MaxDelayBetweenTaps_21; }
	inline float* get_address_of_MaxDelayBetweenTaps_21() { return &___MaxDelayBetweenTaps_21; }
	inline void set_MaxDelayBetweenTaps_21(float value)
	{
		___MaxDelayBetweenTaps_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
