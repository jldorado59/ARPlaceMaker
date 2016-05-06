#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Xml.Serialization.XmlTypeMapMemberAttribute[]
struct XmlTypeMapMemberAttributeU5BU5D_t3583281944;
// System.Xml.Serialization.XmlTypeMapElementInfo[]
struct XmlTypeMapElementInfoU5BU5D_t3505402448;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t2899433779;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute
struct XmlTypeMapMemberAnyAttribute_t576758419;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces
struct XmlTypeMapMemberNamespaces_t1473492027;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t757519331;

#include "System_Xml_System_Xml_Serialization_ObjectMap669501211.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.ClassMap
struct  ClassMap_t912207490  : public ObjectMap_t669501211
{
public:
	// System.Collections.Hashtable System.Xml.Serialization.ClassMap::_elements
	Hashtable_t3875263730 * ____elements_0;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_elementMembers
	ArrayList_t2121638921 * ____elementMembers_1;
	// System.Collections.Hashtable System.Xml.Serialization.ClassMap::_attributeMembers
	Hashtable_t3875263730 * ____attributeMembers_2;
	// System.Xml.Serialization.XmlTypeMapMemberAttribute[] System.Xml.Serialization.ClassMap::_attributeMembersArray
	XmlTypeMapMemberAttributeU5BU5D_t3583281944* ____attributeMembersArray_3;
	// System.Xml.Serialization.XmlTypeMapElementInfo[] System.Xml.Serialization.ClassMap::_elementsByIndex
	XmlTypeMapElementInfoU5BU5D_t3505402448* ____elementsByIndex_4;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_flatLists
	ArrayList_t2121638921 * ____flatLists_5;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_allMembers
	ArrayList_t2121638921 * ____allMembers_6;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_membersWithDefault
	ArrayList_t2121638921 * ____membersWithDefault_7;
	// System.Collections.ArrayList System.Xml.Serialization.ClassMap::_listMembers
	ArrayList_t2121638921 * ____listMembers_8;
	// System.Xml.Serialization.XmlTypeMapMemberAnyElement System.Xml.Serialization.ClassMap::_defaultAnyElement
	XmlTypeMapMemberAnyElement_t2899433779 * ____defaultAnyElement_9;
	// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute System.Xml.Serialization.ClassMap::_defaultAnyAttribute
	XmlTypeMapMemberAnyAttribute_t576758419 * ____defaultAnyAttribute_10;
	// System.Xml.Serialization.XmlTypeMapMemberNamespaces System.Xml.Serialization.ClassMap::_namespaceDeclarations
	XmlTypeMapMemberNamespaces_t1473492027 * ____namespaceDeclarations_11;
	// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::_xmlTextCollector
	XmlTypeMapMember_t757519331 * ____xmlTextCollector_12;
	// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::_returnMember
	XmlTypeMapMember_t757519331 * ____returnMember_13;
	// System.Boolean System.Xml.Serialization.ClassMap::_ignoreMemberNamespace
	bool ____ignoreMemberNamespace_14;
	// System.Boolean System.Xml.Serialization.ClassMap::_canBeSimpleType
	bool ____canBeSimpleType_15;

public:
	inline static int32_t get_offset_of__elements_0() { return static_cast<int32_t>(offsetof(ClassMap_t912207490, ____elements_0)); }
	inline Hashtable_t3875263730 * get__elements_0() const { return ____elements_0; }
	inline Hashtable_t3875263730 ** get_address_of__elements_0() { return &____elements_0; }
	inline void set__elements_0(Hashtable_t3875263730 * value)
	{
		____elements_0 = value;
		Il2CppCodeGenWriteBarrier(&____elements_0, value);
	}

	inline static int32_t get_offset_of__elementMembers_1() { return static_cast<int32_t>(offsetof(ClassMap_t912207490, ____elementMembers_1)); }
	inline ArrayList_t2121638921 * get__elementMembers_1() const { return ____elementMembers_1; }
	inline ArrayList_t2121638921 ** get_address_of__elementMembers_1() { return &____elementMembers_1; }
	inline void set__elementMembers_1(ArrayList_t2121638921 * value)
	{
		____elementMembers_1 = value;
		Il2CppCodeGenWriteBarrier(&____elementMembers_1, value);
	}

