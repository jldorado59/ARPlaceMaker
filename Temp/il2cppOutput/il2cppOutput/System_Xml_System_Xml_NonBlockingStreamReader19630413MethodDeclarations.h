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

// System.Xml.NonBlockingStreamReader
struct NonBlockingStreamReader_t19630413;
// System.IO.Stream
struct Stream_t219029575;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_Text_Encoding180559927.h"

// System.Void System.Xml.NonBlockingStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void NonBlockingStreamReader__ctor_m3204017860 (NonBlockingStreamReader_t19630413 * __this, Stream_t219029575 * ___stream, Encoding_t180559927 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Xml.NonBlockingStreamReader::get_Encoding()
extern "C"  Encoding_t180559927 * NonBlockingStreamReader_get_Encoding_m3739939814 (NonBlockingStreamReader_t19630413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.NonBlockingStreamReader::Close()
extern "C"  void NonBlockingStreamReader_Close_m37904620 (NonBlockingStreamReader_t19630413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.NonBlockingStreamReader::Dispose(System.Boolean)
extern "C"  void NonBlockingStreamReader_Dispose_m2898543306 (NonBlockingStreamReader_t19630413 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::ReadBuffer()
extern "C"  int32_t NonBlockingStreamReader_ReadBuffer_m3279745222 (NonBlockingStreamReader_t19630413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::Peek()
extern "C"  int32_t NonBlockingStreamReader_Peek_m717157035 (NonBlockingStreamReader_t19630413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::Read()
extern "C"  int32_t NonBlockingStreamReader_Read_m774289446 (NonBlockingStreamReader_t19630413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t NonBlockingStreamReader_Read_m2412682613 (NonBlockingStreamReader_t19630413 * __this, CharU5BU5D_t3416858730* ___dest_buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::FindNextEOL()
extern "C"  int32_t NonBlockingStreamReader_FindNextEOL_m1875155624 (NonBlockingStreamReader_t19630413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NonBlockingStreamReader::ReadLine()
extern "C"  String_t* NonBlockingStreamReader_ReadLine_m1680805819 (NonBlockingStreamReader_t19630413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NonBlockingStreamReader::ReadToEnd()
extern "C"  String_t* NonBlockingStreamReader_ReadToEnd_m3504671323 (NonBlockingStreamReader_t19630413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
