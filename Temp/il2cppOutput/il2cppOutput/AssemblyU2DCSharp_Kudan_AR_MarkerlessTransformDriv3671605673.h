#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Kudan.AR.TrackingMethodMarkerless
struct TrackingMethodMarkerless_t1068609011;

#include "AssemblyU2DCSharp_Kudan_AR_TransformDriverBase2301729773.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.MarkerlessTransformDriver
struct  MarkerlessTransformDriver_t3671605673  : public TransformDriverBase_t2301729773
{
public:
	// Kudan.AR.TrackingMethodMarkerless Kudan.AR.MarkerlessTransformDriver::_tracker
	TrackingMethodMarkerless_t1068609011 * ____tracker_3;

public:
	inline static int32_t get_offset_of__tracker_3() { return static_cast<int32_t>(offsetof(MarkerlessTransformDriver_t3671605673, ____tracker_3)); }
	inline TrackingMethodMarkerless_t1068609011 * get__tracker_3() const { return ____tracker_3; }
	inline TrackingMethodMarkerless_t1068609011 ** get_address_of__tracker_3() { return &____tracker_3; }
	inline void set__tracker_3(TrackingMethodMarkerless_t1068609011 * value)
	{
		____tracker_3 = value;
		Il2CppCodeGenWriteBarrier(&____tracker_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
