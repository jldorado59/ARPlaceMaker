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

// System.Xml.Serialization.XmlAttributeEventHandler
struct XmlAttributeEventHandler_t1071444467;
// System.Object
struct Il2CppObject;
// System.Xml.Serialization.XmlAttributeEventArgs
struct XmlAttributeEventArgs_t966950224;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributeEve966950224.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Xml.Serialization.XmlAttributeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlAttributeEventHandler__ctor_m3385711658 (XmlAttributeEventHandler_t1071444467 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlAttributeEventArgs)
extern "C"  void XmlAttributeEventHandler_Invoke_m337257336 (XmlAttributeEventHandler_t1071444467 * __this, Il2CppObject * ___sender, XmlAttributeEventArgs_t966950224 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlAttributeEventHandler_t1071444467(Il2CppObject* delegate, Il2CppObject * ___sender, XmlAttributeEventArgs_t966950224 * ___e);
// System.IAsyncResult System.Xml.Serialization.XmlAttributeEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlAttributeEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlAttributeEventHandler_BeginInvoke_m1319839811 (XmlAttributeEventHandler_t1071444467 * __this, Il2CppObject * ___sender, XmlAttributeEventArgs_t966950224 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void XmlAttributeEventHandler_EndInvoke_m1492775738 (XmlAttributeEventHandler_t1071444467 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
