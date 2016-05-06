#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera[]
struct CameraU5BU5D_t458432999;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenRaycaster
struct  ScreenRaycaster_t4188861866  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Camera[] ScreenRaycaster::Cameras
	CameraU5BU5D_t458432999* ___Cameras_2;
	// UnityEngine.LayerMask ScreenRaycaster::IgnoreLayerMask
	LayerMask_t1862190090  ___IgnoreLayerMask_3;
	// System.Single ScreenRaycaster::RayThickness
	float ___RayThickness_4;
	// System.Boolean ScreenRaycaster::VisualizeRaycasts
	bool ___VisualizeRaycasts_5;

public:
	inline static int32_t get_offset_of_Cameras_2() { return static_cast<int32_t>(offsetof(ScreenRaycaster_t4188861866, ___Cameras_2)); }
	inline CameraU5BU5D_t458432999* get_Cameras_2() const { return ___Cameras_2; }
	inline CameraU5BU5D_t458432999** get_address_of_Cameras_2() { return &___Cameras_2; }
	inline void set_Cameras_2(CameraU5BU5D_t458432999* value)
	{
		___Cameras_2 = value;
		Il2CppCodeGenWriteBarrier(&___Cameras_2, value);
	}

	inline static int32_t get_offset_of_IgnoreLayerMask_3() { return static_cast<int32_t>(offsetof(ScreenRaycaster_t4188861866, ___IgnoreLayerMask_3)); }
	inline LayerMask_t1862190090  get_IgnoreLayerMask_3() const { return ___IgnoreLayerMask_3; }
	inline LayerMask_t1862190090 * get_address_of_IgnoreLayerMask_3() { return &___IgnoreLayerMask_3; }
	inline void set_IgnoreLayerMask_3(LayerMask_t1862190090  value)
	{
		___IgnoreLayerMask_3 = value;
	}

	inline static int32_t get_offset_of_RayThickness_4() { return static_cast<int32_t>(offsetof(ScreenRaycaster_t4188861866, ___RayThickness_4)); }
	inline float get_RayThickness_4() const { return ___RayThickness_4; }
	inline float* get_address_of_RayThickness_4() { return &___RayThickness_4; }
	inline void set_RayThickness_4(float value)
	{
		___RayThickness_4 = value;
	}

	inline static int32_t get_offset_of_VisualizeRaycasts_5() { return static_cast<int32_t>(offsetof(ScreenRaycaster_t4188861866, ___VisualizeRaycasts_5)); }
	inline bool get_VisualizeRaycasts_5() const { return ___VisualizeRaycasts_5; }
	inline bool* get_address_of_VisualizeRaycasts_5() { return &___VisualizeRaycasts_5; }
	inline void set_VisualizeRaycasts_5(bool value)
	{
		___VisualizeRaycasts_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
