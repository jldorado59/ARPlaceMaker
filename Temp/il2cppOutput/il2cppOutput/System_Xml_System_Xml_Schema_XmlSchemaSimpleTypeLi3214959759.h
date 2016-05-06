#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1500525009;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;

#include "System_Xml_System_Xml_Schema_XmlSchemaSimpleTypeCo1763168354.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaSimpleTypeList
struct  XmlSchemaSimpleTypeList_t3214959759  : public XmlSchemaSimpleTypeContent_t1763168354
{
public:
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeList::itemType
	XmlSchemaSimpleType_t1500525009 * ___itemType_3;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeList::itemTypeName
	XmlQualifiedName_t176365656 * ___itemTypeName_4;

public:
	inline static int32_t get_offset_of_itemType_3() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeList_t3214959759, ___itemType_3)); }
	inline XmlSchemaSimpleType_t1500525009 * get_itemType_3() const { return ___itemType_3; }
	inline XmlSchemaSimpleType_t1500525009 ** get_address_of_itemType_3() { return &___itemType_3; }
	inline void set_itemType_3(XmlSchemaSimpleType_t1500525009 * value)
	{
		___itemType_3 = value;
		Il2CppCodeGenWriteBarrier(&___itemType_3, value);
	}

	inline static int32_t get_offset_of_itemTypeName_4() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeList_t3214959759, ___itemTypeName_4)); }
	inline XmlQualifiedName_t176365656 * get_itemTypeName_4() const { return ___itemTypeName_4; }
	inline XmlQualifiedName_t176365656 ** get_address_of_itemTypeName_4() { return &___itemTypeName_4; }
	inline void set_itemTypeName_4(XmlQualifiedName_t176365656 * value)
	{
		___itemTypeName_4 = value;
		Il2CppCodeGenWriteBarrier(&___itemTypeName_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
