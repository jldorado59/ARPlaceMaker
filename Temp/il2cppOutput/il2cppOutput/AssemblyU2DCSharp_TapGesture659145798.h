#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_DiscreteGesture3644324848.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TapGesture
struct  TapGesture_t659145798  : public DiscreteGesture_t3644324848
{
public:
	// System.Int32 TapGesture::taps
	int32_t ___taps_12;
	// System.Boolean TapGesture::Down
	bool ___Down_13;
	// System.Boolean TapGesture::WasDown
	bool ___WasDown_14;
	// System.Single TapGesture::LastDownTime
	float ___LastDownTime_15;
	// System.Single TapGesture::LastTapTime
	float ___LastTapTime_16;

public:
	inline static int32_t get_offset_of_taps_12() { return static_cast<int32_t>(offsetof(TapGesture_t659145798, ___taps_12)); }
	inline int32_t get_taps_12() const { return ___taps_12; }
	inline int32_t* get_address_of_taps_12() { return &___taps_12; }
	inline void set_taps_12(int32_t value)
	{
		___taps_12 = value;
	}

	inline static int32_t get_offset_of_Down_13() { return static_cast<int32_t>(offsetof(TapGesture_t659145798, ___Down_13)); }
	inline bool get_Down_13() const { return ___Down_13; }
	inline bool* get_address_of_Down_13() { return &___Down_13; }
	inline void set_Down_13(bool value)
	{
		___Down_13 = value;
	}

	inline static int32_t get_offset_of_WasDown_14() { return static_cast<int32_t>(offsetof(TapGesture_t659145798, ___WasDown_14)); }
	inline bool get_WasDown_14() const { return ___WasDown_14; }
	inline bool* get_address_of_WasDown_14() { return &___WasDown_14; }
	inline void set_WasDown_14(bool value)
	{
		___WasDown_14 = value;
	}

	inline static int32_t get_offset_of_LastDownTime_15() { return static_cast<int32_t>(offsetof(TapGesture_t659145798, ___LastDownTime_15)); }
	inline float get_LastDownTime_15() const { return ___LastDownTime_15; }
	inline float* get_address_of_LastDownTime_15() { return &___LastDownTime_15; }
	inline void set_LastDownTime_15(float value)
	{
		___LastDownTime_15 = value;
	}

	inline static int32_t get_offset_of_LastTapTime_16() { return static_cast<int32_t>(offsetof(TapGesture_t659145798, ___LastTapTime_16)); }
	inline float get_LastTapTime_16() const { return ___LastTapTime_16; }
	inline float* get_address_of_LastTapTime_16() { return &___LastTapTime_16; }
	inline void set_LastTapTime_16(float value)
	{
		___LastTapTime_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
