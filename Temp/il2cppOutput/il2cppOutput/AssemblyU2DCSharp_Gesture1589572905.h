#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GestureRecognizer
struct GestureRecognizer_t3512875949;
// FingerGestures/FingerList
struct FingerList_t978167751;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// Gesture/EventHandler
struct EventHandler_t1765379952;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_GestureRecognitionState3604239971.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gesture
struct  Gesture_t1589572905  : public Il2CppObject
{
public:
	// System.Int32 Gesture::ClusterId
	int32_t ___ClusterId_0;
	// GestureRecognizer Gesture::recognizer
	GestureRecognizer_t3512875949 * ___recognizer_1;
	// System.Single Gesture::startTime
	float ___startTime_2;
	// UnityEngine.Vector2 Gesture::startPosition
	Vector2_t3525329788  ___startPosition_3;
	// UnityEngine.Vector2 Gesture::position
	Vector2_t3525329788  ___position_4;
	// GestureRecognitionState Gesture::state
	int32_t ___state_5;
	// GestureRecognitionState Gesture::prevState
	int32_t ___prevState_6;
	// FingerGestures/FingerList Gesture::fingers
	FingerList_t978167751 * ___fingers_7;
	// UnityEngine.GameObject Gesture::startSelection
	GameObject_t4012695102 * ___startSelection_8;
	// UnityEngine.GameObject Gesture::selection
	GameObject_t4012695102 * ___selection_9;
	// UnityEngine.RaycastHit Gesture::lastHit
	RaycastHit_t46221527  ___lastHit_10;
	// Gesture/EventHandler Gesture::OnStateChanged
	EventHandler_t1765379952 * ___OnStateChanged_11;

public:
	inline static int32_t get_offset_of_ClusterId_0() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___ClusterId_0)); }
	inline int32_t get_ClusterId_0() const { return ___ClusterId_0; }
	inline int32_t* get_address_of_ClusterId_0() { return &___ClusterId_0; }
	inline void set_ClusterId_0(int32_t value)
	{
		___ClusterId_0 = value;
	}

	inline static int32_t get_offset_of_recognizer_1() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___recognizer_1)); }
	inline GestureRecognizer_t3512875949 * get_recognizer_1() const { return ___recognizer_1; }
	inline GestureRecognizer_t3512875949 ** get_address_of_recognizer_1() { return &___recognizer_1; }
	inline void set_recognizer_1(GestureRecognizer_t3512875949 * value)
	{
		___recognizer_1 = value;
		Il2CppCodeGenWriteBarrier(&___recognizer_1, value);
	}

	inline static int32_t get_offset_of_startTime_2() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___startTime_2)); }
	inline float get_startTime_2() const { return ___startTime_2; }
	inline float* get_address_of_startTime_2() { return &___startTime_2; }
	inline void set_startTime_2(float value)
	{
		___startTime_2 = value;
	}

	inline static int32_t get_offset_of_startPosition_3() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___startPosition_3)); }
	inline Vector2_t3525329788  get_startPosition_3() const { return ___startPosition_3; }
	inline Vector2_t3525329788 * get_address_of_startPosition_3() { return &___startPosition_3; }
	inline void set_startPosition_3(Vector2_t3525329788  value)
	{
		___startPosition_3 = value;
	}

	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___position_4)); }
	inline Vector2_t3525329788  get_position_4() const { return ___position_4; }
	inline Vector2_t3525329788 * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector2_t3525329788  value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_state_5() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___state_5)); }
	inline int32_t get_state_5() const { return ___state_5; }
	inline int32_t* get_address_of_state_5() { return &___state_5; }
	inline void set_state_5(int32_t value)
	{
		___state_5 = value;
	}

	inline static int32_t get_offset_of_prevState_6() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___prevState_6)); }
	inline int32_t get_prevState_6() const { return ___prevState_6; }
	inline int32_t* get_address_of_prevState_6() { return &___prevState_6; }
	inline void set_prevState_6(int32_t value)
	{
		___prevState_6 = value;
	}

	inline static int32_t get_offset_of_fingers_7() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___fingers_7)); }
	inline FingerList_t978167751 * get_fingers_7() const { return ___fingers_7; }
	inline FingerList_t978167751 ** get_address_of_fingers_7() { return &___fingers_7; }
	inline void set_fingers_7(FingerList_t978167751 * value)
	{
		___fingers_7 = value;
		Il2CppCodeGenWriteBarrier(&___fingers_7, value);
	}

	inline static int32_t get_offset_of_startSelection_8() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___startSelection_8)); }
	inline GameObject_t4012695102 * get_startSelection_8() const { return ___startSelection_8; }
	inline GameObject_t4012695102 ** get_address_of_startSelection_8() { return &___startSelection_8; }
	inline void set_startSelection_8(GameObject_t4012695102 * value)
	{
		___startSelection_8 = value;
		Il2CppCodeGenWriteBarrier(&___startSelection_8, value);
	}

	inline static int32_t get_offset_of_selection_9() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___selection_9)); }
	inline GameObject_t4012695102 * get_selection_9() const { return ___selection_9; }
	inline GameObject_t4012695102 ** get_address_of_selection_9() { return &___selection_9; }
	inline void set_selection_9(GameObject_t4012695102 * value)
	{
		___selection_9 = value;
		Il2CppCodeGenWriteBarrier(&___selection_9, value);
	}

	inline static int32_t get_offset_of_lastHit_10() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___lastHit_10)); }
	inline RaycastHit_t46221527  get_lastHit_10() const { return ___lastHit_10; }
	inline RaycastHit_t46221527 * get_address_of_lastHit_10() { return &___lastHit_10; }
	inline void set_lastHit_10(RaycastHit_t46221527  value)
	{
		___lastHit_10 = value;
	}

	inline static int32_t get_offset_of_OnStateChanged_11() { return static_cast<int32_t>(offsetof(Gesture_t1589572905, ___OnStateChanged_11)); }
	inline EventHandler_t1765379952 * get_OnStateChanged_11() const { return ___OnStateChanged_11; }
	inline EventHandler_t1765379952 ** get_address_of_OnStateChanged_11() { return &___OnStateChanged_11; }
	inline void set_OnStateChanged_11(EventHandler_t1765379952 * value)
	{
		___OnStateChanged_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnStateChanged_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
