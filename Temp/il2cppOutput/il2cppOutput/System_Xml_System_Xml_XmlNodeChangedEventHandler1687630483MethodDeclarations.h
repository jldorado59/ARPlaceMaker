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

// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t1687630483;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNodeChangedEventArgs
struct XmlNodeChangedEventArgs_t3018467524;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_Xml_System_Xml_XmlNodeChangedEventArgs3018467524.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Xml.XmlNodeChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlNodeChangedEventHandler__ctor_m3922299970 (XmlNodeChangedEventHandler_t1687630483 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeChangedEventHandler::Invoke(System.Object,System.Xml.XmlNodeChangedEventArgs)
extern "C"  void XmlNodeChangedEventHandler_Invoke_m2262309928 (XmlNodeChangedEventHandler_t1687630483 * __this, Il2CppObject * ___sender, XmlNodeChangedEventArgs_t3018467524 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlNodeChangedEventHandler_t1687630483(Il2CppObject* delegate, Il2CppObject * ___sender, XmlNodeChangedEventArgs_t3018467524 * ___e);
// System.IAsyncResult System.Xml.XmlNodeChangedEventHandler::BeginInvoke(System.Object,System.Xml.XmlNodeChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlNodeChangedEventHandler_BeginInvoke_m411216963 (XmlNodeChangedEventHandler_t1687630483 * __this, Il2CppObject * ___sender, XmlNodeChangedEventArgs_t3018467524 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void XmlNodeChangedEventHandler_EndInvoke_m1606512466 (XmlNodeChangedEventHandler_t1687630483 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
