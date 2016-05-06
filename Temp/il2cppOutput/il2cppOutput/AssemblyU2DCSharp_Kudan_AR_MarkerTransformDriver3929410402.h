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
// Kudan.AR.TrackingMethodMarker
struct TrackingMethodMarker_t2013582682;

#include "AssemblyU2DCSharp_Kudan_AR_TransformDriverBase2301729773.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.MarkerTransformDriver
struct  MarkerTransformDriver_t3929410402  : public TransformDriverBase_t2301729773
{
public:
	// System.String Kudan.AR.MarkerTransformDriver::_expectedId
	String_t* ____expectedId_4;
	// System.Boolean Kudan.AR.MarkerTransformDriver::_applyMarkerScale
	bool ____applyMarkerScale_5;
	// System.Boolean Kudan.AR.MarkerTransformDriver::_alwaysDrawMarkerPlane
	bool ____alwaysDrawMarkerPlane_6;
	// System.Int32 Kudan.AR.MarkerTransformDriver::_markerPlaneWidth
	int32_t ____markerPlaneWidth_7;
	// System.Int32 Kudan.AR.MarkerTransformDriver::_markerPlaneHeight
	int32_t ____markerPlaneHeight_8;
	// System.String Kudan.AR.MarkerTransformDriver::_trackableId
	String_t* ____trackableId_9;
	// Kudan.AR.TrackingMethodMarker Kudan.AR.MarkerTransformDriver::_tracker
	TrackingMethodMarker_t2013582682 * ____tracker_10;

public:
	inline static int32_t get_offset_of__expectedId_4() { return static_cast<int32_t>(offsetof(MarkerTransformDriver_t3929410402, ____expectedId_4)); }
	inline String_t* get__expectedId_4() const { return ____expectedId_4; }
	inline String_t** get_address_of__expectedId_4() { return &____expectedId_4; }
	inline void set__expectedId_4(String_t* value)
	{
		____expectedId_4 = value;
		Il2CppCodeGenWriteBarrier(&____expectedId_4, value);
	}

	inline static int32_t get_offset_of__applyMarkerScale_5() { return static_cast<int32_t>(offsetof(MarkerTransformDriver_t3929410402, ____applyMarkerScale_5)); }
	inline bool get__applyMarkerScale_5() const { return ____applyMarkerScale_5; }
	inline bool* get_address_of__applyMarkerScale_5() { return &____applyMarkerScale_5; }
	inline void set__applyMarkerScale_5(bool value)
	{
		____applyMarkerScale_5 = value;
	}

	inline static int32_t get_offset_of__alwaysDrawMarkerPlane_6() { return static_cast<int32_t>(offsetof(MarkerTransformDriver_t3929410402, ____alwaysDrawMarkerPlane_6)); }
	inline bool get__alwaysDrawMarkerPlane_6() const { return ____alwaysDrawMarkerPlane_6; }
	inline bool* get_address_of__alwaysDrawMarkerPlane_6() { return &____alwaysDrawMarkerPlane_6; }
	inline void set__alwaysDrawMarkerPlane_6(bool value)
	{
		____alwaysDrawMarkerPlane_6 = value;
	}

	inline static int32_t get_offset_of__markerPlaneWidth_7() { return static_cast<int32_t>(offsetof(MarkerTransformDriver_t3929410402, ____markerPlaneWidth_7)); }
	inline int32_t get__markerPlaneWidth_7() const { return ____markerPlaneWidth_7; }
	inline int32_t* get_address_of__markerPlaneWidth_7() { return &____markerPlaneWidth_7; }
	inline void set__markerPlaneWidth_7(int32_t value)
	{
		____markerPlaneWidth_7 = value;
	}

	inline static int32_t get_offset_of__markerPlaneHeight_8() { return static_cast<int32_t>(offsetof(MarkerTransformDriver_t3929410402, ____markerPlaneHeight_8)); }
	inline int32_t get__markerPlaneHeight_8() const { return ____markerPlaneHeight_8; }
	inline int32_t* get_address_of__markerPlaneHeight_8() { return &____markerPlaneHeight_8; }
	inline void set__markerPlaneHeight_8(int32_t value)
	{
		____markerPlaneHeight_8 = value;
	}

	inline static int32_t get_offset_of__trackableId_9() { return static_cast<int32_t>(offsetof(MarkerTransformDriver_t3929410402, ____trackableId_9)); }
	inline String_t* get__trackableId_9() const { return ____trackableId_9; }
	inline String_t** get_address_of__trackableId_9() { return &____trackableId_9; }
	inline void set__trackableId_9(String_t* value)
	{
		____trackableId_9 = value;
		Il2CppCodeGenWriteBarrier(&____trackableId_9, value);
	}

	inline static int32_t get_offset_of__tracker_10() { return static_cast<int32_t>(offsetof(MarkerTransformDriver_t3929410402, ____tracker_10)); }
	inline TrackingMethodMarker_t2013582682 * get__tracker_10() const { return ____tracker_10; }
	inline TrackingMethodMarker_t2013582682 ** get_address_of__tracker_10() { return &____tracker_10; }
	inline void set__tracker_10(TrackingMethodMarker_t2013582682 * value)
	{
		____tracker_10 = value;
		Il2CppCodeGenWriteBarrier(&____tracker_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
