#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Serialization.ObjectMap
struct ObjectMap_t669501211;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Xml.Serialization.SerializationSource
struct SerializationSource_t3475287465;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Serialization_SerializationF3103014277.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlMapping
struct  XmlMapping_t2344951413  : public Il2CppObject
{
public:
	// System.Xml.Serialization.ObjectMap System.Xml.Serialization.XmlMapping::map
	ObjectMap_t669501211 * ___map_0;
	// System.Collections.ArrayList System.Xml.Serialization.XmlMapping::relatedMaps
	ArrayList_t2121638921 * ___relatedMaps_1;
	// System.Xml.Serialization.SerializationFormat System.Xml.Serialization.XmlMapping::format
	int32_t ___format_2;
	// System.Xml.Serialization.SerializationSource System.Xml.Serialization.XmlMapping::source
	SerializationSource_t3475287465 * ___source_3;
	// System.String System.Xml.Serialization.XmlMapping::_elementName
	String_t* ____elementName_4;
	// System.String System.Xml.Serialization.XmlMapping::_namespace
	String_t* ____namespace_5;
	// System.String System.Xml.Serialization.XmlMapping::key
	String_t* ___key_6;

public:
	inline static int32_t get_offset_of_map_0() { return static_cast<int32_t>(offsetof(XmlMapping_t2344951413, ___map_0)); }
	inline ObjectMap_t669501211 * get_map_0() const { return ___map_0; }
	inline ObjectMap_t669501211 ** get_address_of_map_0() { return &___map_0; }
	inline void set_map_0(ObjectMap_t669501211 * value)
	{
		___map_0 = value;
		Il2CppCodeGenWriteBarrier(&___map_0, value);
	}

	inline static int32_t get_offset_of_relatedMaps_1() { return static_cast<int32_t>(offsetof(XmlMapping_t2344951413, ___relatedMaps_1)); }
	inline ArrayList_t2121638921 * get_relatedMaps_1() const { return ___relatedMaps_1; }
	inline ArrayList_t2121638921 ** get_address_of_relatedMaps_1() { return &___relatedMaps_1; }
	inline void set_relatedMaps_1(ArrayList_t2121638921 * value)
	{
		___relatedMaps_1 = value;
		Il2CppCodeGenWriteBarrier(&___relatedMaps_1, value);
	}

	inline static int32_t get_offset_of_format_2() { return static_cast<int32_t>(offsetof(XmlMapping_t2344951413, ___format_2)); }
	inline int32_t get_format_2() const { return ___format_2; }
	inline int32_t* get_address_of_format_2() { return &___format_2; }
	inline void set_format_2(int32_t value)
	{
		___format_2 = value;
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(XmlMapping_t2344951413, ___source_3)); }
	inline SerializationSource_t3475287465 * get_source_3() const { return ___source_3; }
	inline SerializationSource_t3475287465 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(SerializationSource_t3475287465 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier(&___source_3, value);
	}

	inline static int32_t get_offset_of__elementName_4() { return static_cast<int32_t>(offsetof(XmlMapping_t2344951413, ____elementName_4)); }
	inline String_t* get__elementName_4() const { return ____elementName_4; }
	inline String_t** get_address_of__elementName_4() { return &____elementName_4; }
	inline void set__elementName_4(String_t* value)
	{
		____elementName_4 = value;
		Il2CppCodeGenWriteBarrier(&____elementName_4, value);
	}

	inline static int32_t get_offset_of__namespace_5() { return static_cast<int32_t>(offsetof(XmlMapping_t2344951413, ____namespace_5)); }
	inline String_t* get__namespace_5() const { return ____namespace_5; }
	inline String_t** get_address_of__namespace_5() { return &____namespace_5; }
	inline void set__namespace_5(String_t* value)
	{
		____namespace_5 = value;
		Il2CppCodeGenWriteBarrier(&____namespace_5, value);
	}

	inline static int32_t get_offset_of_key_6() { return static_cast<int32_t>(offsetof(XmlMapping_t2344951413, ___key_6)); }
	inline String_t* get_key_6() const { return ___key_6; }
	inline String_t** get_address_of_key_6() { return &___key_6; }
	inline void set_key_6(String_t* value)
	{
		___key_6 = value;
		Il2CppCodeGenWriteBarrier(&___key_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
