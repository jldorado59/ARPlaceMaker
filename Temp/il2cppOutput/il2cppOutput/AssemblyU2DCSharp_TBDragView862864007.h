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
// DragGesture
struct DragGesture_t2914643285;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBDragView
struct  TBDragView_t862864007  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean TBDragView::allowUserInput
	bool ___allowUserInput_2;
	// System.Single TBDragView::sensitivity
	float ___sensitivity_3;
	// System.Single TBDragView::dragAcceleration
	float ___dragAcceleration_4;
	// System.Single TBDragView::dragDeceleration
	float ___dragDeceleration_5;
	// System.Boolean TBDragView::reverseControls
	bool ___reverseControls_6;
	// System.Single TBDragView::minPitchAngle
	float ___minPitchAngle_7;
	// System.Single TBDragView::maxPitchAngle
	float ___maxPitchAngle_8;
	// System.Single TBDragView::idealRotationSmoothingSpeed
	float ___idealRotationSmoothingSpeed_9;
	// UnityEngine.Transform TBDragView::cachedTransform
	Transform_t284553113 * ___cachedTransform_10;
	// UnityEngine.Vector2 TBDragView::angularVelocity
	Vector2_t3525329788  ___angularVelocity_11;
	// UnityEngine.Quaternion TBDragView::idealRotation
	Quaternion_t1891715979  ___idealRotation_12;
	// System.Boolean TBDragView::useAngularVelocity
	bool ___useAngularVelocity_13;
	// DragGesture TBDragView::dragGesture
	DragGesture_t2914643285 * ___dragGesture_14;

