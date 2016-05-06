#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t1860629407;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;

#include "System_Xml_System_Xml_Serialization_XmlTypeMapping988104027.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlSerializableMapping
struct  XmlSerializableMapping_t3919399670  : public XmlTypeMapping_t988104027
{
public:
	// System.Xml.Schema.XmlSchema System.Xml.Serialization.XmlSerializableMapping::_schema
	XmlSchema_t1932230565 * ____schema_15;
	// System.Xml.Schema.XmlSchemaComplexType System.Xml.Serialization.XmlSerializableMapping::_schemaType
	XmlSchemaComplexType_t1860629407 * ____schemaType_16;
	// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializableMapping::_schemaTypeName
	XmlQualifiedName_t176365656 * ____schemaTypeName_17;

public:
	inline static int32_t get_offset_of__schema_15() { return static_cast<int32_t>(offsetof(XmlSerializableMapping_t3919399670, ____schema_15)); }
	inline XmlSchema_t1932230565 * get__schema_15() const { return ____schema_15; }
	inline XmlSchema_t1932230565 ** get_address_of__schema_15() { return &____schema_15; }
	inline void set__schema_15(XmlSchema_t1932230565 * value)
	{
		____schema_15 = value;
		Il2CppCodeGenWriteBarrier(&____schema_15, value);
	}

	inline static int32_t get_offset_of__schemaType_16() { return static_cast<int32_t>(offsetof(XmlSerializableMapping_t3919399670, ____schemaType_16)); }
	inline XmlSchemaComplexType_t1860629407 * get__schemaType_16() const { return ____schemaType_16; }
	inline XmlSchemaComplexType_t1860629407 ** get_address_of__schemaType_16() { return &____schemaType_16; }
	inline void set__schemaType_16(XmlSchemaComplexType_t1860629407 * value)
	{
		____schemaType_16 = value;
		Il2CppCodeGenWriteBarrier(&____schemaType_16, value);
	}

	inline static int32_t get_offset_of__schemaTypeName_17() { return static_cast<int32_t>(offsetof(XmlSerializableMapping_t3919399670, ____schemaTypeName_17)); }
	inline XmlQualifiedName_t176365656 * get__schemaTypeName_17() const { return ____schemaTypeName_17; }
	inline XmlQualifiedName_t176365656 ** get_address_of__schemaTypeName_17() { return &____schemaTypeName_17; }
	inline void set__schemaTypeName_17(XmlQualifiedName_t176365656 * value)
	{
		____schemaTypeName_17 = value;
		Il2CppCodeGenWriteBarrier(&____schemaTypeName_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
