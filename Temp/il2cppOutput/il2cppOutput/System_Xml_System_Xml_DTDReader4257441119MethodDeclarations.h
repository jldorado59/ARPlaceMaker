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

// System.Xml.DTDReader
struct DTDReader_t4257441119;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// System.String
struct String_t;
// System.Xml.XmlException
struct XmlException_t3490696160;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t95357814;
// Mono.Xml.DTDContentModel
struct DTDContentModel_t1462496200;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t605667718;
// Mono.Xml.DTDEntityBase
struct DTDEntityBase_t1395379180;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t2256150406;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t2806387719;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t1258293171;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t1053410431;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t353707912;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel709926554.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_Mono_Xml_DTDElementDeclaration95357814.h"
#include "System_Xml_Mono_Xml_DTDContentModelCollection605667718.h"
#include "System_Xml_Mono_Xml_DTDContentModel1462496200.h"
#include "System_Xml_Mono_Xml_DTDEntityBase1395379180.h"
#include "System_Xml_Mono_Xml_DTDEntityDeclaration2806387719.h"
#include "System_Xml_System_Xml_XmlException3490696160.h"

// System.Void System.Xml.DTDReader::.ctor(Mono.Xml.DTDObjectModel,System.Int32,System.Int32)
extern "C"  void DTDReader__ctor_m239668310 (DTDReader_t4257441119 * __this, DTDObjectModel_t709926554 * ___dtd, int32_t ___startLineNumber, int32_t ___startLinePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::get_BaseURI()
extern "C"  String_t* DTDReader_get_BaseURI_m1245597521 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::get_Normalization()
extern "C"  bool DTDReader_get_Normalization_m2363640846 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::set_Normalization(System.Boolean)
extern "C"  void DTDReader_set_Normalization_m4032164889 (DTDReader_t4257441119 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::get_LineNumber()
extern "C"  int32_t DTDReader_get_LineNumber_m3092317640 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::get_LinePosition()
extern "C"  int32_t DTDReader_get_LinePosition_m1374475304 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException System.Xml.DTDReader::NotWFError(System.String)
extern "C"  XmlException_t3490696160 * DTDReader_NotWFError_m440433271 (DTDReader_t4257441119 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Init()
extern "C"  void DTDReader_Init_m3143559120 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.DTDReader::GenerateDTDObjectModel()
extern "C"  DTDObjectModel_t709926554 * DTDReader_GenerateDTDObjectModel_m693103910 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::ProcessDTDSubset()
extern "C"  bool DTDReader_ProcessDTDSubset_m2078640111 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::CompileDeclaration()
extern "C"  void DTDReader_CompileDeclaration_m3811200007 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadIgnoreSect()
extern "C"  void DTDReader_ReadIgnoreSect_m3326521003 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration System.Xml.DTDReader::ReadElementDecl()
extern "C"  DTDElementDeclaration_t95357814 * DTDReader_ReadElementDecl_m983303313 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadContentSpec(Mono.Xml.DTDElementDeclaration)
extern "C"  void DTDReader_ReadContentSpec_m704165552 (DTDReader_t4257441119 * __this, DTDElementDeclaration_t95357814 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModel System.Xml.DTDReader::ReadCP(Mono.Xml.DTDElementDeclaration)
extern "C"  DTDContentModel_t1462496200 * DTDReader_ReadCP_m3931839010 (DTDReader_t4257441119 * __this, DTDElementDeclaration_t95357814 * ___elem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AddContentModel(Mono.Xml.DTDContentModelCollection,Mono.Xml.DTDContentModel)
extern "C"  void DTDReader_AddContentModel_m2885863633 (DTDReader_t4257441119 * __this, DTDContentModelCollection_t605667718 * ___cmc, DTDContentModel_t1462496200 * ___cm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadParameterEntityDecl()
extern "C"  void DTDReader_ReadParameterEntityDecl_m2554735394 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ResolveExternalEntityReplacementText(Mono.Xml.DTDEntityBase)
extern "C"  void DTDReader_ResolveExternalEntityReplacementText_m1681961311 (DTDReader_t4257441119 * __this, DTDEntityBase_t1395379180 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ResolveInternalEntityReplacementText(Mono.Xml.DTDEntityBase)
extern "C"  void DTDReader_ResolveInternalEntityReplacementText_m3467997101 (DTDReader_t4257441119 * __this, DTDEntityBase_t1395379180 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::GetCharacterReference(Mono.Xml.DTDEntityBase,System.String,System.Int32&,System.Int32)
extern "C"  int32_t DTDReader_GetCharacterReference_m1265404884 (DTDReader_t4257441119 * __this, DTDEntityBase_t1395379180 * ___li, String_t* ___value, int32_t* ___index, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::GetPEValue(System.String)
extern "C"  String_t* DTDReader_GetPEValue_m985148249 (DTDReader_t4257441119 * __this, String_t* ___peName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration System.Xml.DTDReader::GetPEDecl(System.String)
extern "C"  DTDParameterEntityDeclaration_t2256150406 * DTDReader_GetPEDecl_m1992309660 (DTDReader_t4257441119 * __this, String_t* ___peName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::TryExpandPERef()
extern "C"  bool DTDReader_TryExpandPERef_m232461585 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::TryExpandPERefSpaceKeep()
extern "C"  bool DTDReader_TryExpandPERefSpaceKeep_m419925436 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ExpandPERef()
extern "C"  void DTDReader_ExpandPERef_m4144305510 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration System.Xml.DTDReader::ReadEntityDecl()
extern "C"  DTDEntityDeclaration_t2806387719 * DTDReader_ReadEntityDecl_m131033009 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadEntityValueDecl(Mono.Xml.DTDEntityDeclaration)
extern "C"  void DTDReader_ReadEntityValueDecl_m3766537449 (DTDReader_t4257441119 * __this, DTDEntityDeclaration_t2806387719 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration System.Xml.DTDReader::ReadAttListDecl()
extern "C"  DTDAttListDeclaration_t1258293171 * DTDReader_ReadAttListDecl_m877842801 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition System.Xml.DTDReader::ReadAttributeDefinition()
extern "C"  DTDAttributeDefinition_t1053410431 * DTDReader_ReadAttributeDefinition_m4289497893 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclaration System.Xml.DTDReader::ReadNotationDecl()
extern "C"  DTDNotationDeclaration_t353707912 * DTDReader_ReadNotationDecl_m2258323887 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadExternalID()
extern "C"  void DTDReader_ReadExternalID_m1846433116 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadSystemLiteral(System.Boolean)
extern "C"  String_t* DTDReader_ReadSystemLiteral_m804658464 (DTDReader_t4257441119 * __this, bool ___expectSYSTEM, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadPubidLiteral()
extern "C"  String_t* DTDReader_ReadPubidLiteral_m1782524944 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadName()
extern "C"  String_t* DTDReader_ReadName_m4241357028 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadNameOrNmToken(System.Boolean)
extern "C"  String_t* DTDReader_ReadNameOrNmToken_m632111980 (DTDReader_t4257441119 * __this, bool ___isNameToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Expect(System.Int32)
extern "C"  void DTDReader_Expect_m1917199594 (DTDReader_t4257441119 * __this, int32_t ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Expect(System.String)
extern "C"  void DTDReader_Expect_m4055310985 (DTDReader_t4257441119 * __this, String_t* ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ExpectAfterWhitespace(System.Char)
extern "C"  void DTDReader_ExpectAfterWhitespace_m2772157595 (DTDReader_t4257441119 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::SkipWhitespace()
extern "C"  bool DTDReader_SkipWhitespace_m232203876 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::PeekChar()
extern "C"  int32_t DTDReader_PeekChar_m1731433011 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::ReadChar()
extern "C"  int32_t DTDReader_ReadChar_m1039540782 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadComment()
extern "C"  void DTDReader_ReadComment_m2005393419 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadProcessingInstruction()
extern "C"  void DTDReader_ReadProcessingInstruction_m155897575 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadTextDeclaration()
extern "C"  void DTDReader_ReadTextDeclaration_m1514401081 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AppendNameChar(System.Int32)
extern "C"  void DTDReader_AppendNameChar_m3568759756 (DTDReader_t4257441119 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::CheckNameCapacity()
extern "C"  void DTDReader_CheckNameCapacity_m4288055279 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::CreateNameString()
extern "C"  String_t* DTDReader_CreateNameString_m1252119675 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AppendValueChar(System.Int32)
extern "C"  void DTDReader_AppendValueChar_m1219042272 (DTDReader_t4257441119 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::CreateValueString()
extern "C"  String_t* DTDReader_CreateValueString_m2937195813 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ClearValueBuffer()
extern "C"  void DTDReader_ClearValueBuffer_m4110694340 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::PushParserInput(System.String)
extern "C"  void DTDReader_PushParserInput_m3654728911 (DTDReader_t4257441119 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::PopParserInput()
extern "C"  void DTDReader_PopParserInput_m2654799194 (DTDReader_t4257441119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::HandleError(System.Xml.XmlException)
extern "C"  void DTDReader_HandleError_m2636292706 (DTDReader_t4257441119 * __this, XmlException_t3490696160 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
