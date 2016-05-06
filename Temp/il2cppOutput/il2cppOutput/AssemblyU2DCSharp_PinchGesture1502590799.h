#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_ContinuousGesture3323503386.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PinchGesture
struct  PinchGesture_t1502590799  : public ContinuousGesture_t3323503386
{
public:
	// System.Single PinchGesture::delta
	float ___delta_12;
	// System.Single PinchGesture::gap
	float ___gap_13;

public:
	inline static int32_t get_offset_of_delta_12() { return static_cast<int32_t>(offsetof(PinchGesture_t1502590799, ___delta_12)); }
	inline float get_delta_12() const { return ___delta_12; }
	inline float* get_address_of_delta_12() { return &___delta_12; }
	inline void set_delta_12(float value)
	{
		___delta_12 = value;
	}

	inline static int32_t get_offset_of_gap_13() { return static_cast<int32_t>(offsetof(PinchGesture_t1502590799, ___gap_13)); }
	inline float get_gap_13() const { return ___gap_13; }
	inline float* get_address_of_gap_13() { return &___gap_13; }
	inline void set_gap_13(float value)
	{
		___gap_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
