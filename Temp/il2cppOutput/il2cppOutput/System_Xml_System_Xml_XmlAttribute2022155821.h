#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNameEntry
struct XmlNameEntry_t3218765880;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3253021914;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t886430410;

#include "System_Xml_System_Xml_XmlNode3592213601.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlAttribute
struct  XmlAttribute_t2022155821  : public XmlNode_t3592213601
{
public:
	// System.Xml.XmlNameEntry System.Xml.XmlAttribute::name
	XmlNameEntry_t3218765880 * ___name_5;
	// System.Boolean System.Xml.XmlAttribute::isDefault
	bool ___isDefault_6;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastLinkedChild
	XmlLinkedNode_t3253021914 * ___lastLinkedChild_7;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlAttribute::schemaInfo
	Il2CppObject * ___schemaInfo_8;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(XmlAttribute_t2022155821, ___name_5)); }
	inline XmlNameEntry_t3218765880 * get_name_5() const { return ___name_5; }
	inline XmlNameEntry_t3218765880 ** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(XmlNameEntry_t3218765880 * value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier(&___name_5, value);
	}

	inline static int32_t get_offset_of_isDefault_6() { return static_cast<int32_t>(offsetof(XmlAttribute_t2022155821, ___isDefault_6)); }
	inline bool get_isDefault_6() const { return ___isDefault_6; }
	inline bool* get_address_of_isDefault_6() { return &___isDefault_6; }
	inline void set_isDefault_6(bool value)
	{
		___isDefault_6 = value;
	}

	inline static int32_t get_offset_of_lastLinkedChild_7() { return static_cast<int32_t>(offsetof(XmlAttribute_t2022155821, ___lastLinkedChild_7)); }
	inline XmlLinkedNode_t3253021914 * get_lastLinkedChild_7() const { return ___lastLinkedChild_7; }
	inline XmlLinkedNode_t3253021914 ** get_address_of_lastLinkedChild_7() { return &___lastLinkedChild_7; }
	inline void set_lastLinkedChild_7(XmlLinkedNode_t3253021914 * value)
	{
		___lastLinkedChild_7 = value;
		Il2CppCodeGenWriteBarrier(&___lastLinkedChild_7, value);
	}

	inline static int32_t get_offset_of_schemaInfo_8() { return static_cast<int32_t>(offsetof(XmlAttribute_t2022155821, ___schemaInfo_8)); }
	inline Il2CppObject * get_schemaInfo_8() const { return ___schemaInfo_8; }
	inline Il2CppObject ** get_address_of_schemaInfo_8() { return &___schemaInfo_8; }
	inline void set_schemaInfo_8(Il2CppObject * value)
	{
		___schemaInfo_8 = value;
		Il2CppCodeGenWriteBarrier(&___schemaInfo_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
