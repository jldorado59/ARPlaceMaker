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

// System.Xml.XmlNodeChangedEventArgs
struct XmlNodeChangedEventArgs_t3018467524;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNode3592213601.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlNodeChangedAction1314909625.h"

// System.Void System.Xml.XmlNodeChangedEventArgs::.ctor(System.Xml.XmlNode,System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String,System.Xml.XmlNodeChangedAction)
extern "C"  void XmlNodeChangedEventArgs__ctor_m2493678329 (XmlNodeChangedEventArgs_t3018467524 * __this, XmlNode_t3592213601 * ___node, XmlNode_t3592213601 * ___oldParent, XmlNode_t3592213601 * ___newParent, String_t* ___oldValue, String_t* ___newValue, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
