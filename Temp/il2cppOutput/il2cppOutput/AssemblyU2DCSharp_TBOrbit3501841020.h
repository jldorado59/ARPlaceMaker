#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// System.Predicate`1<GestureRecognizer>
struct Predicate_1_t4083839847;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBOrbit
struct  TBOrbit_t3501841020  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform TBOrbit::target
	Transform_t284553113 * ___target_2;
	// System.Single TBOrbit::initialDistance
	float ___initialDistance_3;
	// System.Single TBOrbit::minDistance
	float ___minDistance_4;
	// System.Single TBOrbit::maxDistance
	float ___maxDistance_5;
	// System.Single TBOrbit::yawSensitivity
	float ___yawSensitivity_6;
	// System.Single TBOrbit::pitchSensitivity
	float ___pitchSensitivity_7;
	// System.Boolean TBOrbit::clampYawAngle
	bool ___clampYawAngle_8;
	// System.Single TBOrbit::minYaw
	float ___minYaw_9;
	// System.Single TBOrbit::maxYaw
	float ___maxYaw_10;
	// System.Boolean TBOrbit::clampPitchAngle
	bool ___clampPitchAngle_11;
	// System.Single TBOrbit::minPitch
	float ___minPitch_12;
	// System.Single TBOrbit::maxPitch
	float ___maxPitch_13;
	// System.Boolean TBOrbit::allowPinchZoom
	bool ___allowPinchZoom_14;
	// System.Single TBOrbit::pinchZoomSensitivity
	float ___pinchZoomSensitivity_15;
	// System.Boolean TBOrbit::smoothMotion
	bool ___smoothMotion_16;
	// System.Single TBOrbit::smoothZoomSpeed
	float ___smoothZoomSpeed_17;
	// System.Single TBOrbit::smoothOrbitSpeed
	float ___smoothOrbitSpeed_18;
	// System.Boolean TBOrbit::allowPanning
	bool ___allowPanning_19;
	// System.Boolean TBOrbit::invertPanningDirections
	bool ___invertPanningDirections_20;
	// System.Single TBOrbit::panningSensitivity
	float ___panningSensitivity_21;
	// UnityEngine.Transform TBOrbit::panningPlane
	Transform_t284553113 * ___panningPlane_22;
	// System.Boolean TBOrbit::smoothPanning
	bool ___smoothPanning_23;
	// System.Single TBOrbit::smoothPanningSpeed
	float ___smoothPanningSpeed_24;
	// System.Single TBOrbit::distance
	float ___distance_25;
	// System.Single TBOrbit::yaw
	float ___yaw_26;
	// System.Single TBOrbit::pitch
	float ___pitch_27;
	// System.Single TBOrbit::idealDistance
	float ___idealDistance_28;
	// System.Single TBOrbit::idealYaw
	float ___idealYaw_29;
	// System.Single TBOrbit::idealPitch
	float ___idealPitch_30;
	// UnityEngine.Vector3 TBOrbit::idealPanOffset
	Vector3_t3525329789  ___idealPanOffset_31;
	// UnityEngine.Vector3 TBOrbit::panOffset
	Vector3_t3525329789  ___panOffset_32;
	// System.Single TBOrbit::nextDragTime
	float ___nextDragTime_33;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___target_2)); }
	inline Transform_t284553113 * get_target_2() const { return ___target_2; }
	inline Transform_t284553113 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t284553113 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_initialDistance_3() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___initialDistance_3)); }
	inline float get_initialDistance_3() const { return ___initialDistance_3; }
	inline float* get_address_of_initialDistance_3() { return &___initialDistance_3; }
	inline void set_initialDistance_3(float value)
	{
		___initialDistance_3 = value;
	}

	inline static int32_t get_offset_of_minDistance_4() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___minDistance_4)); }
	inline float get_minDistance_4() const { return ___minDistance_4; }
	inline float* get_address_of_minDistance_4() { return &___minDistance_4; }
	inline void set_minDistance_4(float value)
	{
		___minDistance_4 = value;
	}

	inline static int32_t get_offset_of_maxDistance_5() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___maxDistance_5)); }
	inline float get_maxDistance_5() const { return ___maxDistance_5; }
	inline float* get_address_of_maxDistance_5() { return &___maxDistance_5; }
	inline void set_maxDistance_5(float value)
	{
		___maxDistance_5 = value;
	}

	inline static int32_t get_offset_of_yawSensitivity_6() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___yawSensitivity_6)); }
	inline float get_yawSensitivity_6() const { return ___yawSensitivity_6; }
	inline float* get_address_of_yawSensitivity_6() { return &___yawSensitivity_6; }
	inline void set_yawSensitivity_6(float value)
	{
		___yawSensitivity_6 = value;
	}

	inline static int32_t get_offset_of_pitchSensitivity_7() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___pitchSensitivity_7)); }
	inline float get_pitchSensitivity_7() const { return ___pitchSensitivity_7; }
	inline float* get_address_of_pitchSensitivity_7() { return &___pitchSensitivity_7; }
	inline void set_pitchSensitivity_7(float value)
	{
		___pitchSensitivity_7 = value;
	}

	inline static int32_t get_offset_of_clampYawAngle_8() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___clampYawAngle_8)); }
	inline bool get_clampYawAngle_8() const { return ___clampYawAngle_8; }
	inline bool* get_address_of_clampYawAngle_8() { return &___clampYawAngle_8; }
	inline void set_clampYawAngle_8(bool value)
	{
		___clampYawAngle_8 = value;
	}

	inline static int32_t get_offset_of_minYaw_9() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___minYaw_9)); }
	inline float get_minYaw_9() const { return ___minYaw_9; }
	inline float* get_address_of_minYaw_9() { return &___minYaw_9; }
	inline void set_minYaw_9(float value)
	{
		___minYaw_9 = value;
	}

	inline static int32_t get_offset_of_maxYaw_10() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___maxYaw_10)); }
	inline float get_maxYaw_10() const { return ___maxYaw_10; }
	inline float* get_address_of_maxYaw_10() { return &___maxYaw_10; }
	inline void set_maxYaw_10(float value)
	{
		___maxYaw_10 = value;
	}

	inline static int32_t get_offset_of_clampPitchAngle_11() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___clampPitchAngle_11)); }
	inline bool get_clampPitchAngle_11() const { return ___clampPitchAngle_11; }
	inline bool* get_address_of_clampPitchAngle_11() { return &___clampPitchAngle_11; }
	inline void set_clampPitchAngle_11(bool value)
	{
		___clampPitchAngle_11 = value;
	}

	inline static int32_t get_offset_of_minPitch_12() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___minPitch_12)); }
	inline float get_minPitch_12() const { return ___minPitch_12; }
	inline float* get_address_of_minPitch_12() { return &___minPitch_12; }
	inline void set_minPitch_12(float value)
	{
		___minPitch_12 = value;
	}

	inline static int32_t get_offset_of_maxPitch_13() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___maxPitch_13)); }
	inline float get_maxPitch_13() const { return ___maxPitch_13; }
	inline float* get_address_of_maxPitch_13() { return &___maxPitch_13; }
	inline void set_maxPitch_13(float value)
	{
		___maxPitch_13 = value;
	}

	inline static int32_t get_offset_of_allowPinchZoom_14() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___allowPinchZoom_14)); }
	inline bool get_allowPinchZoom_14() const { return ___allowPinchZoom_14; }
	inline bool* get_address_of_allowPinchZoom_14() { return &___allowPinchZoom_14; }
	inline void set_allowPinchZoom_14(bool value)
	{
		___allowPinchZoom_14 = value;
	}

	inline static int32_t get_offset_of_pinchZoomSensitivity_15() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___pinchZoomSensitivity_15)); }
	inline float get_pinchZoomSensitivity_15() const { return ___pinchZoomSensitivity_15; }
	inline float* get_address_of_pinchZoomSensitivity_15() { return &___pinchZoomSensitivity_15; }
	inline void set_pinchZoomSensitivity_15(float value)
	{
		___pinchZoomSensitivity_15 = value;
	}

	inline static int32_t get_offset_of_smoothMotion_16() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___smoothMotion_16)); }
	inline bool get_smoothMotion_16() const { return ___smoothMotion_16; }
	inline bool* get_address_of_smoothMotion_16() { return &___smoothMotion_16; }
	inline void set_smoothMotion_16(bool value)
	{
		___smoothMotion_16 = value;
	}

	inline static int32_t get_offset_of_smoothZoomSpeed_17() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___smoothZoomSpeed_17)); }
	inline float get_smoothZoomSpeed_17() const { return ___smoothZoomSpeed_17; }
	inline float* get_address_of_smoothZoomSpeed_17() { return &___smoothZoomSpeed_17; }
	inline void set_smoothZoomSpeed_17(float value)
	{
		___smoothZoomSpeed_17 = value;
	}

	inline static int32_t get_offset_of_smoothOrbitSpeed_18() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___smoothOrbitSpeed_18)); }
	inline float get_smoothOrbitSpeed_18() const { return ___smoothOrbitSpeed_18; }
	inline float* get_address_of_smoothOrbitSpeed_18() { return &___smoothOrbitSpeed_18; }
	inline void set_smoothOrbitSpeed_18(float value)
	{
		___smoothOrbitSpeed_18 = value;
	}

	inline static int32_t get_offset_of_allowPanning_19() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___allowPanning_19)); }
	inline bool get_allowPanning_19() const { return ___allowPanning_19; }
	inline bool* get_address_of_allowPanning_19() { return &___allowPanning_19; }
	inline void set_allowPanning_19(bool value)
	{
		___allowPanning_19 = value;
	}

	inline static int32_t get_offset_of_invertPanningDirections_20() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___invertPanningDirections_20)); }
	inline bool get_invertPanningDirections_20() const { return ___invertPanningDirections_20; }
	inline bool* get_address_of_invertPanningDirections_20() { return &___invertPanningDirections_20; }
	inline void set_invertPanningDirections_20(bool value)
	{
		___invertPanningDirections_20 = value;
	}

	inline static int32_t get_offset_of_panningSensitivity_21() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___panningSensitivity_21)); }
	inline float get_panningSensitivity_21() const { return ___panningSensitivity_21; }
	inline float* get_address_of_panningSensitivity_21() { return &___panningSensitivity_21; }
	inline void set_panningSensitivity_21(float value)
	{
		___panningSensitivity_21 = value;
	}

	inline static int32_t get_offset_of_panningPlane_22() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___panningPlane_22)); }
	inline Transform_t284553113 * get_panningPlane_22() const { return ___panningPlane_22; }
	inline Transform_t284553113 ** get_address_of_panningPlane_22() { return &___panningPlane_22; }
	inline void set_panningPlane_22(Transform_t284553113 * value)
	{
		___panningPlane_22 = value;
		Il2CppCodeGenWriteBarrier(&___panningPlane_22, value);
	}

	inline static int32_t get_offset_of_smoothPanning_23() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___smoothPanning_23)); }
	inline bool get_smoothPanning_23() const { return ___smoothPanning_23; }
	inline bool* get_address_of_smoothPanning_23() { return &___smoothPanning_23; }
	inline void set_smoothPanning_23(bool value)
	{
		___smoothPanning_23 = value;
	}

	inline static int32_t get_offset_of_smoothPanningSpeed_24() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___smoothPanningSpeed_24)); }
	inline float get_smoothPanningSpeed_24() const { return ___smoothPanningSpeed_24; }
	inline float* get_address_of_smoothPanningSpeed_24() { return &___smoothPanningSpeed_24; }
	inline void set_smoothPanningSpeed_24(float value)
	{
		___smoothPanningSpeed_24 = value;
	}

	inline static int32_t get_offset_of_distance_25() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___distance_25)); }
	inline float get_distance_25() const { return ___distance_25; }
	inline float* get_address_of_distance_25() { return &___distance_25; }
	inline void set_distance_25(float value)
	{
		___distance_25 = value;
	}

	inline static int32_t get_offset_of_yaw_26() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___yaw_26)); }
	inline float get_yaw_26() const { return ___yaw_26; }
	inline float* get_address_of_yaw_26() { return &___yaw_26; }
	inline void set_yaw_26(float value)
	{
		___yaw_26 = value;
	}

	inline static int32_t get_offset_of_pitch_27() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___pitch_27)); }
	inline float get_pitch_27() const { return ___pitch_27; }
	inline float* get_address_of_pitch_27() { return &___pitch_27; }
	inline void set_pitch_27(float value)
	{
		___pitch_27 = value;
	}

	inline static int32_t get_offset_of_idealDistance_28() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___idealDistance_28)); }
	inline float get_idealDistance_28() const { return ___idealDistance_28; }
	inline float* get_address_of_idealDistance_28() { return &___idealDistance_28; }
	inline void set_idealDistance_28(float value)
	{
		___idealDistance_28 = value;
	}

	inline static int32_t get_offset_of_idealYaw_29() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___idealYaw_29)); }
	inline float get_idealYaw_29() const { return ___idealYaw_29; }
	inline float* get_address_of_idealYaw_29() { return &___idealYaw_29; }
	inline void set_idealYaw_29(float value)
	{
		___idealYaw_29 = value;
	}

	inline static int32_t get_offset_of_idealPitch_30() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___idealPitch_30)); }
	inline float get_idealPitch_30() const { return ___idealPitch_30; }
	inline float* get_address_of_idealPitch_30() { return &___idealPitch_30; }
	inline void set_idealPitch_30(float value)
	{
		___idealPitch_30 = value;
	}

	inline static int32_t get_offset_of_idealPanOffset_31() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___idealPanOffset_31)); }
	inline Vector3_t3525329789  get_idealPanOffset_31() const { return ___idealPanOffset_31; }
	inline Vector3_t3525329789 * get_address_of_idealPanOffset_31() { return &___idealPanOffset_31; }
	inline void set_idealPanOffset_31(Vector3_t3525329789  value)
	{
		___idealPanOffset_31 = value;
	}

	inline static int32_t get_offset_of_panOffset_32() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___panOffset_32)); }
	inline Vector3_t3525329789  get_panOffset_32() const { return ___panOffset_32; }
	inline Vector3_t3525329789 * get_address_of_panOffset_32() { return &___panOffset_32; }
	inline void set_panOffset_32(Vector3_t3525329789  value)
	{
		___panOffset_32 = value;
	}

	inline static int32_t get_offset_of_nextDragTime_33() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020, ___nextDragTime_33)); }
	inline float get_nextDragTime_33() const { return ___nextDragTime_33; }
	inline float* get_address_of_nextDragTime_33() { return &___nextDragTime_33; }
	inline void set_nextDragTime_33(float value)
	{
		___nextDragTime_33 = value;
	}
};

