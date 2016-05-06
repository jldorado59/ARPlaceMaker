#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Serialization.XmlMapping
struct XmlMapping_t2344951413;
// System.Xml.Serialization.XmlSerializer/SerializerData
struct SerializerData_t1946782844;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Xml.Serialization.XmlAttributeEventHandler
struct XmlAttributeEventHandler_t1071444467;
// System.Xml.Serialization.XmlElementEventHandler
struct XmlElementEventHandler_t2494321811;
// System.Xml.Serialization.XmlNodeEventHandler
struct XmlNodeEventHandler_t3820646951;
// System.Xml.Serialization.UnreferencedObjectEventHandler
struct UnreferencedObjectEventHandler_t3729189727;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlSerializer
struct  XmlSerializer_t1888860807  : public Il2CppObject
{
public:
	// System.Boolean System.Xml.Serialization.XmlSerializer::customSerializer
	bool ___customSerializer_4;
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.XmlSerializer::typeMapping
	XmlMapping_t2344951413 * ___typeMapping_5;
	// System.Xml.Serialization.XmlSerializer/SerializerData System.Xml.Serialization.XmlSerializer::serializerData
	SerializerData_t1946782844 * ___serializerData_6;
	// System.Xml.Serialization.XmlAttributeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownAttribute
	XmlAttributeEventHandler_t1071444467 * ___onUnknownAttribute_8;
	// System.Xml.Serialization.XmlElementEventHandler System.Xml.Serialization.XmlSerializer::onUnknownElement
	XmlElementEventHandler_t2494321811 * ___onUnknownElement_9;
	// System.Xml.Serialization.XmlNodeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownNode
	XmlNodeEventHandler_t3820646951 * ___onUnknownNode_10;
	// System.Xml.Serialization.UnreferencedObjectEventHandler System.Xml.Serialization.XmlSerializer::onUnreferencedObject
	UnreferencedObjectEventHandler_t3729189727 * ___onUnreferencedObject_11;

public:
	inline static int32_t get_offset_of_customSerializer_4() { return static_cast<int32_t>(offsetof(XmlSerializer_t1888860807, ___customSerializer_4)); }
	inline bool get_customSerializer_4() const { return ___customSerializer_4; }
	inline bool* get_address_of_customSerializer_4() { return &___customSerializer_4; }
	inline void set_customSerializer_4(bool value)
	{
		___customSerializer_4 = value;
	}

	inline static int32_t get_offset_of_typeMapping_5() { return static_cast<int32_t>(offsetof(XmlSerializer_t1888860807, ___typeMapping_5)); }
	inline XmlMapping_t2344951413 * get_typeMapping_5() const { return ___typeMapping_5; }
	inline XmlMapping_t2344951413 ** get_address_of_typeMapping_5() { return &___typeMapping_5; }
	inline void set_typeMapping_5(XmlMapping_t2344951413 * value)
	{
		___typeMapping_5 = value;
		Il2CppCodeGenWriteBarrier(&___typeMapping_5, value);
	}

	inline static int32_t get_offset_of_serializerData_6() { return static_cast<int32_t>(offsetof(XmlSerializer_t1888860807, ___serializerData_6)); }
	inline SerializerData_t1946782844 * get_serializerData_6() const { return ___serializerData_6; }
	inline SerializerData_t1946782844 ** get_address_of_serializerData_6() { return &___serializerData_6; }
	inline void set_serializerData_6(SerializerData_t1946782844 * value)
	{
		___serializerData_6 = value;
		Il2CppCodeGenWriteBarrier(&___serializerData_6, value);
	}

	inline static int32_t get_offset_of_onUnknownAttribute_8() { return static_cast<int32_t>(offsetof(XmlSerializer_t1888860807, ___onUnknownAttribute_8)); }
	inline XmlAttributeEventHandler_t1071444467 * get_onUnknownAttribute_8() const { return ___onUnknownAttribute_8; }
	inline XmlAttributeEventHandler_t1071444467 ** get_address_of_onUnknownAttribute_8() { return &___onUnknownAttribute_8; }
	inline void set_onUnknownAttribute_8(XmlAttributeEventHandler_t1071444467 * value)
	{
		___onUnknownAttribute_8 = value;
		Il2CppCodeGenWriteBarrier(&___onUnknownAttribute_8, value);
	}

	inline static int32_t get_offset_of_onUnknownElement_9() { return static_cast<int32_t>(offsetof(XmlSerializer_t1888860807, ___onUnknownElement_9)); }
	inline XmlElementEventHandler_t2494321811 * get_onUnknownElement_9() const { return ___onUnknownElement_9; }
	inline XmlElementEventHandler_t2494321811 ** get_address_of_onUnknownElement_9() { return &___onUnknownElement_9; }
	inline void set_onUnknownElement_9(XmlElementEventHandler_t2494321811 * value)
	{
		___onUnknownElement_9 = value;
		Il2CppCodeGenWriteBarrier(&___onUnknownElement_9, value);
	}

