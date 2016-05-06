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
// FingerEventDetector`1/FingerEventHandler<FingerPressedEvent>
struct FingerEventHandler_t4220419159;

#include "AssemblyU2DCSharp_FingerEventDetector_1_gen3849516686.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerPressedDetector
struct  FingerPressedDetector_t3618638655  : public FingerEventDetector_1_t3849516686
{
public:
	// System.String FingerPressedDetector::MessageName
	String_t* ___MessageName_10;
	// FingerEventDetector`1/FingerEventHandler<FingerPressedEvent> FingerPressedDetector::OnFingerPressed
	FingerEventHandler_t4220419159 * ___OnFingerPressed_11;

public:
	inline static int32_t get_offset_of_MessageName_10() { return static_cast<int32_t>(offsetof(FingerPressedDetector_t3618638655, ___MessageName_10)); }
	inline String_t* get_MessageName_10() const { return ___MessageName_10; }
	inline String_t** get_address_of_MessageName_10() { return &___MessageName_10; }
	inline void set_MessageName_10(String_t* value)
	{
		___MessageName_10 = value;
		Il2CppCodeGenWriteBarrier(&___MessageName_10, value);
	}

	inline static int32_t get_offset_of_OnFingerPressed_11() { return static_cast<int32_t>(offsetof(FingerPressedDetector_t3618638655, ___OnFingerPressed_11)); }
	inline FingerEventHandler_t4220419159 * get_OnFingerPressed_11() const { return ___OnFingerPressed_11; }
	inline FingerEventHandler_t4220419159 ** get_address_of_OnFingerPressed_11() { return &___OnFingerPressed_11; }
	inline void set_OnFingerPressed_11(FingerEventHandler_t4220419159 * value)
	{
		___OnFingerPressed_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerPressed_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
