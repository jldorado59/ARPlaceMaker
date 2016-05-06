#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FGInputProvider
struct FGInputProvider_t1238597786;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerGestures/InputProviderEvent
struct  InputProviderEvent_t4171798431  : public Il2CppObject
{
public:
	// FGInputProvider FingerGestures/InputProviderEvent::inputProviderPrefab
	FGInputProvider_t1238597786 * ___inputProviderPrefab_0;

public:
	inline static int32_t get_offset_of_inputProviderPrefab_0() { return static_cast<int32_t>(offsetof(InputProviderEvent_t4171798431, ___inputProviderPrefab_0)); }
	inline FGInputProvider_t1238597786 * get_inputProviderPrefab_0() const { return ___inputProviderPrefab_0; }
	inline FGInputProvider_t1238597786 ** get_address_of_inputProviderPrefab_0() { return &___inputProviderPrefab_0; }
	inline void set_inputProviderPrefab_0(FGInputProvider_t1238597786 * value)
	{
		___inputProviderPrefab_0 = value;
		Il2CppCodeGenWriteBarrier(&___inputProviderPrefab_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
