#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t2229116383;
// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Guid2778838590.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaObject
struct  XmlSchemaObject_t2900481284  : public Il2CppObject
{
public:
	// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::namespaces
	XmlSerializerNamespaces_t2229116383 * ___namespaces_0;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaObject::unhandledAttributeList
	ArrayList_t2121638921 * ___unhandledAttributeList_1;
	// System.Guid System.Xml.Schema.XmlSchemaObject::CompilationId
	Guid_t2778838590  ___CompilationId_2;

public:
	inline static int32_t get_offset_of_namespaces_0() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t2900481284, ___namespaces_0)); }
	inline XmlSerializerNamespaces_t2229116383 * get_namespaces_0() const { return ___namespaces_0; }
	inline XmlSerializerNamespaces_t2229116383 ** get_address_of_namespaces_0() { return &___namespaces_0; }
	inline void set_namespaces_0(XmlSerializerNamespaces_t2229116383 * value)
	{
		___namespaces_0 = value;
		Il2CppCodeGenWriteBarrier(&___namespaces_0, value);
	}

	inline static int32_t get_offset_of_unhandledAttributeList_1() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t2900481284, ___unhandledAttributeList_1)); }
	inline ArrayList_t2121638921 * get_unhandledAttributeList_1() const { return ___unhandledAttributeList_1; }
	inline ArrayList_t2121638921 ** get_address_of_unhandledAttributeList_1() { return &___unhandledAttributeList_1; }
	inline void set_unhandledAttributeList_1(ArrayList_t2121638921 * value)
	{
		___unhandledAttributeList_1 = value;
		Il2CppCodeGenWriteBarrier(&___unhandledAttributeList_1, value);
	}

	inline static int32_t get_offset_of_CompilationId_2() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t2900481284, ___CompilationId_2)); }
	inline Guid_t2778838590  get_CompilationId_2() const { return ___CompilationId_2; }
	inline Guid_t2778838590 * get_address_of_CompilationId_2() { return &___CompilationId_2; }
	inline void set_CompilationId_2(Guid_t2778838590  value)
	{
		___CompilationId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
