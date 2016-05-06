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

// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t540589306;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t1888860807;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Xml.XmlDocument
struct XmlDocument_t3705263098;
// System.Xml.Serialization.XmlSerializationReader/CollectionFixup
struct CollectionFixup_t40072530;
// System.Xml.Serialization.XmlSerializationReader/Fixup
struct Fixup_t67893584;
// System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup
struct CollectionItemFixup_t3301129471;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlSerializationReadCallback
struct XmlSerializationReadCallback_t3159962994;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1967233988;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Array
struct Il2CppArray;
// System.Xml.XmlAttribute
struct XmlAttribute_t2022155821;
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo
struct WriteCallbackInfo_t2990892018;
// System.Xml.Serialization.IXmlSerializable
struct IXmlSerializable_t1192716491;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Xml.XmlElement
struct XmlElement_t3562928333;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializer1888860807.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"
#include "System_Xml_System_Xml_Serialization_XmlSerialization40072530.h"
#include "System_Xml_System_Xml_Serialization_XmlSerialization67893584.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializati3301129471.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializati3159962994.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_XmlQualifiedName176365656.h"
#include "mscorlib_System_Array2840145358.h"
#include "System_Xml_System_Xml_XmlAttribute2022155821.h"
#include "System_Xml_System_Xml_XmlElement3562928333.h"
#include "System_Xml_System_Xml_XmlNode3592213601.h"

