#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Kudan.AR.KudanTracker
struct KudanTracker_t2187476953;
// Kudan.AR.TrackingMethodMarker
struct TrackingMethodMarker_t2013582682;
// Kudan.AR.TrackingMethodMarkerless
struct TrackingMethodMarkerless_t1068609011;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.Samples.SampleScripting
struct  SampleScripting_t3634738862  : public MonoBehaviour_t3012272455
{
public:
	// Kudan.AR.KudanTracker Kudan.AR.Samples.SampleScripting::_kudanTracker
	KudanTracker_t2187476953 * ____kudanTracker_2;
	// Kudan.AR.TrackingMethodMarker Kudan.AR.Samples.SampleScripting::_markerTracking
	TrackingMethodMarker_t2013582682 * ____markerTracking_3;
	// Kudan.AR.TrackingMethodMarkerless Kudan.AR.Samples.SampleScripting::_markerlessTracking
	TrackingMethodMarkerless_t1068609011 * ____markerlessTracking_4;

public:
	inline static int32_t get_offset_of__kudanTracker_2() { return static_cast<int32_t>(offsetof(SampleScripting_t3634738862, ____kudanTracker_2)); }
	inline KudanTracker_t2187476953 * get__kudanTracker_2() const { return ____kudanTracker_2; }
	inline KudanTracker_t2187476953 ** get_address_of__kudanTracker_2() { return &____kudanTracker_2; }
	inline void set__kudanTracker_2(KudanTracker_t2187476953 * value)
	{
		____kudanTracker_2 = value;
		Il2CppCodeGenWriteBarrier(&____kudanTracker_2, value);
	}

	inline static int32_t get_offset_of__markerTracking_3() { return static_cast<int32_t>(offsetof(SampleScripting_t3634738862, ____markerTracking_3)); }
	inline TrackingMethodMarker_t2013582682 * get__markerTracking_3() const { return ____markerTracking_3; }
	inline TrackingMethodMarker_t2013582682 ** get_address_of__markerTracking_3() { return &____markerTracking_3; }
	inline void set__markerTracking_3(TrackingMethodMarker_t2013582682 * value)
	{
		____markerTracking_3 = value;
		Il2CppCodeGenWriteBarrier(&____markerTracking_3, value);
	}

	inline static int32_t get_offset_of__markerlessTracking_4() { return static_cast<int32_t>(offsetof(SampleScripting_t3634738862, ____markerlessTracking_4)); }
	inline TrackingMethodMarkerless_t1068609011 * get__markerlessTracking_4() const { return ____markerlessTracking_4; }
	inline TrackingMethodMarkerless_t1068609011 ** get_address_of__markerlessTracking_4() { return &____markerlessTracking_4; }
	inline void set__markerlessTracking_4(TrackingMethodMarkerless_t1068609011 * value)
	{
		____markerlessTracking_4 = value;
		Il2CppCodeGenWriteBarrier(&____markerlessTracking_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
