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

// System.Xml.XmlReaderBinarySupport/CharGetter
struct CharGetter_t2496392225;
// System.Object
struct Il2CppObject;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Char2778706699.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Xml.XmlReaderBinarySupport/CharGetter::.ctor(System.Object,System.IntPtr)
extern "C"  void CharGetter__ctor_m3751756675 (CharGetter_t2496392225 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::Invoke(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t CharGetter_Invoke_m2208992124 (CharGetter_t2496392225 * __this, CharU5BU5D_t3416858730* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_CharGetter_t2496392225(Il2CppObject* delegate, CharU5BU5D_t3416858730* ___buffer, int32_t ___offset, int32_t ___length);
// System.IAsyncResult System.Xml.XmlReaderBinarySupport/CharGetter::BeginInvoke(System.Char[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CharGetter_BeginInvoke_m657080209 (CharGetter_t2496392225 * __this, CharU5BU5D_t3416858730* ___buffer, int32_t ___offset, int32_t ___length, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CharGetter_EndInvoke_m831480821 (CharGetter_t2496392225 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
