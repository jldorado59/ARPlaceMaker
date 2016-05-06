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

// System.Xml.XmlInputStream
struct XmlInputStream_t2835792187;
// System.IO.Stream
struct Stream_t219029575;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Text.Encoding
struct Encoding_t180559927;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void System.Xml.XmlInputStream::.ctor(System.IO.Stream)
extern "C"  void XmlInputStream__ctor_m4108113103 (XmlInputStream_t2835792187 * __this, Stream_t219029575 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::.cctor()
extern "C"  void XmlInputStream__cctor_m716412021 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlInputStream::GetStringFromBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* XmlInputStream_GetStringFromBytes_m1698567078 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Initialize(System.IO.Stream)
extern "C"  void XmlInputStream_Initialize_m3645934067 (XmlInputStream_t2835792187 * __this, Stream_t219029575 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::ReadByteSpecial()
extern "C"  int32_t XmlInputStream_ReadByteSpecial_m3518018131 (XmlInputStream_t2835792187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::SkipWhitespace()
extern "C"  int32_t XmlInputStream_SkipWhitespace_m233829254 (XmlInputStream_t2835792187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Xml.XmlInputStream::get_ActualEncoding()
extern "C"  Encoding_t180559927 * XmlInputStream_get_ActualEncoding_m3493064634 (XmlInputStream_t2835792187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanRead()
extern "C"  bool XmlInputStream_get_CanRead_m1374286843 (XmlInputStream_t2835792187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanSeek()
extern "C"  bool XmlInputStream_get_CanSeek_m1403041885 (XmlInputStream_t2835792187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanWrite()
extern "C"  bool XmlInputStream_get_CanWrite_m175872700 (XmlInputStream_t2835792187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::get_Length()
extern "C"  int64_t XmlInputStream_get_Length_m2623238968 (XmlInputStream_t2835792187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::get_Position()
extern "C"  int64_t XmlInputStream_get_Position_m8346747 (XmlInputStream_t2835792187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::set_Position(System.Int64)
extern "C"  void XmlInputStream_set_Position_m2933300676 (XmlInputStream_t2835792187 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Close()
extern "C"  void XmlInputStream_Close_m1888068430 (XmlInputStream_t2835792187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Flush()
extern "C"  void XmlInputStream_Flush_m261156186 (XmlInputStream_t2835792187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t XmlInputStream_Read_m2251594601 (XmlInputStream_t2835792187 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::ReadByte()
extern "C"  int32_t XmlInputStream_ReadByte_m3211945000 (XmlInputStream_t2835792187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t XmlInputStream_Seek_m162895276 (XmlInputStream_t2835792187 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::SetLength(System.Int64)
extern "C"  void XmlInputStream_SetLength_m2044755088 (XmlInputStream_t2835792187 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void XmlInputStream_Write_m3735565012 (XmlInputStream_t2835792187 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
