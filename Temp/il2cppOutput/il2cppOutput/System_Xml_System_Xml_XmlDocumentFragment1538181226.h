#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3253021914;

#include "System_Xml_System_Xml_XmlNode3592213601.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocumentFragment
struct  XmlDocumentFragment_t1538181226  : public XmlNode_t3592213601
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlDocumentFragment::lastLinkedChild
	XmlLinkedNode_t3253021914 * ___lastLinkedChild_5;

public:
	inline static int32_t get_offset_of_lastLinkedChild_5() { return static_cast<int32_t>(offsetof(XmlDocumentFragment_t1538181226, ___lastLinkedChild_5)); }
	inline XmlLinkedNode_t3253021914 * get_lastLinkedChild_5() const { return ___lastLinkedChild_5; }
	inline XmlLinkedNode_t3253021914 ** get_address_of_lastLinkedChild_5() { return &___lastLinkedChild_5; }
	inline void set_lastLinkedChild_5(XmlLinkedNode_t3253021914 * value)
	{
		___lastLinkedChild_5 = value;
		Il2CppCodeGenWriteBarrier(&___lastLinkedChild_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
