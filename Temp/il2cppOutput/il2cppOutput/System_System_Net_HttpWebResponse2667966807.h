#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t2776692961;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1099177929;
// System.Net.CookieCollection
struct CookieCollection_t2006989740;
// System.String
struct String_t;
// System.Version
struct Version_t497901645;
// System.Net.CookieContainer
struct CookieContainer_t3399784903;
// System.IO.Stream
struct Stream_t219029575;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "System_System_Net_WebResponse2411292415.h"
#include "System_System_Net_HttpStatusCode2736938801.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpWebResponse
struct  HttpWebResponse_t2667966807  : public WebResponse_t2411292415
{
public:
	// System.Uri System.Net.HttpWebResponse::uri
	Uri_t2776692961 * ___uri_1;
	// System.Net.WebHeaderCollection System.Net.HttpWebResponse::webHeaders
	WebHeaderCollection_t1099177929 * ___webHeaders_2;
	// System.Net.CookieCollection System.Net.HttpWebResponse::cookieCollection
	CookieCollection_t2006989740 * ___cookieCollection_3;
	// System.String System.Net.HttpWebResponse::method
	String_t* ___method_4;
	// System.Version System.Net.HttpWebResponse::version
	Version_t497901645 * ___version_5;
	// System.Net.HttpStatusCode System.Net.HttpWebResponse::statusCode
	int32_t ___statusCode_6;
	// System.String System.Net.HttpWebResponse::statusDescription
	String_t* ___statusDescription_7;
	// System.Int64 System.Net.HttpWebResponse::contentLength
	int64_t ___contentLength_8;
	// System.String System.Net.HttpWebResponse::contentType
	String_t* ___contentType_9;
	// System.Net.CookieContainer System.Net.HttpWebResponse::cookie_container
	CookieContainer_t3399784903 * ___cookie_container_10;
	// System.Boolean System.Net.HttpWebResponse::disposed
	bool ___disposed_11;
	// System.IO.Stream System.Net.HttpWebResponse::stream
	Stream_t219029575 * ___stream_12;
	// System.String[] System.Net.HttpWebResponse::cookieExpiresFormats
	StringU5BU5D_t2956870243* ___cookieExpiresFormats_13;

public:
	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(HttpWebResponse_t2667966807, ___uri_1)); }
	inline Uri_t2776692961 * get_uri_1() const { return ___uri_1; }
	inline Uri_t2776692961 ** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(Uri_t2776692961 * value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier(&___uri_1, value);
	}

	inline static int32_t get_offset_of_webHeaders_2() { return static_cast<int32_t>(offsetof(HttpWebResponse_t2667966807, ___webHeaders_2)); }
	inline WebHeaderCollection_t1099177929 * get_webHeaders_2() const { return ___webHeaders_2; }
	inline WebHeaderCollection_t1099177929 ** get_address_of_webHeaders_2() { return &___webHeaders_2; }
	inline void set_webHeaders_2(WebHeaderCollection_t1099177929 * value)
	{
		___webHeaders_2 = value;
		Il2CppCodeGenWriteBarrier(&___webHeaders_2, value);
	}

	inline static int32_t get_offset_of_cookieCollection_3() { return static_cast<int32_t>(offsetof(HttpWebResponse_t2667966807, ___cookieCollection_3)); }
	inline CookieCollection_t2006989740 * get_cookieCollection_3() const { return ___cookieCollection_3; }
	inline CookieCollection_t2006989740 ** get_address_of_cookieCollection_3() { return &___cookieCollection_3; }
	inline void set_cookieCollection_3(CookieCollection_t2006989740 * value)
	{
		___cookieCollection_3 = value;
		Il2CppCodeGenWriteBarrier(&___cookieCollection_3, value);
	}

	inline static int32_t get_offset_of_method_4() { return static_cast<int32_t>(offsetof(HttpWebResponse_t2667966807, ___method_4)); }
	inline String_t* get_method_4() const { return ___method_4; }
	inline String_t** get_address_of_method_4() { return &___method_4; }
	inline void set_method_4(String_t* value)
	{
		___method_4 = value;
		Il2CppCodeGenWriteBarrier(&___method_4, value);
	}

	inline static int32_t get_offset_of_version_5() { return static_cast<int32_t>(offsetof(HttpWebResponse_t2667966807, ___version_5)); }
	inline Version_t497901645 * get_version_5() const { return ___version_5; }
	inline Version_t497901645 ** get_address_of_version_5() { return &___version_5; }
	inline void set_version_5(Version_t497901645 * value)
	{
		___version_5 = value;
		Il2CppCodeGenWriteBarrier(&___version_5, value);
	}

	inline static int32_t get_offset_of_statusCode_6() { return static_cast<int32_t>(offsetof(HttpWebResponse_t2667966807, ___statusCode_6)); }
	inline int32_t get_statusCode_6() const { return ___statusCode_6; }
	inline int32_t* get_address_of_statusCode_6() { return &___statusCode_6; }
	inline void set_statusCode_6(int32_t value)
	{
		___statusCode_6 = value;
	}

	inline static int32_t get_offset_of_statusDescription_7() { return static_cast<int32_t>(offsetof(HttpWebResponse_t2667966807, ___statusDescription_7)); }
	inline String_t* get_statusDescription_7() const { return ___statusDescription_7; }
	inline String_t** get_address_of_statusDescription_7() { return &___statusDescription_7; }
	inline void set_statusDescription_7(String_t* value)
	{
		___statusDescription_7 = value;
		Il2CppCodeGenWriteBarrier(&___statusDescription_7, value);
	}

	inline static int32_t get_offset_of_contentLength_8() { return static_cast<int32_t>(offsetof(HttpWebResponse_t2667966807, ___contentLength_8)); }
	inline int64_t get_contentLength_8() const { return ___contentLength_8; }
	inline int64_t* get_address_of_contentLength_8() { return &___contentLength_8; }
	inline void set_contentLength_8(int64_t value)
	{
		___contentLength_8 = value;
	}

	inline static int32_t get_offset_of_contentType_9() { return static_cast<int32_t>(offsetof(HttpWebResponse_t2667966807, ___contentType_9)); }
	inline String_t* get_contentType_9() const { return ___contentType_9; }
	inline String_t** get_address_of_contentType_9() { return &___contentType_9; }
	inline void set_contentType_9(String_t* value)
	{
		___contentType_9 = value;
		Il2CppCodeGenWriteBarrier(&___contentType_9, value);
	}

	inline static int32_t get_offset_of_cookie_container_10() { return static_cast<int32_t>(offsetof(HttpWebResponse_t2667966807, ___cookie_container_10)); }
	inline CookieContainer_t3399784903 * get_cookie_container_10() const { return ___cookie_container_10; }
	inline CookieContainer_t3399784903 ** get_address_of_cookie_container_10() { return &___cookie_container_10; }
	inline void set_cookie_container_10(CookieContainer_t3399784903 * value)
	{
		___cookie_container_10 = value;
		Il2CppCodeGenWriteBarrier(&___cookie_container_10, value);
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(HttpWebResponse_t2667966807, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}

	inline static int32_t get_offset_of_stream_12() { return static_cast<int32_t>(offsetof(HttpWebResponse_t2667966807, ___stream_12)); }
	inline Stream_t219029575 * get_stream_12() const { return ___stream_12; }
	inline Stream_t219029575 ** get_address_of_stream_12() { return &___stream_12; }
	inline void set_stream_12(Stream_t219029575 * value)
	{
		___stream_12 = value;
		Il2CppCodeGenWriteBarrier(&___stream_12, value);
	}

	inline static int32_t get_offset_of_cookieExpiresFormats_13() { return static_cast<int32_t>(offsetof(HttpWebResponse_t2667966807, ___cookieExpiresFormats_13)); }
	inline StringU5BU5D_t2956870243* get_cookieExpiresFormats_13() const { return ___cookieExpiresFormats_13; }
	inline StringU5BU5D_t2956870243** get_address_of_cookieExpiresFormats_13() { return &___cookieExpiresFormats_13; }
	inline void set_cookieExpiresFormats_13(StringU5BU5D_t2956870243* value)
	{
		___cookieExpiresFormats_13 = value;
		Il2CppCodeGenWriteBarrier(&___cookieExpiresFormats_13, value);
	}
};

struct HttpWebResponse_t2667966807_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.HttpWebResponse::<>f__switch$map8
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map8_14;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_14() { return static_cast<int32_t>(offsetof(HttpWebResponse_t2667966807_StaticFields, ___U3CU3Ef__switchU24map8_14)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map8_14() const { return ___U3CU3Ef__switchU24map8_14; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map8_14() { return &___U3CU3Ef__switchU24map8_14; }
	inline void set_U3CU3Ef__switchU24map8_14(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map8_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map8_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
