#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t2001760042;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t2951978932;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t733492145;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t457236420;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t4226410245;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t3011202374;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Xml.XmlResolver
struct XmlResolver_t2502213349;
// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDObjectModel
struct  DTDObjectModel_t709926554  : public Il2CppObject
{
public:
	// Mono.Xml.DTDAutomataFactory Mono.Xml.DTDObjectModel::factory
	DTDAutomataFactory_t2001760042 * ___factory_0;
	// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::elementDecls
	DTDElementDeclarationCollection_t2951978932 * ___elementDecls_1;
	// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::attListDecls
	DTDAttListDeclarationCollection_t733492145 * ___attListDecls_2;
	// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::peDecls
	DTDParameterEntityDeclarationCollection_t457236420 * ___peDecls_3;
	// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::entityDecls
	DTDEntityDeclarationCollection_t4226410245 * ___entityDecls_4;
	// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::notationDecls
	DTDNotationDeclarationCollection_t3011202374 * ___notationDecls_5;
	// System.Collections.ArrayList Mono.Xml.DTDObjectModel::validationErrors
	ArrayList_t2121638921 * ___validationErrors_6;
	// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::resolver
	XmlResolver_t2502213349 * ___resolver_7;
	// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::nameTable
	XmlNameTable_t3232213908 * ___nameTable_8;
	// System.Collections.Hashtable Mono.Xml.DTDObjectModel::externalResources
	Hashtable_t3875263730 * ___externalResources_9;
	// System.String Mono.Xml.DTDObjectModel::baseURI
	String_t* ___baseURI_10;
	// System.String Mono.Xml.DTDObjectModel::name
	String_t* ___name_11;
	// System.String Mono.Xml.DTDObjectModel::publicId
	String_t* ___publicId_12;
	// System.String Mono.Xml.DTDObjectModel::systemId
	String_t* ___systemId_13;
	// System.String Mono.Xml.DTDObjectModel::intSubset
	String_t* ___intSubset_14;
	// System.Boolean Mono.Xml.DTDObjectModel::intSubsetHasPERef
	bool ___intSubsetHasPERef_15;
	// System.Boolean Mono.Xml.DTDObjectModel::isStandalone
	bool ___isStandalone_16;
	// System.Int32 Mono.Xml.DTDObjectModel::lineNumber
	int32_t ___lineNumber_17;
	// System.Int32 Mono.Xml.DTDObjectModel::linePosition
	int32_t ___linePosition_18;

public:
	inline static int32_t get_offset_of_factory_0() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___factory_0)); }
	inline DTDAutomataFactory_t2001760042 * get_factory_0() const { return ___factory_0; }
	inline DTDAutomataFactory_t2001760042 ** get_address_of_factory_0() { return &___factory_0; }
	inline void set_factory_0(DTDAutomataFactory_t2001760042 * value)
	{
		___factory_0 = value;
		Il2CppCodeGenWriteBarrier(&___factory_0, value);
	}

	inline static int32_t get_offset_of_elementDecls_1() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___elementDecls_1)); }
	inline DTDElementDeclarationCollection_t2951978932 * get_elementDecls_1() const { return ___elementDecls_1; }
	inline DTDElementDeclarationCollection_t2951978932 ** get_address_of_elementDecls_1() { return &___elementDecls_1; }
	inline void set_elementDecls_1(DTDElementDeclarationCollection_t2951978932 * value)
	{
		___elementDecls_1 = value;
		Il2CppCodeGenWriteBarrier(&___elementDecls_1, value);
	}

	inline static int32_t get_offset_of_attListDecls_2() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___attListDecls_2)); }
	inline DTDAttListDeclarationCollection_t733492145 * get_attListDecls_2() const { return ___attListDecls_2; }
	inline DTDAttListDeclarationCollection_t733492145 ** get_address_of_attListDecls_2() { return &___attListDecls_2; }
	inline void set_attListDecls_2(DTDAttListDeclarationCollection_t733492145 * value)
	{
		___attListDecls_2 = value;
		Il2CppCodeGenWriteBarrier(&___attListDecls_2, value);
	}

	inline static int32_t get_offset_of_peDecls_3() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___peDecls_3)); }
	inline DTDParameterEntityDeclarationCollection_t457236420 * get_peDecls_3() const { return ___peDecls_3; }
	inline DTDParameterEntityDeclarationCollection_t457236420 ** get_address_of_peDecls_3() { return &___peDecls_3; }
	inline void set_peDecls_3(DTDParameterEntityDeclarationCollection_t457236420 * value)
	{
		___peDecls_3 = value;
		Il2CppCodeGenWriteBarrier(&___peDecls_3, value);
	}

	inline static int32_t get_offset_of_entityDecls_4() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___entityDecls_4)); }
	inline DTDEntityDeclarationCollection_t4226410245 * get_entityDecls_4() const { return ___entityDecls_4; }
	inline DTDEntityDeclarationCollection_t4226410245 ** get_address_of_entityDecls_4() { return &___entityDecls_4; }
	inline void set_entityDecls_4(DTDEntityDeclarationCollection_t4226410245 * value)
	{
		___entityDecls_4 = value;
		Il2CppCodeGenWriteBarrier(&___entityDecls_4, value);
	}

	inline static int32_t get_offset_of_notationDecls_5() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___notationDecls_5)); }
	inline DTDNotationDeclarationCollection_t3011202374 * get_notationDecls_5() const { return ___notationDecls_5; }
	inline DTDNotationDeclarationCollection_t3011202374 ** get_address_of_notationDecls_5() { return &___notationDecls_5; }
	inline void set_notationDecls_5(DTDNotationDeclarationCollection_t3011202374 * value)
	{
		___notationDecls_5 = value;
		Il2CppCodeGenWriteBarrier(&___notationDecls_5, value);
	}

	inline static int32_t get_offset_of_validationErrors_6() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___validationErrors_6)); }
	inline ArrayList_t2121638921 * get_validationErrors_6() const { return ___validationErrors_6; }
	inline ArrayList_t2121638921 ** get_address_of_validationErrors_6() { return &___validationErrors_6; }
	inline void set_validationErrors_6(ArrayList_t2121638921 * value)
	{
		___validationErrors_6 = value;
		Il2CppCodeGenWriteBarrier(&___validationErrors_6, value);
	}

	inline static int32_t get_offset_of_resolver_7() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___resolver_7)); }
	inline XmlResolver_t2502213349 * get_resolver_7() const { return ___resolver_7; }
	inline XmlResolver_t2502213349 ** get_address_of_resolver_7() { return &___resolver_7; }
	inline void set_resolver_7(XmlResolver_t2502213349 * value)
	{
		___resolver_7 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_7, value);
	}

	inline static int32_t get_offset_of_nameTable_8() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___nameTable_8)); }
	inline XmlNameTable_t3232213908 * get_nameTable_8() const { return ___nameTable_8; }
	inline XmlNameTable_t3232213908 ** get_address_of_nameTable_8() { return &___nameTable_8; }
	inline void set_nameTable_8(XmlNameTable_t3232213908 * value)
	{
		___nameTable_8 = value;
		Il2CppCodeGenWriteBarrier(&___nameTable_8, value);
	}

	inline static int32_t get_offset_of_externalResources_9() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___externalResources_9)); }
	inline Hashtable_t3875263730 * get_externalResources_9() const { return ___externalResources_9; }
	inline Hashtable_t3875263730 ** get_address_of_externalResources_9() { return &___externalResources_9; }
	inline void set_externalResources_9(Hashtable_t3875263730 * value)
	{
		___externalResources_9 = value;
		Il2CppCodeGenWriteBarrier(&___externalResources_9, value);
	}

	inline static int32_t get_offset_of_baseURI_10() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___baseURI_10)); }
	inline String_t* get_baseURI_10() const { return ___baseURI_10; }
	inline String_t** get_address_of_baseURI_10() { return &___baseURI_10; }
	inline void set_baseURI_10(String_t* value)
	{
		___baseURI_10 = value;
		Il2CppCodeGenWriteBarrier(&___baseURI_10, value);
	}

	inline static int32_t get_offset_of_name_11() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___name_11)); }
	inline String_t* get_name_11() const { return ___name_11; }
	inline String_t** get_address_of_name_11() { return &___name_11; }
	inline void set_name_11(String_t* value)
	{
		___name_11 = value;
		Il2CppCodeGenWriteBarrier(&___name_11, value);
	}

	inline static int32_t get_offset_of_publicId_12() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___publicId_12)); }
	inline String_t* get_publicId_12() const { return ___publicId_12; }
	inline String_t** get_address_of_publicId_12() { return &___publicId_12; }
	inline void set_publicId_12(String_t* value)
	{
		___publicId_12 = value;
		Il2CppCodeGenWriteBarrier(&___publicId_12, value);
	}

	inline static int32_t get_offset_of_systemId_13() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___systemId_13)); }
	inline String_t* get_systemId_13() const { return ___systemId_13; }
	inline String_t** get_address_of_systemId_13() { return &___systemId_13; }
	inline void set_systemId_13(String_t* value)
	{
		___systemId_13 = value;
		Il2CppCodeGenWriteBarrier(&___systemId_13, value);
	}

	inline static int32_t get_offset_of_intSubset_14() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___intSubset_14)); }
	inline String_t* get_intSubset_14() const { return ___intSubset_14; }
	inline String_t** get_address_of_intSubset_14() { return &___intSubset_14; }
	inline void set_intSubset_14(String_t* value)
	{
		___intSubset_14 = value;
		Il2CppCodeGenWriteBarrier(&___intSubset_14, value);
	}

	inline static int32_t get_offset_of_intSubsetHasPERef_15() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___intSubsetHasPERef_15)); }
	inline bool get_intSubsetHasPERef_15() const { return ___intSubsetHasPERef_15; }
	inline bool* get_address_of_intSubsetHasPERef_15() { return &___intSubsetHasPERef_15; }
	inline void set_intSubsetHasPERef_15(bool value)
	{
		___intSubsetHasPERef_15 = value;
	}

	inline static int32_t get_offset_of_isStandalone_16() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___isStandalone_16)); }
	inline bool get_isStandalone_16() const { return ___isStandalone_16; }
	inline bool* get_address_of_isStandalone_16() { return &___isStandalone_16; }
	inline void set_isStandalone_16(bool value)
	{
		___isStandalone_16 = value;
	}

	inline static int32_t get_offset_of_lineNumber_17() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___lineNumber_17)); }
	inline int32_t get_lineNumber_17() const { return ___lineNumber_17; }
	inline int32_t* get_address_of_lineNumber_17() { return &___lineNumber_17; }
	inline void set_lineNumber_17(int32_t value)
	{
		___lineNumber_17 = value;
	}

	inline static int32_t get_offset_of_linePosition_18() { return static_cast<int32_t>(offsetof(DTDObjectModel_t709926554, ___linePosition_18)); }
	inline int32_t get_linePosition_18() const { return ___linePosition_18; }
	inline int32_t* get_address_of_linePosition_18() { return &___linePosition_18; }
	inline void set_linePosition_18(int32_t value)
	{
		___linePosition_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
