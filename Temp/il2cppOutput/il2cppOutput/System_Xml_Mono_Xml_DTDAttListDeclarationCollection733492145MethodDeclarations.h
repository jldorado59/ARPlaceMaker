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

// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t733492145;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t1258293171;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_Mono_Xml_DTDAttListDeclaration1258293171.h"

// System.Void Mono.Xml.DTDAttListDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAttListDeclarationCollection__ctor_m3747246336 (DTDAttListDeclarationCollection_t733492145 * __this, DTDObjectModel_t709926554 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration Mono.Xml.DTDAttListDeclarationCollection::get_Item(System.String)
extern "C"  DTDAttListDeclaration_t1258293171 * DTDAttListDeclarationCollection_get_Item_m920644408 (DTDAttListDeclarationCollection_t733492145 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclarationCollection::Add(System.String,Mono.Xml.DTDAttListDeclaration)
extern "C"  void DTDAttListDeclarationCollection_Add_m1772263056 (DTDAttListDeclarationCollection_t733492145 * __this, String_t* ___name, DTDAttListDeclaration_t1258293171 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
