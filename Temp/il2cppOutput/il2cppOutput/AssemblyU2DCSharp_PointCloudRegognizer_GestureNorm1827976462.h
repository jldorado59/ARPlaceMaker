#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<PointCloudRegognizer/Point>
struct List_1_t874251881;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointCloudRegognizer/GestureNormalizer
struct  GestureNormalizer_t1827976462  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<PointCloudRegognizer/Point> PointCloudRegognizer/GestureNormalizer::normalizedPoints
	List_1_t874251881 * ___normalizedPoints_0;
	// System.Collections.Generic.List`1<PointCloudRegognizer/Point> PointCloudRegognizer/GestureNormalizer::pointBuffer
	List_1_t874251881 * ___pointBuffer_1;

public:
	inline static int32_t get_offset_of_normalizedPoints_0() { return static_cast<int32_t>(offsetof(GestureNormalizer_t1827976462, ___normalizedPoints_0)); }
	inline List_1_t874251881 * get_normalizedPoints_0() const { return ___normalizedPoints_0; }
	inline List_1_t874251881 ** get_address_of_normalizedPoints_0() { return &___normalizedPoints_0; }
	inline void set_normalizedPoints_0(List_1_t874251881 * value)
	{
		___normalizedPoints_0 = value;
		Il2CppCodeGenWriteBarrier(&___normalizedPoints_0, value);
	}

	inline static int32_t get_offset_of_pointBuffer_1() { return static_cast<int32_t>(offsetof(GestureNormalizer_t1827976462, ___pointBuffer_1)); }
	inline List_1_t874251881 * get_pointBuffer_1() const { return ___pointBuffer_1; }
	inline List_1_t874251881 ** get_address_of_pointBuffer_1() { return &___pointBuffer_1; }
	inline void set_pointBuffer_1(List_1_t874251881 * value)
	{
		___pointBuffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___pointBuffer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