	inline static int32_t get_offset_of_onUnknownNode_10() { return static_cast<int32_t>(offsetof(XmlSerializer_t1888860807, ___onUnknownNode_10)); }
	inline XmlNodeEventHandler_t3820646951 * get_onUnknownNode_10() const { return ___onUnknownNode_10; }
	inline XmlNodeEventHandler_t3820646951 ** get_address_of_onUnknownNode_10() { return &___onUnknownNode_10; }
	inline void set_onUnknownNode_10(XmlNodeEventHandler_t3820646951 * value)
	{
		___onUnknownNode_10 = value;
		Il2CppCodeGenWriteBarrier(&___onUnknownNode_10, value);
	}

	inline static int32_t get_offset_of_onUnreferencedObject_11() { return static_cast<int32_t>(offsetof(XmlSerializer_t1888860807, ___onUnreferencedObject_11)); }
	inline UnreferencedObjectEventHandler_t3729189727 * get_onUnreferencedObject_11() const { return ___onUnreferencedObject_11; }
	inline UnreferencedObjectEventHandler_t3729189727 ** get_address_of_onUnreferencedObject_11() { return &___onUnreferencedObject_11; }
	inline void set_onUnreferencedObject_11(UnreferencedObjectEventHandler_t3729189727 * value)
	{
		___onUnreferencedObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___onUnreferencedObject_11, value);
	}
};

struct XmlSerializer_t1888860807_StaticFields
{
public:
	// System.Int32 System.Xml.Serialization.XmlSerializer::generationThreshold
	int32_t ___generationThreshold_0;
	// System.Boolean System.Xml.Serialization.XmlSerializer::backgroundGeneration
	bool ___backgroundGeneration_1;
	// System.Boolean System.Xml.Serialization.XmlSerializer::deleteTempFiles
	bool ___deleteTempFiles_2;
	// System.Boolean System.Xml.Serialization.XmlSerializer::generatorFallback
	bool ___generatorFallback_3;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializer::serializerTypes
	Hashtable_t3875263730 * ___serializerTypes_7;

public:
	inline static int32_t get_offset_of_generationThreshold_0() { return static_cast<int32_t>(offsetof(XmlSerializer_t1888860807_StaticFields, ___generationThreshold_0)); }
	inline int32_t get_generationThreshold_0() const { return ___generationThreshold_0; }
	inline int32_t* get_address_of_generationThreshold_0() { return &___generationThreshold_0; }
	inline void set_generationThreshold_0(int32_t value)
	{
		___generationThreshold_0 = value;
	}

	inline static int32_t get_offset_of_backgroundGeneration_1() { return static_cast<int32_t>(offsetof(XmlSerializer_t1888860807_StaticFields, ___backgroundGeneration_1)); }
	inline bool get_backgroundGeneration_1() const { return ___backgroundGeneration_1; }
	inline bool* get_address_of_backgroundGeneration_1() { return &___backgroundGeneration_1; }
	inline void set_backgroundGeneration_1(bool value)
	{
		___backgroundGeneration_1 = value;
	}

	inline static int32_t get_offset_of_deleteTempFiles_2() { return static_cast<int32_t>(offsetof(XmlSerializer_t1888860807_StaticFields, ___deleteTempFiles_2)); }
	inline bool get_deleteTempFiles_2() const { return ___deleteTempFiles_2; }
	inline bool* get_address_of_deleteTempFiles_2() { return &___deleteTempFiles_2; }
	inline void set_deleteTempFiles_2(bool value)
	{
		___deleteTempFiles_2 = value;
	}

	inline static int32_t get_offset_of_generatorFallback_3() { return static_cast<int32_t>(offsetof(XmlSerializer_t1888860807_StaticFields, ___generatorFallback_3)); }
	inline bool get_generatorFallback_3() const { return ___generatorFallback_3; }
	inline bool* get_address_of_generatorFallback_3() { return &___generatorFallback_3; }
	inline void set_generatorFallback_3(bool value)
	{
		___generatorFallback_3 = value;
	}

	inline static int32_t get_offset_of_serializerTypes_7() { return static_cast<int32_t>(offsetof(XmlSerializer_t1888860807_StaticFields, ___serializerTypes_7)); }
	inline Hashtable_t3875263730 * get_serializerTypes_7() const { return ___serializerTypes_7; }
	inline Hashtable_t3875263730 ** get_address_of_serializerTypes_7() { return &___serializerTypes_7; }
	inline void set_serializerTypes_7(Hashtable_t3875263730 * value)
	{
		___serializerTypes_7 = value;
		Il2CppCodeGenWriteBarrier(&___serializerTypes_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
