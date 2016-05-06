#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// System.Action
struct Action_t437523947;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SensorsController
struct  SensorsController_t2415968341  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text SensorsController::Accel
	Text_t3286458198 * ___Accel_2;
	// UnityEngine.UI.Text SensorsController::Compass
	Text_t3286458198 * ___Compass_3;
	// UnityEngine.UI.Text SensorsController::GPS
	Text_t3286458198 * ___GPS_4;
	// System.Double SensorsController::Latitude
	double ___Latitude_5;
	// System.Double SensorsController::Longitude
	double ___Longitude_6;
	// UnityEngine.Vector2 SensorsController::CameraFOV
	Vector2_t3525329788  ___CameraFOV_7;
	// System.Single SensorsController::FocalLenght
	float ___FocalLenght_8;
	// System.Action SensorsController::OnReady
	Action_t437523947 * ___OnReady_9;

public:
	inline static int32_t get_offset_of_Accel_2() { return static_cast<int32_t>(offsetof(SensorsController_t2415968341, ___Accel_2)); }
	inline Text_t3286458198 * get_Accel_2() const { return ___Accel_2; }
	inline Text_t3286458198 ** get_address_of_Accel_2() { return &___Accel_2; }
	inline void set_Accel_2(Text_t3286458198 * value)
	{
		___Accel_2 = value;
		Il2CppCodeGenWriteBarrier(&___Accel_2, value);
	}

	inline static int32_t get_offset_of_Compass_3() { return static_cast<int32_t>(offsetof(SensorsController_t2415968341, ___Compass_3)); }
	inline Text_t3286458198 * get_Compass_3() const { return ___Compass_3; }
	inline Text_t3286458198 ** get_address_of_Compass_3() { return &___Compass_3; }
	inline void set_Compass_3(Text_t3286458198 * value)
	{
		___Compass_3 = value;
		Il2CppCodeGenWriteBarrier(&___Compass_3, value);
	}

	inline static int32_t get_offset_of_GPS_4() { return static_cast<int32_t>(offsetof(SensorsController_t2415968341, ___GPS_4)); }
	inline Text_t3286458198 * get_GPS_4() const { return ___GPS_4; }
	inline Text_t3286458198 ** get_address_of_GPS_4() { return &___GPS_4; }
	inline void set_GPS_4(Text_t3286458198 * value)
	{
		___GPS_4 = value;
		Il2CppCodeGenWriteBarrier(&___GPS_4, value);
	}

	inline static int32_t get_offset_of_Latitude_5() { return static_cast<int32_t>(offsetof(SensorsController_t2415968341, ___Latitude_5)); }
	inline double get_Latitude_5() const { return ___Latitude_5; }
	inline double* get_address_of_Latitude_5() { return &___Latitude_5; }
	inline void set_Latitude_5(double value)
	{
		___Latitude_5 = value;
	}

	inline static int32_t get_offset_of_Longitude_6() { return static_cast<int32_t>(offsetof(SensorsController_t2415968341, ___Longitude_6)); }
	inline double get_Longitude_6() const { return ___Longitude_6; }
	inline double* get_address_of_Longitude_6() { return &___Longitude_6; }
	inline void set_Longitude_6(double value)
	{
		___Longitude_6 = value;
	}

	inline static int32_t get_offset_of_CameraFOV_7() { return static_cast<int32_t>(offsetof(SensorsController_t2415968341, ___CameraFOV_7)); }
	inline Vector2_t3525329788  get_CameraFOV_7() const { return ___CameraFOV_7; }
	inline Vector2_t3525329788 * get_address_of_CameraFOV_7() { return &___CameraFOV_7; }
	inline void set_CameraFOV_7(Vector2_t3525329788  value)
	{
		___CameraFOV_7 = value;
	}

	inline static int32_t get_offset_of_FocalLenght_8() { return static_cast<int32_t>(offsetof(SensorsController_t2415968341, ___FocalLenght_8)); }
	inline float get_FocalLenght_8() const { return ___FocalLenght_8; }
	inline float* get_address_of_FocalLenght_8() { return &___FocalLenght_8; }
	inline void set_FocalLenght_8(float value)
	{
		___FocalLenght_8 = value;
	}

	inline static int32_t get_offset_of_OnReady_9() { return static_cast<int32_t>(offsetof(SensorsController_t2415968341, ___OnReady_9)); }
	inline Action_t437523947 * get_OnReady_9() const { return ___OnReady_9; }
	inline Action_t437523947 ** get_address_of_OnReady_9() { return &___OnReady_9; }
	inline void set_OnReady_9(Action_t437523947 * value)
	{
		___OnReady_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnReady_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
