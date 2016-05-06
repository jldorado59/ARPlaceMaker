#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t27321461;

#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointCloudGestureTemplate
struct  PointCloudGestureTemplate_t3506552702  : public ScriptableObject_t184905905
{
public:
	// System.Collections.Generic.List`1<System.Int32> PointCloudGestureTemplate::strokeIds
	List_1_t3644373756 * ___strokeIds_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> PointCloudGestureTemplate::positions
	List_1_t27321461 * ___positions_3;
	// System.Int32 PointCloudGestureTemplate::strokeCount
	int32_t ___strokeCount_4;
	// UnityEngine.Vector2 PointCloudGestureTemplate::size
	Vector2_t3525329788  ___size_5;

public:
	inline static int32_t get_offset_of_strokeIds_2() { return static_cast<int32_t>(offsetof(PointCloudGestureTemplate_t3506552702, ___strokeIds_2)); }
	inline List_1_t3644373756 * get_strokeIds_2() const { return ___strokeIds_2; }
	inline List_1_t3644373756 ** get_address_of_strokeIds_2() { return &___strokeIds_2; }
	inline void set_strokeIds_2(List_1_t3644373756 * value)
	{
		___strokeIds_2 = value;
		Il2CppCodeGenWriteBarrier(&___strokeIds_2, value);
	}

	inline static int32_t get_offset_of_positions_3() { return static_cast<int32_t>(offsetof(PointCloudGestureTemplate_t3506552702, ___positions_3)); }
	inline List_1_t27321461 * get_positions_3() const { return ___positions_3; }
	inline List_1_t27321461 ** get_address_of_positions_3() { return &___positions_3; }
	inline void set_positions_3(List_1_t27321461 * value)
	{
		___positions_3 = value;
		Il2CppCodeGenWriteBarrier(&___positions_3, value);
	}

	inline static int32_t get_offset_of_strokeCount_4() { return static_cast<int32_t>(offsetof(PointCloudGestureTemplate_t3506552702, ___strokeCount_4)); }
	inline int32_t get_strokeCount_4() const { return ___strokeCount_4; }
	inline int32_t* get_address_of_strokeCount_4() { return &___strokeCount_4; }
	inline void set_strokeCount_4(int32_t value)
	{
		___strokeCount_4 = value;
	}

	inline static int32_t get_offset_of_size_5() { return static_cast<int32_t>(offsetof(PointCloudGestureTemplate_t3506552702, ___size_5)); }
	inline Vector2_t3525329788  get_size_5() const { return ___size_5; }
	inline Vector2_t3525329788 * get_address_of_size_5() { return &___size_5; }
	inline void set_size_5(Vector2_t3525329788  value)
	{
		___size_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
