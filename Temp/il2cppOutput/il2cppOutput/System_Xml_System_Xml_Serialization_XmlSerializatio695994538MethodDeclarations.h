﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Xml.Serialization.XmlSerializationWriter
struct XmlSerializationWriter_t695994538;
// System.Xml.XmlWriter
struct XmlWriter_t89522450;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t2229116383;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.XmlSerializationWriteCallback
struct XmlSerializationWriteCallback_t4044254761;
// System.Exception
struct Exception_t1967233988;
// System.Object
struct Il2CppObject;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Xml.Serialization.TypeData
struct TypeData_t3837952962;
// System.Xml.Serialization.IXmlSerializable
struct IXmlSerializable_t1192716491;
// System.Collections.ICollection
struct ICollection_t3761522009;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializerN2229116383.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializati4044254761.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_XmlQualifiedName176365656.h"
#include "System_Xml_System_Xml_XmlNode3592213601.h"
#include "System_Xml_System_Xml_Serialization_TypeData3837952962.h"

// System.Void System.Xml.Serialization.XmlSerializationWriter::.ctor()
extern "C"  void XmlSerializationWriter__ctor_m3754471073 (XmlSerializationWriter_t695994538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::Initialize(System.Xml.XmlWriter,System.Xml.Serialization.XmlSerializerNamespaces)
extern "C"  void XmlSerializationWriter_Initialize_m4227547674 (XmlSerializationWriter_t695994538 * __this, XmlWriter_t89522450 * ___writer, XmlSerializerNamespaces_t2229116383 * ___nss, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWriter System.Xml.Serialization.XmlSerializationWriter::get_Writer()
extern "C"  XmlWriter_t89522450 * XmlSerializationWriter_get_Writer_m1690548674 (XmlSerializationWriter_t695994538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::AddWriteCallback(System.Type,System.String,System.String,System.Xml.Serialization.XmlSerializationWriteCallback)
extern "C"  void XmlSerializationWriter_AddWriteCallback_m1309576612 (XmlSerializationWriter_t695994538 * __this, Type_t * ___type, String_t* ___typeName, String_t* ___typeNs, XmlSerializationWriteCallback_t4044254761 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationWriter::CreateUnknownAnyElementException(System.String,System.String)
extern "C"  Exception_t1967233988 * XmlSerializationWriter_CreateUnknownAnyElementException_m4111638859 (XmlSerializationWriter_t695994538 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationWriter::CreateUnknownTypeException(System.Object)
extern "C"  Exception_t1967233988 * XmlSerializationWriter_CreateUnknownTypeException_m2000708971 (XmlSerializationWriter_t695994538 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationWriter::CreateUnknownTypeException(System.Type)
extern "C"  Exception_t1967233988 * XmlSerializationWriter_CreateUnknownTypeException_m1124707600 (XmlSerializationWriter_t695994538 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriter::FromXmlQualifiedName(System.Xml.XmlQualifiedName)
extern "C"  String_t* XmlSerializationWriter_FromXmlQualifiedName_m2747019346 (XmlSerializationWriter_t695994538 * __this, XmlQualifiedName_t176365656 * ___xmlQualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriter::GetId(System.Object,System.Boolean)
extern "C"  String_t* XmlSerializationWriter_GetId_m4158266140 (XmlSerializationWriter_t695994538 * __this, Il2CppObject * ___o, bool ___addToReferencesList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationWriter::AlreadyQueued(System.Object)
extern "C"  bool XmlSerializationWriter_AlreadyQueued_m4102899170 (XmlSerializationWriter_t695994538 * __this, Il2CppObject * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriter::GetNamespacePrefix(System.String)
extern "C"  String_t* XmlSerializationWriter_GetNamespacePrefix_m3950822475 (XmlSerializationWriter_t695994538 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriter::GetQualifiedName(System.String,System.String)
extern "C"  String_t* XmlSerializationWriter_GetQualifiedName_m2319455181 (XmlSerializationWriter_t695994538 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::TopLevelElement()
extern "C"  void XmlSerializationWriter_TopLevelElement_m3061898188 (XmlSerializationWriter_t695994538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteAttribute(System.String,System.String,System.String)
extern "C"  void XmlSerializationWriter_WriteAttribute_m353765690 (XmlSerializationWriter_t695994538 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteAttribute(System.String,System.String,System.String,System.String)
extern "C"  void XmlSerializationWriter_WriteAttribute_m2575401974 (XmlSerializationWriter_t695994538 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteXmlNode(System.Xml.XmlNode)
extern "C"  void XmlSerializationWriter_WriteXmlNode_m1283885242 (XmlSerializationWriter_t695994538 * __this, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementEncoded(System.Xml.XmlNode,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  void XmlSerializationWriter_WriteElementEncoded_m3487212261 (XmlSerializationWriter_t695994538 * __this, XmlNode_t3592213601 * ___node, String_t* ___name, String_t* ___ns, bool ___isNullable, bool ___any, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementLiteral(System.Xml.XmlNode,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  void XmlSerializationWriter_WriteElementLiteral_m3283896518 (XmlSerializationWriter_t695994538 * __this, XmlNode_t3592213601 * ___node, String_t* ___name, String_t* ___ns, bool ___isNullable, bool ___any, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementQualifiedName(System.String,System.String,System.Xml.XmlQualifiedName)
extern "C"  void XmlSerializationWriter_WriteElementQualifiedName_m1557459131 (XmlSerializationWriter_t695994538 * __this, String_t* ___localName, String_t* ___ns, XmlQualifiedName_t176365656 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementQualifiedName(System.String,System.String,System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C"  void XmlSerializationWriter_WriteElementQualifiedName_m2531664577 (XmlSerializationWriter_t695994538 * __this, String_t* ___localName, String_t* ___ns, XmlQualifiedName_t176365656 * ___value, XmlQualifiedName_t176365656 * ___xsiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementString(System.String,System.String,System.String)
extern "C"  void XmlSerializationWriter_WriteElementString_m980360841 (XmlSerializationWriter_t695994538 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteElementString(System.String,System.String,System.String,System.Xml.XmlQualifiedName)
extern "C"  void XmlSerializationWriter_WriteElementString_m3002380175 (XmlSerializationWriter_t695994538 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, XmlQualifiedName_t176365656 * ___xsiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteEndElement()
extern "C"  void XmlSerializationWriter_WriteEndElement_m1134149919 (XmlSerializationWriter_t695994538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteEndElement(System.Object)
extern "C"  void XmlSerializationWriter_WriteEndElement_m2407664341 (XmlSerializationWriter_t695994538 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNamespaceDeclarations(System.Xml.Serialization.XmlSerializerNamespaces)
extern "C"  void XmlSerializationWriter_WriteNamespaceDeclarations_m2277186923 (XmlSerializationWriter_t695994538 * __this, XmlSerializerNamespaces_t2229116383 * ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullableQualifiedNameEncoded(System.String,System.String,System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C"  void XmlSerializationWriter_WriteNullableQualifiedNameEncoded_m1477558468 (XmlSerializationWriter_t695994538 * __this, String_t* ___name, String_t* ___ns, XmlQualifiedName_t176365656 * ___value, XmlQualifiedName_t176365656 * ___xsiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullableQualifiedNameLiteral(System.String,System.String,System.Xml.XmlQualifiedName)
extern "C"  void XmlSerializationWriter_WriteNullableQualifiedNameLiteral_m1270083773 (XmlSerializationWriter_t695994538 * __this, String_t* ___name, String_t* ___ns, XmlQualifiedName_t176365656 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullableStringEncoded(System.String,System.String,System.String,System.Xml.XmlQualifiedName)
extern "C"  void XmlSerializationWriter_WriteNullableStringEncoded_m3677042688 (XmlSerializationWriter_t695994538 * __this, String_t* ___name, String_t* ___ns, String_t* ___value, XmlQualifiedName_t176365656 * ___xsiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullableStringLiteral(System.String,System.String,System.String)
extern "C"  void XmlSerializationWriter_WriteNullableStringLiteral_m2142950457 (XmlSerializationWriter_t695994538 * __this, String_t* ___name, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullTagEncoded(System.String,System.String)
extern "C"  void XmlSerializationWriter_WriteNullTagEncoded_m1637334181 (XmlSerializationWriter_t695994538 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteNullTagLiteral(System.String,System.String)
extern "C"  void XmlSerializationWriter_WriteNullTagLiteral_m3593138340 (XmlSerializationWriter_t695994538 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WritePotentiallyReferencingElement(System.String,System.String,System.Object,System.Type,System.Boolean,System.Boolean)
extern "C"  void XmlSerializationWriter_WritePotentiallyReferencingElement_m4224054012 (XmlSerializationWriter_t695994538 * __this, String_t* ___n, String_t* ___ns, Il2CppObject * ___o, Type_t * ___ambientType, bool ___suppressReference, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteReferencedElements()
extern "C"  void XmlSerializationWriter_WriteReferencedElements_m3063671118 (XmlSerializationWriter_t695994538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationWriter::IsPrimitiveArray(System.Xml.Serialization.TypeData)
extern "C"  bool XmlSerializationWriter_IsPrimitiveArray_m841164995 (XmlSerializationWriter_t695994538 * __this, TypeData_t3837952962 * ___td, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteArray(System.Object,System.Xml.Serialization.TypeData)
extern "C"  void XmlSerializationWriter_WriteArray_m2610168779 (XmlSerializationWriter_t695994538 * __this, Il2CppObject * ___o, TypeData_t3837952962 * ___td, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteReferencingElement(System.String,System.String,System.Object,System.Boolean)
extern "C"  void XmlSerializationWriter_WriteReferencingElement_m385174595 (XmlSerializationWriter_t695994538 * __this, String_t* ___n, String_t* ___ns, Il2CppObject * ___o, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::CheckReferenceQueue()
extern "C"  void XmlSerializationWriter_CheckReferenceQueue_m2250194797 (XmlSerializationWriter_t695994538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteSerializable(System.Xml.Serialization.IXmlSerializable,System.String,System.String,System.Boolean)
extern "C"  void XmlSerializationWriter_WriteSerializable_m2313952689 (XmlSerializationWriter_t695994538 * __this, Il2CppObject * ___serializable, String_t* ___name, String_t* ___ns, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteSerializable(System.Xml.Serialization.IXmlSerializable,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  void XmlSerializationWriter_WriteSerializable_m1741749676 (XmlSerializationWriter_t695994538 * __this, Il2CppObject * ___serializable, String_t* ___name, String_t* ___ns, bool ___isNullable, bool ___wrapped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartDocument()
extern "C"  void XmlSerializationWriter_WriteStartDocument_m1908352385 (XmlSerializationWriter_t695994538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String)
extern "C"  void XmlSerializationWriter_WriteStartElement_m3072386694 (XmlSerializationWriter_t695994538 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String,System.Boolean)
extern "C"  void XmlSerializationWriter_WriteStartElement_m1339084855 (XmlSerializationWriter_t695994538 * __this, String_t* ___name, String_t* ___ns, bool ___writePrefixed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String,System.Object)
extern "C"  void XmlSerializationWriter_WriteStartElement_m119951060 (XmlSerializationWriter_t695994538 * __this, String_t* ___name, String_t* ___ns, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String,System.Object,System.Boolean)
extern "C"  void XmlSerializationWriter_WriteStartElement_m1371537961 (XmlSerializationWriter_t695994538 * __this, String_t* ___name, String_t* ___ns, Il2CppObject * ___o, bool ___writePrefixed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteStartElement(System.String,System.String,System.Object,System.Boolean,System.Collections.ICollection)
extern "C"  void XmlSerializationWriter_WriteStartElement_m831729710 (XmlSerializationWriter_t695994538 * __this, String_t* ___name, String_t* ___ns, Il2CppObject * ___o, bool ___writePrefixed, Il2CppObject * ___namespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteTypedPrimitive(System.String,System.String,System.Object,System.Boolean)
extern "C"  void XmlSerializationWriter_WriteTypedPrimitive_m966021260 (XmlSerializationWriter_t695994538 * __this, String_t* ___name, String_t* ___ns, Il2CppObject * ___o, bool ___xsiType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteValue(System.String)
extern "C"  void XmlSerializationWriter_WriteValue_m3559834573 (XmlSerializationWriter_t695994538 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteXmlAttribute(System.Xml.XmlNode,System.Object)
extern "C"  void XmlSerializationWriter_WriteXmlAttribute_m1896116654 (XmlSerializationWriter_t695994538 * __this, XmlNode_t3592213601 * ___node, Il2CppObject * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriter::WriteXsiType(System.String,System.String)
extern "C"  void XmlSerializationWriter_WriteXsiType_m683694514 (XmlSerializationWriter_t695994538 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
