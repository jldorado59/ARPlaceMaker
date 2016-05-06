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
// GeoPoint
struct GeoPoint_t1884169439;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GeoPoint
struct  GeoPoint_t1884169439  : public Il2CppObject
{
public:
	// System.String GeoPoint::Name
	String_t* ___Name_1;
	// System.Double GeoPoint::Latitude
	double ___Latitude_2;
	// System.Double GeoPoint::Longitude
	double ___Longitude_3;
	// UnityEngine.Color GeoPoint::Color
	Color_t1588175760  ___Color_4;
	// UnityEngine.Vector3 GeoPoint::m_NormalPos
	Vector3_t3525329789  ___m_NormalPos_5;
	// GeoPoint GeoPoint::m_Center
	GeoPoint_t1884169439 * ___m_Center_6;

public:
	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(GeoPoint_t1884169439, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier(&___Name_1, value);
	}

	inline static int32_t get_offset_of_Latitude_2() { return static_cast<int32_t>(offsetof(GeoPoint_t1884169439, ___Latitude_2)); }
	inline double get_Latitude_2() const { return ___Latitude_2; }
	inline double* get_address_of_Latitude_2() { return &___Latitude_2; }
	inline void set_Latitude_2(double value)
	{
		___Latitude_2 = value;
	}

	inline static int32_t get_offset_of_Longitude_3() { return static_cast<int32_t>(offsetof(GeoPoint_t1884169439, ___Longitude_3)); }
	inline double get_Longitude_3() const { return ___Longitude_3; }
	inline double* get_address_of_Longitude_3() { return &___Longitude_3; }
	inline void set_Longitude_3(double value)
	{
		___Longitude_3 = value;
	}

	inline static int32_t get_offset_of_Color_4() { return static_cast<int32_t>(offsetof(GeoPoint_t1884169439, ___Color_4)); }
	inline Color_t1588175760  get_Color_4() const { return ___Color_4; }
	inline Color_t1588175760 * get_address_of_Color_4() { return &___Color_4; }
	inline void set_Color_4(Color_t1588175760  value)
	{
		___Color_4 = value;
	}

	inline static int32_t get_offset_of_m_NormalPos_5() { return static_cast<int32_t>(offsetof(GeoPoint_t1884169439, ___m_NormalPos_5)); }
	inline Vector3_t3525329789  get_m_NormalPos_5() const { return ___m_NormalPos_5; }
	inline Vector3_t3525329789 * get_address_of_m_NormalPos_5() { return &___m_NormalPos_5; }
	inline void set_m_NormalPos_5(Vector3_t3525329789  value)
	{
		___m_NormalPos_5 = value;
	}

	inline static int32_t get_offset_of_m_Center_6() { return static_cast<int32_t>(offsetof(GeoPoint_t1884169439, ___m_Center_6)); }
	inline GeoPoint_t1884169439 * get_m_Center_6() const { return ___m_Center_6; }
	inline GeoPoint_t1884169439 ** get_address_of_m_Center_6() { return &___m_Center_6; }
	inline void set_m_Center_6(GeoPoint_t1884169439 * value)
	{
		___m_Center_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Center_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
