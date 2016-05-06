#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Xml.Serialization.XmlTypeSerializationSource
struct XmlTypeSerializationSource_t3729967672;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t2483700417;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t186122464;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "System_Xml_System_Xml_Serialization_XmlRootAttribu2483700417.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributeOve186122464.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Xml.Serialization.XmlTypeSerializationSource::.ctor(System.Type,System.Xml.Serialization.XmlRootAttribute,System.Xml.Serialization.XmlAttributeOverrides,System.String,System.Type[])
extern "C"  void XmlTypeSerializationSource__ctor_m1341730730 (XmlTypeSerializationSource_t3729967672 * __this, Type_t * ___type, XmlRootAttribute_t2483700417 * ___root, XmlAttributeOverrides_t186122464 * ___attributeOverrides, String_t* ___namspace, TypeU5BU5D_t3431720054* ___includedTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeSerializationSource::Equals(System.Object)
extern "C"  bool XmlTypeSerializationSource_Equals_m27718796 (XmlTypeSerializationSource_t3729967672 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlTypeSerializationSource::GetHashCode()
extern "C"  int32_t XmlTypeSerializationSource_GetHashCode_m290859428 (XmlTypeSerializationSource_t3729967672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
