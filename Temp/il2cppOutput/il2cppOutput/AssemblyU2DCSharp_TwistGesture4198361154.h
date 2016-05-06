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

// TwistGesture
struct  TwistGesture_t4198361154  : public ContinuousGesture_t3323503386
{
public:
	// System.Single TwistGesture::deltaRotation
	float ___deltaRotation_12;
	// System.Single TwistGesture::totalRotation
	float ___totalRotation_13;

public:
	inline static int32_t get_offset_of_deltaRotation_12() { return static_cast<int32_t>(offsetof(TwistGesture_t4198361154, ___deltaRotation_12)); }
	inline float get_deltaRotation_12() const { return ___deltaRotation_12; }
	inline float* get_address_of_deltaRotation_12() { return &___deltaRotation_12; }
	inline void set_deltaRotation_12(float value)
	{
		___deltaRotation_12 = value;
	}

	inline static int32_t get_offset_of_totalRotation_13() { return static_cast<int32_t>(offsetof(TwistGesture_t4198361154, ___totalRotation_13)); }
	inline float get_totalRotation_13() const { return ___totalRotation_13; }
	inline float* get_address_of_totalRotation_13() { return &___totalRotation_13; }
	inline void set_totalRotation_13(float value)
	{
		___totalRotation_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
