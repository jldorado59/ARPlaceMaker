#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// System.String
struct String_t;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t605667718;

#include "System_Xml_Mono_Xml_DTDNode1733424026.h"
#include "System_Xml_Mono_Xml_DTDContentOrderType2313699015.h"
#include "System_Xml_Mono_Xml_DTDOccurence3238327079.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDContentModel
struct  DTDContentModel_t1462496200  : public DTDNode_t1733424026
{
public:
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDContentModel::root
	DTDObjectModel_t709926554 * ___root_5;
	// System.String Mono.Xml.DTDContentModel::ownerElementName
	String_t* ___ownerElementName_6;
	// System.String Mono.Xml.DTDContentModel::elementName
	String_t* ___elementName_7;
	// Mono.Xml.DTDContentOrderType Mono.Xml.DTDContentModel::orderType
	int32_t ___orderType_8;
	// Mono.Xml.DTDContentModelCollection Mono.Xml.DTDContentModel::childModels
	DTDContentModelCollection_t605667718 * ___childModels_9;
	// Mono.Xml.DTDOccurence Mono.Xml.DTDContentModel::occurence
	int32_t ___occurence_10;

public:
	inline static int32_t get_offset_of_root_5() { return static_cast<int32_t>(offsetof(DTDContentModel_t1462496200, ___root_5)); }
	inline DTDObjectModel_t709926554 * get_root_5() const { return ___root_5; }
	inline DTDObjectModel_t709926554 ** get_address_of_root_5() { return &___root_5; }
	inline void set_root_5(DTDObjectModel_t709926554 * value)
	{
		___root_5 = value;
		Il2CppCodeGenWriteBarrier(&___root_5, value);
	}

	inline static int32_t get_offset_of_ownerElementName_6() { return static_cast<int32_t>(offsetof(DTDContentModel_t1462496200, ___ownerElementName_6)); }
	inline String_t* get_ownerElementName_6() const { return ___ownerElementName_6; }
	inline String_t** get_address_of_ownerElementName_6() { return &___ownerElementName_6; }
	inline void set_ownerElementName_6(String_t* value)
	{
		___ownerElementName_6 = value;
		Il2CppCodeGenWriteBarrier(&___ownerElementName_6, value);
	}

	inline static int32_t get_offset_of_elementName_7() { return static_cast<int32_t>(offsetof(DTDContentModel_t1462496200, ___elementName_7)); }
	inline String_t* get_elementName_7() const { return ___elementName_7; }
	inline String_t** get_address_of_elementName_7() { return &___elementName_7; }
	inline void set_elementName_7(String_t* value)
	{
		___elementName_7 = value;
		Il2CppCodeGenWriteBarrier(&___elementName_7, value);
	}

	inline static int32_t get_offset_of_orderType_8() { return static_cast<int32_t>(offsetof(DTDContentModel_t1462496200, ___orderType_8)); }
	inline int32_t get_orderType_8() const { return ___orderType_8; }
	inline int32_t* get_address_of_orderType_8() { return &___orderType_8; }
	inline void set_orderType_8(int32_t value)
	{
		___orderType_8 = value;
	}

	inline static int32_t get_offset_of_childModels_9() { return static_cast<int32_t>(offsetof(DTDContentModel_t1462496200, ___childModels_9)); }
	inline DTDContentModelCollection_t605667718 * get_childModels_9() const { return ___childModels_9; }
	inline DTDContentModelCollection_t605667718 ** get_address_of_childModels_9() { return &___childModels_9; }
	inline void set_childModels_9(DTDContentModelCollection_t605667718 * value)
	{
		___childModels_9 = value;
		Il2CppCodeGenWriteBarrier(&___childModels_9, value);
	}

	inline static int32_t get_offset_of_occurence_10() { return static_cast<int32_t>(offsetof(DTDContentModel_t1462496200, ___occurence_10)); }
	inline int32_t get_occurence_10() const { return ___occurence_10; }
	inline int32_t* get_address_of_occurence_10() { return &___occurence_10; }
	inline void set_occurence_10(int32_t value)
	{
		___occurence_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
