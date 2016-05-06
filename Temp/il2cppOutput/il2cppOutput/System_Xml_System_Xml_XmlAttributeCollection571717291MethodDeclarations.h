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

// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t571717291;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Xml.XmlAttribute
struct XmlAttribute_t2022155821;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNode3592213601.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlAttribute2022155821.h"

// System.Void System.Xml.XmlAttributeCollection::.ctor(System.Xml.XmlNode)
extern "C"  void XmlAttributeCollection__ctor_m1342482149 (XmlAttributeCollection_t571717291 * __this, XmlNode_t3592213601 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttributeCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool XmlAttributeCollection_System_Collections_ICollection_get_IsSynchronized_m2929493172 (XmlAttributeCollection_t571717291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlAttributeCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * XmlAttributeCollection_System_Collections_ICollection_get_SyncRoot_m704344736 (XmlAttributeCollection_t571717291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void XmlAttributeCollection_System_Collections_ICollection_CopyTo_m3260878716 (XmlAttributeCollection_t571717291 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttributeCollection::get_IsReadOnly()
extern "C"  bool XmlAttributeCollection_get_IsReadOnly_m898352553 (XmlAttributeCollection_t571717291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.String)
extern "C"  XmlAttribute_t2022155821 * XmlAttributeCollection_get_ItemOf_m2183331915 (XmlAttributeCollection_t571717291 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.Int32)
extern "C"  XmlAttribute_t2022155821 * XmlAttributeCollection_get_ItemOf_m1441171176 (XmlAttributeCollection_t571717291 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::Remove(System.Xml.XmlAttribute)
extern "C"  XmlAttribute_t2022155821 * XmlAttributeCollection_Remove_m1356329359 (XmlAttributeCollection_t571717291 * __this, XmlAttribute_t2022155821 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::RemoveAll()
extern "C"  void XmlAttributeCollection_RemoveAll_m940419235 (XmlAttributeCollection_t571717291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttributeCollection::SetNamedItem(System.Xml.XmlNode)
extern "C"  XmlNode_t3592213601 * XmlAttributeCollection_SetNamedItem_m318328533 (XmlAttributeCollection_t571717291 * __this, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::AdjustIdenticalAttributes(System.Xml.XmlAttribute,System.Xml.XmlNode)
extern "C"  void XmlAttributeCollection_AdjustIdenticalAttributes_m4283115759 (XmlAttributeCollection_t571717291 * __this, XmlAttribute_t2022155821 * ___node, XmlNode_t3592213601 * ___existing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttributeCollection::RemoveIdenticalAttribute(System.Xml.XmlNode)
extern "C"  XmlNode_t3592213601 * XmlAttributeCollection_RemoveIdenticalAttribute_m4024013366 (XmlAttributeCollection_t571717291 * __this, XmlNode_t3592213601 * ___existing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
