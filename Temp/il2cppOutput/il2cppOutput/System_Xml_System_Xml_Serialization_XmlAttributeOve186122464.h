﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t3875263730;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlAttributeOverrides
struct  XmlAttributeOverrides_t186122464  : public Il2CppObject
{
public:
	// System.Collections.Hashtable System.Xml.Serialization.XmlAttributeOverrides::overrides
	Hashtable_t3875263730 * ___overrides_0;

public:
	inline static int32_t get_offset_of_overrides_0() { return static_cast<int32_t>(offsetof(XmlAttributeOverrides_t186122464, ___overrides_0)); }
	inline Hashtable_t3875263730 * get_overrides_0() const { return ___overrides_0; }
	inline Hashtable_t3875263730 ** get_address_of_overrides_0() { return &___overrides_0; }
	inline void set_overrides_0(Hashtable_t3875263730 * value)
	{
		___overrides_0 = value;
		Il2CppCodeGenWriteBarrier(&___overrides_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
