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

// TBHoverChangeScale
struct  TBHoverChangeScale_t1442219820  : public MonoBehaviour_t3012272455
{
public:
	// System.Single TBHoverChangeScale::hoverScaleFactor
	float ___hoverScaleFactor_2;
	// UnityEngine.Vector3 TBHoverChangeScale::originalScale
	Vector3_t3525329789  ___originalScale_3;

public:
	inline static int32_t get_offset_of_hoverScaleFactor_2() { return static_cast<int32_t>(offsetof(TBHoverChangeScale_t1442219820, ___hoverScaleFactor_2)); }
	inline float get_hoverScaleFactor_2() const { return ___hoverScaleFactor_2; }
	inline float* get_address_of_hoverScaleFactor_2() { return &___hoverScaleFactor_2; }
	inline void set_hoverScaleFactor_2(float value)
	{
		___hoverScaleFactor_2 = value;
	}

	inline static int32_t get_offset_of_originalScale_3() { return static_cast<int32_t>(offsetof(TBHoverChangeScale_t1442219820, ___originalScale_3)); }
	inline Vector3_t3525329789  get_originalScale_3() const { return ___originalScale_3; }
	inline Vector3_t3525329789 * get_address_of_originalScale_3() { return &___originalScale_3; }
	inline void set_originalScale_3(Vector3_t3525329789  value)
	{
		___originalScale_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
