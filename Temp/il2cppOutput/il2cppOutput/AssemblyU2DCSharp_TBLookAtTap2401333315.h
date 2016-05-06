#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TBDragView
struct TBDragView_t862864007;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBLookAtTap
struct  TBLookAtTap_t2401333315  : public MonoBehaviour_t3012272455
{
public:
	// TBDragView TBLookAtTap::dragView
	TBDragView_t862864007 * ___dragView_2;

public:
	inline static int32_t get_offset_of_dragView_2() { return static_cast<int32_t>(offsetof(TBLookAtTap_t2401333315, ___dragView_2)); }
	inline TBDragView_t862864007 * get_dragView_2() const { return ___dragView_2; }
	inline TBDragView_t862864007 ** get_address_of_dragView_2() { return &___dragView_2; }
	inline void set_dragView_2(TBDragView_t862864007 * value)
	{
		___dragView_2 = value;
		Il2CppCodeGenWriteBarrier(&___dragView_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
