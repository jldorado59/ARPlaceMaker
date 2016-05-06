#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.HttpWebRequest
struct HttpWebRequest_t171953869;
// System.String
struct String_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1099177929;
// System.Version
struct Version_t497901645;
// System.IO.Stream
struct Stream_t219029575;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebConnectionData
struct  WebConnectionData_t3246245734  : public Il2CppObject
{
public:
	// System.Net.HttpWebRequest System.Net.WebConnectionData::request
	HttpWebRequest_t171953869 * ___request_0;
	// System.Int32 System.Net.WebConnectionData::StatusCode
	int32_t ___StatusCode_1;
	// System.String System.Net.WebConnectionData::StatusDescription
	String_t* ___StatusDescription_2;
	// System.Net.WebHeaderCollection System.Net.WebConnectionData::Headers
	WebHeaderCollection_t1099177929 * ___Headers_3;
	// System.Version System.Net.WebConnectionData::Version
	Version_t497901645 * ___Version_4;
	// System.IO.Stream System.Net.WebConnectionData::stream
	Stream_t219029575 * ___stream_5;
	// System.String System.Net.WebConnectionData::Challenge
	String_t* ___Challenge_6;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(WebConnectionData_t3246245734, ___request_0)); }
	inline HttpWebRequest_t171953869 * get_request_0() const { return ___request_0; }
	inline HttpWebRequest_t171953869 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(HttpWebRequest_t171953869 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier(&___request_0, value);
	}

	inline static int32_t get_offset_of_StatusCode_1() { return static_cast<int32_t>(offsetof(WebConnectionData_t3246245734, ___StatusCode_1)); }
	inline int32_t get_StatusCode_1() const { return ___StatusCode_1; }
	inline int32_t* get_address_of_StatusCode_1() { return &___StatusCode_1; }
	inline void set_StatusCode_1(int32_t value)
	{
		___StatusCode_1 = value;
	}

	inline static int32_t get_offset_of_StatusDescription_2() { return static_cast<int32_t>(offsetof(WebConnectionData_t3246245734, ___StatusDescription_2)); }
	inline String_t* get_StatusDescription_2() const { return ___StatusDescription_2; }
	inline String_t** get_address_of_StatusDescription_2() { return &___StatusDescription_2; }
	inline void set_StatusDescription_2(String_t* value)
	{
		___StatusDescription_2 = value;
		Il2CppCodeGenWriteBarrier(&___StatusDescription_2, value);
	}

	inline static int32_t get_offset_of_Headers_3() { return static_cast<int32_t>(offsetof(WebConnectionData_t3246245734, ___Headers_3)); }
	inline WebHeaderCollection_t1099177929 * get_Headers_3() const { return ___Headers_3; }
	inline WebHeaderCollection_t1099177929 ** get_address_of_Headers_3() { return &___Headers_3; }
	inline void set_Headers_3(WebHeaderCollection_t1099177929 * value)
	{
		___Headers_3 = value;
		Il2CppCodeGenWriteBarrier(&___Headers_3, value);
	}

	inline static int32_t get_offset_of_Version_4() { return static_cast<int32_t>(offsetof(WebConnectionData_t3246245734, ___Version_4)); }
	inline Version_t497901645 * get_Version_4() const { return ___Version_4; }
	inline Version_t497901645 ** get_address_of_Version_4() { return &___Version_4; }
	inline void set_Version_4(Version_t497901645 * value)
	{
		___Version_4 = value;
		Il2CppCodeGenWriteBarrier(&___Version_4, value);
	}

	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(WebConnectionData_t3246245734, ___stream_5)); }
	inline Stream_t219029575 * get_stream_5() const { return ___stream_5; }
	inline Stream_t219029575 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t219029575 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier(&___stream_5, value);
	}

	inline static int32_t get_offset_of_Challenge_6() { return static_cast<int32_t>(offsetof(WebConnectionData_t3246245734, ___Challenge_6)); }
	inline String_t* get_Challenge_6() const { return ___Challenge_6; }
	inline String_t** get_address_of_Challenge_6() { return &___Challenge_6; }
	inline void set_Challenge_6(String_t* value)
	{
		___Challenge_6 = value;
		Il2CppCodeGenWriteBarrier(&___Challenge_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
