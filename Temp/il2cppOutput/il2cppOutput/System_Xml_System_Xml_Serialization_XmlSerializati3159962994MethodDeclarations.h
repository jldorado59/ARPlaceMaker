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

// System.Xml.Serialization.XmlSerializationReadCallback
struct XmlSerializationReadCallback_t3159962994;
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

// System.Void System.Xml.Serialization.XmlSerializationReadCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlSerializationReadCallback__ctor_m676352297 (XmlSerializationReadCallback_t3159962994 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReadCallback::Invoke()
extern "C"  Il2CppObject * XmlSerializationReadCallback_Invoke_m1006302446 (XmlSerializationReadCallback_t3159962994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Il2CppObject * pinvoke_delegate_wrapper_XmlSerializationReadCallback_t3159962994(Il2CppObject* delegate);
// System.IAsyncResult System.Xml.Serialization.XmlSerializationReadCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlSerializationReadCallback_BeginInvoke_m2019470952 (XmlSerializationReadCallback_t3159962994 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReadCallback::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * XmlSerializationReadCallback_EndInvoke_m624710564 (XmlSerializationReadCallback_t3159962994 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
