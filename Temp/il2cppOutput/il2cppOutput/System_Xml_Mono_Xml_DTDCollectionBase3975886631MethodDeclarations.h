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

// Mono.Xml.DTDCollectionBase
struct DTDCollectionBase_t3975886631;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// System.String
struct String_t;
// Mono.Xml.DTDNode
struct DTDNode_t1733424026;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_Mono_Xml_DTDNode1733424026.h"

// System.Void Mono.Xml.DTDCollectionBase::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDCollectionBase__ctor_m1839072630 (DTDCollectionBase_t3975886631 * __this, DTDObjectModel_t709926554 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDCollectionBase::get_Root()
extern "C"  DTDObjectModel_t709926554 * DTDCollectionBase_get_Root_m1145982982 (DTDCollectionBase_t3975886631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDCollectionBase::BaseAdd(System.String,Mono.Xml.DTDNode)
extern "C"  void DTDCollectionBase_BaseAdd_m1540252226 (DTDCollectionBase_t3975886631 * __this, String_t* ___name, DTDNode_t1733424026 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDCollectionBase::Contains(System.String)
extern "C"  bool DTDCollectionBase_Contains_m1398227387 (DTDCollectionBase_t3975886631 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.DTDCollectionBase::BaseGet(System.String)
extern "C"  Il2CppObject * DTDCollectionBase_BaseGet_m344774896 (DTDCollectionBase_t3975886631 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
