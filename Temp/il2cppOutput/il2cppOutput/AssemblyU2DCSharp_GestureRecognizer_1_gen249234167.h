#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<PointCloudGesture>
struct List_1_t2756465629;
// FingerGestures/FingerList
struct FingerList_t978167751;
// GestureRecognizer`1/GestureEventHandler<PointCloudGesture>
struct GestureEventHandler_t414988826;
// System.Predicate`1<PointCloudGesture>
struct Predicate_1_t2530470558;

#include "AssemblyU2DCSharp_GestureRecognizer3512875949.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureRecognizer`1<PointCloudGesture>
struct  GestureRecognizer_1_t249234167  : public GestureRecognizer_t3512875949
{
public:
	// System.Collections.Generic.List`1<T> GestureRecognizer`1::gestures
	List_1_t2756465629 * ___gestures_14;
	// GestureRecognizer`1/GestureEventHandler<T> GestureRecognizer`1::OnGesture
	GestureEventHandler_t414988826 * ___OnGesture_16;

public:
	inline static int32_t get_offset_of_gestures_14() { return static_cast<int32_t>(offsetof(GestureRecognizer_1_t249234167, ___gestures_14)); }
	inline List_1_t2756465629 * get_gestures_14() const { return ___gestures_14; }
	inline List_1_t2756465629 ** get_address_of_gestures_14() { return &___gestures_14; }
	inline void set_gestures_14(List_1_t2756465629 * value)
	{
		___gestures_14 = value;
		Il2CppCodeGenWriteBarrier(&___gestures_14, value);
	}

	inline static int32_t get_offset_of_OnGesture_16() { return static_cast<int32_t>(offsetof(GestureRecognizer_1_t249234167, ___OnGesture_16)); }
	inline GestureEventHandler_t414988826 * get_OnGesture_16() const { return ___OnGesture_16; }
	inline GestureEventHandler_t414988826 ** get_address_of_OnGesture_16() { return &___OnGesture_16; }
	inline void set_OnGesture_16(GestureEventHandler_t414988826 * value)
	{
		___OnGesture_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnGesture_16, value);
	}
};

struct GestureRecognizer_1_t249234167_StaticFields
{
public:
	// FingerGestures/FingerList GestureRecognizer`1::tempTouchList
	FingerList_t978167751 * ___tempTouchList_15;
	// System.Predicate`1<T> GestureRecognizer`1::<>f__am$cache3
	Predicate_1_t2530470558 * ___U3CU3Ef__amU24cache3_17;

public:
	inline static int32_t get_offset_of_tempTouchList_15() { return static_cast<int32_t>(offsetof(GestureRecognizer_1_t249234167_StaticFields, ___tempTouchList_15)); }
	inline FingerList_t978167751 * get_tempTouchList_15() const { return ___tempTouchList_15; }
	inline FingerList_t978167751 ** get_address_of_tempTouchList_15() { return &___tempTouchList_15; }
	inline void set_tempTouchList_15(FingerList_t978167751 * value)
	{
		___tempTouchList_15 = value;
		Il2CppCodeGenWriteBarrier(&___tempTouchList_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_17() { return static_cast<int32_t>(offsetof(GestureRecognizer_1_t249234167_StaticFields, ___U3CU3Ef__amU24cache3_17)); }
	inline Predicate_1_t2530470558 * get_U3CU3Ef__amU24cache3_17() const { return ___U3CU3Ef__amU24cache3_17; }
	inline Predicate_1_t2530470558 ** get_address_of_U3CU3Ef__amU24cache3_17() { return &___U3CU3Ef__amU24cache3_17; }
	inline void set_U3CU3Ef__amU24cache3_17(Predicate_1_t2530470558 * value)
	{
		___U3CU3Ef__amU24cache3_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
