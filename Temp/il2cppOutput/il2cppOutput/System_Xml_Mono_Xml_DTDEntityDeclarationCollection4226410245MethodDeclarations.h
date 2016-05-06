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

// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t4226410245;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t2806387719;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_Mono_Xml_DTDEntityDeclaration2806387719.h"

// System.Void Mono.Xml.DTDEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDEntityDeclarationCollection__ctor_m460986588 (DTDEntityDeclarationCollection_t4226410245 * __this, DTDObjectModel_t709926554 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration Mono.Xml.DTDEntityDeclarationCollection::get_Item(System.String)
extern "C"  DTDEntityDeclaration_t2806387719 * DTDEntityDeclarationCollection_get_Item_m2370831310 (DTDEntityDeclarationCollection_t4226410245 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDEntityDeclaration)
extern "C"  void DTDEntityDeclarationCollection_Add_m889264620 (DTDEntityDeclarationCollection_t4226410245 * __this, String_t* ___name, DTDEntityDeclaration_t2806387719 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
