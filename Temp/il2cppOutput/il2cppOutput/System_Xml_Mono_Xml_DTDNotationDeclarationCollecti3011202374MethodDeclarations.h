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

// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t3011202374;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// System.String
struct String_t;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t353707912;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_Mono_Xml_DTDNotationDeclaration353707912.h"

// System.Void Mono.Xml.DTDNotationDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDNotationDeclarationCollection__ctor_m2712775197 (DTDNotationDeclarationCollection_t3011202374 * __this, DTDObjectModel_t709926554 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNotationDeclarationCollection::Add(System.String,Mono.Xml.DTDNotationDeclaration)
extern "C"  void DTDNotationDeclarationCollection_Add_m754289612 (DTDNotationDeclarationCollection_t3011202374 * __this, String_t* ___name, DTDNotationDeclaration_t353707912 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
