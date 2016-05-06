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
// GoogleMapLocation[]
struct GoogleMapLocationU5BU5D_t2592364425;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_GoogleMapMarker_GoogleMapMarkerS2331965438.h"
#include "AssemblyU2DCSharp_GoogleMapColor3897743584.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMapMarker
struct  GoogleMapMarker_t844503645  : public Il2CppObject
{
public:
	// GoogleMapMarker/GoogleMapMarkerSize GoogleMapMarker::size
	int32_t ___size_0;
	// GoogleMapColor GoogleMapMarker::color
	int32_t ___color_1;
	// System.String GoogleMapMarker::label
	String_t* ___label_2;
	// GoogleMapLocation[] GoogleMapMarker::locations
	GoogleMapLocationU5BU5D_t2592364425* ___locations_3;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(GoogleMapMarker_t844503645, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(GoogleMapMarker_t844503645, ___color_1)); }
	inline int32_t get_color_1() const { return ___color_1; }
	inline int32_t* get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(int32_t value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_label_2() { return static_cast<int32_t>(offsetof(GoogleMapMarker_t844503645, ___label_2)); }
	inline String_t* get_label_2() const { return ___label_2; }
	inline String_t** get_address_of_label_2() { return &___label_2; }
	inline void set_label_2(String_t* value)
	{
		___label_2 = value;
		Il2CppCodeGenWriteBarrier(&___label_2, value);
	}

	inline static int32_t get_offset_of_locations_3() { return static_cast<int32_t>(offsetof(GoogleMapMarker_t844503645, ___locations_3)); }
	inline GoogleMapLocationU5BU5D_t2592364425* get_locations_3() const { return ___locations_3; }
	inline GoogleMapLocationU5BU5D_t2592364425** get_address_of_locations_3() { return &___locations_3; }
	inline void set_locations_3(GoogleMapLocationU5BU5D_t2592364425* value)
	{
		___locations_3 = value;
		Il2CppCodeGenWriteBarrier(&___locations_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
