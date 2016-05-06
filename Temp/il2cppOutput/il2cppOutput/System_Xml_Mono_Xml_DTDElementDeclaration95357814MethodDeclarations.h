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

// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t95357814;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// System.String
struct String_t;
// Mono.Xml.DTDContentModel
struct DTDContentModel_t1462496200;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Xml.DTDElementDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDElementDeclaration__ctor_m3951886277 (DTDElementDeclaration_t95357814 * __this, DTDObjectModel_t709926554 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDElementDeclaration::get_Name()
extern "C"  String_t* DTDElementDeclaration_get_Name_m1111866310 (DTDElementDeclaration_t95357814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclaration::set_Name(System.String)
extern "C"  void DTDElementDeclaration_set_Name_m3252098059 (DTDElementDeclaration_t95357814 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclaration::set_IsEmpty(System.Boolean)
extern "C"  void DTDElementDeclaration_set_IsEmpty_m370233552 (DTDElementDeclaration_t95357814 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclaration::set_IsAny(System.Boolean)
extern "C"  void DTDElementDeclaration_set_IsAny_m2296438319 (DTDElementDeclaration_t95357814 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclaration::set_IsMixedContent(System.Boolean)
extern "C"  void DTDElementDeclaration_set_IsMixedContent_m3652418955 (DTDElementDeclaration_t95357814 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModel Mono.Xml.DTDElementDeclaration::get_ContentModel()
extern "C"  DTDContentModel_t1462496200 * DTDElementDeclaration_get_ContentModel_m3021018039 (DTDElementDeclaration_t95357814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
