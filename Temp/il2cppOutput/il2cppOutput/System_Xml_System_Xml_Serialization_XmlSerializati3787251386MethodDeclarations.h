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

// System.Xml.Serialization.XmlSerializationFixupCallback
struct XmlSerializationFixupCallback_t3787251386;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlSerializationFixupCallback__ctor_m3257712133 (XmlSerializationFixupCallback_t3787251386 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::Invoke(System.Object)
extern "C"  void XmlSerializationFixupCallback_Invoke_m3044300117 (XmlSerializationFixupCallback_t3787251386 * __this, Il2CppObject * ___fixup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlSerializationFixupCallback_t3787251386(Il2CppObject* delegate, Il2CppObject * ___fixup);
// System.IAsyncResult System.Xml.Serialization.XmlSerializationFixupCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlSerializationFixupCallback_BeginInvoke_m2989778294 (XmlSerializationFixupCallback_t3787251386 * __this, Il2CppObject * ___fixup, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::EndInvoke(System.IAsyncResult)
extern "C"  void XmlSerializationFixupCallback_EndInvoke_m95550101 (XmlSerializationFixupCallback_t3787251386 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
