#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Kudan.AR.Trackable>
struct List_1_t2790313574;
// System.Threading.Thread
struct Thread_t1674723085;
// UnityEngine.Texture
struct Texture_t1769722184;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.TrackerBase
struct  TrackerBase_t2694038129  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Kudan.AR.Trackable> Kudan.AR.TrackerBase::_trackables
	List_1_t2790313574 * ____trackables_1;
	// System.Single Kudan.AR.TrackerBase::_cameraNearPlane
	float ____cameraNearPlane_2;
	// System.Single Kudan.AR.TrackerBase::_cameraFarPlane
	float ____cameraFarPlane_3;
	// System.Threading.Thread Kudan.AR.TrackerBase::_trackingThread
	Thread_t1674723085 * ____trackingThread_4;
	// System.Boolean Kudan.AR.TrackerBase::_isTrackingRunning
	bool ____isTrackingRunning_5;
	// UnityEngine.Texture Kudan.AR.TrackerBase::_finalTexture
	Texture_t1769722184 * ____finalTexture_6;
	// UnityEngine.Matrix4x4 Kudan.AR.TrackerBase::_projectionMatrix
	Matrix4x4_t277289660  ____projectionMatrix_7;
	// System.Collections.Generic.List`1<Kudan.AR.Trackable> Kudan.AR.TrackerBase::_detected
	List_1_t2790313574 * ____detected_8;
	// System.Single Kudan.AR.TrackerBase::_cameraRate
	float ____cameraRate_9;
	// System.Single Kudan.AR.TrackerBase::_trackerRate
	float ____trackerRate_10;
	// System.Single Kudan.AR.TrackerBase::_appRate
	float ____appRate_11;

public:
	inline static int32_t get_offset_of__trackables_1() { return static_cast<int32_t>(offsetof(TrackerBase_t2694038129, ____trackables_1)); }
	inline List_1_t2790313574 * get__trackables_1() const { return ____trackables_1; }
	inline List_1_t2790313574 ** get_address_of__trackables_1() { return &____trackables_1; }
	inline void set__trackables_1(List_1_t2790313574 * value)
	{
		____trackables_1 = value;
		Il2CppCodeGenWriteBarrier(&____trackables_1, value);
	}

	inline static int32_t get_offset_of__cameraNearPlane_2() { return static_cast<int32_t>(offsetof(TrackerBase_t2694038129, ____cameraNearPlane_2)); }
	inline float get__cameraNearPlane_2() const { return ____cameraNearPlane_2; }
	inline float* get_address_of__cameraNearPlane_2() { return &____cameraNearPlane_2; }
	inline void set__cameraNearPlane_2(float value)
	{
		____cameraNearPlane_2 = value;
	}

	inline static int32_t get_offset_of__cameraFarPlane_3() { return static_cast<int32_t>(offsetof(TrackerBase_t2694038129, ____cameraFarPlane_3)); }
	inline float get__cameraFarPlane_3() const { return ____cameraFarPlane_3; }
	inline float* get_address_of__cameraFarPlane_3() { return &____cameraFarPlane_3; }
	inline void set__cameraFarPlane_3(float value)
	{
		____cameraFarPlane_3 = value;
	}

	inline static int32_t get_offset_of__trackingThread_4() { return static_cast<int32_t>(offsetof(TrackerBase_t2694038129, ____trackingThread_4)); }
	inline Thread_t1674723085 * get__trackingThread_4() const { return ____trackingThread_4; }
	inline Thread_t1674723085 ** get_address_of__trackingThread_4() { return &____trackingThread_4; }
	inline void set__trackingThread_4(Thread_t1674723085 * value)
	{
		____trackingThread_4 = value;
		Il2CppCodeGenWriteBarrier(&____trackingThread_4, value);
	}

	inline static int32_t get_offset_of__isTrackingRunning_5() { return static_cast<int32_t>(offsetof(TrackerBase_t2694038129, ____isTrackingRunning_5)); }
	inline bool get__isTrackingRunning_5() const { return ____isTrackingRunning_5; }
	inline bool* get_address_of__isTrackingRunning_5() { return &____isTrackingRunning_5; }
	inline void set__isTrackingRunning_5(bool value)
	{
		____isTrackingRunning_5 = value;
	}

	inline static int32_t get_offset_of__finalTexture_6() { return static_cast<int32_t>(offsetof(TrackerBase_t2694038129, ____finalTexture_6)); }
	inline Texture_t1769722184 * get__finalTexture_6() const { return ____finalTexture_6; }
	inline Texture_t1769722184 ** get_address_of__finalTexture_6() { return &____finalTexture_6; }
	inline void set__finalTexture_6(Texture_t1769722184 * value)
	{
		____finalTexture_6 = value;
		Il2CppCodeGenWriteBarrier(&____finalTexture_6, value);
	}

	inline static int32_t get_offset_of__projectionMatrix_7() { return static_cast<int32_t>(offsetof(TrackerBase_t2694038129, ____projectionMatrix_7)); }
	inline Matrix4x4_t277289660  get__projectionMatrix_7() const { return ____projectionMatrix_7; }
	inline Matrix4x4_t277289660 * get_address_of__projectionMatrix_7() { return &____projectionMatrix_7; }
	inline void set__projectionMatrix_7(Matrix4x4_t277289660  value)
	{
		____projectionMatrix_7 = value;
	}

	inline static int32_t get_offset_of__detected_8() { return static_cast<int32_t>(offsetof(TrackerBase_t2694038129, ____detected_8)); }
	inline List_1_t2790313574 * get__detected_8() const { return ____detected_8; }
	inline List_1_t2790313574 ** get_address_of__detected_8() { return &____detected_8; }
	inline void set__detected_8(List_1_t2790313574 * value)
	{
		____detected_8 = value;
		Il2CppCodeGenWriteBarrier(&____detected_8, value);
	}

	inline static int32_t get_offset_of__cameraRate_9() { return static_cast<int32_t>(offsetof(TrackerBase_t2694038129, ____cameraRate_9)); }
	inline float get__cameraRate_9() const { return ____cameraRate_9; }
	inline float* get_address_of__cameraRate_9() { return &____cameraRate_9; }
	inline void set__cameraRate_9(float value)
	{
		____cameraRate_9 = value;
	}

	inline static int32_t get_offset_of__trackerRate_10() { return static_cast<int32_t>(offsetof(TrackerBase_t2694038129, ____trackerRate_10)); }
	inline float get__trackerRate_10() const { return ____trackerRate_10; }
	inline float* get_address_of__trackerRate_10() { return &____trackerRate_10; }
	inline void set__trackerRate_10(float value)
	{
		____trackerRate_10 = value;
	}

	inline static int32_t get_offset_of__appRate_11() { return static_cast<int32_t>(offsetof(TrackerBase_t2694038129, ____appRate_11)); }
	inline float get__appRate_11() const { return ____appRate_11; }
	inline float* get_address_of__appRate_11() { return &____appRate_11; }
	inline void set__appRate_11(float value)
	{
		____appRate_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
