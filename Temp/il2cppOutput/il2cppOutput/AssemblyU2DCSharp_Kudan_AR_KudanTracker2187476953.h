#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Kudan.AR.TrackerBase
struct TrackerBase_t2694038129;
// Kudan.AR.Trackable[]
struct TrackableU5BU5D_t2840057408;
// System.String
struct String_t;
// Kudan.AR.TrackingMethodBase
struct TrackingMethodBase_t888542705;
// Kudan.AR.TrackingMethodBase[]
struct TrackingMethodBaseU5BU5D_t3519104812;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Renderer
struct Renderer_t1092684080;
// UnityEngine.Shader
struct Shader_t3998140498;
// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.KudanTracker
struct  KudanTracker_t2187476953  : public MonoBehaviour_t3012272455
{
public:
	// Kudan.AR.TrackerBase Kudan.AR.KudanTracker::_trackerPlugin
	TrackerBase_t2694038129 * ____trackerPlugin_4;
	// Kudan.AR.Trackable[] Kudan.AR.KudanTracker::_lastDetectedTrackables
	TrackableU5BU5D_t2840057408* ____lastDetectedTrackables_5;
	// System.String Kudan.AR.KudanTracker::_apiKey
	String_t* ____apiKey_6;
	// Kudan.AR.TrackingMethodBase Kudan.AR.KudanTracker::_defaultTrackingMethod
	TrackingMethodBase_t888542705 * ____defaultTrackingMethod_7;
	// Kudan.AR.TrackingMethodBase[] Kudan.AR.KudanTracker::_trackingMethods
	TrackingMethodBaseU5BU5D_t3519104812* ____trackingMethods_8;
	// System.Boolean Kudan.AR.KudanTracker::_makePersistent
	bool ____makePersistent_9;
	// System.Boolean Kudan.AR.KudanTracker::_startOnEnable
	bool ____startOnEnable_10;
	// System.Boolean Kudan.AR.KudanTracker::_applyProjection
	bool ____applyProjection_11;
	// UnityEngine.Camera Kudan.AR.KudanTracker::_renderingCamera
	Camera_t3533968274 * ____renderingCamera_12;
	// UnityEngine.Renderer Kudan.AR.KudanTracker::_background
	Renderer_t1092684080 * ____background_13;
	// System.Boolean Kudan.AR.KudanTracker::_displayDebugGUI
	bool ____displayDebugGUI_14;
	// System.Int32 Kudan.AR.KudanTracker::_debugGuiScale
	int32_t ____debugGuiScale_15;
	// UnityEngine.Shader Kudan.AR.KudanTracker::_debugFlatShader
	Shader_t3998140498 * ____debugFlatShader_16;
	// Kudan.AR.TrackingMethodBase Kudan.AR.KudanTracker::_currentTrackingMethod
	TrackingMethodBase_t888542705 * ____currentTrackingMethod_17;
	// UnityEngine.Material Kudan.AR.KudanTracker::_lineMaterial
	Material_t1886596500 * ____lineMaterial_18;

public:
	inline static int32_t get_offset_of__trackerPlugin_4() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____trackerPlugin_4)); }
	inline TrackerBase_t2694038129 * get__trackerPlugin_4() const { return ____trackerPlugin_4; }
	inline TrackerBase_t2694038129 ** get_address_of__trackerPlugin_4() { return &____trackerPlugin_4; }
	inline void set__trackerPlugin_4(TrackerBase_t2694038129 * value)
	{
		____trackerPlugin_4 = value;
		Il2CppCodeGenWriteBarrier(&____trackerPlugin_4, value);
	}

	inline static int32_t get_offset_of__lastDetectedTrackables_5() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____lastDetectedTrackables_5)); }
	inline TrackableU5BU5D_t2840057408* get__lastDetectedTrackables_5() const { return ____lastDetectedTrackables_5; }
	inline TrackableU5BU5D_t2840057408** get_address_of__lastDetectedTrackables_5() { return &____lastDetectedTrackables_5; }
	inline void set__lastDetectedTrackables_5(TrackableU5BU5D_t2840057408* value)
	{
		____lastDetectedTrackables_5 = value;
		Il2CppCodeGenWriteBarrier(&____lastDetectedTrackables_5, value);
	}

	inline static int32_t get_offset_of__apiKey_6() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____apiKey_6)); }
	inline String_t* get__apiKey_6() const { return ____apiKey_6; }
	inline String_t** get_address_of__apiKey_6() { return &____apiKey_6; }
	inline void set__apiKey_6(String_t* value)
	{
		____apiKey_6 = value;
		Il2CppCodeGenWriteBarrier(&____apiKey_6, value);
	}

	inline static int32_t get_offset_of__defaultTrackingMethod_7() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____defaultTrackingMethod_7)); }
	inline TrackingMethodBase_t888542705 * get__defaultTrackingMethod_7() const { return ____defaultTrackingMethod_7; }
	inline TrackingMethodBase_t888542705 ** get_address_of__defaultTrackingMethod_7() { return &____defaultTrackingMethod_7; }
	inline void set__defaultTrackingMethod_7(TrackingMethodBase_t888542705 * value)
	{
		____defaultTrackingMethod_7 = value;
		Il2CppCodeGenWriteBarrier(&____defaultTrackingMethod_7, value);
	}

	inline static int32_t get_offset_of__trackingMethods_8() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____trackingMethods_8)); }
	inline TrackingMethodBaseU5BU5D_t3519104812* get__trackingMethods_8() const { return ____trackingMethods_8; }
	inline TrackingMethodBaseU5BU5D_t3519104812** get_address_of__trackingMethods_8() { return &____trackingMethods_8; }
	inline void set__trackingMethods_8(TrackingMethodBaseU5BU5D_t3519104812* value)
	{
		____trackingMethods_8 = value;
		Il2CppCodeGenWriteBarrier(&____trackingMethods_8, value);
	}

	inline static int32_t get_offset_of__makePersistent_9() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____makePersistent_9)); }
	inline bool get__makePersistent_9() const { return ____makePersistent_9; }
	inline bool* get_address_of__makePersistent_9() { return &____makePersistent_9; }
	inline void set__makePersistent_9(bool value)
	{
		____makePersistent_9 = value;
	}

	inline static int32_t get_offset_of__startOnEnable_10() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____startOnEnable_10)); }
	inline bool get__startOnEnable_10() const { return ____startOnEnable_10; }
	inline bool* get_address_of__startOnEnable_10() { return &____startOnEnable_10; }
	inline void set__startOnEnable_10(bool value)
	{
		____startOnEnable_10 = value;
	}

	inline static int32_t get_offset_of__applyProjection_11() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____applyProjection_11)); }
	inline bool get__applyProjection_11() const { return ____applyProjection_11; }
	inline bool* get_address_of__applyProjection_11() { return &____applyProjection_11; }
	inline void set__applyProjection_11(bool value)
	{
		____applyProjection_11 = value;
	}

	inline static int32_t get_offset_of__renderingCamera_12() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____renderingCamera_12)); }
	inline Camera_t3533968274 * get__renderingCamera_12() const { return ____renderingCamera_12; }
	inline Camera_t3533968274 ** get_address_of__renderingCamera_12() { return &____renderingCamera_12; }
	inline void set__renderingCamera_12(Camera_t3533968274 * value)
	{
		____renderingCamera_12 = value;
		Il2CppCodeGenWriteBarrier(&____renderingCamera_12, value);
	}

	inline static int32_t get_offset_of__background_13() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____background_13)); }
	inline Renderer_t1092684080 * get__background_13() const { return ____background_13; }
	inline Renderer_t1092684080 ** get_address_of__background_13() { return &____background_13; }
	inline void set__background_13(Renderer_t1092684080 * value)
	{
		____background_13 = value;
		Il2CppCodeGenWriteBarrier(&____background_13, value);
	}

	inline static int32_t get_offset_of__displayDebugGUI_14() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____displayDebugGUI_14)); }
	inline bool get__displayDebugGUI_14() const { return ____displayDebugGUI_14; }
	inline bool* get_address_of__displayDebugGUI_14() { return &____displayDebugGUI_14; }
	inline void set__displayDebugGUI_14(bool value)
	{
		____displayDebugGUI_14 = value;
	}

	inline static int32_t get_offset_of__debugGuiScale_15() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____debugGuiScale_15)); }
	inline int32_t get__debugGuiScale_15() const { return ____debugGuiScale_15; }
	inline int32_t* get_address_of__debugGuiScale_15() { return &____debugGuiScale_15; }
	inline void set__debugGuiScale_15(int32_t value)
	{
		____debugGuiScale_15 = value;
	}

	inline static int32_t get_offset_of__debugFlatShader_16() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____debugFlatShader_16)); }
	inline Shader_t3998140498 * get__debugFlatShader_16() const { return ____debugFlatShader_16; }
	inline Shader_t3998140498 ** get_address_of__debugFlatShader_16() { return &____debugFlatShader_16; }
	inline void set__debugFlatShader_16(Shader_t3998140498 * value)
	{
		____debugFlatShader_16 = value;
		Il2CppCodeGenWriteBarrier(&____debugFlatShader_16, value);
	}

	inline static int32_t get_offset_of__currentTrackingMethod_17() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____currentTrackingMethod_17)); }
	inline TrackingMethodBase_t888542705 * get__currentTrackingMethod_17() const { return ____currentTrackingMethod_17; }
	inline TrackingMethodBase_t888542705 ** get_address_of__currentTrackingMethod_17() { return &____currentTrackingMethod_17; }
	inline void set__currentTrackingMethod_17(TrackingMethodBase_t888542705 * value)
	{
		____currentTrackingMethod_17 = value;
		Il2CppCodeGenWriteBarrier(&____currentTrackingMethod_17, value);
	}

	inline static int32_t get_offset_of__lineMaterial_18() { return static_cast<int32_t>(offsetof(KudanTracker_t2187476953, ____lineMaterial_18)); }
	inline Material_t1886596500 * get__lineMaterial_18() const { return ____lineMaterial_18; }
	inline Material_t1886596500 ** get_address_of__lineMaterial_18() { return &____lineMaterial_18; }
	inline void set__lineMaterial_18(Material_t1886596500 * value)
	{
		____lineMaterial_18 = value;
		Il2CppCodeGenWriteBarrier(&____lineMaterial_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
