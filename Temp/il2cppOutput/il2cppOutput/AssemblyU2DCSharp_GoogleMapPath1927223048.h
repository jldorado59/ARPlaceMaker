#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleMapLocation[]
struct GoogleMapLocationU5BU5D_t2592364425;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_GoogleMapColor3897743584.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMapPath
struct  GoogleMapPath_t1927223048  : public Il2CppObject
{
public:
	// System.Int32 GoogleMapPath::weight
	int32_t ___weight_0;
	// GoogleMapColor GoogleMapPath::color
	int32_t ___color_1;
	// System.Boolean GoogleMapPath::fill
	bool ___fill_2;
	// GoogleMapColor GoogleMapPath::fillColor
	int32_t ___fillColor_3;
	// GoogleMapLocation[] GoogleMapPath::locations
	GoogleMapLocationU5BU5D_t2592364425* ___locations_4;

public:
	inline static int32_t get_offset_of_weight_0() { return static_cast<int32_t>(offsetof(GoogleMapPath_t1927223048, ___weight_0)); }
	inline int32_t get_weight_0() const { return ___weight_0; }
	inline int32_t* get_address_of_weight_0() { return &___weight_0; }
	inline void set_weight_0(int32_t value)
	{
		___weight_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(GoogleMapPath_t1927223048, ___color_1)); }
	inline int32_t get_color_1() const { return ___color_1; }
	inline int32_t* get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(int32_t value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_fill_2() { return static_cast<int32_t>(offsetof(GoogleMapPath_t1927223048, ___fill_2)); }
	inline bool get_fill_2() const { return ___fill_2; }
	inline bool* get_address_of_fill_2() { return &___fill_2; }
	inline void set_fill_2(bool value)
	{
		___fill_2 = value;
	}

	inline static int32_t get_offset_of_fillColor_3() { return static_cast<int32_t>(offsetof(GoogleMapPath_t1927223048, ___fillColor_3)); }
	inline int32_t get_fillColor_3() const { return ___fillColor_3; }
	inline int32_t* get_address_of_fillColor_3() { return &___fillColor_3; }
	inline void set_fillColor_3(int32_t value)
	{
		___fillColor_3 = value;
	}

	inline static int32_t get_offset_of_locations_4() { return static_cast<int32_t>(offsetof(GoogleMapPath_t1927223048, ___locations_4)); }
	inline GoogleMapLocationU5BU5D_t2592364425* get_locations_4() const { return ___locations_4; }
	inline GoogleMapLocationU5BU5D_t2592364425** get_address_of_locations_4() { return &___locations_4; }
	inline void set_locations_4(GoogleMapLocationU5BU5D_t2592364425* value)
	{
		___locations_4 = value;
		Il2CppCodeGenWriteBarrier(&___locations_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
