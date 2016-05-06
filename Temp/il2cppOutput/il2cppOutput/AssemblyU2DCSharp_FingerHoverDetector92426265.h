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
// FingerEventDetector`1/FingerEventHandler<FingerHoverEvent>
struct FingerEventHandler_t1070331325;

#include "AssemblyU2DCSharp_FingerEventDetector_1_gen699428852.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerHoverDetector
struct  FingerHoverDetector_t92426265  : public FingerEventDetector_1_t699428852
{
public:
	// System.String FingerHoverDetector::MessageName
	String_t* ___MessageName_10;
	// FingerEventDetector`1/FingerEventHandler<FingerHoverEvent> FingerHoverDetector::OnFingerHover
	FingerEventHandler_t1070331325 * ___OnFingerHover_11;

public:
	inline static int32_t get_offset_of_MessageName_10() { return static_cast<int32_t>(offsetof(FingerHoverDetector_t92426265, ___MessageName_10)); }
	inline String_t* get_MessageName_10() const { return ___MessageName_10; }
	inline String_t** get_address_of_MessageName_10() { return &___MessageName_10; }
	inline void set_MessageName_10(String_t* value)
	{
		___MessageName_10 = value;
		Il2CppCodeGenWriteBarrier(&___MessageName_10, value);
	}

	inline static int32_t get_offset_of_OnFingerHover_11() { return static_cast<int32_t>(offsetof(FingerHoverDetector_t92426265, ___OnFingerHover_11)); }
	inline FingerEventHandler_t1070331325 * get_OnFingerHover_11() const { return ___OnFingerHover_11; }
	inline FingerEventHandler_t1070331325 ** get_address_of_OnFingerHover_11() { return &___OnFingerHover_11; }
	inline void set_OnFingerHover_11(FingerEventHandler_t1070331325 * value)
	{
		___OnFingerHover_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerHover_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
