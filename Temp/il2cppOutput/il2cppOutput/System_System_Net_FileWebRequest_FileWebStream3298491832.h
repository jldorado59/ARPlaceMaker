#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.FileWebRequest
struct FileWebRequest_t1669470913;

#include "mscorlib_System_IO_FileStream1527309539.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FileWebRequest/FileWebStream
struct  FileWebStream_t3298491832  : public FileStream_t1527309539
{
public:
	// System.Net.FileWebRequest System.Net.FileWebRequest/FileWebStream::webRequest
	FileWebRequest_t1669470913 * ___webRequest_15;

public:
	inline static int32_t get_offset_of_webRequest_15() { return static_cast<int32_t>(offsetof(FileWebStream_t3298491832, ___webRequest_15)); }
	inline FileWebRequest_t1669470913 * get_webRequest_15() const { return ___webRequest_15; }
	inline FileWebRequest_t1669470913 ** get_address_of_webRequest_15() { return &___webRequest_15; }
	inline void set_webRequest_15(FileWebRequest_t1669470913 * value)
	{
		___webRequest_15 = value;
		Il2CppCodeGenWriteBarrier(&___webRequest_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
