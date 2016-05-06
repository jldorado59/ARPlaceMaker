#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Kudan.AR.TrackableData[]
struct TrackableDataU5BU5D_t1660357774;
// Kudan.AR.MarkerFoundEvent
struct MarkerFoundEvent_t1318102170;
// Kudan.AR.MarkerLostEvent
struct MarkerLostEvent_t12458756;
// Kudan.AR.MarkerUpdateEvent
struct MarkerUpdateEvent_t3241725695;
// Kudan.AR.Trackable[]
struct TrackableU5BU5D_t2840057408;

#include "AssemblyU2DCSharp_Kudan_AR_TrackingMethodBase888542705.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.TrackingMethodMarker
struct  TrackingMethodMarker_t2013582682  : public TrackingMethodBase_t888542705
{
public:
	// Kudan.AR.TrackableData[] Kudan.AR.TrackingMethodMarker::_markers
	TrackableDataU5BU5D_t1660357774* ____markers_4;
	// Kudan.AR.MarkerFoundEvent Kudan.AR.TrackingMethodMarker::_foundMarkerEvent
	MarkerFoundEvent_t1318102170 * ____foundMarkerEvent_5;
	// Kudan.AR.MarkerLostEvent Kudan.AR.TrackingMethodMarker::_lostMarkerEvent
	MarkerLostEvent_t12458756 * ____lostMarkerEvent_6;
	// Kudan.AR.MarkerUpdateEvent Kudan.AR.TrackingMethodMarker::_updateMarkerEvent
	MarkerUpdateEvent_t3241725695 * ____updateMarkerEvent_7;
	// Kudan.AR.Trackable[] Kudan.AR.TrackingMethodMarker::_lastDetectedTrackables
	TrackableU5BU5D_t2840057408* ____lastDetectedTrackables_8;

public:
	inline static int32_t get_offset_of__markers_4() { return static_cast<int32_t>(offsetof(TrackingMethodMarker_t2013582682, ____markers_4)); }
	inline TrackableDataU5BU5D_t1660357774* get__markers_4() const { return ____markers_4; }
	inline TrackableDataU5BU5D_t1660357774** get_address_of__markers_4() { return &____markers_4; }
	inline void set__markers_4(TrackableDataU5BU5D_t1660357774* value)
	{
		____markers_4 = value;
		Il2CppCodeGenWriteBarrier(&____markers_4, value);
	}

	inline static int32_t get_offset_of__foundMarkerEvent_5() { return static_cast<int32_t>(offsetof(TrackingMethodMarker_t2013582682, ____foundMarkerEvent_5)); }
	inline MarkerFoundEvent_t1318102170 * get__foundMarkerEvent_5() const { return ____foundMarkerEvent_5; }
	inline MarkerFoundEvent_t1318102170 ** get_address_of__foundMarkerEvent_5() { return &____foundMarkerEvent_5; }
	inline void set__foundMarkerEvent_5(MarkerFoundEvent_t1318102170 * value)
	{
		____foundMarkerEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&____foundMarkerEvent_5, value);
	}

	inline static int32_t get_offset_of__lostMarkerEvent_6() { return static_cast<int32_t>(offsetof(TrackingMethodMarker_t2013582682, ____lostMarkerEvent_6)); }
	inline MarkerLostEvent_t12458756 * get__lostMarkerEvent_6() const { return ____lostMarkerEvent_6; }
	inline MarkerLostEvent_t12458756 ** get_address_of__lostMarkerEvent_6() { return &____lostMarkerEvent_6; }
	inline void set__lostMarkerEvent_6(MarkerLostEvent_t12458756 * value)
	{
		____lostMarkerEvent_6 = value;
		Il2CppCodeGenWriteBarrier(&____lostMarkerEvent_6, value);
	}

	inline static int32_t get_offset_of__updateMarkerEvent_7() { return static_cast<int32_t>(offsetof(TrackingMethodMarker_t2013582682, ____updateMarkerEvent_7)); }
	inline MarkerUpdateEvent_t3241725695 * get__updateMarkerEvent_7() const { return ____updateMarkerEvent_7; }
	inline MarkerUpdateEvent_t3241725695 ** get_address_of__updateMarkerEvent_7() { return &____updateMarkerEvent_7; }
	inline void set__updateMarkerEvent_7(MarkerUpdateEvent_t3241725695 * value)
	{
		____updateMarkerEvent_7 = value;
		Il2CppCodeGenWriteBarrier(&____updateMarkerEvent_7, value);
	}

	inline static int32_t get_offset_of__lastDetectedTrackables_8() { return static_cast<int32_t>(offsetof(TrackingMethodMarker_t2013582682, ____lastDetectedTrackables_8)); }
	inline TrackableU5BU5D_t2840057408* get__lastDetectedTrackables_8() const { return ____lastDetectedTrackables_8; }
	inline TrackableU5BU5D_t2840057408** get_address_of__lastDetectedTrackables_8() { return &____lastDetectedTrackables_8; }
	inline void set__lastDetectedTrackables_8(TrackableU5BU5D_t2840057408* value)
	{
		____lastDetectedTrackables_8 = value;
		Il2CppCodeGenWriteBarrier(&____lastDetectedTrackables_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
