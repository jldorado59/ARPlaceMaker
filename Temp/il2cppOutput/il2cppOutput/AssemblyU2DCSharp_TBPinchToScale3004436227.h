#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBPinchToScale
struct  TBPinchToScale_t3004436227  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3 TBPinchToScale::scaleWeights
	Vector3_t3525329789  ___scaleWeights_2;
	// System.Single TBPinchToScale::minScaleAmount
	float ___minScaleAmount_3;
	// System.Single TBPinchToScale::maxScaleAmount
	float ___maxScaleAmount_4;
	// System.Single TBPinchToScale::sensitivity
	float ___sensitivity_5;
	// System.Single TBPinchToScale::smoothingSpeed
	float ___smoothingSpeed_6;
	// System.Single TBPinchToScale::idealScaleAmount
	float ___idealScaleAmount_7;
	// System.Single TBPinchToScale::scaleAmount
	float ___scaleAmount_8;
	// UnityEngine.Vector3 TBPinchToScale::baseScale
	Vector3_t3525329789  ___baseScale_9;

public:
	inline static int32_t get_offset_of_scaleWeights_2() { return static_cast<int32_t>(offsetof(TBPinchToScale_t3004436227, ___scaleWeights_2)); }
	inline Vector3_t3525329789  get_scaleWeights_2() const { return ___scaleWeights_2; }
	inline Vector3_t3525329789 * get_address_of_scaleWeights_2() { return &___scaleWeights_2; }
	inline void set_scaleWeights_2(Vector3_t3525329789  value)
	{
		___scaleWeights_2 = value;
	}

	inline static int32_t get_offset_of_minScaleAmount_3() { return static_cast<int32_t>(offsetof(TBPinchToScale_t3004436227, ___minScaleAmount_3)); }
	inline float get_minScaleAmount_3() const { return ___minScaleAmount_3; }
	inline float* get_address_of_minScaleAmount_3() { return &___minScaleAmount_3; }
	inline void set_minScaleAmount_3(float value)
	{
		___minScaleAmount_3 = value;
	}

	inline static int32_t get_offset_of_maxScaleAmount_4() { return static_cast<int32_t>(offsetof(TBPinchToScale_t3004436227, ___maxScaleAmount_4)); }
	inline float get_maxScaleAmount_4() const { return ___maxScaleAmount_4; }
	inline float* get_address_of_maxScaleAmount_4() { return &___maxScaleAmount_4; }
	inline void set_maxScaleAmount_4(float value)
	{
		___maxScaleAmount_4 = value;
	}

	inline static int32_t get_offset_of_sensitivity_5() { return static_cast<int32_t>(offsetof(TBPinchToScale_t3004436227, ___sensitivity_5)); }
	inline float get_sensitivity_5() const { return ___sensitivity_5; }
	inline float* get_address_of_sensitivity_5() { return &___sensitivity_5; }
	inline void set_sensitivity_5(float value)
	{
		___sensitivity_5 = value;
	}

	inline static int32_t get_offset_of_smoothingSpeed_6() { return static_cast<int32_t>(offsetof(TBPinchToScale_t3004436227, ___smoothingSpeed_6)); }
	inline float get_smoothingSpeed_6() const { return ___smoothingSpeed_6; }
	inline float* get_address_of_smoothingSpeed_6() { return &___smoothingSpeed_6; }
	inline void set_smoothingSpeed_6(float value)
	{
		___smoothingSpeed_6 = value;
	}

	inline static int32_t get_offset_of_idealScaleAmount_7() { return static_cast<int32_t>(offsetof(TBPinchToScale_t3004436227, ___idealScaleAmount_7)); }
	inline float get_idealScaleAmount_7() const { return ___idealScaleAmount_7; }
	inline float* get_address_of_idealScaleAmount_7() { return &___idealScaleAmount_7; }
	inline void set_idealScaleAmount_7(float value)
	{
		___idealScaleAmount_7 = value;
	}

	inline static int32_t get_offset_of_scaleAmount_8() { return static_cast<int32_t>(offsetof(TBPinchToScale_t3004436227, ___scaleAmount_8)); }
	inline float get_scaleAmount_8() const { return ___scaleAmount_8; }
	inline float* get_address_of_scaleAmount_8() { return &___scaleAmount_8; }
	inline void set_scaleAmount_8(float value)
	{
		___scaleAmount_8 = value;
	}

	inline static int32_t get_offset_of_baseScale_9() { return static_cast<int32_t>(offsetof(TBPinchToScale_t3004436227, ___baseScale_9)); }
	inline Vector3_t3525329789  get_baseScale_9() const { return ___baseScale_9; }
	inline Vector3_t3525329789 * get_address_of_baseScale_9() { return &___baseScale_9; }
	inline void set_baseScale_9(Vector3_t3525329789  value)
	{
		___baseScale_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
