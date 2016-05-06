#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_ContinuousGestureRecognizer_1_ge1354207659.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PinchRecognizer
struct  PinchRecognizer_t1004677598  : public ContinuousGestureRecognizer_1_t1354207659
{
public:
	// System.Single PinchRecognizer::MinDOT
	float ___MinDOT_18;
	// System.Single PinchRecognizer::MinDistance
	float ___MinDistance_19;
	// System.Single PinchRecognizer::DeltaScale
	float ___DeltaScale_20;

public:
	inline static int32_t get_offset_of_MinDOT_18() { return static_cast<int32_t>(offsetof(PinchRecognizer_t1004677598, ___MinDOT_18)); }
	inline float get_MinDOT_18() const { return ___MinDOT_18; }
	inline float* get_address_of_MinDOT_18() { return &___MinDOT_18; }
	inline void set_MinDOT_18(float value)
	{
		___MinDOT_18 = value;
	}

	inline static int32_t get_offset_of_MinDistance_19() { return static_cast<int32_t>(offsetof(PinchRecognizer_t1004677598, ___MinDistance_19)); }
	inline float get_MinDistance_19() const { return ___MinDistance_19; }
	inline float* get_address_of_MinDistance_19() { return &___MinDistance_19; }
	inline void set_MinDistance_19(float value)
	{
		___MinDistance_19 = value;
	}

	inline static int32_t get_offset_of_DeltaScale_20() { return static_cast<int32_t>(offsetof(PinchRecognizer_t1004677598, ___DeltaScale_20)); }
	inline float get_DeltaScale_20() const { return ___DeltaScale_20; }
	inline float* get_address_of_DeltaScale_20() { return &___DeltaScale_20; }
	inline void set_DeltaScale_20(float value)
	{
		___DeltaScale_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
