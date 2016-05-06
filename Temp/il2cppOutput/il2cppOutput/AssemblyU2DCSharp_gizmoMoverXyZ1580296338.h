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

// gizmoMoverXyZ
struct  gizmoMoverXyZ_t1580296338  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3 gizmoMoverXyZ::screenPoint
	Vector3_t3525329789  ___screenPoint_2;
	// UnityEngine.Vector3 gizmoMoverXyZ::offset
	Vector3_t3525329789  ___offset_3;
	// System.Single gizmoMoverXyZ::posicionInicialenX
	float ___posicionInicialenX_4;
	// System.Single gizmoMoverXyZ::posicionInicialenY
	float ___posicionInicialenY_5;
	// System.Single gizmoMoverXyZ::posicionInicialenZ
	float ___posicionInicialenZ_6;

public:
	inline static int32_t get_offset_of_screenPoint_2() { return static_cast<int32_t>(offsetof(gizmoMoverXyZ_t1580296338, ___screenPoint_2)); }
	inline Vector3_t3525329789  get_screenPoint_2() const { return ___screenPoint_2; }
	inline Vector3_t3525329789 * get_address_of_screenPoint_2() { return &___screenPoint_2; }
	inline void set_screenPoint_2(Vector3_t3525329789  value)
	{
		___screenPoint_2 = value;
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(gizmoMoverXyZ_t1580296338, ___offset_3)); }
	inline Vector3_t3525329789  get_offset_3() const { return ___offset_3; }
	inline Vector3_t3525329789 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t3525329789  value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_posicionInicialenX_4() { return static_cast<int32_t>(offsetof(gizmoMoverXyZ_t1580296338, ___posicionInicialenX_4)); }
	inline float get_posicionInicialenX_4() const { return ___posicionInicialenX_4; }
	inline float* get_address_of_posicionInicialenX_4() { return &___posicionInicialenX_4; }
	inline void set_posicionInicialenX_4(float value)
	{
		___posicionInicialenX_4 = value;
	}

	inline static int32_t get_offset_of_posicionInicialenY_5() { return static_cast<int32_t>(offsetof(gizmoMoverXyZ_t1580296338, ___posicionInicialenY_5)); }
	inline float get_posicionInicialenY_5() const { return ___posicionInicialenY_5; }
	inline float* get_address_of_posicionInicialenY_5() { return &___posicionInicialenY_5; }
	inline void set_posicionInicialenY_5(float value)
	{
		___posicionInicialenY_5 = value;
	}

	inline static int32_t get_offset_of_posicionInicialenZ_6() { return static_cast<int32_t>(offsetof(gizmoMoverXyZ_t1580296338, ___posicionInicialenZ_6)); }
	inline float get_posicionInicialenZ_6() const { return ___posicionInicialenZ_6; }
	inline float* get_address_of_posicionInicialenZ_6() { return &___posicionInicialenZ_6; }
	inline void set_posicionInicialenZ_6(float value)
	{
		___posicionInicialenZ_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
