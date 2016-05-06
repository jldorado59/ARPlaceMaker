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

// System.Xml.XmlDocument
struct XmlDocument_t3705263098;
// System.Xml.XmlImplementation
struct XmlImplementation_t3180216657;
// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3253021914;
// System.String
struct String_t;
// System.Xml.XmlElement
struct XmlElement_t3562928333;
// System.Xml.XmlDocumentType
struct XmlDocumentType_t1191145044;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t3408046266;
// System.Xml.XmlResolver
struct XmlResolver_t2502213349;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t886430410;
// System.Xml.XmlAttribute
struct XmlAttribute_t2022155821;
// System.Xml.XmlCDataSection
struct XmlCDataSection_t420564695;
// System.Xml.XmlComment
struct XmlComment_t1881196592;
// System.Xml.XmlDocumentFragment
struct XmlDocumentFragment_t1538181226;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// System.Xml.XmlEntityReference
struct XmlEntityReference_t2855594873;
// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t1498997132;
// System.Xml.XmlSignificantWhitespace
struct XmlSignificantWhitespace_t44368929;
// System.Xml.XmlText
struct XmlText_t3592383372;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t2187161500;
// System.Xml.XmlDeclaration
struct XmlDeclaration_t1113268939;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Xml.XmlWriter
struct XmlWriter_t89522450;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlImplementation3180216657.h"
#include "System_Xml_System_Xml_XmlNameTable3232213908.h"
#include "System_Xml_System_Xml_XmlLinkedNode3253021914.h"
#include "System_Xml_System_Xml_XmlNodeType3966624571.h"
#include "System_Xml_System_Xml_XmlSpace3747690775.h"
#include "System_Xml_System_Xml_XmlAttribute2022155821.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "System_Xml_System_Xml_XmlNode3592213601.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"

