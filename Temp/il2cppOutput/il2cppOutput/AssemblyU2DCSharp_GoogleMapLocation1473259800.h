#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMapLocation
struct  GoogleMapLocation_t1473259800  : public Il2CppObject
{
public:
	// System.String GoogleMapLocation::address
	String_t* ___address_0;
	// System.Single GoogleMapLocation::latitude
	float ___latitude_1;
	// System.Single GoogleMapLocation::longitude
	float ___longitude_2;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(GoogleMapLocation_t1473259800, ___address_0)); }
	inline String_t* get_address_0() const { return ___address_0; }
	inline String_t** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(String_t* value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier(&___address_0, value);
	}

	inline static int32_t get_offset_of_latitude_1() { return static_cast<int32_t>(offsetof(GoogleMapLocation_t1473259800, ___latitude_1)); }
	inline float get_latitude_1() const { return ___latitude_1; }
	inline float* get_address_of_latitude_1() { return &___latitude_1; }
	inline void set_latitude_1(float value)
	{
		___latitude_1 = value;
	}

	inline static int32_t get_offset_of_longitude_2() { return static_cast<int32_t>(offsetof(GoogleMapLocation_t1473259800, ___longitude_2)); }
	inline float get_longitude_2() const { return ___longitude_2; }
	inline float* get_address_of_longitude_2() { return &___longitude_2; }
	inline void set_longitude_2(float value)
	{
		___longitude_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
