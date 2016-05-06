#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointCloudRegognizer/Point
struct  Point_t77292912 
{
public:
	// System.Int32 PointCloudRegognizer/Point::StrokeId
	int32_t ___StrokeId_0;
	// UnityEngine.Vector2 PointCloudRegognizer/Point::Position
	Vector2_t3525329788  ___Position_1;

public:
	inline static int32_t get_offset_of_StrokeId_0() { return static_cast<int32_t>(offsetof(Point_t77292912, ___StrokeId_0)); }
	inline int32_t get_StrokeId_0() const { return ___StrokeId_0; }
	inline int32_t* get_address_of_StrokeId_0() { return &___StrokeId_0; }
	inline void set_StrokeId_0(int32_t value)
	{
		___StrokeId_0 = value;
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(Point_t77292912, ___Position_1)); }
	inline Vector2_t3525329788  get_Position_1() const { return ___Position_1; }
	inline Vector2_t3525329788 * get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(Vector2_t3525329788  value)
	{
		___Position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: PointCloudRegognizer/Point
struct Point_t77292912_marshaled_pinvoke
{
	int32_t ___StrokeId_0;
	Vector2_t3525329788_marshaled_pinvoke ___Position_1;
};
// Native definition for marshalling of: PointCloudRegognizer/Point
struct Point_t77292912_marshaled_com
{
	int32_t ___StrokeId_0;
	Vector2_t3525329788_marshaled_com ___Position_1;
};