// System.Void System.Xml.XmlDocument::.ctor()
extern "C"  void XmlDocument__ctor_m467220425 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation)
extern "C"  void XmlDocument__ctor_m629872438 (XmlDocument_t3705263098 * __this, XmlImplementation_t3180216657 * ___imp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlDocument__ctor_m1234628775 (XmlDocument_t3705263098 * __this, XmlNameTable_t3232213908 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation,System.Xml.XmlNameTable)
extern "C"  void XmlDocument__ctor_m2367420544 (XmlDocument_t3705263098 * __this, XmlImplementation_t3180216657 * ___impl, XmlNameTable_t3232213908 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.cctor()
extern "C"  void XmlDocument__cctor_m1116835076 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t3253021914 * XmlDocument_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m2484323862 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlDocument_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m1766041627 (XmlDocument_t3705263098 * __this, XmlLinkedNode_t3253021914 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_BaseURI()
extern "C"  String_t* XmlDocument_get_BaseURI_m2484198934 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::get_DocumentElement()
extern "C"  XmlElement_t3562928333 * XmlDocument_get_DocumentElement_m2125605639 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::get_DocumentType()
extern "C"  XmlDocumentType_t1191145044 * XmlDocument_get_DocumentType_m3053838196 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_IsReadOnly()
extern "C"  bool XmlDocument_get_IsReadOnly_m1661998808 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_LocalName()
extern "C"  String_t* XmlDocument_get_LocalName_m3683164305 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_Name()
extern "C"  String_t* XmlDocument_get_Name_m4042710034 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::get_NameCache()
extern "C"  XmlNameEntryCache_t3408046266 * XmlDocument_get_NameCache_m803787936 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlDocument::get_NameTable()
extern "C"  XmlNameTable_t3232213908 * XmlDocument_get_NameTable_m4115788656 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocument::get_NodeType()
extern "C"  int32_t XmlDocument_get_NodeType_m2013184468 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocument::get_OwnerDocument()
extern "C"  XmlDocument_t3705263098 * XmlDocument_get_OwnerDocument_m2156946327 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_PreserveWhitespace()
extern "C"  bool XmlDocument_get_PreserveWhitespace_m3263510741 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlDocument::get_Resolver()
extern "C"  XmlResolver_t2502213349 * XmlDocument_get_Resolver_m3689419796 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_XmlLang()
extern "C"  String_t* XmlDocument_get_XmlLang_m2487419232 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlDocument::get_XmlSpace()
extern "C"  int32_t XmlDocument_get_XmlSpace_m2822725217 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::get_ParentNode()
extern "C"  XmlNode_t3592213601 * XmlDocument_get_ParentNode_m2530596254 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C"  void XmlDocument_set_SchemaInfo_m1833755507 (XmlDocument_t3705263098 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddIdenticalAttribute(System.Xml.XmlAttribute)
extern "C"  void XmlDocument_AddIdenticalAttribute_m1995420520 (XmlDocument_t3705263098 * __this, XmlAttribute_t2022155821 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::CloneNode(System.Boolean)
extern "C"  XmlNode_t3592213601 * XmlDocument_CloneNode_m1087324463 (XmlDocument_t3705263098 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String)
extern "C"  XmlAttribute_t2022155821 * XmlDocument_CreateAttribute_m4110510259 (XmlDocument_t3705263098 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String)
extern "C"  XmlAttribute_t2022155821 * XmlDocument_CreateAttribute_m1651205547 (XmlDocument_t3705263098 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  XmlAttribute_t2022155821 * XmlDocument_CreateAttribute_m3939720907 (XmlDocument_t3705263098 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, bool ___atomizedNames, bool ___checkNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlCDataSection System.Xml.XmlDocument::CreateCDataSection(System.String)
extern "C"  XmlCDataSection_t420564695 * XmlDocument_CreateCDataSection_m1753360379 (XmlDocument_t3705263098 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlComment System.Xml.XmlDocument::CreateComment(System.String)
extern "C"  XmlComment_t1881196592 * XmlDocument_CreateComment_m1687987885 (XmlDocument_t3705263098 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentFragment System.Xml.XmlDocument::CreateDocumentFragment()
extern "C"  XmlDocumentFragment_t1538181226 * XmlDocument_CreateDocumentFragment_m1451172871 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(System.String,System.String,System.String,System.String)
extern "C"  XmlDocumentType_t1191145044 * XmlDocument_CreateDocumentType_m2158130191 (XmlDocument_t3705263098 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(Mono.Xml.DTDObjectModel)
extern "C"  XmlDocumentType_t1191145044 * XmlDocument_CreateDocumentType_m4119480019 (XmlDocument_t3705263098 * __this, DTDObjectModel_t709926554 * ___dtd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String)
extern "C"  XmlElement_t3562928333 * XmlDocument_CreateElement_m1870044395 (XmlDocument_t3705263098 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String,System.Boolean)
extern "C"  XmlElement_t3562928333 * XmlDocument_CreateElement_m4112835378 (XmlDocument_t3705263098 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, bool ___nameAtomized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntityReference System.Xml.XmlDocument::CreateEntityReference(System.String)
extern "C"  XmlEntityReference_t2855594873 * XmlDocument_CreateEntityReference_m4085193371 (XmlDocument_t3705263098 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlProcessingInstruction System.Xml.XmlDocument::CreateProcessingInstruction(System.String,System.String)
extern "C"  XmlProcessingInstruction_t1498997132 * XmlDocument_CreateProcessingInstruction_m1557261361 (XmlDocument_t3705263098 * __this, String_t* ___target, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSignificantWhitespace System.Xml.XmlDocument::CreateSignificantWhitespace(System.String)
extern "C"  XmlSignificantWhitespace_t44368929 * XmlDocument_CreateSignificantWhitespace_m842262219 (XmlDocument_t3705263098 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlText System.Xml.XmlDocument::CreateTextNode(System.String)
extern "C"  XmlText_t3592383372 * XmlDocument_CreateTextNode_m1905564857 (XmlDocument_t3705263098 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWhitespace System.Xml.XmlDocument::CreateWhitespace(System.String)
extern "C"  XmlWhitespace_t2187161500 * XmlDocument_CreateWhitespace_m3724727131 (XmlDocument_t3705263098 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDeclaration System.Xml.XmlDocument::CreateXmlDeclaration(System.String,System.String,System.String)
extern "C"  XmlDeclaration_t1113268939 * XmlDocument_CreateXmlDeclaration_m1494345414 (XmlDocument_t3705263098 * __this, String_t* ___version, String_t* ___encoding, String_t* ___standalone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::GetIdenticalAttribute(System.String)
extern "C"  XmlAttribute_t2022155821 * XmlDocument_GetIdenticalAttribute_m2385588022 (XmlDocument_t3705263098 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean)
extern "C"  XmlNode_t3592213601 * XmlDocument_ImportNode_m873297840 (XmlDocument_t3705263098 * __this, XmlNode_t3592213601 * ___node, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanged(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C"  void XmlDocument_onNodeChanged_m3336474724 (XmlDocument_t3705263098 * __this, XmlNode_t3592213601 * ___node, XmlNode_t3592213601 * ___parent, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanging(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C"  void XmlDocument_onNodeChanging_m1929815861 (XmlDocument_t3705263098 * __this, XmlNode_t3592213601 * ___node, XmlNode_t3592213601 * ___parent, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserted(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlDocument_onNodeInserted_m1032282674 (XmlDocument_t3705263098 * __this, XmlNode_t3592213601 * ___node, XmlNode_t3592213601 * ___newParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserting(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlDocument_onNodeInserting_m2600318647 (XmlDocument_t3705263098 * __this, XmlNode_t3592213601 * ___node, XmlNode_t3592213601 * ___newParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoved(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlDocument_onNodeRemoved_m3590403008 (XmlDocument_t3705263098 * __this, XmlNode_t3592213601 * ___node, XmlNode_t3592213601 * ___oldParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoving(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlDocument_onNodeRemoving_m297670377 (XmlDocument_t3705263098 * __this, XmlNode_t3592213601 * ___node, XmlNode_t3592213601 * ___oldParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ParseName(System.String,System.String&,System.String&)
extern "C"  void XmlDocument_ParseName_m632676893 (XmlDocument_t3705263098 * __this, String_t* ___name, String_t** ___prefix, String_t** ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::ReadAttributeNode(System.Xml.XmlReader)
extern "C"  XmlAttribute_t2022155821 * XmlDocument_ReadAttributeNode_m4102855027 (XmlDocument_t3705263098 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ReadAttributeNodeValue(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C"  void XmlDocument_ReadAttributeNodeValue_m2731376881 (XmlDocument_t3705263098 * __this, XmlReader_t4229084514 * ___reader, XmlAttribute_t2022155821 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNode(System.Xml.XmlReader)
extern "C"  XmlNode_t3592213601 * XmlDocument_ReadNode_m1929665725 (XmlDocument_t3705263098 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNodeCore(System.Xml.XmlReader)
extern "C"  XmlNode_t3592213601 * XmlDocument_ReadNodeCore_m1324316476 (XmlDocument_t3705263098 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::MakeReaderErrorMessage(System.String,System.Xml.XmlReader)
extern "C"  String_t* XmlDocument_MakeReaderErrorMessage_m666557070 (XmlDocument_t3705263098 * __this, String_t* ___message, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::RemoveIdenticalAttribute(System.String)
extern "C"  void XmlDocument_RemoveIdenticalAttribute_m942731036 (XmlDocument_t3705263098 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlDocument_WriteContentTo_m3437851292 (XmlDocument_t3705263098 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlDocument_WriteTo_m3448302957 (XmlDocument_t3705263098 * __this, XmlWriter_t89522450 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddDefaultNameTableKeys()
extern "C"  void XmlDocument_AddDefaultNameTableKeys_m1442151358 (XmlDocument_t3705263098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::CheckIdTableUpdate(System.Xml.XmlAttribute,System.String,System.String)
extern "C"  void XmlDocument_CheckIdTableUpdate_m827207136 (XmlDocument_t3705263098 * __this, XmlAttribute_t2022155821 * ___attr, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
