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
// GeoPoint[]
struct GeoPointU5BU5D_t3958679750;
// GeoPoint
struct GeoPoint_t1884169439;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GeoPointsController
struct  GeoPointsController_t561968688  : public MonoBehaviour_t3012272455
{
public:
	// SensorsController GeoPointsController::Sensors
	SensorsController_t2415968341 * ___Sensors_3;
	// GeoPoint[] GeoPointsController::POIS
	GeoPointU5BU5D_t3958679750* ___POIS_4;
	// GeoPoint GeoPointsController::m_Location
	GeoPoint_t1884169439 * ___m_Location_5;
	// UnityEngine.GameObject GeoPointsController::PointPrefab
	GameObject_t4012695102 * ___PointPrefab_6;
	// UnityEngine.GameObject GeoPointsController::User
	GameObject_t4012695102 * ___User_7;
	// System.Boolean GeoPointsController::m_IsEnabled
	bool ___m_IsEnabled_8;

public:
	inline static int32_t get_offset_of_Sensors_3() { return static_cast<int32_t>(offsetof(GeoPointsController_t561968688, ___Sensors_3)); }
	inline SensorsController_t2415968341 * get_Sensors_3() const { return ___Sensors_3; }
	inline SensorsController_t2415968341 ** get_address_of_Sensors_3() { return &___Sensors_3; }
	inline void set_Sensors_3(SensorsController_t2415968341 * value)
	{
		___Sensors_3 = value;
		Il2CppCodeGenWriteBarrier(&___Sensors_3, value);
	}

	inline static int32_t get_offset_of_POIS_4() { return static_cast<int32_t>(offsetof(GeoPointsController_t561968688, ___POIS_4)); }
	inline GeoPointU5BU5D_t3958679750* get_POIS_4() const { return ___POIS_4; }
	inline GeoPointU5BU5D_t3958679750** get_address_of_POIS_4() { return &___POIS_4; }
	inline void set_POIS_4(GeoPointU5BU5D_t3958679750* value)
	{
		___POIS_4 = value;
		Il2CppCodeGenWriteBarrier(&___POIS_4, value);
	}

	inline static int32_t get_offset_of_m_Location_5() { return static_cast<int32_t>(offsetof(GeoPointsController_t561968688, ___m_Location_5)); }
	inline GeoPoint_t1884169439 * get_m_Location_5() const { return ___m_Location_5; }
	inline GeoPoint_t1884169439 ** get_address_of_m_Location_5() { return &___m_Location_5; }
	inline void set_m_Location_5(GeoPoint_t1884169439 * value)
	{
		___m_Location_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Location_5, value);
	}

	inline static int32_t get_offset_of_PointPrefab_6() { return static_cast<int32_t>(offsetof(GeoPointsController_t561968688, ___PointPrefab_6)); }
	inline GameObject_t4012695102 * get_PointPrefab_6() const { return ___PointPrefab_6; }
	inline GameObject_t4012695102 ** get_address_of_PointPrefab_6() { return &___PointPrefab_6; }
	inline void set_PointPrefab_6(GameObject_t4012695102 * value)
	{
		___PointPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___PointPrefab_6, value);
	}

	inline static int32_t get_offset_of_User_7() { return static_cast<int32_t>(offsetof(GeoPointsController_t561968688, ___User_7)); }
	inline GameObject_t4012695102 * get_User_7() const { return ___User_7; }
	inline GameObject_t4012695102 ** get_address_of_User_7() { return &___User_7; }
	inline void set_User_7(GameObject_t4012695102 * value)
	{
		___User_7 = value;
		Il2CppCodeGenWriteBarrier(&___User_7, value);
	}

	inline static int32_t get_offset_of_m_IsEnabled_8() { return static_cast<int32_t>(offsetof(GeoPointsController_t561968688, ___m_IsEnabled_8)); }
	inline bool get_m_IsEnabled_8() const { return ___m_IsEnabled_8; }
	inline bool* get_address_of_m_IsEnabled_8() { return &___m_IsEnabled_8; }
	inline void set_m_IsEnabled_8(bool value)
	{
		___m_IsEnabled_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
