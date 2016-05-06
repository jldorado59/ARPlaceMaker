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
// UnityEngine.BoxCollider
struct BoxCollider_t131631884;
// DragGesture
struct DragGesture_t2914643285;
// TBPan/PanEventHandler
struct PanEventHandler_t2401301613;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBPan
struct  TBPan_t79621967  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform TBPan::cachedTransform
	Transform_t284553113 * ___cachedTransform_2;
	// System.Single TBPan::sensitivity
	float ___sensitivity_3;
	// System.Single TBPan::smoothSpeed
	float ___smoothSpeed_4;
	// UnityEngine.BoxCollider TBPan::moveArea
	BoxCollider_t131631884 * ___moveArea_5;
	// UnityEngine.Vector3 TBPan::idealPos
	Vector3_t3525329789  ___idealPos_6;
	// DragGesture TBPan::dragGesture
	DragGesture_t2914643285 * ___dragGesture_7;
	// TBPan/PanEventHandler TBPan::OnPan
	PanEventHandler_t2401301613 * ___OnPan_8;

public:
	inline static int32_t get_offset_of_cachedTransform_2() { return static_cast<int32_t>(offsetof(TBPan_t79621967, ___cachedTransform_2)); }
	inline Transform_t284553113 * get_cachedTransform_2() const { return ___cachedTransform_2; }
	inline Transform_t284553113 ** get_address_of_cachedTransform_2() { return &___cachedTransform_2; }
	inline void set_cachedTransform_2(Transform_t284553113 * value)
	{
		___cachedTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___cachedTransform_2, value);
	}

	inline static int32_t get_offset_of_sensitivity_3() { return static_cast<int32_t>(offsetof(TBPan_t79621967, ___sensitivity_3)); }
	inline float get_sensitivity_3() const { return ___sensitivity_3; }
	inline float* get_address_of_sensitivity_3() { return &___sensitivity_3; }
	inline void set_sensitivity_3(float value)
	{
		___sensitivity_3 = value;
	}

	inline static int32_t get_offset_of_smoothSpeed_4() { return static_cast<int32_t>(offsetof(TBPan_t79621967, ___smoothSpeed_4)); }
	inline float get_smoothSpeed_4() const { return ___smoothSpeed_4; }
	inline float* get_address_of_smoothSpeed_4() { return &___smoothSpeed_4; }
	inline void set_smoothSpeed_4(float value)
	{
		___smoothSpeed_4 = value;
	}

	inline static int32_t get_offset_of_moveArea_5() { return static_cast<int32_t>(offsetof(TBPan_t79621967, ___moveArea_5)); }
	inline BoxCollider_t131631884 * get_moveArea_5() const { return ___moveArea_5; }
	inline BoxCollider_t131631884 ** get_address_of_moveArea_5() { return &___moveArea_5; }
	inline void set_moveArea_5(BoxCollider_t131631884 * value)
	{
		___moveArea_5 = value;
		Il2CppCodeGenWriteBarrier(&___moveArea_5, value);
	}

	inline static int32_t get_offset_of_idealPos_6() { return static_cast<int32_t>(offsetof(TBPan_t79621967, ___idealPos_6)); }
	inline Vector3_t3525329789  get_idealPos_6() const { return ___idealPos_6; }
	inline Vector3_t3525329789 * get_address_of_idealPos_6() { return &___idealPos_6; }
	inline void set_idealPos_6(Vector3_t3525329789  value)
	{
		___idealPos_6 = value;
	}

	inline static int32_t get_offset_of_dragGesture_7() { return static_cast<int32_t>(offsetof(TBPan_t79621967, ___dragGesture_7)); }
	inline DragGesture_t2914643285 * get_dragGesture_7() const { return ___dragGesture_7; }
	inline DragGesture_t2914643285 ** get_address_of_dragGesture_7() { return &___dragGesture_7; }
	inline void set_dragGesture_7(DragGesture_t2914643285 * value)
	{
		___dragGesture_7 = value;
		Il2CppCodeGenWriteBarrier(&___dragGesture_7, value);
	}

	inline static int32_t get_offset_of_OnPan_8() { return static_cast<int32_t>(offsetof(TBPan_t79621967, ___OnPan_8)); }
	inline PanEventHandler_t2401301613 * get_OnPan_8() const { return ___OnPan_8; }
	inline PanEventHandler_t2401301613 ** get_address_of_OnPan_8() { return &___OnPan_8; }
	inline void set_OnPan_8(PanEventHandler_t2401301613 * value)
	{
		___OnPan_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnPan_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
