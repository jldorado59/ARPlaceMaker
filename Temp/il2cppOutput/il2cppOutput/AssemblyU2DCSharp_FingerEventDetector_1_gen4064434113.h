﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;

#include "AssemblyU2DCSharp_FingerEventDetector1271053175.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerEventDetector`1<System.Object>
struct  FingerEventDetector_1_t4064434113  : public FingerEventDetector_t1271053175
{
public:
	// System.Collections.Generic.List`1<T> FingerEventDetector`1::fingerEventsList
	List_1_t1634065389 * ___fingerEventsList_9;

public:
	inline static int32_t get_offset_of_fingerEventsList_9() { return static_cast<int32_t>(offsetof(FingerEventDetector_1_t4064434113, ___fingerEventsList_9)); }
	inline List_1_t1634065389 * get_fingerEventsList_9() const { return ___fingerEventsList_9; }
	inline List_1_t1634065389 ** get_address_of_fingerEventsList_9() { return &___fingerEventsList_9; }
	inline void set_fingerEventsList_9(List_1_t1634065389 * value)
	{
		___fingerEventsList_9 = value;
		Il2CppCodeGenWriteBarrier(&___fingerEventsList_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
