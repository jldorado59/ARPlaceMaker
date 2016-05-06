#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_DiscreteGesture3644324848.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_FingerGestures_SwipeDirection80164229.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SwipeGesture
struct  SwipeGesture_t529355983  : public DiscreteGesture_t3644324848
{
public:
	// UnityEngine.Vector2 SwipeGesture::move
	Vector2_t3525329788  ___move_12;
	// System.Single SwipeGesture::velocity
	float ___velocity_13;
	// FingerGestures/SwipeDirection SwipeGesture::direction
	int32_t ___direction_14;
	// System.Int32 SwipeGesture::MoveCounter
	int32_t ___MoveCounter_15;
	// System.Single SwipeGesture::Deviation
	float ___Deviation_16;

public:
	inline static int32_t get_offset_of_move_12() { return static_cast<int32_t>(offsetof(SwipeGesture_t529355983, ___move_12)); }
	inline Vector2_t3525329788  get_move_12() const { return ___move_12; }
	inline Vector2_t3525329788 * get_address_of_move_12() { return &___move_12; }
	inline void set_move_12(Vector2_t3525329788  value)
	{
		___move_12 = value;
	}

	inline static int32_t get_offset_of_velocity_13() { return static_cast<int32_t>(offsetof(SwipeGesture_t529355983, ___velocity_13)); }
	inline float get_velocity_13() const { return ___velocity_13; }
	inline float* get_address_of_velocity_13() { return &___velocity_13; }
	inline void set_velocity_13(float value)
	{
		___velocity_13 = value;
	}

	inline static int32_t get_offset_of_direction_14() { return static_cast<int32_t>(offsetof(SwipeGesture_t529355983, ___direction_14)); }
	inline int32_t get_direction_14() const { return ___direction_14; }
	inline int32_t* get_address_of_direction_14() { return &___direction_14; }
	inline void set_direction_14(int32_t value)
	{
		___direction_14 = value;
	}

	inline static int32_t get_offset_of_MoveCounter_15() { return static_cast<int32_t>(offsetof(SwipeGesture_t529355983, ___MoveCounter_15)); }
	inline int32_t get_MoveCounter_15() const { return ___MoveCounter_15; }
	inline int32_t* get_address_of_MoveCounter_15() { return &___MoveCounter_15; }
	inline void set_MoveCounter_15(int32_t value)
	{
		___MoveCounter_15 = value;
	}

	inline static int32_t get_offset_of_Deviation_16() { return static_cast<int32_t>(offsetof(SwipeGesture_t529355983, ___Deviation_16)); }
	inline float get_Deviation_16() const { return ___Deviation_16; }
	inline float* get_address_of_Deviation_16() { return &___Deviation_16; }
	inline void set_Deviation_16(float value)
	{
		___Deviation_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
