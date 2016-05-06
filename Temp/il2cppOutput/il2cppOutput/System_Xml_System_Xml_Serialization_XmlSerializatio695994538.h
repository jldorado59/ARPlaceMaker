#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t1038861362;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Xml.XmlWriter
struct XmlWriter_t89522450;
// System.Collections.Queue
struct Queue_t1621224067;
// System.Collections.Hashtable
struct Hashtable_t3875263730;

#include "System_Xml_System_Xml_Serialization_XmlSerializati3515170049.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlSerializationWriter
struct  XmlSerializationWriter_t695994538  : public XmlSerializationGeneratedCode_t3515170049
{
public:
	// System.Runtime.Serialization.ObjectIDGenerator System.Xml.Serialization.XmlSerializationWriter::idGenerator
	ObjectIDGenerator_t1038861362 * ___idGenerator_0;
	// System.Int32 System.Xml.Serialization.XmlSerializationWriter::qnameCount
	int32_t ___qnameCount_1;
	// System.Boolean System.Xml.Serialization.XmlSerializationWriter::topLevelElement
	bool ___topLevelElement_2;
	// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationWriter::namespaces
	ArrayList_t2121638921 * ___namespaces_3;
	// System.Xml.XmlWriter System.Xml.Serialization.XmlSerializationWriter::writer
	XmlWriter_t89522450 * ___writer_4;
	// System.Collections.Queue System.Xml.Serialization.XmlSerializationWriter::referencedElements
	Queue_t1621224067 * ___referencedElements_5;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationWriter::callbacks
	Hashtable_t3875263730 * ___callbacks_6;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationWriter::serializedObjects
	Hashtable_t3875263730 * ___serializedObjects_7;

public:
	inline static int32_t get_offset_of_idGenerator_0() { return static_cast<int32_t>(offsetof(XmlSerializationWriter_t695994538, ___idGenerator_0)); }
	inline ObjectIDGenerator_t1038861362 * get_idGenerator_0() const { return ___idGenerator_0; }
	inline ObjectIDGenerator_t1038861362 ** get_address_of_idGenerator_0() { return &___idGenerator_0; }
	inline void set_idGenerator_0(ObjectIDGenerator_t1038861362 * value)
	{
		___idGenerator_0 = value;
		Il2CppCodeGenWriteBarrier(&___idGenerator_0, value);
	}

	inline static int32_t get_offset_of_qnameCount_1() { return static_cast<int32_t>(offsetof(XmlSerializationWriter_t695994538, ___qnameCount_1)); }
	inline int32_t get_qnameCount_1() const { return ___qnameCount_1; }
	inline int32_t* get_address_of_qnameCount_1() { return &___qnameCount_1; }
	inline void set_qnameCount_1(int32_t value)
	{
		___qnameCount_1 = value;
	}

	inline static int32_t get_offset_of_topLevelElement_2() { return static_cast<int32_t>(offsetof(XmlSerializationWriter_t695994538, ___topLevelElement_2)); }
	inline bool get_topLevelElement_2() const { return ___topLevelElement_2; }
	inline bool* get_address_of_topLevelElement_2() { return &___topLevelElement_2; }
	inline void set_topLevelElement_2(bool value)
	{
		___topLevelElement_2 = value;
	}

	inline static int32_t get_offset_of_namespaces_3() { return static_cast<int32_t>(offsetof(XmlSerializationWriter_t695994538, ___namespaces_3)); }
	inline ArrayList_t2121638921 * get_namespaces_3() const { return ___namespaces_3; }
	inline ArrayList_t2121638921 ** get_address_of_namespaces_3() { return &___namespaces_3; }
	inline void set_namespaces_3(ArrayList_t2121638921 * value)
	{
		___namespaces_3 = value;
		Il2CppCodeGenWriteBarrier(&___namespaces_3, value);
	}

	inline static int32_t get_offset_of_writer_4() { return static_cast<int32_t>(offsetof(XmlSerializationWriter_t695994538, ___writer_4)); }
	inline XmlWriter_t89522450 * get_writer_4() const { return ___writer_4; }
	inline XmlWriter_t89522450 ** get_address_of_writer_4() { return &___writer_4; }
	inline void set_writer_4(XmlWriter_t89522450 * value)
	{
		___writer_4 = value;
		Il2CppCodeGenWriteBarrier(&___writer_4, value);
	}

	inline static int32_t get_offset_of_referencedElements_5() { return static_cast<int32_t>(offsetof(XmlSerializationWriter_t695994538, ___referencedElements_5)); }
	inline Queue_t1621224067 * get_referencedElements_5() const { return ___referencedElements_5; }
	inline Queue_t1621224067 ** get_address_of_referencedElements_5() { return &___referencedElements_5; }
	inline void set_referencedElements_5(Queue_t1621224067 * value)
	{
		___referencedElements_5 = value;
		Il2CppCodeGenWriteBarrier(&___referencedElements_5, value);
	}

	inline static int32_t get_offset_of_callbacks_6() { return static_cast<int32_t>(offsetof(XmlSerializationWriter_t695994538, ___callbacks_6)); }
	inline Hashtable_t3875263730 * get_callbacks_6() const { return ___callbacks_6; }
	inline Hashtable_t3875263730 ** get_address_of_callbacks_6() { return &___callbacks_6; }
	inline void set_callbacks_6(Hashtable_t3875263730 * value)
	{
		___callbacks_6 = value;
		Il2CppCodeGenWriteBarrier(&___callbacks_6, value);
	}

	inline static int32_t get_offset_of_serializedObjects_7() { return static_cast<int32_t>(offsetof(XmlSerializationWriter_t695994538, ___serializedObjects_7)); }
	inline Hashtable_t3875263730 * get_serializedObjects_7() const { return ___serializedObjects_7; }
	inline Hashtable_t3875263730 ** get_address_of_serializedObjects_7() { return &___serializedObjects_7; }
	inline void set_serializedObjects_7(Hashtable_t3875263730 * value)
	{
		___serializedObjects_7 = value;
		Il2CppCodeGenWriteBarrier(&___serializedObjects_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
