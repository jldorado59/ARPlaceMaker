#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;

#include "AssemblyU2DCSharp_FGInputProvider1238597786.h"
#include "UnityEngine_UnityEngine_KeyCode2371581209.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FGMouseInputProvider
struct  FGMouseInputProvider_t521614807  : public FGInputProvider_t1238597786
{
public:
	// System.Int32 FGMouseInputProvider::maxButtons
	int32_t ___maxButtons_2;
	// System.String FGMouseInputProvider::pinchAxis
	String_t* ___pinchAxis_3;
	// System.Single FGMouseInputProvider::pinchAxisScale
	float ___pinchAxisScale_4;
	// System.Single FGMouseInputProvider::pinchResetTimeDelay
	float ___pinchResetTimeDelay_5;
	// System.Single FGMouseInputProvider::initialPinchDistance
	float ___initialPinchDistance_6;
	// System.String FGMouseInputProvider::twistAxis
	String_t* ___twistAxis_7;
	// System.Single FGMouseInputProvider::twistAxisScale
	float ___twistAxisScale_8;
	// UnityEngine.KeyCode FGMouseInputProvider::twistKey
	int32_t ___twistKey_9;
	// System.Single FGMouseInputProvider::twistResetTimeDelay
	float ___twistResetTimeDelay_10;
	// UnityEngine.KeyCode FGMouseInputProvider::twistAndPinchKey
	int32_t ___twistAndPinchKey_11;
	// UnityEngine.Vector2 FGMouseInputProvider::pivot
	Vector2_t3525329788  ___pivot_12;
	// UnityEngine.Vector2[] FGMouseInputProvider::pos
	Vector2U5BU5D_t2741383957* ___pos_13;
	// System.Boolean FGMouseInputProvider::pinching
	bool ___pinching_14;
	// System.Single FGMouseInputProvider::pinchResetTime
	float ___pinchResetTime_15;
	// System.Single FGMouseInputProvider::pinchDistance
	float ___pinchDistance_16;
	// System.Boolean FGMouseInputProvider::twisting
	bool ___twisting_17;
	// System.Single FGMouseInputProvider::twistAngle
	float ___twistAngle_18;
	// System.Single FGMouseInputProvider::twistResetTime
	float ___twistResetTime_19;

public:
	inline static int32_t get_offset_of_maxButtons_2() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___maxButtons_2)); }
	inline int32_t get_maxButtons_2() const { return ___maxButtons_2; }
	inline int32_t* get_address_of_maxButtons_2() { return &___maxButtons_2; }
	inline void set_maxButtons_2(int32_t value)
	{
		___maxButtons_2 = value;
	}

	inline static int32_t get_offset_of_pinchAxis_3() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___pinchAxis_3)); }
	inline String_t* get_pinchAxis_3() const { return ___pinchAxis_3; }
	inline String_t** get_address_of_pinchAxis_3() { return &___pinchAxis_3; }
	inline void set_pinchAxis_3(String_t* value)
	{
		___pinchAxis_3 = value;
		Il2CppCodeGenWriteBarrier(&___pinchAxis_3, value);
	}

	inline static int32_t get_offset_of_pinchAxisScale_4() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___pinchAxisScale_4)); }
	inline float get_pinchAxisScale_4() const { return ___pinchAxisScale_4; }
	inline float* get_address_of_pinchAxisScale_4() { return &___pinchAxisScale_4; }
	inline void set_pinchAxisScale_4(float value)
	{
		___pinchAxisScale_4 = value;
	}

	inline static int32_t get_offset_of_pinchResetTimeDelay_5() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___pinchResetTimeDelay_5)); }
	inline float get_pinchResetTimeDelay_5() const { return ___pinchResetTimeDelay_5; }
	inline float* get_address_of_pinchResetTimeDelay_5() { return &___pinchResetTimeDelay_5; }
	inline void set_pinchResetTimeDelay_5(float value)
	{
		___pinchResetTimeDelay_5 = value;
	}

	inline static int32_t get_offset_of_initialPinchDistance_6() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___initialPinchDistance_6)); }
	inline float get_initialPinchDistance_6() const { return ___initialPinchDistance_6; }
	inline float* get_address_of_initialPinchDistance_6() { return &___initialPinchDistance_6; }
	inline void set_initialPinchDistance_6(float value)
	{
		___initialPinchDistance_6 = value;
	}

	inline static int32_t get_offset_of_twistAxis_7() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___twistAxis_7)); }
	inline String_t* get_twistAxis_7() const { return ___twistAxis_7; }
	inline String_t** get_address_of_twistAxis_7() { return &___twistAxis_7; }
	inline void set_twistAxis_7(String_t* value)
	{
		___twistAxis_7 = value;
		Il2CppCodeGenWriteBarrier(&___twistAxis_7, value);
	}

	inline static int32_t get_offset_of_twistAxisScale_8() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___twistAxisScale_8)); }
	inline float get_twistAxisScale_8() const { return ___twistAxisScale_8; }
	inline float* get_address_of_twistAxisScale_8() { return &___twistAxisScale_8; }
	inline void set_twistAxisScale_8(float value)
	{
		___twistAxisScale_8 = value;
	}

	inline static int32_t get_offset_of_twistKey_9() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___twistKey_9)); }
	inline int32_t get_twistKey_9() const { return ___twistKey_9; }
	inline int32_t* get_address_of_twistKey_9() { return &___twistKey_9; }
	inline void set_twistKey_9(int32_t value)
	{
		___twistKey_9 = value;
	}

	inline static int32_t get_offset_of_twistResetTimeDelay_10() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___twistResetTimeDelay_10)); }
	inline float get_twistResetTimeDelay_10() const { return ___twistResetTimeDelay_10; }
	inline float* get_address_of_twistResetTimeDelay_10() { return &___twistResetTimeDelay_10; }
	inline void set_twistResetTimeDelay_10(float value)
	{
		___twistResetTimeDelay_10 = value;
	}

	inline static int32_t get_offset_of_twistAndPinchKey_11() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___twistAndPinchKey_11)); }
	inline int32_t get_twistAndPinchKey_11() const { return ___twistAndPinchKey_11; }
	inline int32_t* get_address_of_twistAndPinchKey_11() { return &___twistAndPinchKey_11; }
	inline void set_twistAndPinchKey_11(int32_t value)
	{
		___twistAndPinchKey_11 = value;
	}

	inline static int32_t get_offset_of_pivot_12() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___pivot_12)); }
	inline Vector2_t3525329788  get_pivot_12() const { return ___pivot_12; }
	inline Vector2_t3525329788 * get_address_of_pivot_12() { return &___pivot_12; }
	inline void set_pivot_12(Vector2_t3525329788  value)
	{
		___pivot_12 = value;
	}

	inline static int32_t get_offset_of_pos_13() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___pos_13)); }
	inline Vector2U5BU5D_t2741383957* get_pos_13() const { return ___pos_13; }
	inline Vector2U5BU5D_t2741383957** get_address_of_pos_13() { return &___pos_13; }
	inline void set_pos_13(Vector2U5BU5D_t2741383957* value)
	{
		___pos_13 = value;
		Il2CppCodeGenWriteBarrier(&___pos_13, value);
	}

	inline static int32_t get_offset_of_pinching_14() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___pinching_14)); }
	inline bool get_pinching_14() const { return ___pinching_14; }
	inline bool* get_address_of_pinching_14() { return &___pinching_14; }
	inline void set_pinching_14(bool value)
	{
		___pinching_14 = value;
	}

	inline static int32_t get_offset_of_pinchResetTime_15() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___pinchResetTime_15)); }
	inline float get_pinchResetTime_15() const { return ___pinchResetTime_15; }
	inline float* get_address_of_pinchResetTime_15() { return &___pinchResetTime_15; }
	inline void set_pinchResetTime_15(float value)
	{
		___pinchResetTime_15 = value;
	}

	inline static int32_t get_offset_of_pinchDistance_16() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___pinchDistance_16)); }
	inline float get_pinchDistance_16() const { return ___pinchDistance_16; }
	inline float* get_address_of_pinchDistance_16() { return &___pinchDistance_16; }
	inline void set_pinchDistance_16(float value)
	{
		___pinchDistance_16 = value;
	}

	inline static int32_t get_offset_of_twisting_17() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___twisting_17)); }
	inline bool get_twisting_17() const { return ___twisting_17; }
	inline bool* get_address_of_twisting_17() { return &___twisting_17; }
	inline void set_twisting_17(bool value)
	{
		___twisting_17 = value;
	}

	inline static int32_t get_offset_of_twistAngle_18() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___twistAngle_18)); }
	inline float get_twistAngle_18() const { return ___twistAngle_18; }
	inline float* get_address_of_twistAngle_18() { return &___twistAngle_18; }
	inline void set_twistAngle_18(float value)
	{
		___twistAngle_18 = value;
	}

	inline static int32_t get_offset_of_twistResetTime_19() { return static_cast<int32_t>(offsetof(FGMouseInputProvider_t521614807, ___twistResetTime_19)); }
	inline float get_twistResetTime_19() const { return ___twistResetTime_19; }
	inline float* get_address_of_twistResetTime_19() { return &___twistResetTime_19; }
	inline void set_twistResetTime_19(float value)
	{
		___twistResetTime_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
