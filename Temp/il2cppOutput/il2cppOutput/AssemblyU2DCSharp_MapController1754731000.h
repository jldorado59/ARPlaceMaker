#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SensorsController
struct SensorsController_t2415968341;
// GoogleMap
struct GoogleMap_t3478460483;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapController
struct  MapController_t1754731000  : public MonoBehaviour_t3012272455
{
public:
	// SensorsController MapController::Sensors
	SensorsController_t2415968341 * ___Sensors_2;
	// GoogleMap MapController::m_Map
	GoogleMap_t3478460483 * ___m_Map_3;
	// System.Double MapController::m_PreviousLat
	double ___m_PreviousLat_4;
	// System.Double MapController::m_PreviousLon
	double ___m_PreviousLon_5;

public:
	inline static int32_t get_offset_of_Sensors_2() { return static_cast<int32_t>(offsetof(MapController_t1754731000, ___Sensors_2)); }
	inline SensorsController_t2415968341 * get_Sensors_2() const { return ___Sensors_2; }
	inline SensorsController_t2415968341 ** get_address_of_Sensors_2() { return &___Sensors_2; }
	inline void set_Sensors_2(SensorsController_t2415968341 * value)
	{
		___Sensors_2 = value;
		Il2CppCodeGenWriteBarrier(&___Sensors_2, value);
	}

	inline static int32_t get_offset_of_m_Map_3() { return static_cast<int32_t>(offsetof(MapController_t1754731000, ___m_Map_3)); }
	inline GoogleMap_t3478460483 * get_m_Map_3() const { return ___m_Map_3; }
	inline GoogleMap_t3478460483 ** get_address_of_m_Map_3() { return &___m_Map_3; }
	inline void set_m_Map_3(GoogleMap_t3478460483 * value)
	{
		___m_Map_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Map_3, value);
	}

	inline static int32_t get_offset_of_m_PreviousLat_4() { return static_cast<int32_t>(offsetof(MapController_t1754731000, ___m_PreviousLat_4)); }
	inline double get_m_PreviousLat_4() const { return ___m_PreviousLat_4; }
	inline double* get_address_of_m_PreviousLat_4() { return &___m_PreviousLat_4; }
	inline void set_m_PreviousLat_4(double value)
	{
		___m_PreviousLat_4 = value;
	}

	inline static int32_t get_offset_of_m_PreviousLon_5() { return static_cast<int32_t>(offsetof(MapController_t1754731000, ___m_PreviousLon_5)); }
	inline double get_m_PreviousLon_5() const { return ___m_PreviousLon_5; }
	inline double* get_address_of_m_PreviousLon_5() { return &___m_PreviousLon_5; }
	inline void set_m_PreviousLon_5(double value)
	{
		___m_PreviousLon_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
