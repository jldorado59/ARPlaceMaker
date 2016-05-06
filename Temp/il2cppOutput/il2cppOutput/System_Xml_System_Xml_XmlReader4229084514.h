#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t2724083932;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t3693321125;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReader
struct  XmlReader_t4229084514  : public Il2CppObject
{
public:
	// System.Text.StringBuilder System.Xml.XmlReader::readStringBuffer
	StringBuilder_t3822575854 * ___readStringBuffer_0;
	// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::binary
	XmlReaderBinarySupport_t2724083932 * ___binary_1;
	// System.Xml.XmlReaderSettings System.Xml.XmlReader::settings
	XmlReaderSettings_t3693321125 * ___settings_2;

public:
	inline static int32_t get_offset_of_readStringBuffer_0() { return static_cast<int32_t>(offsetof(XmlReader_t4229084514, ___readStringBuffer_0)); }
	inline StringBuilder_t3822575854 * get_readStringBuffer_0() const { return ___readStringBuffer_0; }
	inline StringBuilder_t3822575854 ** get_address_of_readStringBuffer_0() { return &___readStringBuffer_0; }
	inline void set_readStringBuffer_0(StringBuilder_t3822575854 * value)
	{
		___readStringBuffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___readStringBuffer_0, value);
	}

	inline static int32_t get_offset_of_binary_1() { return static_cast<int32_t>(offsetof(XmlReader_t4229084514, ___binary_1)); }
	inline XmlReaderBinarySupport_t2724083932 * get_binary_1() const { return ___binary_1; }
	inline XmlReaderBinarySupport_t2724083932 ** get_address_of_binary_1() { return &___binary_1; }
	inline void set_binary_1(XmlReaderBinarySupport_t2724083932 * value)
	{
		___binary_1 = value;
		Il2CppCodeGenWriteBarrier(&___binary_1, value);
	}

	inline static int32_t get_offset_of_settings_2() { return static_cast<int32_t>(offsetof(XmlReader_t4229084514, ___settings_2)); }
	inline XmlReaderSettings_t3693321125 * get_settings_2() const { return ___settings_2; }
	inline XmlReaderSettings_t3693321125 ** get_address_of_settings_2() { return &___settings_2; }
	inline void set_settings_2(XmlReaderSettings_t3693321125 * value)
	{
		___settings_2 = value;
		Il2CppCodeGenWriteBarrier(&___settings_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
