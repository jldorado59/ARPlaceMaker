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
// FingerEventDetector`1/FingerEventHandler<FingerDownEvent>
struct FingerEventHandler_t3954356261;

#include "AssemblyU2DCSharp_FingerEventDetector_1_gen3583453788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerDownDetector
struct  FingerDownDetector_t1553505457  : public FingerEventDetector_1_t3583453788
{
public:
	// System.String FingerDownDetector::MessageName
	String_t* ___MessageName_10;
	// FingerEventDetector`1/FingerEventHandler<FingerDownEvent> FingerDownDetector::OnFingerDown
	FingerEventHandler_t3954356261 * ___OnFingerDown_11;

public:
	inline static int32_t get_offset_of_MessageName_10() { return static_cast<int32_t>(offsetof(FingerDownDetector_t1553505457, ___MessageName_10)); }
	inline String_t* get_MessageName_10() const { return ___MessageName_10; }
	inline String_t** get_address_of_MessageName_10() { return &___MessageName_10; }
	inline void set_MessageName_10(String_t* value)
	{
		___MessageName_10 = value;
		Il2CppCodeGenWriteBarrier(&___MessageName_10, value);
	}

	inline static int32_t get_offset_of_OnFingerDown_11() { return static_cast<int32_t>(offsetof(FingerDownDetector_t1553505457, ___OnFingerDown_11)); }
	inline FingerEventHandler_t3954356261 * get_OnFingerDown_11() const { return ___OnFingerDown_11; }
	inline FingerEventHandler_t3954356261 ** get_address_of_OnFingerDown_11() { return &___OnFingerDown_11; }
	inline void set_OnFingerDown_11(FingerEventHandler_t3954356261 * value)
	{
		___OnFingerDown_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerDown_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