	inline static int32_t get_offset_of__attributeMembers_2() { return static_cast<int32_t>(offsetof(ClassMap_t912207490, ____attributeMembers_2)); }
	inline Hashtable_t3875263730 * get__attributeMembers_2() const { return ____attributeMembers_2; }
	inline Hashtable_t3875263730 ** get_address_of__attributeMembers_2() { return &____attributeMembers_2; }
	inline void set__attributeMembers_2(Hashtable_t3875263730 * value)
	{
		____attributeMembers_2 = value;
		Il2CppCodeGenWriteBarrier(&____attributeMembers_2, value);
	}

	inline static int32_t get_offset_of__attributeMembersArray_3() { return static_cast<int32_t>(offsetof(ClassMap_t912207490, ____attributeMembersArray_3)); }
	inline XmlTypeMapMemberAttributeU5BU5D_t3583281944* get__attributeMembersArray_3() const { return ____attributeMembersArray_3; }
	inline XmlTypeMapMemberAttributeU5BU5D_t3583281944** get_address_of__attributeMembersArray_3() { return &____attributeMembersArray_3; }
	inline void set__attributeMembersArray_3(XmlTypeMapMemberAttributeU5BU5D_t3583281944* value)
	{
		____attributeMembersArray_3 = value;
		Il2CppCodeGenWriteBarrier(&____attributeMembersArray_3, value);
	}

	inline static int32_t get_offset_of__elementsByIndex_4() { return static_cast<int32_t>(offsetof(ClassMap_t912207490, ____elementsByIndex_4)); }
	inline XmlTypeMapElementInfoU5BU5D_t3505402448* get__elementsByIndex_4() const { return ____elementsByIndex_4; }
	inline XmlTypeMapElementInfoU5BU5D_t3505402448** get_address_of__elementsByIndex_4() { return &____elementsByIndex_4; }
	inline void set__elementsByIndex_4(XmlTypeMapElementInfoU5BU5D_t3505402448* value)
	{
		____elementsByIndex_4 = value;
		Il2CppCodeGenWriteBarrier(&____elementsByIndex_4, value);
	}

	inline static int32_t get_offset_of__flatLists_5() { return static_cast<int32_t>(offsetof(ClassMap_t912207490, ____flatLists_5)); }
	inline ArrayList_t2121638921 * get__flatLists_5() const { return ____flatLists_5; }
	inline ArrayList_t2121638921 ** get_address_of__flatLists_5() { return &____flatLists_5; }
	inline void set__flatLists_5(ArrayList_t2121638921 * value)
	{
		____flatLists_5 = value;
		Il2CppCodeGenWriteBarrier(&____flatLists_5, value);
	}

	inline static int32_t get_offset_of__allMembers_6() { return static_cast<int32_t>(offsetof(ClassMap_t912207490, ____allMembers_6)); }
	inline ArrayList_t2121638921 * get__allMembers_6() const { return ____allMembers_6; }
	inline ArrayList_t2121638921 ** get_address_of__allMembers_6() { return &____allMembers_6; }
	inline void set__allMembers_6(ArrayList_t2121638921 * value)
	{
		____allMembers_6 = value;
		Il2CppCodeGenWriteBarrier(&____allMembers_6, value);
	}

	inline static int32_t get_offset_of__membersWithDefault_7() { return static_cast<int32_t>(offsetof(ClassMap_t912207490, ____membersWithDefault_7)); }
	inline ArrayList_t2121638921 * get__membersWithDefault_7() const { return ____membersWithDefault_7; }
	inline ArrayList_t2121638921 ** get_address_of__membersWithDefault_7() { return &____membersWithDefault_7; }
	inline void set__membersWithDefault_7(ArrayList_t2121638921 * value)
	{
		____membersWithDefault_7 = value;
		Il2CppCodeGenWriteBarrier(&____membersWithDefault_7, value);
	}

	inline static int32_t get_offset_of__listMembers_8() { return static_cast<int32_t>(offsetof(ClassMap_t912207490, ____listMembers_8)); }
	inline ArrayList_t2121638921 * get__listMembers_8() const { return ____listMembers_8; }
	inline ArrayList_t2121638921 ** get_address_of__listMembers_8() { return &____listMembers_8; }
	inline void set__listMembers_8(ArrayList_t2121638921 * value)
	{
		____listMembers_8 = value;
		Il2CppCodeGenWriteBarrier(&____listMembers_8, value);
	}

