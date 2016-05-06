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

// moverEnY
struct  moverEnY_t4191407695  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3 moverEnY::screenPoint
	Vector3_t3525329789  ___screenPoint_2;
	// UnityEngine.Vector3 moverEnY::offset
	Vector3_t3525329789  ___offset_3;

public:
	inline static int32_t get_offset_of_screenPoint_2() { return static_cast<int32_t>(offsetof(moverEnY_t4191407695, ___screenPoint_2)); }
	inline Vector3_t3525329789  get_screenPoint_2() const { return ___screenPoint_2; }
	inline Vector3_t3525329789 * get_address_of_screenPoint_2() { return &___screenPoint_2; }
	inline void set_screenPoint_2(Vector3_t3525329789  value)
	{
		___screenPoint_2 = value;
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(moverEnY_t4191407695, ___offset_3)); }
	inline Vector3_t3525329789  get_offset_3() const { return ___offset_3; }
	inline Vector3_t3525329789 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t3525329789  value)
	{
		___offset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
