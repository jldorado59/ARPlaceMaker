#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_ContinuousGestureRecognizer_1_ge2766260145.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragRecognizer
struct  DragRecognizer_t2550591000  : public ContinuousGestureRecognizer_1_t2766260145
{
public:
	// System.Single DragRecognizer::MoveTolerance
	float ___MoveTolerance_18;
	// System.Boolean DragRecognizer::ApplySameDirectionConstraint
	bool ___ApplySameDirectionConstraint_19;

public:
	inline static int32_t get_offset_of_MoveTolerance_18() { return static_cast<int32_t>(offsetof(DragRecognizer_t2550591000, ___MoveTolerance_18)); }
	inline float get_MoveTolerance_18() const { return ___MoveTolerance_18; }
	inline float* get_address_of_MoveTolerance_18() { return &___MoveTolerance_18; }
	inline void set_MoveTolerance_18(float value)
	{
		___MoveTolerance_18 = value;
	}

	inline static int32_t get_offset_of_ApplySameDirectionConstraint_19() { return static_cast<int32_t>(offsetof(DragRecognizer_t2550591000, ___ApplySameDirectionConstraint_19)); }
	inline bool get_ApplySameDirectionConstraint_19() const { return ___ApplySameDirectionConstraint_19; }
	inline bool* get_address_of_ApplySameDirectionConstraint_19() { return &___ApplySameDirectionConstraint_19; }
	inline void set_ApplySameDirectionConstraint_19(bool value)
	{
		___ApplySameDirectionConstraint_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