// System.Void System.Xml.Serialization.XmlSerializationReader::.ctor()
extern "C"  void XmlSerializationReader__ctor_m3070874705 (XmlSerializationReader_t540589306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::Initialize(System.Xml.XmlReader,System.Xml.Serialization.XmlSerializer)
extern "C"  void XmlSerializationReader_Initialize_m1765380850 (XmlSerializationReader_t540589306 * __this, XmlReader_t4229084514 * ___reader, XmlSerializer_t1888860807 * ___eventSource, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationReader::EnsureArrayList(System.Collections.ArrayList)
extern "C"  ArrayList_t2121638921 * XmlSerializationReader_EnsureArrayList_m2619649467 (XmlSerializationReader_t540589306 * __this, ArrayList_t2121638921 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::EnsureHashtable(System.Collections.Hashtable)
extern "C"  Hashtable_t3875263730 * XmlSerializationReader_EnsureHashtable_m237487890 (XmlSerializationReader_t540589306 * __this, Hashtable_t3875263730 * ___hash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::get_Document()
extern "C"  XmlDocument_t3705263098 * XmlSerializationReader_get_Document_m483267938 (XmlSerializationReader_t540589306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.Serialization.XmlSerializationReader::get_Reader()
extern "C"  XmlReader_t4229084514 * XmlSerializationReader_get_Reader_m330992306 (XmlSerializationReader_t540589306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/CollectionFixup)
extern "C"  void XmlSerializationReader_AddFixup_m2940395357 (XmlSerializationReader_t540589306 * __this, CollectionFixup_t40072530 * ___fixup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/Fixup)
extern "C"  void XmlSerializationReader_AddFixup_m3636976287 (XmlSerializationReader_t540589306 * __this, Fixup_t67893584 * ___fixup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup)
extern "C"  void XmlSerializationReader_AddFixup_m617708112 (XmlSerializationReader_t540589306 * __this, CollectionItemFixup_t3301129471 * ___fixup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddReadCallback(System.String,System.String,System.Type,System.Xml.Serialization.XmlSerializationReadCallback)
extern "C"  void XmlSerializationReader_AddReadCallback_m511534794 (XmlSerializationReader_t540589306 * __this, String_t* ___name, String_t* ___ns, Type_t * ___type, XmlSerializationReadCallback_t3159962994 * ___read, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddTarget(System.String,System.Object)
extern "C"  void XmlSerializationReader_AddTarget_m1979745839 (XmlSerializationReader_t540589306 * __this, String_t* ___id, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::CurrentTag()
extern "C"  String_t* XmlSerializationReader_CurrentTag_m4137523889 (XmlSerializationReader_t540589306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateReadOnlyCollectionException(System.String)
extern "C"  Exception_t1967233988 * XmlSerializationReader_CreateReadOnlyCollectionException_m494995583 (XmlSerializationReader_t540589306 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownConstantException(System.String,System.Type)
extern "C"  Exception_t1967233988 * XmlSerializationReader_CreateUnknownConstantException_m262637350 (XmlSerializationReader_t540589306 * __this, String_t* ___value, Type_t * ___enumType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownNodeException()
extern "C"  Exception_t1967233988 * XmlSerializationReader_CreateUnknownNodeException_m2252572497 (XmlSerializationReader_t540589306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownTypeException(System.Xml.XmlQualifiedName)
extern "C"  Exception_t1967233988 * XmlSerializationReader_CreateUnknownTypeException_m3019837971 (XmlSerializationReader_t540589306 * __this, XmlQualifiedName_t176365656 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Xml.Serialization.XmlSerializationReader::EnsureArrayIndex(System.Array,System.Int32,System.Type)
extern "C"  Il2CppArray * XmlSerializationReader_EnsureArrayIndex_m1200206641 (XmlSerializationReader_t540589306 * __this, Il2CppArray * ___a, int32_t ___index, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::GetNullAttr()
extern "C"  bool XmlSerializationReader_GetNullAttr_m2906457349 (XmlSerializationReader_t540589306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::GetTarget(System.String)
extern "C"  Il2CppObject * XmlSerializationReader_GetTarget_m2963915255 (XmlSerializationReader_t540589306 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::TargetReady(System.String)
extern "C"  bool XmlSerializationReader_TargetReady_m1277422745 (XmlSerializationReader_t540589306 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::GetXsiType()
extern "C"  XmlQualifiedName_t176365656 * XmlSerializationReader_GetXsiType_m305667192 (XmlSerializationReader_t540589306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::IsXmlnsAttribute(System.String)
extern "C"  bool XmlSerializationReader_IsXmlnsAttribute_m2409816365 (XmlSerializationReader_t540589306 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ParseWsdlArrayType(System.Xml.XmlAttribute)
extern "C"  void XmlSerializationReader_ParseWsdlArrayType_m82075816 (XmlSerializationReader_t540589306 * __this, XmlAttribute_t2022155821 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ReadElementQualifiedName()
extern "C"  XmlQualifiedName_t176365656 * XmlSerializationReader_ReadElementQualifiedName_m646822247 (XmlSerializationReader_t540589306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ReadEndElement()
extern "C"  void XmlSerializationReader_ReadEndElement_m3127481962 (XmlSerializationReader_t540589306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::ReadNull()
extern "C"  bool XmlSerializationReader_ReadNull_m1989574600 (XmlSerializationReader_t540589306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ReadNullableQualifiedName()
extern "C"  XmlQualifiedName_t176365656 * XmlSerializationReader_ReadNullableQualifiedName_m4264043212 (XmlSerializationReader_t540589306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::ReadNullableString()
extern "C"  String_t* XmlSerializationReader_ReadNullableString_m2696644760 (XmlSerializationReader_t540589306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencedElement()
extern "C"  Il2CppObject * XmlSerializationReader_ReadReferencedElement_m2806902705 (XmlSerializationReader_t540589306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo System.Xml.Serialization.XmlSerializationReader::GetCallbackInfo(System.Xml.XmlQualifiedName)
extern "C"  WriteCallbackInfo_t2990892018 * XmlSerializationReader_GetCallbackInfo_m2661582612 (XmlSerializationReader_t540589306 * __this, XmlQualifiedName_t176365656 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencedElement(System.String,System.String)
extern "C"  Il2CppObject * XmlSerializationReader_ReadReferencedElement_m2060068205 (XmlSerializationReader_t540589306 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::ReadList(System.Object&)
extern "C"  bool XmlSerializationReader_ReadList_m1199345559 (XmlSerializationReader_t540589306 * __this, Il2CppObject ** ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ReadReferencedElements()
extern "C"  void XmlSerializationReader_ReadReferencedElements_m1322468249 (XmlSerializationReader_t540589306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String&)
extern "C"  Il2CppObject * XmlSerializationReader_ReadReferencingElement_m3478666258 (XmlSerializationReader_t540589306 * __this, String_t** ___fixupReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String,System.String,System.String&)
extern "C"  Il2CppObject * XmlSerializationReader_ReadReferencingElement_m1454141082 (XmlSerializationReader_t540589306 * __this, String_t* ___name, String_t* ___ns, String_t** ___fixupReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String,System.String,System.Boolean,System.String&)
extern "C"  Il2CppObject * XmlSerializationReader_ReadReferencingElement_m908438825 (XmlSerializationReader_t540589306 * __this, String_t* ___name, String_t* ___ns, bool ___elementCanBeType, String_t** ___fixupReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.IXmlSerializable System.Xml.Serialization.XmlSerializationReader::ReadSerializable(System.Xml.Serialization.IXmlSerializable)
extern "C"  Il2CppObject * XmlSerializationReader_ReadSerializable_m3446020923 (XmlSerializationReader_t540589306 * __this, Il2CppObject * ___serializable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::ReadString(System.String)
extern "C"  String_t* XmlSerializationReader_ReadString_m3136532811 (XmlSerializationReader_t540589306 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadTypedPrimitive(System.Xml.XmlQualifiedName)
extern "C"  Il2CppObject * XmlSerializationReader_ReadTypedPrimitive_m827243227 (XmlSerializationReader_t540589306 * __this, XmlQualifiedName_t176365656 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadTypedPrimitive(System.Xml.XmlQualifiedName,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReader_ReadTypedPrimitive_m1194272578 (XmlSerializationReader_t540589306 * __this, XmlQualifiedName_t176365656 * ___qname, bool ___reportUnknown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.Serialization.XmlSerializationReader::ReadXmlNode(System.Boolean)
extern "C"  XmlNode_t3592213601 * XmlSerializationReader_ReadXmlNode_m2066466327 (XmlSerializationReader_t540589306 * __this, bool ___wrapped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::ReadXmlDocument(System.Boolean)
extern "C"  XmlDocument_t3705263098 * XmlSerializationReader_ReadXmlDocument_m365015991 (XmlSerializationReader_t540589306 * __this, bool ___wrapped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Xml.Serialization.XmlSerializationReader::ShrinkArray(System.Array,System.Int32,System.Type,System.Boolean)
extern "C"  Il2CppArray * XmlSerializationReader_ShrinkArray_m1340798607 (XmlSerializationReader_t540589306 * __this, Il2CppArray * ___a, int32_t ___length, Type_t * ___elementType, bool ___isNullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ToXmlQualifiedName(System.String)
extern "C"  XmlQualifiedName_t176365656 * XmlSerializationReader_ToXmlQualifiedName_m574550865 (XmlSerializationReader_t540589306 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownAttribute(System.Object,System.Xml.XmlAttribute,System.String)
extern "C"  void XmlSerializationReader_UnknownAttribute_m531743740 (XmlSerializationReader_t540589306 * __this, Il2CppObject * ___o, XmlAttribute_t2022155821 * ___attr, String_t* ___qnames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownElement(System.Object,System.Xml.XmlElement,System.String)
extern "C"  void XmlSerializationReader_UnknownElement_m2212366844 (XmlSerializationReader_t540589306 * __this, Il2CppObject * ___o, XmlElement_t3562928333 * ___elem, String_t* ___qnames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownNode(System.Object)
extern "C"  void XmlSerializationReader_UnknownNode_m3502370841 (XmlSerializationReader_t540589306 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownNode(System.Object,System.String)
extern "C"  void XmlSerializationReader_UnknownNode_m1971615893 (XmlSerializationReader_t540589306 * __this, Il2CppObject * ___o, String_t* ___qnames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::OnUnknownNode(System.Xml.XmlNode,System.Object,System.String)
extern "C"  void XmlSerializationReader_OnUnknownNode_m974550115 (XmlSerializationReader_t540589306 * __this, XmlNode_t3592213601 * ___node, Il2CppObject * ___o, String_t* ___qnames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnreferencedObject(System.String,System.Object)
extern "C"  void XmlSerializationReader_UnreferencedObject_m605135116 (XmlSerializationReader_t540589306 * __this, String_t* ___id, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
