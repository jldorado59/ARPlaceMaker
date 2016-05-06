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

// System.Xml.Serialization.XmlElementEventHandler
struct XmlElementEventHandler_t2494321811;
// System.Object
struct Il2CppObject;
// System.Xml.Serialization.XmlElementEventArgs
struct XmlElementEventArgs_t45031088;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_Xml_System_Xml_Serialization_XmlElementEventA45031088.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Xml.Serialization.XmlElementEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlElementEventHandler__ctor_m905419850 (XmlElementEventHandler_t2494321811 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlElementEventArgs)
extern "C"  void XmlElementEventHandler_Invoke_m1452419704 (XmlElementEventHandler_t2494321811 * __this, Il2CppObject * ___sender, XmlElementEventArgs_t45031088 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlElementEventHandler_t2494321811(Il2CppObject* delegate, Il2CppObject * ___sender, XmlElementEventArgs_t45031088 * ___e);
// System.IAsyncResult System.Xml.Serialization.XmlElementEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlElementEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlElementEventHandler_BeginInvoke_m4261089987 (XmlElementEventHandler_t2494321811 * __this, Il2CppObject * ___sender, XmlElementEventArgs_t45031088 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void XmlElementEventHandler_EndInvoke_m659080026 (XmlElementEventHandler_t2494321811 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
