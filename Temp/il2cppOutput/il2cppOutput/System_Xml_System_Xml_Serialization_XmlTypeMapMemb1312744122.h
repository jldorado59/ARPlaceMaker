#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Serialization.ListMap
struct ListMap_t2001748316;

#include "System_Xml_System_Xml_Serialization_XmlTypeMapMemb1849554103.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlTypeMapMemberFlatList
struct  XmlTypeMapMemberFlatList_t1312744122  : public XmlTypeMapMemberExpandable_t1849554103
{
public:
	// System.Xml.Serialization.ListMap System.Xml.Serialization.XmlTypeMapMemberFlatList::_listMap
	ListMap_t2001748316 * ____listMap_13;

public:
	inline static int32_t get_offset_of__listMap_13() { return static_cast<int32_t>(offsetof(XmlTypeMapMemberFlatList_t1312744122, ____listMap_13)); }
	inline ListMap_t2001748316 * get__listMap_13() const { return ____listMap_13; }
	inline ListMap_t2001748316 ** get_address_of__listMap_13() { return &____listMap_13; }
	inline void set__listMap_13(ListMap_t2001748316 * value)
	{
		____listMap_13 = value;
		Il2CppCodeGenWriteBarrier(&____listMap_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
