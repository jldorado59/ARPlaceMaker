#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "AssemblyU2DCSharp_FGInputProvider1238597786.h"
#include "UnityEngine_UnityEngine_Touch1603883884.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FGTouchInputProvider
struct  FGTouchInputProvider_t2264341885  : public FGInputProvider_t1238597786
{
public:
	// System.Int32 FGTouchInputProvider::maxTouches
	int32_t ___maxTouches_2;
	// System.Boolean FGTouchInputProvider::fixAndroidTouchIdBug
	bool ___fixAndroidTouchIdBug_3;
	// System.Int32 FGTouchInputProvider::touchIdOffset
	int32_t ___touchIdOffset_4;
	// UnityEngine.Touch FGTouchInputProvider::nullTouch
	Touch_t1603883884  ___nullTouch_5;
	// System.Int32[] FGTouchInputProvider::finger2touchMap
	Int32U5BU5D_t1809983122* ___finger2touchMap_6;

public:
	inline static int32_t get_offset_of_maxTouches_2() { return static_cast<int32_t>(offsetof(FGTouchInputProvider_t2264341885, ___maxTouches_2)); }
	inline int32_t get_maxTouches_2() const { return ___maxTouches_2; }
	inline int32_t* get_address_of_maxTouches_2() { return &___maxTouches_2; }
	inline void set_maxTouches_2(int32_t value)
	{
		___maxTouches_2 = value;
	}

	inline static int32_t get_offset_of_fixAndroidTouchIdBug_3() { return static_cast<int32_t>(offsetof(FGTouchInputProvider_t2264341885, ___fixAndroidTouchIdBug_3)); }
	inline bool get_fixAndroidTouchIdBug_3() const { return ___fixAndroidTouchIdBug_3; }
	inline bool* get_address_of_fixAndroidTouchIdBug_3() { return &___fixAndroidTouchIdBug_3; }
	inline void set_fixAndroidTouchIdBug_3(bool value)
	{
		___fixAndroidTouchIdBug_3 = value;
	}

	inline static int32_t get_offset_of_touchIdOffset_4() { return static_cast<int32_t>(offsetof(FGTouchInputProvider_t2264341885, ___touchIdOffset_4)); }
	inline int32_t get_touchIdOffset_4() const { return ___touchIdOffset_4; }
	inline int32_t* get_address_of_touchIdOffset_4() { return &___touchIdOffset_4; }
	inline void set_touchIdOffset_4(int32_t value)
	{
		___touchIdOffset_4 = value;
	}

	inline static int32_t get_offset_of_nullTouch_5() { return static_cast<int32_t>(offsetof(FGTouchInputProvider_t2264341885, ___nullTouch_5)); }
	inline Touch_t1603883884  get_nullTouch_5() const { return ___nullTouch_5; }
	inline Touch_t1603883884 * get_address_of_nullTouch_5() { return &___nullTouch_5; }
	inline void set_nullTouch_5(Touch_t1603883884  value)
	{
		___nullTouch_5 = value;
	}

	inline static int32_t get_offset_of_finger2touchMap_6() { return static_cast<int32_t>(offsetof(FGTouchInputProvider_t2264341885, ___finger2touchMap_6)); }
	inline Int32U5BU5D_t1809983122* get_finger2touchMap_6() const { return ___finger2touchMap_6; }
	inline Int32U5BU5D_t1809983122** get_address_of_finger2touchMap_6() { return &___finger2touchMap_6; }
	inline void set_finger2touchMap_6(Int32U5BU5D_t1809983122* value)
	{
		___finger2touchMap_6 = value;
		Il2CppCodeGenWriteBarrier(&___finger2touchMap_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
