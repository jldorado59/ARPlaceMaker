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
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.Trackable
struct  Trackable_t1993354605  : public Il2CppObject
{
public:
	// System.String Kudan.AR.Trackable::name
	String_t* ___name_0;
	// System.Int32 Kudan.AR.Trackable::width
	int32_t ___width_1;
	// System.Int32 Kudan.AR.Trackable::height
	int32_t ___height_2;
	// System.Boolean Kudan.AR.Trackable::isDetected
	bool ___isDetected_3;
	// UnityEngine.Vector3 Kudan.AR.Trackable::position
	Vector3_t3525329789  ___position_4;
	// UnityEngine.Quaternion Kudan.AR.Trackable::orientation
	Quaternion_t1891715979  ___orientation_5;
	// System.Int32 Kudan.AR.Trackable::trackingMethod
	int32_t ___trackingMethod_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Trackable_t1993354605, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(Trackable_t1993354605, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(Trackable_t1993354605, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_isDetected_3() { return static_cast<int32_t>(offsetof(Trackable_t1993354605, ___isDetected_3)); }
	inline bool get_isDetected_3() const { return ___isDetected_3; }
	inline bool* get_address_of_isDetected_3() { return &___isDetected_3; }
	inline void set_isDetected_3(bool value)
	{
		___isDetected_3 = value;
	}

	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(Trackable_t1993354605, ___position_4)); }
	inline Vector3_t3525329789  get_position_4() const { return ___position_4; }
	inline Vector3_t3525329789 * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector3_t3525329789  value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_orientation_5() { return static_cast<int32_t>(offsetof(Trackable_t1993354605, ___orientation_5)); }
	inline Quaternion_t1891715979  get_orientation_5() const { return ___orientation_5; }
	inline Quaternion_t1891715979 * get_address_of_orientation_5() { return &___orientation_5; }
	inline void set_orientation_5(Quaternion_t1891715979  value)
	{
		___orientation_5 = value;
	}

	inline static int32_t get_offset_of_trackingMethod_6() { return static_cast<int32_t>(offsetof(Trackable_t1993354605, ___trackingMethod_6)); }
	inline int32_t get_trackingMethod_6() const { return ___trackingMethod_6; }
	inline int32_t* get_address_of_trackingMethod_6() { return &___trackingMethod_6; }
	inline void set_trackingMethod_6(int32_t value)
	{
		___trackingMethod_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
