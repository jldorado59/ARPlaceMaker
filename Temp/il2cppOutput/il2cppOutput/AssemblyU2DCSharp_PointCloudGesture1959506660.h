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
// PointCloudGestureTemplate
struct PointCloudGestureTemplate_t3506552702;

#include "AssemblyU2DCSharp_DiscreteGesture3644324848.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointCloudGesture
struct  PointCloudGesture_t1959506660  : public DiscreteGesture_t3644324848
{
public:
	// System.Collections.Generic.List`1<PointCloudRegognizer/Point> PointCloudGesture::RawPoints
	List_1_t874251881 * ___RawPoints_12;
	// System.Collections.Generic.List`1<PointCloudRegognizer/Point> PointCloudGesture::NormalizedPoints
	List_1_t874251881 * ___NormalizedPoints_13;
	// PointCloudGestureTemplate PointCloudGesture::RecognizedTemplate
	PointCloudGestureTemplate_t3506552702 * ___RecognizedTemplate_14;
	// System.Single PointCloudGesture::MatchDistance
	float ___MatchDistance_15;
	// System.Single PointCloudGesture::MatchScore
	float ___MatchScore_16;

public:
	inline static int32_t get_offset_of_RawPoints_12() { return static_cast<int32_t>(offsetof(PointCloudGesture_t1959506660, ___RawPoints_12)); }
	inline List_1_t874251881 * get_RawPoints_12() const { return ___RawPoints_12; }
	inline List_1_t874251881 ** get_address_of_RawPoints_12() { return &___RawPoints_12; }
	inline void set_RawPoints_12(List_1_t874251881 * value)
	{
		___RawPoints_12 = value;
		Il2CppCodeGenWriteBarrier(&___RawPoints_12, value);
	}

	inline static int32_t get_offset_of_NormalizedPoints_13() { return static_cast<int32_t>(offsetof(PointCloudGesture_t1959506660, ___NormalizedPoints_13)); }
	inline List_1_t874251881 * get_NormalizedPoints_13() const { return ___NormalizedPoints_13; }
	inline List_1_t874251881 ** get_address_of_NormalizedPoints_13() { return &___NormalizedPoints_13; }
	inline void set_NormalizedPoints_13(List_1_t874251881 * value)
	{
		___NormalizedPoints_13 = value;
		Il2CppCodeGenWriteBarrier(&___NormalizedPoints_13, value);
	}

	inline static int32_t get_offset_of_RecognizedTemplate_14() { return static_cast<int32_t>(offsetof(PointCloudGesture_t1959506660, ___RecognizedTemplate_14)); }
	inline PointCloudGestureTemplate_t3506552702 * get_RecognizedTemplate_14() const { return ___RecognizedTemplate_14; }
	inline PointCloudGestureTemplate_t3506552702 ** get_address_of_RecognizedTemplate_14() { return &___RecognizedTemplate_14; }
	inline void set_RecognizedTemplate_14(PointCloudGestureTemplate_t3506552702 * value)
	{
		___RecognizedTemplate_14 = value;
		Il2CppCodeGenWriteBarrier(&___RecognizedTemplate_14, value);
	}

	inline static int32_t get_offset_of_MatchDistance_15() { return static_cast<int32_t>(offsetof(PointCloudGesture_t1959506660, ___MatchDistance_15)); }
	inline float get_MatchDistance_15() const { return ___MatchDistance_15; }
	inline float* get_address_of_MatchDistance_15() { return &___MatchDistance_15; }
	inline void set_MatchDistance_15(float value)
	{
		___MatchDistance_15 = value;
	}

	inline static int32_t get_offset_of_MatchScore_16() { return static_cast<int32_t>(offsetof(PointCloudGesture_t1959506660, ___MatchScore_16)); }
	inline float get_MatchScore_16() const { return ___MatchScore_16; }
	inline float* get_address_of_MatchScore_16() { return &___MatchScore_16; }
	inline void set_MatchScore_16(float value)
	{
		___MatchScore_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
