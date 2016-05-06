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

// System.Net.ChunkStream/Chunk
struct Chunk_t65090125;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.ChunkStream/Chunk::.ctor(System.Byte[])
extern "C"  void Chunk__ctor_m1565485384 (Chunk_t65090125 * __this, ByteU5BU5D_t58506160* ___chunk, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream/Chunk::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t Chunk_Read_m87879296 (Chunk_t65090125 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
