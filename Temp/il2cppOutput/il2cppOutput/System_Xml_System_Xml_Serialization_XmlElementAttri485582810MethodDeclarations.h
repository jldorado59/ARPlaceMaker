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

// System.Xml.Serialization.XmlElementAttributes
struct XmlElementAttributes_t485582810;
// System.Xml.Serialization.XmlElementAttribute
struct XmlElementAttribute_t27258549;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Serialization_XmlElementAttrib27258549.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void System.Xml.Serialization.XmlElementAttributes::.ctor()
extern "C"  void XmlElementAttributes__ctor_m137185265 (XmlElementAttributes_t485582810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlElementAttribute System.Xml.Serialization.XmlElementAttributes::get_Item(System.Int32)
extern "C"  XmlElementAttribute_t27258549 * XmlElementAttributes_get_Item_m280791570 (XmlElementAttributes_t485582810 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlElementAttributes::Add(System.Xml.Serialization.XmlElementAttribute)
extern "C"  int32_t XmlElementAttributes_Add_m1561453903 (XmlElementAttributes_t485582810 * __this, XmlElementAttribute_t27258549 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttributes::AddKeyHash(System.Text.StringBuilder)
extern "C"  void XmlElementAttributes_AddKeyHash_m2031660523 (XmlElementAttributes_t485582810 * __this, StringBuilder_t3822575854 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
