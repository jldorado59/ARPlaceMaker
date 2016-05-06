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

// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t457236420;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t2256150406;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_Mono_Xml_DTDParameterEntityDeclaration2256150406.h"

// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDParameterEntityDeclarationCollection__ctor_m1161712915 (DTDParameterEntityDeclarationCollection_t457236420 * __this, DTDObjectModel_t709926554 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration Mono.Xml.DTDParameterEntityDeclarationCollection::get_Item(System.String)
extern "C"  DTDParameterEntityDeclaration_t2256150406 * DTDParameterEntityDeclarationCollection_get_Item_m4053598104 (DTDParameterEntityDeclarationCollection_t457236420 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDParameterEntityDeclaration)
extern "C"  void DTDParameterEntityDeclarationCollection_Add_m3192507178 (DTDParameterEntityDeclarationCollection_t457236420 * __this, String_t* ___name, DTDParameterEntityDeclaration_t2256150406 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
