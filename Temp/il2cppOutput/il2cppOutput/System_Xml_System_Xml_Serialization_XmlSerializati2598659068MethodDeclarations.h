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

// System.Xml.Serialization.XmlSerializationCollectionFixupCallback
struct XmlSerializationCollectionFixupCallback_t2598659068;
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

// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlSerializationCollectionFixupCallback__ctor_m2039963079 (XmlSerializationCollectionFixupCallback_t2598659068 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::Invoke(System.Object,System.Object)
extern "C"  void XmlSerializationCollectionFixupCallback_Invoke_m506822625 (XmlSerializationCollectionFixupCallback_t2598659068 * __this, Il2CppObject * ___collection, Il2CppObject * ___collectionItems, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlSerializationCollectionFixupCallback_t2598659068(Il2CppObject* delegate, Il2CppObject * ___collection, Il2CppObject * ___collectionItems);
// System.IAsyncResult System.Xml.Serialization.XmlSerializationCollectionFixupCallback::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlSerializationCollectionFixupCallback_BeginInvoke_m3414870118 (XmlSerializationCollectionFixupCallback_t2598659068 * __this, Il2CppObject * ___collection, Il2CppObject * ___collectionItems, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::EndInvoke(System.IAsyncResult)
extern "C"  void XmlSerializationCollectionFixupCallback_EndInvoke_m2975255383 (XmlSerializationCollectionFixupCallback_t2598659068 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
