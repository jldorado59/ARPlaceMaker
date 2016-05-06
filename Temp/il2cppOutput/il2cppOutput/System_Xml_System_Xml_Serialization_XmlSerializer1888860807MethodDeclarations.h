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

// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t1888860807;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t186122464;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t2483700417;
// System.String
struct String_t;
// System.Xml.Serialization.XmlAttributeEventArgs
struct XmlAttributeEventArgs_t966950224;
// System.Xml.Serialization.XmlElementEventArgs
struct XmlElementEventArgs_t45031088;
// System.Xml.Serialization.XmlNodeEventArgs
struct XmlNodeEventArgs_t619448732;
// System.Xml.Serialization.UnreferencedObjectEventArgs
struct UnreferencedObjectEventArgs_t3619478372;
// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t540589306;
// System.Xml.Serialization.XmlSerializationWriter
struct XmlSerializationWriter_t695994538;
// System.Object
struct Il2CppObject;
// System.IO.TextReader
struct TextReader_t1534522647;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// System.Xml.XmlWriter
struct XmlWriter_t89522450;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t2229116383;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t2344951413;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributeOve186122464.h"
#include "System_Xml_System_Xml_Serialization_XmlRootAttribu2483700417.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributeEve966950224.h"
#include "System_Xml_System_Xml_Serialization_XmlElementEventA45031088.h"
#include "System_Xml_System_Xml_Serialization_XmlNodeEventArg619448732.h"
#include "System_Xml_System_Xml_Serialization_UnreferencedOb3619478372.h"
#include "mscorlib_System_IO_TextReader1534522647.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializatio540589306.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializatio695994538.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializerN2229116383.h"
#include "System_Xml_System_Xml_Serialization_XmlMapping2344951413.h"

// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type)
extern "C"  void XmlSerializer__ctor_m1894928041 (XmlSerializer_t1888860807 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type,System.Xml.Serialization.XmlAttributeOverrides,System.Type[],System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  void XmlSerializer__ctor_m30055153 (XmlSerializer_t1888860807 * __this, Type_t * ___type, XmlAttributeOverrides_t186122464 * ___overrides, TypeU5BU5D_t3431720054* ___extraTypes, XmlRootAttribute_t2483700417 * ___root, String_t* ___defaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::.cctor()
extern "C"  void XmlSerializer__cctor_m1855149789 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownAttribute(System.Xml.Serialization.XmlAttributeEventArgs)
extern "C"  void XmlSerializer_OnUnknownAttribute_m1782989351 (XmlSerializer_t1888860807 * __this, XmlAttributeEventArgs_t966950224 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownElement(System.Xml.Serialization.XmlElementEventArgs)
extern "C"  void XmlSerializer_OnUnknownElement_m4145612583 (XmlSerializer_t1888860807 * __this, XmlElementEventArgs_t45031088 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownNode(System.Xml.Serialization.XmlNodeEventArgs)
extern "C"  void XmlSerializer_OnUnknownNode_m2478101989 (XmlSerializer_t1888860807 * __this, XmlNodeEventArgs_t619448732 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnreferencedObject(System.Xml.Serialization.UnreferencedObjectEventArgs)
extern "C"  void XmlSerializer_OnUnreferencedObject_m668557074 (XmlSerializer_t1888860807 * __this, UnreferencedObjectEventArgs_t3619478372 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer::CreateReader()
extern "C"  XmlSerializationReader_t540589306 * XmlSerializer_CreateReader_m2180376534 (XmlSerializer_t1888860807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializer::CreateWriter()
extern "C"  XmlSerializationWriter_t695994538 * XmlSerializer_CreateWriter_m2391954902 (XmlSerializer_t1888860807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.IO.TextReader)
extern "C"  Il2CppObject * XmlSerializer_Deserialize_m2138373791 (XmlSerializer_t1888860807 * __this, TextReader_t1534522647 * ___textReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.XmlReader)
extern "C"  Il2CppObject * XmlSerializer_Deserialize_m1814899668 (XmlSerializer_t1888860807 * __this, XmlReader_t4229084514 * ___xmlReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.Serialization.XmlSerializationReader)
extern "C"  Il2CppObject * XmlSerializer_Deserialize_m549963018 (XmlSerializer_t1888860807 * __this, XmlSerializationReader_t540589306 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.Object,System.Xml.Serialization.XmlSerializationWriter)
extern "C"  void XmlSerializer_Serialize_m2929681138 (XmlSerializer_t1888860807 * __this, Il2CppObject * ___o, XmlSerializationWriter_t695994538 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.IO.TextWriter,System.Object)
extern "C"  void XmlSerializer_Serialize_m1383081587 (XmlSerializer_t1888860807 * __this, TextWriter_t1689927879 * ___textWriter, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.Xml.XmlWriter,System.Object,System.Xml.Serialization.XmlSerializerNamespaces)
extern "C"  void XmlSerializer_Serialize_m2870476721 (XmlSerializer_t1888860807 * __this, XmlWriter_t89522450 * ___writer, Il2CppObject * ___o, XmlSerializerNamespaces_t2229116383 * ___namespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializer::CreateWriter(System.Xml.Serialization.XmlMapping)
extern "C"  XmlSerializationWriter_t695994538 * XmlSerializer_CreateWriter_m1885226417 (XmlSerializer_t1888860807 * __this, XmlMapping_t2344951413 * ___typeMapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer::CreateReader(System.Xml.Serialization.XmlMapping)
extern "C"  XmlSerializationReader_t540589306 * XmlSerializer_CreateReader_m2017555377 (XmlSerializer_t1888860807 * __this, XmlMapping_t2344951413 * ___typeMapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::CheckGeneratedTypes(System.Xml.Serialization.XmlMapping)
extern "C"  void XmlSerializer_CheckGeneratedTypes_m3759268679 (XmlSerializer_t1888860807 * __this, XmlMapping_t2344951413 * ___typeMapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
