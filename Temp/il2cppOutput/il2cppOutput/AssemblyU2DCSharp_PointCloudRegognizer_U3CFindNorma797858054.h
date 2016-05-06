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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointCloudRegognizer/<FindNormalizedTemplate>c__AnonStorey5
struct  U3CFindNormalizedTemplateU3Ec__AnonStorey5_t797858054  : public Il2CppObject
{
public:
	// PointCloudGestureTemplate PointCloudRegognizer/<FindNormalizedTemplate>c__AnonStorey5::template
	PointCloudGestureTemplate_t3506552702 * ___template_0;

public:
	inline static int32_t get_offset_of_template_0() { return static_cast<int32_t>(offsetof(U3CFindNormalizedTemplateU3Ec__AnonStorey5_t797858054, ___template_0)); }
	inline PointCloudGestureTemplate_t3506552702 * get_template_0() const { return ___template_0; }
	inline PointCloudGestureTemplate_t3506552702 ** get_address_of_template_0() { return &___template_0; }
	inline void set_template_0(PointCloudGestureTemplate_t3506552702 * value)
	{
		___template_0 = value;
		Il2CppCodeGenWriteBarrier(&___template_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
