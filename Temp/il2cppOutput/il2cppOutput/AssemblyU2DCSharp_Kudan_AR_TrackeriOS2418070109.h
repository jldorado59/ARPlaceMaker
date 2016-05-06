#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer
struct Renderer_t1092684080;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "AssemblyU2DCSharp_Kudan_AR_TrackerBase2694038129.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.TrackeriOS
struct  TrackeriOS_t2418070109  : public TrackerBase_t2694038129
{
public:
	// UnityEngine.Renderer Kudan.AR.TrackeriOS::_background
	Renderer_t1092684080 * ____background_13;
	// UnityEngine.Texture2D Kudan.AR.TrackeriOS::_textureYp
	Texture2D_t2509538522 * ____textureYp_14;
	// System.Int32 Kudan.AR.TrackeriOS::_textureYpID
	int32_t ____textureYpID_15;
	// UnityEngine.Texture2D Kudan.AR.TrackeriOS::_textureCbCr
	Texture2D_t2509538522 * ____textureCbCr_16;
	// System.Int32 Kudan.AR.TrackeriOS::_textureCbCrID
	int32_t ____textureCbCrID_17;
	// System.Single Kudan.AR.TrackeriOS::_cameraAspect
	float ____cameraAspect_18;
	// System.Int32 Kudan.AR.TrackeriOS::_numFramesRenderedLast
	int32_t ____numFramesRenderedLast_19;
	// System.Int32 Kudan.AR.TrackeriOS::_numFramesRendered
	int32_t ____numFramesRendered_20;
	// System.Single Kudan.AR.TrackeriOS::_rateTimer
	float ____rateTimer_21;

public:
	inline static int32_t get_offset_of__background_13() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____background_13)); }
	inline Renderer_t1092684080 * get__background_13() const { return ____background_13; }
	inline Renderer_t1092684080 ** get_address_of__background_13() { return &____background_13; }
	inline void set__background_13(Renderer_t1092684080 * value)
	{
		____background_13 = value;
		Il2CppCodeGenWriteBarrier(&____background_13, value);
	}

	inline static int32_t get_offset_of__textureYp_14() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____textureYp_14)); }
	inline Texture2D_t2509538522 * get__textureYp_14() const { return ____textureYp_14; }
	inline Texture2D_t2509538522 ** get_address_of__textureYp_14() { return &____textureYp_14; }
	inline void set__textureYp_14(Texture2D_t2509538522 * value)
	{
		____textureYp_14 = value;
		Il2CppCodeGenWriteBarrier(&____textureYp_14, value);
	}

	inline static int32_t get_offset_of__textureYpID_15() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____textureYpID_15)); }
	inline int32_t get__textureYpID_15() const { return ____textureYpID_15; }
	inline int32_t* get_address_of__textureYpID_15() { return &____textureYpID_15; }
	inline void set__textureYpID_15(int32_t value)
	{
		____textureYpID_15 = value;
	}

	inline static int32_t get_offset_of__textureCbCr_16() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____textureCbCr_16)); }
	inline Texture2D_t2509538522 * get__textureCbCr_16() const { return ____textureCbCr_16; }
	inline Texture2D_t2509538522 ** get_address_of__textureCbCr_16() { return &____textureCbCr_16; }
	inline void set__textureCbCr_16(Texture2D_t2509538522 * value)
	{
		____textureCbCr_16 = value;
		Il2CppCodeGenWriteBarrier(&____textureCbCr_16, value);
	}

	inline static int32_t get_offset_of__textureCbCrID_17() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____textureCbCrID_17)); }
	inline int32_t get__textureCbCrID_17() const { return ____textureCbCrID_17; }
	inline int32_t* get_address_of__textureCbCrID_17() { return &____textureCbCrID_17; }
	inline void set__textureCbCrID_17(int32_t value)
	{
		____textureCbCrID_17 = value;
	}

	inline static int32_t get_offset_of__cameraAspect_18() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____cameraAspect_18)); }
	inline float get__cameraAspect_18() const { return ____cameraAspect_18; }
	inline float* get_address_of__cameraAspect_18() { return &____cameraAspect_18; }
	inline void set__cameraAspect_18(float value)
	{
		____cameraAspect_18 = value;
	}

	inline static int32_t get_offset_of__numFramesRenderedLast_19() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____numFramesRenderedLast_19)); }
	inline int32_t get__numFramesRenderedLast_19() const { return ____numFramesRenderedLast_19; }
	inline int32_t* get_address_of__numFramesRenderedLast_19() { return &____numFramesRenderedLast_19; }
	inline void set__numFramesRenderedLast_19(int32_t value)
	{
		____numFramesRenderedLast_19 = value;
	}

	inline static int32_t get_offset_of__numFramesRendered_20() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____numFramesRendered_20)); }
	inline int32_t get__numFramesRendered_20() const { return ____numFramesRendered_20; }
	inline int32_t* get_address_of__numFramesRendered_20() { return &____numFramesRendered_20; }
	inline void set__numFramesRendered_20(int32_t value)
	{
		____numFramesRendered_20 = value;
	}

	inline static int32_t get_offset_of__rateTimer_21() { return static_cast<int32_t>(offsetof(TrackeriOS_t2418070109, ____rateTimer_21)); }
	inline float get__rateTimer_21() const { return ____rateTimer_21; }
	inline float* get_address_of__rateTimer_21() { return &____rateTimer_21; }
	inline void set__rateTimer_21(float value)
	{
		____rateTimer_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
