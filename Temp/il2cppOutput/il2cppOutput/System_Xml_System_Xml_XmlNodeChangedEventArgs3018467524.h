#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.String
struct String_t;

#include "mscorlib_System_EventArgs516466188.h"
#include "System_Xml_System_Xml_XmlNodeChangedAction1314909625.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeChangedEventArgs
struct  XmlNodeChangedEventArgs_t3018467524  : public EventArgs_t516466188
{
public:
	// System.Xml.XmlNode System.Xml.XmlNodeChangedEventArgs::_oldParent
	XmlNode_t3592213601 * ____oldParent_1;
	// System.Xml.XmlNode System.Xml.XmlNodeChangedEventArgs::_newParent
	XmlNode_t3592213601 * ____newParent_2;
	// System.Xml.XmlNodeChangedAction System.Xml.XmlNodeChangedEventArgs::_action
	int32_t ____action_3;
	// System.Xml.XmlNode System.Xml.XmlNodeChangedEventArgs::_node
	XmlNode_t3592213601 * ____node_4;
	// System.String System.Xml.XmlNodeChangedEventArgs::_oldValue
	String_t* ____oldValue_5;
	// System.String System.Xml.XmlNodeChangedEventArgs::_newValue
	String_t* ____newValue_6;

public:
	inline static int32_t get_offset_of__oldParent_1() { return static_cast<int32_t>(offsetof(XmlNodeChangedEventArgs_t3018467524, ____oldParent_1)); }
	inline XmlNode_t3592213601 * get__oldParent_1() const { return ____oldParent_1; }
	inline XmlNode_t3592213601 ** get_address_of__oldParent_1() { return &____oldParent_1; }
	inline void set__oldParent_1(XmlNode_t3592213601 * value)
	{
		____oldParent_1 = value;
		Il2CppCodeGenWriteBarrier(&____oldParent_1, value);
	}

	inline static int32_t get_offset_of__newParent_2() { return static_cast<int32_t>(offsetof(XmlNodeChangedEventArgs_t3018467524, ____newParent_2)); }
	inline XmlNode_t3592213601 * get__newParent_2() const { return ____newParent_2; }
	inline XmlNode_t3592213601 ** get_address_of__newParent_2() { return &____newParent_2; }
	inline void set__newParent_2(XmlNode_t3592213601 * value)
	{
		____newParent_2 = value;
		Il2CppCodeGenWriteBarrier(&____newParent_2, value);
	}

	inline static int32_t get_offset_of__action_3() { return static_cast<int32_t>(offsetof(XmlNodeChangedEventArgs_t3018467524, ____action_3)); }
	inline int32_t get__action_3() const { return ____action_3; }
	inline int32_t* get_address_of__action_3() { return &____action_3; }
	inline void set__action_3(int32_t value)
	{
		____action_3 = value;
	}

	inline static int32_t get_offset_of__node_4() { return static_cast<int32_t>(offsetof(XmlNodeChangedEventArgs_t3018467524, ____node_4)); }
	inline XmlNode_t3592213601 * get__node_4() const { return ____node_4; }
	inline XmlNode_t3592213601 ** get_address_of__node_4() { return &____node_4; }
	inline void set__node_4(XmlNode_t3592213601 * value)
	{
		____node_4 = value;
		Il2CppCodeGenWriteBarrier(&____node_4, value);
	}

	inline static int32_t get_offset_of__oldValue_5() { return static_cast<int32_t>(offsetof(XmlNodeChangedEventArgs_t3018467524, ____oldValue_5)); }
	inline String_t* get__oldValue_5() const { return ____oldValue_5; }
	inline String_t** get_address_of__oldValue_5() { return &____oldValue_5; }
	inline void set__oldValue_5(String_t* value)
	{
		____oldValue_5 = value;
		Il2CppCodeGenWriteBarrier(&____oldValue_5, value);
	}

	inline static int32_t get_offset_of__newValue_6() { return static_cast<int32_t>(offsetof(XmlNodeChangedEventArgs_t3018467524, ____newValue_6)); }
	inline String_t* get__newValue_6() const { return ____newValue_6; }
	inline String_t** get_address_of__newValue_6() { return &____newValue_6; }
	inline void set__newValue_6(String_t* value)
	{
		____newValue_6 = value;
		Il2CppCodeGenWriteBarrier(&____newValue_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
