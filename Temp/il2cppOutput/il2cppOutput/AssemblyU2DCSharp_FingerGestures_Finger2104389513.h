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
// System.Collections.Generic.List`1<GestureRecognizer>
struct List_1_t14867622;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_FingerGestures_FingerPhase262076274.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerGestures/Finger
struct  Finger_t2104389513  : public Il2CppObject
{
public:
	// System.Int32 FingerGestures/Finger::index
	int32_t ___index_0;
	// FingerGestures/FingerPhase FingerGestures/Finger::phase
	int32_t ___phase_1;
	// FingerGestures/FingerPhase FingerGestures/Finger::prevPhase
	int32_t ___prevPhase_2;
	// UnityEngine.Vector2 FingerGestures/Finger::pos
	Vector2_t3525329788  ___pos_3;
	// UnityEngine.Vector2 FingerGestures/Finger::startPos
	Vector2_t3525329788  ___startPos_4;
	// UnityEngine.Vector2 FingerGestures/Finger::prevPos
	Vector2_t3525329788  ___prevPos_5;
	// UnityEngine.Vector2 FingerGestures/Finger::deltaPos
	Vector2_t3525329788  ___deltaPos_6;
	// System.Single FingerGestures/Finger::startTime
	float ___startTime_7;
	// System.Single FingerGestures/Finger::lastMoveTime
	float ___lastMoveTime_8;
	// System.Single FingerGestures/Finger::distFromStart
	float ___distFromStart_9;
	// System.Boolean FingerGestures/Finger::moved
	bool ___moved_10;
	// System.Boolean FingerGestures/Finger::filteredOut
	bool ___filteredOut_11;
	// UnityEngine.Collider FingerGestures/Finger::collider
	Collider_t955670625 * ___collider_12;
	// UnityEngine.Collider FingerGestures/Finger::prevCollider
	Collider_t955670625 * ___prevCollider_13;
	// System.Single FingerGestures/Finger::elapsedTimeStationary
	float ___elapsedTimeStationary_14;
	// System.Collections.Generic.List`1<GestureRecognizer> FingerGestures/Finger::gestureRecognizers
	List_1_t14867622 * ___gestureRecognizers_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> FingerGestures/Finger::extendedProperties
	Dictionary_2_t2474804324 * ___extendedProperties_16;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_phase_1() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___phase_1)); }
	inline int32_t get_phase_1() const { return ___phase_1; }
	inline int32_t* get_address_of_phase_1() { return &___phase_1; }
	inline void set_phase_1(int32_t value)
	{
		___phase_1 = value;
	}

	inline static int32_t get_offset_of_prevPhase_2() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___prevPhase_2)); }
	inline int32_t get_prevPhase_2() const { return ___prevPhase_2; }
	inline int32_t* get_address_of_prevPhase_2() { return &___prevPhase_2; }
	inline void set_prevPhase_2(int32_t value)
	{
		___prevPhase_2 = value;
	}

	inline static int32_t get_offset_of_pos_3() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___pos_3)); }
	inline Vector2_t3525329788  get_pos_3() const { return ___pos_3; }
	inline Vector2_t3525329788 * get_address_of_pos_3() { return &___pos_3; }
	inline void set_pos_3(Vector2_t3525329788  value)
	{
		___pos_3 = value;
	}

	inline static int32_t get_offset_of_startPos_4() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___startPos_4)); }
	inline Vector2_t3525329788  get_startPos_4() const { return ___startPos_4; }
	inline Vector2_t3525329788 * get_address_of_startPos_4() { return &___startPos_4; }
	inline void set_startPos_4(Vector2_t3525329788  value)
	{
		___startPos_4 = value;
	}

	inline static int32_t get_offset_of_prevPos_5() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___prevPos_5)); }
	inline Vector2_t3525329788  get_prevPos_5() const { return ___prevPos_5; }
	inline Vector2_t3525329788 * get_address_of_prevPos_5() { return &___prevPos_5; }
	inline void set_prevPos_5(Vector2_t3525329788  value)
	{
		___prevPos_5 = value;
	}

	inline static int32_t get_offset_of_deltaPos_6() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___deltaPos_6)); }
	inline Vector2_t3525329788  get_deltaPos_6() const { return ___deltaPos_6; }
	inline Vector2_t3525329788 * get_address_of_deltaPos_6() { return &___deltaPos_6; }
	inline void set_deltaPos_6(Vector2_t3525329788  value)
	{
		___deltaPos_6 = value;
	}

	inline static int32_t get_offset_of_startTime_7() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___startTime_7)); }
	inline float get_startTime_7() const { return ___startTime_7; }
	inline float* get_address_of_startTime_7() { return &___startTime_7; }
	inline void set_startTime_7(float value)
	{
		___startTime_7 = value;
	}

	inline static int32_t get_offset_of_lastMoveTime_8() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___lastMoveTime_8)); }
	inline float get_lastMoveTime_8() const { return ___lastMoveTime_8; }
	inline float* get_address_of_lastMoveTime_8() { return &___lastMoveTime_8; }
	inline void set_lastMoveTime_8(float value)
	{
		___lastMoveTime_8 = value;
	}

	inline static int32_t get_offset_of_distFromStart_9() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___distFromStart_9)); }
	inline float get_distFromStart_9() const { return ___distFromStart_9; }
	inline float* get_address_of_distFromStart_9() { return &___distFromStart_9; }
	inline void set_distFromStart_9(float value)
	{
		___distFromStart_9 = value;
	}

	inline static int32_t get_offset_of_moved_10() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___moved_10)); }
	inline bool get_moved_10() const { return ___moved_10; }
	inline bool* get_address_of_moved_10() { return &___moved_10; }
	inline void set_moved_10(bool value)
	{
		___moved_10 = value;
	}

	inline static int32_t get_offset_of_filteredOut_11() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___filteredOut_11)); }
	inline bool get_filteredOut_11() const { return ___filteredOut_11; }
	inline bool* get_address_of_filteredOut_11() { return &___filteredOut_11; }
	inline void set_filteredOut_11(bool value)
	{
		___filteredOut_11 = value;
	}

	inline static int32_t get_offset_of_collider_12() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___collider_12)); }
	inline Collider_t955670625 * get_collider_12() const { return ___collider_12; }
	inline Collider_t955670625 ** get_address_of_collider_12() { return &___collider_12; }
	inline void set_collider_12(Collider_t955670625 * value)
	{
		___collider_12 = value;
		Il2CppCodeGenWriteBarrier(&___collider_12, value);
	}

	inline static int32_t get_offset_of_prevCollider_13() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___prevCollider_13)); }
	inline Collider_t955670625 * get_prevCollider_13() const { return ___prevCollider_13; }
	inline Collider_t955670625 ** get_address_of_prevCollider_13() { return &___prevCollider_13; }
	inline void set_prevCollider_13(Collider_t955670625 * value)
	{
		___prevCollider_13 = value;
		Il2CppCodeGenWriteBarrier(&___prevCollider_13, value);
	}

	inline static int32_t get_offset_of_elapsedTimeStationary_14() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___elapsedTimeStationary_14)); }
	inline float get_elapsedTimeStationary_14() const { return ___elapsedTimeStationary_14; }
	inline float* get_address_of_elapsedTimeStationary_14() { return &___elapsedTimeStationary_14; }
	inline void set_elapsedTimeStationary_14(float value)
	{
		___elapsedTimeStationary_14 = value;
	}

	inline static int32_t get_offset_of_gestureRecognizers_15() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___gestureRecognizers_15)); }
	inline List_1_t14867622 * get_gestureRecognizers_15() const { return ___gestureRecognizers_15; }
	inline List_1_t14867622 ** get_address_of_gestureRecognizers_15() { return &___gestureRecognizers_15; }
	inline void set_gestureRecognizers_15(List_1_t14867622 * value)
	{
		___gestureRecognizers_15 = value;
		Il2CppCodeGenWriteBarrier(&___gestureRecognizers_15, value);
	}

	inline static int32_t get_offset_of_extendedProperties_16() { return static_cast<int32_t>(offsetof(Finger_t2104389513, ___extendedProperties_16)); }
	inline Dictionary_2_t2474804324 * get_extendedProperties_16() const { return ___extendedProperties_16; }
	inline Dictionary_2_t2474804324 ** get_address_of_extendedProperties_16() { return &___extendedProperties_16; }
	inline void set_extendedProperties_16(Dictionary_2_t2474804324 * value)
	{
		___extendedProperties_16 = value;
		Il2CppCodeGenWriteBarrier(&___extendedProperties_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
