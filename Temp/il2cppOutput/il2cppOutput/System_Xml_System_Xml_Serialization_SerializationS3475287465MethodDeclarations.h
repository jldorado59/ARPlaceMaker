﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Xml.Serialization.SerializationSource
struct SerializationSource_t3475287465;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Serialization_SerializationS3475287465.h"

// System.Void System.Xml.Serialization.SerializationSource::.ctor(System.String,System.Type[])
extern "C"  void SerializationSource__ctor_m3069901541 (SerializationSource_t3475287465 * __this, String_t* ___namspace, TypeU5BU5D_t3431720054* ___includedTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.SerializationSource::BaseEquals(System.Xml.Serialization.SerializationSource)
extern "C"  bool SerializationSource_BaseEquals_m2493678423 (SerializationSource_t3475287465 * __this, SerializationSource_t3475287465 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.SerializationSource::get_CanBeGenerated()
extern "C"  bool SerializationSource_get_CanBeGenerated_m3613728451 (SerializationSource_t3475287465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.SerializationSource::set_CanBeGenerated(System.Boolean)
extern "C"  void SerializationSource_set_CanBeGenerated_m3398900326 (SerializationSource_t3475287465 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;