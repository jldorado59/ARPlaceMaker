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

// Objeto
struct  Objeto_t2355466601  : public Il2CppObject
{
public:
	// System.String Objeto::Name
	String_t* ___Name_0;
	// UnityEngine.Vector3 Objeto::Position
	Vector3_t3525329789  ___Position_1;
	// UnityEngine.Quaternion Objeto::Rotation
	Quaternion_t1891715979  ___Rotation_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Objeto_t2355466601, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(Objeto_t2355466601, ___Position_1)); }
	inline Vector3_t3525329789  get_Position_1() const { return ___Position_1; }
	inline Vector3_t3525329789 * get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(Vector3_t3525329789  value)
	{
		___Position_1 = value;
	}

	inline static int32_t get_offset_of_Rotation_2() { return static_cast<int32_t>(offsetof(Objeto_t2355466601, ___Rotation_2)); }
	inline Quaternion_t1891715979  get_Rotation_2() const { return ___Rotation_2; }
	inline Quaternion_t1891715979 * get_address_of_Rotation_2() { return &___Rotation_2; }
	inline void set_Rotation_2(Quaternion_t1891715979  value)
	{
		___Rotation_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
