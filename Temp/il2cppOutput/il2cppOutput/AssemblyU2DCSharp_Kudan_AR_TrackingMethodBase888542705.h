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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.TrackingMethodBase
struct  TrackingMethodBase_t888542705  : public MonoBehaviour_t3012272455
{
public:
	// Kudan.AR.KudanTracker Kudan.AR.TrackingMethodBase::_kudanTracker
	KudanTracker_t2187476953 * ____kudanTracker_2;
	// System.Boolean Kudan.AR.TrackingMethodBase::_isTrackingEnabled
	bool ____isTrackingEnabled_3;

public:
	inline static int32_t get_offset_of__kudanTracker_2() { return static_cast<int32_t>(offsetof(TrackingMethodBase_t888542705, ____kudanTracker_2)); }
	inline KudanTracker_t2187476953 * get__kudanTracker_2() const { return ____kudanTracker_2; }
	inline KudanTracker_t2187476953 ** get_address_of__kudanTracker_2() { return &____kudanTracker_2; }
	inline void set__kudanTracker_2(KudanTracker_t2187476953 * value)
	{
		____kudanTracker_2 = value;
		Il2CppCodeGenWriteBarrier(&____kudanTracker_2, value);
	}

	inline static int32_t get_offset_of__isTrackingEnabled_3() { return static_cast<int32_t>(offsetof(TrackingMethodBase_t888542705, ____isTrackingEnabled_3)); }
	inline bool get__isTrackingEnabled_3() const { return ____isTrackingEnabled_3; }
	inline bool* get_address_of__isTrackingEnabled_3() { return &____isTrackingEnabled_3; }
	inline void set__isTrackingEnabled_3(bool value)
	{
		____isTrackingEnabled_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
