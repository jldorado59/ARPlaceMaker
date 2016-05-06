#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_ContinuousGesture3323503386.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragGesture
struct  DragGesture_t2914643285  : public ContinuousGesture_t3323503386
{
public:
	// UnityEngine.Vector2 DragGesture::deltaMove
	Vector2_t3525329788  ___deltaMove_12;
	// UnityEngine.Vector2 DragGesture::LastPos
	Vector2_t3525329788  ___LastPos_13;
	// UnityEngine.Vector2 DragGesture::LastDelta
	Vector2_t3525329788  ___LastDelta_14;

public:
	inline static int32_t get_offset_of_deltaMove_12() { return static_cast<int32_t>(offsetof(DragGesture_t2914643285, ___deltaMove_12)); }
	inline Vector2_t3525329788  get_deltaMove_12() const { return ___deltaMove_12; }
	inline Vector2_t3525329788 * get_address_of_deltaMove_12() { return &___deltaMove_12; }
	inline void set_deltaMove_12(Vector2_t3525329788  value)
	{
		___deltaMove_12 = value;
	}

	inline static int32_t get_offset_of_LastPos_13() { return static_cast<int32_t>(offsetof(DragGesture_t2914643285, ___LastPos_13)); }
	inline Vector2_t3525329788  get_LastPos_13() const { return ___LastPos_13; }
	inline Vector2_t3525329788 * get_address_of_LastPos_13() { return &___LastPos_13; }
	inline void set_LastPos_13(Vector2_t3525329788  value)
	{
		___LastPos_13 = value;
	}

	inline static int32_t get_offset_of_LastDelta_14() { return static_cast<int32_t>(offsetof(DragGesture_t2914643285, ___LastDelta_14)); }
	inline Vector2_t3525329788  get_LastDelta_14() const { return ___LastDelta_14; }
	inline Vector2_t3525329788 * get_address_of_LastDelta_14() { return &___LastDelta_14; }
	inline void set_LastDelta_14(Vector2_t3525329788  value)
	{
		___LastDelta_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
