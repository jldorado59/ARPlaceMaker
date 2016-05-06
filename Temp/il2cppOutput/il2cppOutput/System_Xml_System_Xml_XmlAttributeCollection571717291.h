#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlElement
struct XmlElement_t3562928333;
// System.Xml.XmlDocument
struct XmlDocument_t3705263098;

#include "System_Xml_System_Xml_XmlNamedNodeMap1329997280.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlAttributeCollection
struct  XmlAttributeCollection_t571717291  : public XmlNamedNodeMap_t1329997280
{
public:
	// System.Xml.XmlElement System.Xml.XmlAttributeCollection::ownerElement
	XmlElement_t3562928333 * ___ownerElement_4;
	// System.Xml.XmlDocument System.Xml.XmlAttributeCollection::ownerDocument
	XmlDocument_t3705263098 * ___ownerDocument_5;

public:
	inline static int32_t get_offset_of_ownerElement_4() { return static_cast<int32_t>(offsetof(XmlAttributeCollection_t571717291, ___ownerElement_4)); }
	inline XmlElement_t3562928333 * get_ownerElement_4() const { return ___ownerElement_4; }
	inline XmlElement_t3562928333 ** get_address_of_ownerElement_4() { return &___ownerElement_4; }
	inline void set_ownerElement_4(XmlElement_t3562928333 * value)
	{
		___ownerElement_4 = value;
		Il2CppCodeGenWriteBarrier(&___ownerElement_4, value);
	}

	inline static int32_t get_offset_of_ownerDocument_5() { return static_cast<int32_t>(offsetof(XmlAttributeCollection_t571717291, ___ownerDocument_5)); }
	inline XmlDocument_t3705263098 * get_ownerDocument_5() const { return ___ownerDocument_5; }
	inline XmlDocument_t3705263098 ** get_address_of_ownerDocument_5() { return &___ownerDocument_5; }
	inline void set_ownerDocument_5(XmlDocument_t3705263098 * value)
	{
		___ownerDocument_5 = value;
		Il2CppCodeGenWriteBarrier(&___ownerDocument_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
