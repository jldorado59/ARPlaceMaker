#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.TrackableData
struct  TrackableData_t3121252023  : public ScriptableObject_t184905905
{
public:
	// System.String Kudan.AR.TrackableData::id
	String_t* ___id_2;
	// UnityEngine.Texture2D Kudan.AR.TrackableData::image
	Texture2D_t2509538522 * ___image_3;
	// System.Byte[] Kudan.AR.TrackableData::data
	ByteU5BU5D_t58506160* ___data_4;

public:
	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(TrackableData_t3121252023, ___id_2)); }
	inline String_t* get_id_2() const { return ___id_2; }
	inline String_t** get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(String_t* value)
	{
		___id_2 = value;
		Il2CppCodeGenWriteBarrier(&___id_2, value);
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(TrackableData_t3121252023, ___image_3)); }
	inline Texture2D_t2509538522 * get_image_3() const { return ___image_3; }
	inline Texture2D_t2509538522 ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(Texture2D_t2509538522 * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier(&___image_3, value);
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(TrackableData_t3121252023, ___data_4)); }
	inline ByteU5BU5D_t58506160* get_data_4() const { return ___data_4; }
	inline ByteU5BU5D_t58506160** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(ByteU5BU5D_t58506160* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier(&___data_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
