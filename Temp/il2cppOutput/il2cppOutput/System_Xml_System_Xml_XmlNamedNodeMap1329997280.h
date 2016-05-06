#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNamedNodeMap
struct  XmlNamedNodeMap_t1329997280  : public Il2CppObject
{
public:
	// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::parent
	XmlNode_t3592213601 * ___parent_1;
	// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::nodeList
	ArrayList_t2121638921 * ___nodeList_2;
	// System.Boolean System.Xml.XmlNamedNodeMap::readOnly
	bool ___readOnly_3;

public:
	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t1329997280, ___parent_1)); }
	inline XmlNode_t3592213601 * get_parent_1() const { return ___parent_1; }
	inline XmlNode_t3592213601 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(XmlNode_t3592213601 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier(&___parent_1, value);
	}

	inline static int32_t get_offset_of_nodeList_2() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t1329997280, ___nodeList_2)); }
	inline ArrayList_t2121638921 * get_nodeList_2() const { return ___nodeList_2; }
	inline ArrayList_t2121638921 ** get_address_of_nodeList_2() { return &___nodeList_2; }
	inline void set_nodeList_2(ArrayList_t2121638921 * value)
	{
		___nodeList_2 = value;
		Il2CppCodeGenWriteBarrier(&___nodeList_2, value);
	}

	inline static int32_t get_offset_of_readOnly_3() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t1329997280, ___readOnly_3)); }
	inline bool get_readOnly_3() const { return ___readOnly_3; }
	inline bool* get_address_of_readOnly_3() { return &___readOnly_3; }
	inline void set_readOnly_3(bool value)
	{
		___readOnly_3 = value;
	}
};

struct XmlNamedNodeMap_t1329997280_StaticFields
{
public:
	// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::emptyEnumerator
	Il2CppObject * ___emptyEnumerator_0;

public:
	inline static int32_t get_offset_of_emptyEnumerator_0() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t1329997280_StaticFields, ___emptyEnumerator_0)); }
	inline Il2CppObject * get_emptyEnumerator_0() const { return ___emptyEnumerator_0; }
	inline Il2CppObject ** get_address_of_emptyEnumerator_0() { return &___emptyEnumerator_0; }
	inline void set_emptyEnumerator_0(Il2CppObject * value)
	{
		___emptyEnumerator_0 = value;
		Il2CppCodeGenWriteBarrier(&___emptyEnumerator_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
