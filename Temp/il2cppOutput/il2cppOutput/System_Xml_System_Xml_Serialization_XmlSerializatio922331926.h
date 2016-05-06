#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Serialization.XmlSerializationReaderInterpreter
struct XmlSerializationReaderInterpreter_t1865114396;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t988104027;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlSerializationReaderInterpreter/ReaderCallbackInfo
struct  ReaderCallbackInfo_t922331926  : public Il2CppObject
{
public:
	// System.Xml.Serialization.XmlSerializationReaderInterpreter System.Xml.Serialization.XmlSerializationReaderInterpreter/ReaderCallbackInfo::_sri
	XmlSerializationReaderInterpreter_t1865114396 * ____sri_0;
	// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlSerializationReaderInterpreter/ReaderCallbackInfo::_typeMap
	XmlTypeMapping_t988104027 * ____typeMap_1;

public:
	inline static int32_t get_offset_of__sri_0() { return static_cast<int32_t>(offsetof(ReaderCallbackInfo_t922331926, ____sri_0)); }
	inline XmlSerializationReaderInterpreter_t1865114396 * get__sri_0() const { return ____sri_0; }
	inline XmlSerializationReaderInterpreter_t1865114396 ** get_address_of__sri_0() { return &____sri_0; }
	inline void set__sri_0(XmlSerializationReaderInterpreter_t1865114396 * value)
	{
		____sri_0 = value;
		Il2CppCodeGenWriteBarrier(&____sri_0, value);
	}

	inline static int32_t get_offset_of__typeMap_1() { return static_cast<int32_t>(offsetof(ReaderCallbackInfo_t922331926, ____typeMap_1)); }
	inline XmlTypeMapping_t988104027 * get__typeMap_1() const { return ____typeMap_1; }
	inline XmlTypeMapping_t988104027 ** get_address_of__typeMap_1() { return &____typeMap_1; }
	inline void set__typeMap_1(XmlTypeMapping_t988104027 * value)
	{
		____typeMap_1 = value;
		Il2CppCodeGenWriteBarrier(&____typeMap_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
