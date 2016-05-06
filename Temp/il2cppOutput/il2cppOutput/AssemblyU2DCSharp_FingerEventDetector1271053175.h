#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ScreenRaycaster
struct ScreenRaycaster_t4188861866;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// FingerGestures/Finger
struct Finger_t2104389513;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerEventDetector
struct  FingerEventDetector_t1271053175  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 FingerEventDetector::FingerIndexFilter
	int32_t ___FingerIndexFilter_2;
	// ScreenRaycaster FingerEventDetector::Raycaster
	ScreenRaycaster_t4188861866 * ___Raycaster_3;
	// System.Boolean FingerEventDetector::UseSendMessage
	bool ___UseSendMessage_4;
	// System.Boolean FingerEventDetector::SendMessageToSelection
	bool ___SendMessageToSelection_5;
	// UnityEngine.GameObject FingerEventDetector::MessageTarget
	GameObject_t4012695102 * ___MessageTarget_6;
	// FingerGestures/Finger FingerEventDetector::activeFinger
	Finger_t2104389513 * ___activeFinger_7;
	// UnityEngine.RaycastHit FingerEventDetector::lastHit
	RaycastHit_t46221527  ___lastHit_8;

public:
	inline static int32_t get_offset_of_FingerIndexFilter_2() { return static_cast<int32_t>(offsetof(FingerEventDetector_t1271053175, ___FingerIndexFilter_2)); }
	inline int32_t get_FingerIndexFilter_2() const { return ___FingerIndexFilter_2; }
	inline int32_t* get_address_of_FingerIndexFilter_2() { return &___FingerIndexFilter_2; }
	inline void set_FingerIndexFilter_2(int32_t value)
	{
		___FingerIndexFilter_2 = value;
	}

	inline static int32_t get_offset_of_Raycaster_3() { return static_cast<int32_t>(offsetof(FingerEventDetector_t1271053175, ___Raycaster_3)); }
	inline ScreenRaycaster_t4188861866 * get_Raycaster_3() const { return ___Raycaster_3; }
	inline ScreenRaycaster_t4188861866 ** get_address_of_Raycaster_3() { return &___Raycaster_3; }
	inline void set_Raycaster_3(ScreenRaycaster_t4188861866 * value)
	{
		___Raycaster_3 = value;
		Il2CppCodeGenWriteBarrier(&___Raycaster_3, value);
	}

	inline static int32_t get_offset_of_UseSendMessage_4() { return static_cast<int32_t>(offsetof(FingerEventDetector_t1271053175, ___UseSendMessage_4)); }
	inline bool get_UseSendMessage_4() const { return ___UseSendMessage_4; }
	inline bool* get_address_of_UseSendMessage_4() { return &___UseSendMessage_4; }
	inline void set_UseSendMessage_4(bool value)
	{
		___UseSendMessage_4 = value;
	}

	inline static int32_t get_offset_of_SendMessageToSelection_5() { return static_cast<int32_t>(offsetof(FingerEventDetector_t1271053175, ___SendMessageToSelection_5)); }
	inline bool get_SendMessageToSelection_5() const { return ___SendMessageToSelection_5; }
	inline bool* get_address_of_SendMessageToSelection_5() { return &___SendMessageToSelection_5; }
	inline void set_SendMessageToSelection_5(bool value)
	{
		___SendMessageToSelection_5 = value;
	}

	inline static int32_t get_offset_of_MessageTarget_6() { return static_cast<int32_t>(offsetof(FingerEventDetector_t1271053175, ___MessageTarget_6)); }
	inline GameObject_t4012695102 * get_MessageTarget_6() const { return ___MessageTarget_6; }
	inline GameObject_t4012695102 ** get_address_of_MessageTarget_6() { return &___MessageTarget_6; }
	inline void set_MessageTarget_6(GameObject_t4012695102 * value)
	{
		___MessageTarget_6 = value;
		Il2CppCodeGenWriteBarrier(&___MessageTarget_6, value);
	}

	inline static int32_t get_offset_of_activeFinger_7() { return static_cast<int32_t>(offsetof(FingerEventDetector_t1271053175, ___activeFinger_7)); }
	inline Finger_t2104389513 * get_activeFinger_7() const { return ___activeFinger_7; }
	inline Finger_t2104389513 ** get_address_of_activeFinger_7() { return &___activeFinger_7; }
	inline void set_activeFinger_7(Finger_t2104389513 * value)
	{
		___activeFinger_7 = value;
		Il2CppCodeGenWriteBarrier(&___activeFinger_7, value);
	}

	inline static int32_t get_offset_of_lastHit_8() { return static_cast<int32_t>(offsetof(FingerEventDetector_t1271053175, ___lastHit_8)); }
	inline RaycastHit_t46221527  get_lastHit_8() const { return ___lastHit_8; }
	inline RaycastHit_t46221527 * get_address_of_lastHit_8() { return &___lastHit_8; }
	inline void set_lastHit_8(RaycastHit_t46221527  value)
	{
		___lastHit_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
