#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PointCloudGestureTemplate
struct PointCloudGestureTemplate_t3506552702;
// System.Collections.Generic.List`1<PointCloudRegognizer/Point>
struct List_1_t874251881;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointCloudRegognizer/NormalizedTemplate
struct  NormalizedTemplate_t3849291953  : public Il2CppObject
{
public:
	// PointCloudGestureTemplate PointCloudRegognizer/NormalizedTemplate::Source
	PointCloudGestureTemplate_t3506552702 * ___Source_0;
	// System.Collections.Generic.List`1<PointCloudRegognizer/Point> PointCloudRegognizer/NormalizedTemplate::Points
	List_1_t874251881 * ___Points_1;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(NormalizedTemplate_t3849291953, ___Source_0)); }
	inline PointCloudGestureTemplate_t3506552702 * get_Source_0() const { return ___Source_0; }
	inline PointCloudGestureTemplate_t3506552702 ** get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(PointCloudGestureTemplate_t3506552702 * value)
	{
		___Source_0 = value;
		Il2CppCodeGenWriteBarrier(&___Source_0, value);
	}

	inline static int32_t get_offset_of_Points_1() { return static_cast<int32_t>(offsetof(NormalizedTemplate_t3849291953, ___Points_1)); }
	inline List_1_t874251881 * get_Points_1() const { return ___Points_1; }
	inline List_1_t874251881 ** get_address_of_Points_1() { return &___Points_1; }
	inline void set_Points_1(List_1_t874251881 * value)
	{
		___Points_1 = value;
		Il2CppCodeGenWriteBarrier(&___Points_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
