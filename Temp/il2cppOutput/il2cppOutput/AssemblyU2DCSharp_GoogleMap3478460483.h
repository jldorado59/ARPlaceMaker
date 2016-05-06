#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleMapLocation
struct GoogleMapLocation_t1473259800;
// GoogleMapMarker[]
struct GoogleMapMarkerU5BU5D_t1999202192;
// GoogleMapPath[]
struct GoogleMapPathU5BU5D_t3476800473;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_GoogleMap_MapType2501390998.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMap
struct  GoogleMap_t3478460483  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean GoogleMap::loadOnStart
	bool ___loadOnStart_2;
	// System.Boolean GoogleMap::autoLocateCenter
	bool ___autoLocateCenter_3;
	// GoogleMapLocation GoogleMap::centerLocation
	GoogleMapLocation_t1473259800 * ___centerLocation_4;
	// System.Int32 GoogleMap::zoom
	int32_t ___zoom_5;
	// GoogleMap/MapType GoogleMap::mapType
	int32_t ___mapType_6;
	// System.Int32 GoogleMap::size
	int32_t ___size_7;
	// System.Boolean GoogleMap::doubleResolution
	bool ___doubleResolution_8;
	// GoogleMapMarker[] GoogleMap::markers
	GoogleMapMarkerU5BU5D_t1999202192* ___markers_9;
	// GoogleMapPath[] GoogleMap::paths
	GoogleMapPathU5BU5D_t3476800473* ___paths_10;
	// UnityEngine.Texture2D GoogleMap::m_Texture
	Texture2D_t2509538522 * ___m_Texture_11;
	// System.Int32 GoogleMap::m_MarkerIndex
	int32_t ___m_MarkerIndex_12;

public:
	inline static int32_t get_offset_of_loadOnStart_2() { return static_cast<int32_t>(offsetof(GoogleMap_t3478460483, ___loadOnStart_2)); }
	inline bool get_loadOnStart_2() const { return ___loadOnStart_2; }
	inline bool* get_address_of_loadOnStart_2() { return &___loadOnStart_2; }
	inline void set_loadOnStart_2(bool value)
	{
		___loadOnStart_2 = value;
	}

	inline static int32_t get_offset_of_autoLocateCenter_3() { return static_cast<int32_t>(offsetof(GoogleMap_t3478460483, ___autoLocateCenter_3)); }
	inline bool get_autoLocateCenter_3() const { return ___autoLocateCenter_3; }
	inline bool* get_address_of_autoLocateCenter_3() { return &___autoLocateCenter_3; }
	inline void set_autoLocateCenter_3(bool value)
	{
		___autoLocateCenter_3 = value;
	}

	inline static int32_t get_offset_of_centerLocation_4() { return static_cast<int32_t>(offsetof(GoogleMap_t3478460483, ___centerLocation_4)); }
	inline GoogleMapLocation_t1473259800 * get_centerLocation_4() const { return ___centerLocation_4; }
	inline GoogleMapLocation_t1473259800 ** get_address_of_centerLocation_4() { return &___centerLocation_4; }
	inline void set_centerLocation_4(GoogleMapLocation_t1473259800 * value)
	{
		___centerLocation_4 = value;
		Il2CppCodeGenWriteBarrier(&___centerLocation_4, value);
	}

	inline static int32_t get_offset_of_zoom_5() { return static_cast<int32_t>(offsetof(GoogleMap_t3478460483, ___zoom_5)); }
	inline int32_t get_zoom_5() const { return ___zoom_5; }
	inline int32_t* get_address_of_zoom_5() { return &___zoom_5; }
	inline void set_zoom_5(int32_t value)
	{
		___zoom_5 = value;
	}

	inline static int32_t get_offset_of_mapType_6() { return static_cast<int32_t>(offsetof(GoogleMap_t3478460483, ___mapType_6)); }
	inline int32_t get_mapType_6() const { return ___mapType_6; }
	inline int32_t* get_address_of_mapType_6() { return &___mapType_6; }
	inline void set_mapType_6(int32_t value)
	{
		___mapType_6 = value;
	}

	inline static int32_t get_offset_of_size_7() { return static_cast<int32_t>(offsetof(GoogleMap_t3478460483, ___size_7)); }
	inline int32_t get_size_7() const { return ___size_7; }
	inline int32_t* get_address_of_size_7() { return &___size_7; }
	inline void set_size_7(int32_t value)
	{
		___size_7 = value;
	}

	inline static int32_t get_offset_of_doubleResolution_8() { return static_cast<int32_t>(offsetof(GoogleMap_t3478460483, ___doubleResolution_8)); }
	inline bool get_doubleResolution_8() const { return ___doubleResolution_8; }
	inline bool* get_address_of_doubleResolution_8() { return &___doubleResolution_8; }
	inline void set_doubleResolution_8(bool value)
	{
		___doubleResolution_8 = value;
	}

	inline static int32_t get_offset_of_markers_9() { return static_cast<int32_t>(offsetof(GoogleMap_t3478460483, ___markers_9)); }
	inline GoogleMapMarkerU5BU5D_t1999202192* get_markers_9() const { return ___markers_9; }
	inline GoogleMapMarkerU5BU5D_t1999202192** get_address_of_markers_9() { return &___markers_9; }
	inline void set_markers_9(GoogleMapMarkerU5BU5D_t1999202192* value)
	{
		___markers_9 = value;
		Il2CppCodeGenWriteBarrier(&___markers_9, value);
	}

	inline static int32_t get_offset_of_paths_10() { return static_cast<int32_t>(offsetof(GoogleMap_t3478460483, ___paths_10)); }
	inline GoogleMapPathU5BU5D_t3476800473* get_paths_10() const { return ___paths_10; }
	inline GoogleMapPathU5BU5D_t3476800473** get_address_of_paths_10() { return &___paths_10; }
	inline void set_paths_10(GoogleMapPathU5BU5D_t3476800473* value)
	{
		___paths_10 = value;
		Il2CppCodeGenWriteBarrier(&___paths_10, value);
	}

	inline static int32_t get_offset_of_m_Texture_11() { return static_cast<int32_t>(offsetof(GoogleMap_t3478460483, ___m_Texture_11)); }
	inline Texture2D_t2509538522 * get_m_Texture_11() const { return ___m_Texture_11; }
	inline Texture2D_t2509538522 ** get_address_of_m_Texture_11() { return &___m_Texture_11; }
	inline void set_m_Texture_11(Texture2D_t2509538522 * value)
	{
		___m_Texture_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_Texture_11, value);
	}

	inline static int32_t get_offset_of_m_MarkerIndex_12() { return static_cast<int32_t>(offsetof(GoogleMap_t3478460483, ___m_MarkerIndex_12)); }
	inline int32_t get_m_MarkerIndex_12() const { return ___m_MarkerIndex_12; }
	inline int32_t* get_address_of_m_MarkerIndex_12() { return &___m_MarkerIndex_12; }
	inline void set_m_MarkerIndex_12(int32_t value)
	{
		___m_MarkerIndex_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