public:
	inline static int32_t get_offset_of_allowUserInput_2() { return static_cast<int32_t>(offsetof(TBDragView_t862864007, ___allowUserInput_2)); }
	inline bool get_allowUserInput_2() const { return ___allowUserInput_2; }
	inline bool* get_address_of_allowUserInput_2() { return &___allowUserInput_2; }
	inline void set_allowUserInput_2(bool value)
	{
		___allowUserInput_2 = value;
	}

	inline static int32_t get_offset_of_sensitivity_3() { return static_cast<int32_t>(offsetof(TBDragView_t862864007, ___sensitivity_3)); }
	inline float get_sensitivity_3() const { return ___sensitivity_3; }
	inline float* get_address_of_sensitivity_3() { return &___sensitivity_3; }
	inline void set_sensitivity_3(float value)
	{
		___sensitivity_3 = value;
	}

	inline static int32_t get_offset_of_dragAcceleration_4() { return static_cast<int32_t>(offsetof(TBDragView_t862864007, ___dragAcceleration_4)); }
	inline float get_dragAcceleration_4() const { return ___dragAcceleration_4; }
	inline float* get_address_of_dragAcceleration_4() { return &___dragAcceleration_4; }
	inline void set_dragAcceleration_4(float value)
	{
		___dragAcceleration_4 = value;
	}

	inline static int32_t get_offset_of_dragDeceleration_5() { return static_cast<int32_t>(offsetof(TBDragView_t862864007, ___dragDeceleration_5)); }
	inline float get_dragDeceleration_5() const { return ___dragDeceleration_5; }
	inline float* get_address_of_dragDeceleration_5() { return &___dragDeceleration_5; }
	inline void set_dragDeceleration_5(float value)
	{
		___dragDeceleration_5 = value;
	}

	inline static int32_t get_offset_of_reverseControls_6() { return static_cast<int32_t>(offsetof(TBDragView_t862864007, ___reverseControls_6)); }
	inline bool get_reverseControls_6() const { return ___reverseControls_6; }
	inline bool* get_address_of_reverseControls_6() { return &___reverseControls_6; }
	inline void set_reverseControls_6(bool value)
	{
		___reverseControls_6 = value;
	}

	inline static int32_t get_offset_of_minPitchAngle_7() { return static_cast<int32_t>(offsetof(TBDragView_t862864007, ___minPitchAngle_7)); }
	inline float get_minPitchAngle_7() const { return ___minPitchAngle_7; }
	inline float* get_address_of_minPitchAngle_7() { return &___minPitchAngle_7; }
	inline void set_minPitchAngle_7(float value)
	{
		___minPitchAngle_7 = value;
	}

	inline static int32_t get_offset_of_maxPitchAngle_8() { return static_cast<int32_t>(offsetof(TBDragView_t862864007, ___maxPitchAngle_8)); }
	inline float get_maxPitchAngle_8() const { return ___maxPitchAngle_8; }
	inline float* get_address_of_maxPitchAngle_8() { return &___maxPitchAngle_8; }
	inline void set_maxPitchAngle_8(float value)
	{
		___maxPitchAngle_8 = value;
	}

	inline static int32_t get_offset_of_idealRotationSmoothingSpeed_9() { return static_cast<int32_t>(offsetof(TBDragView_t862864007, ___idealRotationSmoothingSpeed_9)); }
	inline float get_idealRotationSmoothingSpeed_9() const { return ___idealRotationSmoothingSpeed_9; }
	inline float* get_address_of_idealRotationSmoothingSpeed_9() { return &___idealRotationSmoothingSpeed_9; }
	inline void set_idealRotationSmoothingSpeed_9(float value)
	{
		___idealRotationSmoothingSpeed_9 = value;
	}

	inline static int32_t get_offset_of_cachedTransform_10() { return static_cast<int32_t>(offsetof(TBDragView_t862864007, ___cachedTransform_10)); }
	inline Transform_t284553113 * get_cachedTransform_10() const { return ___cachedTransform_10; }
	inline Transform_t284553113 ** get_address_of_cachedTransform_10() { return &___cachedTransform_10; }
	inline void set_cachedTransform_10(Transform_t284553113 * value)
	{
		___cachedTransform_10 = value;
		Il2CppCodeGenWriteBarrier(&___cachedTransform_10, value);
	}

	inline static int32_t get_offset_of_angularVelocity_11() { return static_cast<int32_t>(offsetof(TBDragView_t862864007, ___angularVelocity_11)); }
	inline Vector2_t3525329788  get_angularVelocity_11() const { return ___angularVelocity_11; }
	inline Vector2_t3525329788 * get_address_of_angularVelocity_11() { return &___angularVelocity_11; }
	inline void set_angularVelocity_11(Vector2_t3525329788  value)
	{
		___angularVelocity_11 = value;
	}

	inline static int32_t get_offset_of_idealRotation_12() { return static_cast<int32_t>(offsetof(TBDragView_t862864007, ___idealRotation_12)); }
	inline Quaternion_t1891715979  get_idealRotation_12() const { return ___idealRotation_12; }
	inline Quaternion_t1891715979 * get_address_of_idealRotation_12() { return &___idealRotation_12; }
	inline void set_idealRotation_12(Quaternion_t1891715979  value)
	{
		___idealRotation_12 = value;
	}

	inline static int32_t get_offset_of_useAngularVelocity_13() { return static_cast<int32_t>(offsetof(TBDragView_t862864007, ___useAngularVelocity_13)); }
	inline bool get_useAngularVelocity_13() const { return ___useAngularVelocity_13; }
	inline bool* get_address_of_useAngularVelocity_13() { return &___useAngularVelocity_13; }
	inline void set_useAngularVelocity_13(bool value)
	{
		___useAngularVelocity_13 = value;
	}

	inline static int32_t get_offset_of_dragGesture_14() { return static_cast<int32_t>(offsetof(TBDragView_t862864007, ___dragGesture_14)); }
	inline DragGesture_t2914643285 * get_dragGesture_14() const { return ___dragGesture_14; }
	inline DragGesture_t2914643285 ** get_address_of_dragGesture_14() { return &___dragGesture_14; }
	inline void set_dragGesture_14(DragGesture_t2914643285 * value)
	{
		___dragGesture_14 = value;
		Il2CppCodeGenWriteBarrier(&___dragGesture_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
