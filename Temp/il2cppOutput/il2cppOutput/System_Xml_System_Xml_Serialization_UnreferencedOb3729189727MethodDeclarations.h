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

// System.Xml.Serialization.UnreferencedObjectEventHandler
struct UnreferencedObjectEventHandler_t3729189727;
// System.Object
struct Il2CppObject;
// System.Xml.Serialization.UnreferencedObjectEventArgs
struct UnreferencedObjectEventArgs_t3619478372;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_Xml_System_Xml_Serialization_UnreferencedOb3619478372.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void UnreferencedObjectEventHandler__ctor_m2002732822 (UnreferencedObjectEventHandler_t3729189727 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::Invoke(System.Object,System.Xml.Serialization.UnreferencedObjectEventArgs)
extern "C"  void UnreferencedObjectEventHandler_Invoke_m3070837264 (UnreferencedObjectEventHandler_t3729189727 * __this, Il2CppObject * ___sender, UnreferencedObjectEventArgs_t3619478372 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UnreferencedObjectEventHandler_t3729189727(Il2CppObject* delegate, Il2CppObject * ___sender, UnreferencedObjectEventArgs_t3619478372 * ___e);
// System.IAsyncResult System.Xml.Serialization.UnreferencedObjectEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.UnreferencedObjectEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnreferencedObjectEventHandler_BeginInvoke_m1015067715 (UnreferencedObjectEventHandler_t3729189727 * __this, Il2CppObject * ___sender, UnreferencedObjectEventArgs_t3619478372 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void UnreferencedObjectEventHandler_EndInvoke_m3647845414 (UnreferencedObjectEventHandler_t3729189727 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
