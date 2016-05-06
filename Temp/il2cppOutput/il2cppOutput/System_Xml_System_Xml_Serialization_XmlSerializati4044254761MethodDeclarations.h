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

// System.Xml.Serialization.XmlSerializationWriteCallback
struct XmlSerializationWriteCallback_t4044254761;
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

// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlSerializationWriteCallback__ctor_m2179432948 (XmlSerializationWriteCallback_t4044254761 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::Invoke(System.Object)
extern "C"  void XmlSerializationWriteCallback_Invoke_m511629574 (XmlSerializationWriteCallback_t4044254761 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlSerializationWriteCallback_t4044254761(Il2CppObject* delegate, Il2CppObject * ___o);
// System.IAsyncResult System.Xml.Serialization.XmlSerializationWriteCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlSerializationWriteCallback_BeginInvoke_m4194149415 (XmlSerializationWriteCallback_t4044254761 * __this, Il2CppObject * ___o, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::EndInvoke(System.IAsyncResult)
extern "C"  void XmlSerializationWriteCallback_EndInvoke_m2744258052 (XmlSerializationWriteCallback_t4044254761 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
