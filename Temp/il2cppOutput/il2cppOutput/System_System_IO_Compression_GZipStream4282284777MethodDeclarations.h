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

// System.IO.Compression.GZipStream
struct GZipStream_t4282284777;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "System_System_IO_Compression_CompressionMode2472288632.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
extern "C"  void GZipStream__ctor_m2136427100 (GZipStream_t4282284777 * __this, Stream_t219029575 * ___compressedStream, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
extern "C"  void GZipStream__ctor_m1301775777 (GZipStream_t4282284777 * __this, Stream_t219029575 * ___compressedStream, int32_t ___mode, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::Dispose(System.Boolean)
extern "C"  void GZipStream_Dispose_m1233763813 (GZipStream_t4282284777 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t GZipStream_Read_m295052112 (GZipStream_t4282284777 * __this, ByteU5BU5D_t58506160* ___dest, int32_t ___dest_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void GZipStream_Write_m1453962747 (GZipStream_t4282284777 * __this, ByteU5BU5D_t58506160* ___src, int32_t ___src_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::Flush()
extern "C"  void GZipStream_Flush_m1315355667 (GZipStream_t4282284777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t GZipStream_Seek_m2685013297 (GZipStream_t4282284777 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::SetLength(System.Int64)
extern "C"  void GZipStream_SetLength_m1780201801 (GZipStream_t4282284777 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.GZipStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GZipStream_BeginRead_m2476912851 (GZipStream_t4282284777 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1363551830 * ___cback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.GZipStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GZipStream_BeginWrite_m1947383638 (GZipStream_t4282284777 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1363551830 * ___cback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.GZipStream::EndRead(System.IAsyncResult)
extern "C"  int32_t GZipStream_EndRead_m2882247347 (GZipStream_t4282284777 * __this, Il2CppObject * ___async_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::EndWrite(System.IAsyncResult)
extern "C"  void GZipStream_EndWrite_m1193516172 (GZipStream_t4282284777 * __this, Il2CppObject * ___async_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.GZipStream::get_CanRead()
extern "C"  bool GZipStream_get_CanRead_m1595474582 (GZipStream_t4282284777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.GZipStream::get_CanSeek()
extern "C"  bool GZipStream_get_CanSeek_m1624229624 (GZipStream_t4282284777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.GZipStream::get_CanWrite()
extern "C"  bool GZipStream_get_CanWrite_m2737725313 (GZipStream_t4282284777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.GZipStream::get_Length()
extern "C"  int64_t GZipStream_get_Length_m449516243 (GZipStream_t4282284777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.GZipStream::get_Position()
extern "C"  int64_t GZipStream_get_Position_m2709881174 (GZipStream_t4282284777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::set_Position(System.Int64)
extern "C"  void GZipStream_set_Position_m2891315819 (GZipStream_t4282284777 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
