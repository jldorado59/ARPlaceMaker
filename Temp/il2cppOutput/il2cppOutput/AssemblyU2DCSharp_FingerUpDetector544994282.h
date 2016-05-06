#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// FingerEventDetector`1/FingerEventHandler<FingerUpEvent>
struct FingerEventHandler_t2396277644;

#include "AssemblyU2DCSharp_FingerEventDetector_1_gen2025375171.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerUpDetector
struct  FingerUpDetector_t544994282  : public FingerEventDetector_1_t2025375171
{
public:
	// System.String FingerUpDetector::MessageName
	String_t* ___MessageName_10;
	// FingerEventDetector`1/FingerEventHandler<FingerUpEvent> FingerUpDetector::OnFingerUp
	FingerEventHandler_t2396277644 * ___OnFingerUp_11;

public:
	inline static int32_t get_offset_of_MessageName_10() { return static_cast<int32_t>(offsetof(FingerUpDetector_t544994282, ___MessageName_10)); }
	inline String_t* get_MessageName_10() const { return ___MessageName_10; }
	inline String_t** get_address_of_MessageName_10() { return &___MessageName_10; }
	inline void set_MessageName_10(String_t* value)
	{
		___MessageName_10 = value;
		Il2CppCodeGenWriteBarrier(&___MessageName_10, value);
	}

	inline static int32_t get_offset_of_OnFingerUp_11() { return static_cast<int32_t>(offsetof(FingerUpDetector_t544994282, ___OnFingerUp_11)); }
	inline FingerEventHandler_t2396277644 * get_OnFingerUp_11() const { return ___OnFingerUp_11; }
	inline FingerEventHandler_t2396277644 ** get_address_of_OnFingerUp_11() { return &___OnFingerUp_11; }
	inline void set_OnFingerUp_11(FingerEventHandler_t2396277644 * value)
	{
		___OnFingerUp_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerUp_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
