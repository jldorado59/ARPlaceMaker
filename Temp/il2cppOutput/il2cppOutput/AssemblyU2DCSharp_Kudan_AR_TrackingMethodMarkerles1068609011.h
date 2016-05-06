#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Kudan.AR.MarkerUpdateEvent
struct MarkerUpdateEvent_t3241725695;

#include "AssemblyU2DCSharp_Kudan_AR_TrackingMethodBase888542705.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.TrackingMethodMarkerless
struct  TrackingMethodMarkerless_t1068609011  : public TrackingMethodBase_t888542705
{
public:
	// Kudan.AR.MarkerUpdateEvent Kudan.AR.TrackingMethodMarkerless::_updateMarkerEvent
	MarkerUpdateEvent_t3241725695 * ____updateMarkerEvent_4;

public:
	inline static int32_t get_offset_of__updateMarkerEvent_4() { return static_cast<int32_t>(offsetof(TrackingMethodMarkerless_t1068609011, ____updateMarkerEvent_4)); }
	inline MarkerUpdateEvent_t3241725695 * get__updateMarkerEvent_4() const { return ____updateMarkerEvent_4; }
	inline MarkerUpdateEvent_t3241725695 ** get_address_of__updateMarkerEvent_4() { return &____updateMarkerEvent_4; }
	inline void set__updateMarkerEvent_4(MarkerUpdateEvent_t3241725695 * value)
	{
		____updateMarkerEvent_4 = value;
		Il2CppCodeGenWriteBarrier(&____updateMarkerEvent_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