struct TBOrbit_t3501841020_StaticFields
{
public:
	// System.Predicate`1<GestureRecognizer> TBOrbit::<>f__am$cache20
	Predicate_1_t4083839847 * ___U3CU3Ef__amU24cache20_34;
	// System.Predicate`1<GestureRecognizer> TBOrbit::<>f__am$cache21
	Predicate_1_t4083839847 * ___U3CU3Ef__amU24cache21_35;
	// System.Predicate`1<GestureRecognizer> TBOrbit::<>f__am$cache22
	Predicate_1_t4083839847 * ___U3CU3Ef__amU24cache22_36;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache20_34() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020_StaticFields, ___U3CU3Ef__amU24cache20_34)); }
	inline Predicate_1_t4083839847 * get_U3CU3Ef__amU24cache20_34() const { return ___U3CU3Ef__amU24cache20_34; }
	inline Predicate_1_t4083839847 ** get_address_of_U3CU3Ef__amU24cache20_34() { return &___U3CU3Ef__amU24cache20_34; }
	inline void set_U3CU3Ef__amU24cache20_34(Predicate_1_t4083839847 * value)
	{
		___U3CU3Ef__amU24cache20_34 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache20_34, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache21_35() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020_StaticFields, ___U3CU3Ef__amU24cache21_35)); }
	inline Predicate_1_t4083839847 * get_U3CU3Ef__amU24cache21_35() const { return ___U3CU3Ef__amU24cache21_35; }
	inline Predicate_1_t4083839847 ** get_address_of_U3CU3Ef__amU24cache21_35() { return &___U3CU3Ef__amU24cache21_35; }
	inline void set_U3CU3Ef__amU24cache21_35(Predicate_1_t4083839847 * value)
	{
		___U3CU3Ef__amU24cache21_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache21_35, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache22_36() { return static_cast<int32_t>(offsetof(TBOrbit_t3501841020_StaticFields, ___U3CU3Ef__amU24cache22_36)); }
	inline Predicate_1_t4083839847 * get_U3CU3Ef__amU24cache22_36() const { return ___U3CU3Ef__amU24cache22_36; }
	inline Predicate_1_t4083839847 ** get_address_of_U3CU3Ef__amU24cache22_36() { return &___U3CU3Ef__amU24cache22_36; }
	inline void set_U3CU3Ef__amU24cache22_36(Predicate_1_t4083839847 * value)
	{
		___U3CU3Ef__amU24cache22_36 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache22_36, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
