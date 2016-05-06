#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Kudan.AR.TrackingMethodBase
struct TrackingMethodBase_t888542705;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.TransformDriverBase
struct  TransformDriverBase_t2301729773  : public MonoBehaviour_t3012272455
{
public:
	// Kudan.AR.TrackingMethodBase Kudan.AR.TransformDriverBase::_trackerBase
	TrackingMethodBase_t888542705 * ____trackerBase_2;

public:
	inline static int32_t get_offset_of__trackerBase_2() { return static_cast<int32_t>(offsetof(TransformDriverBase_t2301729773, ____trackerBase_2)); }
	inline TrackingMethodBase_t888542705 * get__trackerBase_2() const { return ____trackerBase_2; }
	inline TrackingMethodBase_t888542705 ** get_address_of__trackerBase_2() { return &____trackerBase_2; }
	inline void set__trackerBase_2(TrackingMethodBase_t888542705 * value)
	{
		____trackerBase_2 = value;
		Il2CppCodeGenWriteBarrier(&____trackerBase_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