	inline static int32_t get_offset_of__defaultAnyElement_9() { return static_cast<int32_t>(offsetof(ClassMap_t912207490, ____defaultAnyElement_9)); }
	inline XmlTypeMapMemberAnyElement_t2899433779 * get__defaultAnyElement_9() const { return ____defaultAnyElement_9; }
	inline XmlTypeMapMemberAnyElement_t2899433779 ** get_address_of__defaultAnyElement_9() { return &____defaultAnyElement_9; }
	inline void set__defaultAnyElement_9(XmlTypeMapMemberAnyElement_t2899433779 * value)
	{
		____defaultAnyElement_9 = value;
		Il2CppCodeGenWriteBarrier(&____defaultAnyElement_9, value);
	}

	inline static int32_t get_offset_of__defaultAnyAttribute_10() { return static_cast<int32_t>(offsetof(ClassMap_t912207490, ____defaultAnyAttribute_10)); }
	inline XmlTypeMapMemberAnyAttribute_t576758419 * get__defaultAnyAttribute_10() const { return ____defaultAnyAttribute_10; }
	inline XmlTypeMapMemberAnyAttribute_t576758419 ** get_address_of__defaultAnyAttribute_10() { return &____defaultAnyAttribute_10; }
	inline void set__defaultAnyAttribute_10(XmlTypeMapMemberAnyAttribute_t576758419 * value)
	{
		____defaultAnyAttribute_10 = value;
		Il2CppCodeGenWriteBarrier(&____defaultAnyAttribute_10, value);
	}

	inline static int32_t get_offset_of__namespaceDeclarations_11() { return static_cast<int32_t>(offsetof(ClassMap_t912207490, ____namespaceDeclarations_11)); }
	inline XmlTypeMapMemberNamespaces_t1473492027 * get__namespaceDeclarations_11() const { return ____namespaceDeclarations_11; }
	inline XmlTypeMapMemberNamespaces_t1473492027 ** get_address_of__namespaceDeclarations_11() { return &____namespaceDeclarations_11; }
	inline void set__namespaceDeclarations_11(XmlTypeMapMemberNamespaces_t1473492027 * value)
	{
		____namespaceDeclarations_11 = value;
		Il2CppCodeGenWriteBarrier(&____namespaceDeclarations_11, value);
	}

	inline static int32_t get_offset_of__xmlTextCollector_12() { return static_cast<int32_t>(offsetof(ClassMap_t912207490, ____xmlTextCollector_12)); }
	inline XmlTypeMapMember_t757519331 * get__xmlTextCollector_12() const { return ____xmlTextCollector_12; }
	inline XmlTypeMapMember_t757519331 ** get_address_of__xmlTextCollector_12() { return &____xmlTextCollector_12; }
	inline void set__xmlTextCollector_12(XmlTypeMapMember_t757519331 * value)
	{
		____xmlTextCollector_12 = value;
		Il2CppCodeGenWriteBarrier(&____xmlTextCollector_12, value);
	}

	inline static int32_t get_offset_of__returnMember_13() { return static_cast<int32_t>(offsetof(ClassMap_t912207490, ____returnMember_13)); }
	inline XmlTypeMapMember_t757519331 * get__returnMember_13() const { return ____returnMember_13; }
	inline XmlTypeMapMember_t757519331 ** get_address_of__returnMember_13() { return &____returnMember_13; }
	inline void set__returnMember_13(XmlTypeMapMember_t757519331 * value)
	{
		____returnMember_13 = value;
		Il2CppCodeGenWriteBarrier(&____returnMember_13, value);
	}

	inline static int32_t get_offset_of__ignoreMemberNamespace_14() { return static_cast<int32_t>(offsetof(ClassMap_t912207490, ____ignoreMemberNamespace_14)); }
	inline bool get__ignoreMemberNamespace_14() const { return ____ignoreMemberNamespace_14; }
	inline bool* get_address_of__ignoreMemberNamespace_14() { return &____ignoreMemberNamespace_14; }
	inline void set__ignoreMemberNamespace_14(bool value)
	{
		____ignoreMemberNamespace_14 = value;
	}

	inline static int32_t get_offset_of__canBeSimpleType_15() { return static_cast<int32_t>(offsetof(ClassMap_t912207490, ____canBeSimpleType_15)); }
	inline bool get__canBeSimpleType_15() const { return ____canBeSimpleType_15; }
	inline bool* get_address_of__canBeSimpleType_15() { return &____canBeSimpleType_15; }
	inline void set__canBeSimpleType_15(bool value)
	{
		____canBeSimpleType_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
