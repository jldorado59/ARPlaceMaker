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

// System.Xml.XmlResolver
struct XmlResolver_t2502213349;
// System.Uri
struct Uri_t2776692961;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Xml.XmlResolver::.ctor()
extern "C"  void XmlResolver__ctor_m2007000382 (XmlResolver_t2502213349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern "C"  Uri_t2776692961 * XmlResolver_ResolveUri_m1762389849 (XmlResolver_t2502213349 * __this, Uri_t2776692961 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlResolver::EscapeRelativeUriBody(System.String)
extern "C"  String_t* XmlResolver_EscapeRelativeUriBody_m2055152168 (XmlResolver_t2502213349 * __this, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
