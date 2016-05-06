#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider
struct Collider_t955670625;
// UnityEngine.Camera
struct Camera_t3533968274;
// FingerGestures/Finger
struct Finger_t2104389513;
// GestureRecognizer
struct GestureRecognizer_t3512875949;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBDragToMove
struct  TBDragToMove_t231186510  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Collider TBDragToMove::DragPlaneCollider
	Collider_t955670625 * ___DragPlaneCollider_2;
	// System.Single TBDragToMove::DragPlaneOffset
	float ___DragPlaneOffset_3;
	// UnityEngine.Camera TBDragToMove::RaycastCamera
	Camera_t3533968274 * ___RaycastCamera_4;
	// System.Boolean TBDragToMove::dragging
	bool ___dragging_5;
	// FingerGestures/Finger TBDragToMove::draggingFinger
	Finger_t2104389513 * ___draggingFinger_6;
	// GestureRecognizer TBDragToMove::gestureRecognizer
	GestureRecognizer_t3512875949 * ___gestureRecognizer_7;
	// System.Boolean TBDragToMove::oldUseGravity
	bool ___oldUseGravity_8;
	// System.Boolean TBDragToMove::oldIsKinematic
	bool ___oldIsKinematic_9;
	// UnityEngine.Vector3 TBDragToMove::physxDragMove
	Vector3_t3525329789  ___physxDragMove_10;

public:
	inline static int32_t get_offset_of_DragPlaneCollider_2() { return static_cast<int32_t>(offsetof(TBDragToMove_t231186510, ___DragPlaneCollider_2)); }
	inline Collider_t955670625 * get_DragPlaneCollider_2() const { return ___DragPlaneCollider_2; }
	inline Collider_t955670625 ** get_address_of_DragPlaneCollider_2() { return &___DragPlaneCollider_2; }
	inline void set_DragPlaneCollider_2(Collider_t955670625 * value)
	{
		___DragPlaneCollider_2 = value;
		Il2CppCodeGenWriteBarrier(&___DragPlaneCollider_2, value);
	}

	inline static int32_t get_offset_of_DragPlaneOffset_3() { return static_cast<int32_t>(offsetof(TBDragToMove_t231186510, ___DragPlaneOffset_3)); }
	inline float get_DragPlaneOffset_3() const { return ___DragPlaneOffset_3; }
	inline float* get_address_of_DragPlaneOffset_3() { return &___DragPlaneOffset_3; }
	inline void set_DragPlaneOffset_3(float value)
	{
		___DragPlaneOffset_3 = value;
	}

	inline static int32_t get_offset_of_RaycastCamera_4() { return static_cast<int32_t>(offsetof(TBDragToMove_t231186510, ___RaycastCamera_4)); }
	inline Camera_t3533968274 * get_RaycastCamera_4() const { return ___RaycastCamera_4; }
	inline Camera_t3533968274 ** get_address_of_RaycastCamera_4() { return &___RaycastCamera_4; }
	inline void set_RaycastCamera_4(Camera_t3533968274 * value)
	{
		___RaycastCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___RaycastCamera_4, value);
	}

	inline static int32_t get_offset_of_dragging_5() { return static_cast<int32_t>(offsetof(TBDragToMove_t231186510, ___dragging_5)); }
	inline bool get_dragging_5() const { return ___dragging_5; }
	inline bool* get_address_of_dragging_5() { return &___dragging_5; }
	inline void set_dragging_5(bool value)
	{
		___dragging_5 = value;
	}

	inline static int32_t get_offset_of_draggingFinger_6() { return static_cast<int32_t>(offsetof(TBDragToMove_t231186510, ___draggingFinger_6)); }
	inline Finger_t2104389513 * get_draggingFinger_6() const { return ___draggingFinger_6; }
	inline Finger_t2104389513 ** get_address_of_draggingFinger_6() { return &___draggingFinger_6; }
	inline void set_draggingFinger_6(Finger_t2104389513 * value)
	{
		___draggingFinger_6 = value;
		Il2CppCodeGenWriteBarrier(&___draggingFinger_6, value);
	}

	inline static int32_t get_offset_of_gestureRecognizer_7() { return static_cast<int32_t>(offsetof(TBDragToMove_t231186510, ___gestureRecognizer_7)); }
	inline GestureRecognizer_t3512875949 * get_gestureRecognizer_7() const { return ___gestureRecognizer_7; }
	inline GestureRecognizer_t3512875949 ** get_address_of_gestureRecognizer_7() { return &___gestureRecognizer_7; }
	inline void set_gestureRecognizer_7(GestureRecognizer_t3512875949 * value)
	{
		___gestureRecognizer_7 = value;
		Il2CppCodeGenWriteBarrier(&___gestureRecognizer_7, value);
	}

	inline static int32_t get_offset_of_oldUseGravity_8() { return static_cast<int32_t>(offsetof(TBDragToMove_t231186510, ___oldUseGravity_8)); }
	inline bool get_oldUseGravity_8() const { return ___oldUseGravity_8; }
	inline bool* get_address_of_oldUseGravity_8() { return &___oldUseGravity_8; }
	inline void set_oldUseGravity_8(bool value)
	{
		___oldUseGravity_8 = value;
	}

	inline static int32_t get_offset_of_oldIsKinematic_9() { return static_cast<int32_t>(offsetof(TBDragToMove_t231186510, ___oldIsKinematic_9)); }
	inline bool get_oldIsKinematic_9() const { return ___oldIsKinematic_9; }
	inline bool* get_address_of_oldIsKinematic_9() { return &___oldIsKinematic_9; }
	inline void set_oldIsKinematic_9(bool value)
	{
		___oldIsKinematic_9 = value;
	}

	inline static int32_t get_offset_of_physxDragMove_10() { return static_cast<int32_t>(offsetof(TBDragToMove_t231186510, ___physxDragMove_10)); }
	inline Vector3_t3525329789  get_physxDragMove_10() const { return ___physxDragMove_10; }
	inline Vector3_t3525329789 * get_address_of_physxDragMove_10() { return &___physxDragMove_10; }
	inline void set_physxDragMove_10(Vector3_t3525329789  value)
	{
		___physxDragMove_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
