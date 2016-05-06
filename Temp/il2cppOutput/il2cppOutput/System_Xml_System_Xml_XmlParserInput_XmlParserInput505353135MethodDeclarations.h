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

// System.Xml.XmlParserInput/XmlParserInputSource
struct XmlParserInputSource_t505353135;
// System.IO.TextReader
struct TextReader_t1534522647;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1534522647.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Xml.XmlParserInput/XmlParserInputSource::.ctor(System.IO.TextReader,System.String,System.Boolean,System.Int32,System.Int32)
extern "C"  void XmlParserInputSource__ctor_m956893193 (XmlParserInputSource_t505353135 * __this, TextReader_t1534522647 * ___reader, String_t* ___baseUri, bool ___pe, int32_t ___line, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LineNumber()
extern "C"  int32_t XmlParserInputSource_get_LineNumber_m2215817051 (XmlParserInputSource_t505353135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LinePosition()
extern "C"  int32_t XmlParserInputSource_get_LinePosition_m870999291 (XmlParserInputSource_t505353135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::Close()
extern "C"  void XmlParserInputSource_Close_m1137723815 (XmlParserInputSource_t505353135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::Read()
extern "C"  int32_t XmlParserInputSource_Read_m3980937483 (XmlParserInputSource_t505353135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
