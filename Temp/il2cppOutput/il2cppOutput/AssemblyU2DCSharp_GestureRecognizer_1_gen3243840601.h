#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<TapGesture>
struct List_1_t1456104767;
// FingerGestures/FingerList
struct FingerList_t978167751;
// GestureRecognizer`1/GestureEventHandler<TapGesture>
struct GestureEventHandler_t3409595260;
// System.Predicate`1<TapGesture>
struct Predicate_1_t1230109696;

#include "AssemblyU2DCSharp_GestureRecognizer3512875949.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureRecognizer`1<TapGesture>
struct  GestureRecognizer_1_t3243840601  : public GestureRecognizer_t3512875949
{
public:
	// System.Collections.Generic.List`1<T> GestureRecognizer`1::gestures
	List_1_t1456104767 * ___gestures_14;
	// GestureRecognizer`1/GestureEventHandler<T> GestureRecognizer`1::OnGesture
	GestureEventHandler_t3409595260 * ___OnGesture_16;

public:
	inline static int32_t get_offset_of_gestures_14() { return static_cast<int32_t>(offsetof(GestureRecognizer_1_t3243840601, ___gestures_14)); }
	inline List_1_t1456104767 * get_gestures_14() const { return ___gestures_14; }
	inline List_1_t1456104767 ** get_address_of_gestures_14() { return &___gestures_14; }
	inline void set_gestures_14(List_1_t1456104767 * value)
	{
		___gestures_14 = value;
		Il2CppCodeGenWriteBarrier(&___gestures_14, value);
	}

	inline static int32_t get_offset_of_OnGesture_16() { return static_cast<int32_t>(offsetof(GestureRecognizer_1_t3243840601, ___OnGesture_16)); }
	inline GestureEventHandler_t3409595260 * get_OnGesture_16() const { return ___OnGesture_16; }
	inline GestureEventHandler_t3409595260 ** get_address_of_OnGesture_16() { return &___OnGesture_16; }
	inline void set_OnGesture_16(GestureEventHandler_t3409595260 * value)
	{
		___OnGesture_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnGesture_16, value);
	}
};

struct GestureRecognizer_1_t3243840601_StaticFields
{
public:
	// FingerGestures/FingerList GestureRecognizer`1::tempTouchList
	FingerList_t978167751 * ___tempTouchList_15;
	// System.Predicate`1<T> GestureRecognizer`1::<>f__am$cache3
	Predicate_1_t1230109696 * ___U3CU3Ef__amU24cache3_17;

public:
	inline static int32_t get_offset_of_tempTouchList_15() { return static_cast<int32_t>(offsetof(GestureRecognizer_1_t3243840601_StaticFields, ___tempTouchList_15)); }
	inline FingerList_t978167751 * get_tempTouchList_15() const { return ___tempTouchList_15; }
	inline FingerList_t978167751 ** get_address_of_tempTouchList_15() { return &___tempTouchList_15; }
	inline void set_tempTouchList_15(FingerList_t978167751 * value)
	{
		___tempTouchList_15 = value;
		Il2CppCodeGenWriteBarrier(&___tempTouchList_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_17() { return static_cast<int32_t>(offsetof(GestureRecognizer_1_t3243840601_StaticFields, ___U3CU3Ef__amU24cache3_17)); }
	inline Predicate_1_t1230109696 * get_U3CU3Ef__amU24cache3_17() const { return ___U3CU3Ef__amU24cache3_17; }
	inline Predicate_1_t1230109696 ** get_address_of_U3CU3Ef__amU24cache3_17() { return &___U3CU3Ef__amU24cache3_17; }
	inline void set_U3CU3Ef__amU24cache3_17(Predicate_1_t1230109696 * value)
	{
		___U3CU3Ef__amU24cache3_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
